# Author: Addison Sears-Collins
# Date: August 27, 2021
# Description: Launch a basic mobile robot URDF file using Rviz.
# https://automaticaddison.com

import os
import launch_ros.descriptions
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, ExecuteProcess
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution, PythonExpression
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.parameter_descriptions import ParameterValue
from launch.actions import SetEnvironmentVariable

def generate_launch_description():
  ld = LaunchDescription()

  # Constants for paths to different files and folders

  base_gazebo_model_path = '/usr/share/gazebo-11/urdf'
  base_gazebo_resource_path = '/usr/share/gazebo-11'
  beluga_sim_package_name = 'beluga_simulator'
  robot_name_in_model = 'beluga'
  urdf_file_path = 'urdf/beluga_default.urdf'
  urdf_model_file_path = 'robots'
  rviz_config_file_path = 'rviz/urdf.rviz'
  gazebo_models_file_path = 'world_models'
  world_file_path = 'worlds/sauvc_2020.world'
  world_resource_file_path = 'media'
  worlds_file_path = 'worlds'

  # Pose where we want to spawn the robot
  spawn_x_val = '12.0'
  spawn_y_val = '-9.0'
  spawn_z_val = '2.0'
  spawn_yaw_val = '1.57'  

  # Set the path to different files and folders.  
  pkg_gazebo_ros = FindPackageShare(package='gazebo_ros').find('gazebo_ros')   
  pkg_share = FindPackageShare(package=beluga_sim_package_name).find(beluga_sim_package_name)
  default_urdf_model_path = os.path.join(pkg_share, urdf_file_path)
  default_rviz_config_path = os.path.join(pkg_share, rviz_config_file_path)
  world_path = os.path.join(pkg_share, world_file_path)
  urdf_model_path = os.path.join(pkg_share, urdf_model_file_path)
  world_resource_path = os.path.join(pkg_share, world_resource_file_path)
  gazebo_models_path = os.path.join(pkg_share, gazebo_models_file_path)
  worlds_path = os.path.join(pkg_share, worlds_file_path)

  # Set required environment variables
  os.environ['GAZEBO_MODEL_PATH'] = base_gazebo_model_path + ':' + urdf_model_path + ':' + gazebo_models_path
  print('[Beluga Simulation Launcher]: Set Gazebo Model Paths')
  print('[Beluga Simulation Launcher]: Current Gazebo Model Path(s): ' + os.environ['GAZEBO_MODEL_PATH'] + ":" + "~/.gazebo/models")
  os.environ['GAZEBO_RESOURCE_PATH'] = base_gazebo_resource_path + ":" + world_resource_path + ":" + worlds_path
  print('[Beluga Simulation Launcher]: Set Gazebo Resource Paths')
  print('[Beluga Simulation Launcher]: Current Gazebo Resource Path(s): ' + os.environ['GAZEBO_RESOURCE_PATH'])
  
  # Launch configuration variables specific to simulation
  gui = LaunchConfiguration('gui')
  headless = LaunchConfiguration('headless')
  namespace = LaunchConfiguration('namespace')
  rviz_config_file = LaunchConfiguration('rviz_config_file')
  urdf_model = LaunchConfiguration('urdf_model')
  use_namespace = LaunchConfiguration('use_namespace')
  use_robot_state_pub = LaunchConfiguration('use_robot_state_pub')
  use_rviz = LaunchConfiguration('use_rviz')
  use_sim_time = LaunchConfiguration('use_sim_time')
  use_simulator = LaunchConfiguration('use_simulator')
  world = LaunchConfiguration('world')

  # These parameters are maintained for backwards compatibility
  gui_arg = DeclareLaunchArgument(name='gui', default_value='true', choices=['true', 'false'],
                                  description='Flag to enable joint_state_publisher_gui')
  ld.add_action(gui_arg)

  declare_namespace_cmd = DeclareLaunchArgument(
    name='namespace',
    default_value='',
    description='Top-level namespace')
  ld.add_action(declare_namespace_cmd)

  declare_use_namespace_cmd = DeclareLaunchArgument(
    name='use_namespace',
    default_value='false',
    description='Whether to apply a namespace to the navigation stack')
  ld.add_action(declare_use_namespace_cmd)

  declare_rviz_config_file_cmd = DeclareLaunchArgument(name='rviz_config_file', default_value=default_rviz_config_path,
                                    description='Absolute path to rviz config file')
  ld.add_action(declare_rviz_config_file_cmd)

  declare_simulator_cmd = DeclareLaunchArgument(
    name='headless',
    default_value='False',
    description='Whether to execute gzclient')
  ld.add_action(declare_simulator_cmd)

  # This parameter has changed its meaning slightly from previous versions
  declare_urdf_model_path_cmd = DeclareLaunchArgument(name='model', default_value=default_urdf_model_path,
                                  description='Path to robot urdf file relative to beluga_simulator package')
  ld.add_action(declare_urdf_model_path_cmd)

  declare_use_robot_state_pub_cmd = DeclareLaunchArgument(
    name='use_robot_state_pub',
    default_value='True',
    description='Whether to start the robot state publisher')
  ld.add_action(declare_use_robot_state_pub_cmd)

  declare_use_rviz_cmd = DeclareLaunchArgument(
    name='use_rviz',
    default_value='True',
    description='Whether to start RVIZ')
  ld.add_action(declare_use_rviz_cmd)

  declare_use_sim_time_cmd = DeclareLaunchArgument(
    name='use_sim_time',
    default_value='true',
    description='Use simulation (Gazebo) clock if true')
  ld.add_action(declare_use_sim_time_cmd)

  declare_use_simulator_cmd = DeclareLaunchArgument(
    name='use_simulator',
    default_value='True',
    description='Whether to start the simulator')
  ld.add_action(declare_use_simulator_cmd)

  declare_world_cmd = DeclareLaunchArgument(
    name='world',
    default_value=world_path,
    description='Full path to the world model file to load')
  ld.add_action(declare_world_cmd)

  # Subscribe to the joint states of the robot, and publish the 3D pose of each link.
  start_robot_state_publisher_cmd = IncludeLaunchDescription(
      PathJoinSubstitution([FindPackageShare('urdf_launch'), 'launch', 'display.launch.py']),
      launch_arguments={
          'urdf_package': 'beluga_simulator',
          'urdf_package_path': LaunchConfiguration('model'),
          'rviz_config': LaunchConfiguration('rviz_config_file'),
          'jsp_gui': LaunchConfiguration('gui')}.items()
  )
  ld.add_action(start_robot_state_publisher_cmd)

  # Publish the joint states of the robot
  start_joint_state_publisher_cmd = Node(
    package='joint_state_publisher',
    executable='joint_state_publisher', 
    name='joint_state_publisher',
    condition=UnlessCondition(gui))
  ld.add_action(start_joint_state_publisher_cmd)

  # Start Gazebo server
  start_gazebo_server_cmd = IncludeLaunchDescription(
    PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')),
    condition=IfCondition(use_simulator),
    launch_arguments={'world': world}.items())
  ld.add_action(start_gazebo_server_cmd)

  # Start Gazebo client    
  start_gazebo_client_cmd = IncludeLaunchDescription(
    PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')),
    condition=IfCondition(PythonExpression([use_simulator, ' and not ', headless])))
  ld.add_action(start_gazebo_client_cmd)

   # Launch the robot
  spawn_entity_cmd = Node(
    package='gazebo_ros', 
    executable='spawn_entity.py',
    arguments=['-entity', robot_name_in_model, 
                '-topic', 'robot_description',
                    '-x', spawn_x_val,
                    '-y', spawn_y_val,
                    '-z', spawn_z_val,
                    '-Y', spawn_yaw_val],
                    output='screen')
  ld.add_action(spawn_entity_cmd)
 
  
  return ld


