# VirtualFish

To build and run the simulation files, do the following:

    In Termainal 1:
        In: ~/catkin_ws
        source install/setup.bash
        ros2 launch beluga_simulator beluga_model.launch.py

To run the beluga-adapter (converts the /cmd_vel from the keyboard into individual thruster inputs (can change topic name in file)):

    In Terminal 2:
        In: ~/catkin_ws OR Anywhere
        cd ~/catkin_ws/src/beluga_adapter/beluga_adapter
        ./thruster_manager.py

To run keyboard teleop twist node to validate setup:

    In terminal 3:
        In: Anywhere
        ros2 run teleop_twist_keyboard teleop_twist_keyboard

This is the overall flow of data and programs: (Read robot URDF) -> (Publish link and joint states) -> (Start and show on RViz) -> (Read world and world models) -> (Start Gazebo server) -> (Spawn world, world_models and robot) -> (Start physics plugin) -> (Start teleop keyboard/autonomy stack) -> (Sensors read data and send to autonomy stack (ONLY for autononous operation)) *** -> (Read input from telop keyboard/autonomy stack) -> (Convert input from overall robot Twist to individual thruster FloatStamped) -> (Convert individual thruster FloatStamped into robot motion) -> (Loop from *** onwards)

Current status:

    Created/rewritten/modified code to start simulation, set up AUV model, publish states, spawn world, world_models, and robot into simulation
    Individual thruster values are published into their topics but props and robot are not moving -> TO DO
    Need to rewrite autonomy stack to convert existing one from ROS1 to ROS2 format, and validate its function -> TO DO
    Need to tune robot model parameters for greater accuracy in simulation after taking physical measurments and making calculations -> TO DO


