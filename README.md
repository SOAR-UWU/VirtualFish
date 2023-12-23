# VirtualFish

To build and run the simulation files and ocean_waves world, do the following (to be changed to launch sauvc world):

    In Termainal 1:
        In: ~/catkin_ws
        source install/setup.bash
        ros2 launch uuv_gazebo_worlds ocean_waves.launch    

To spawn beluga into the gazebo world:

    In Terminal 2:
        ros2 launch uuv_descriptions upload_beluga.launch mode:=default x:=0 y:=0 z:=-20 namespace:="''" 

To run thruster_manager (converts the /cmd_vel from the keyboard into individual thruster inputs (can change topic name in file)):

    In Terminal 3:
        In: ~/catkin_ws OR Anywhere
        cd ~/catkin_ws/src/beluga_adapter/beluga_adapter
        ./thruster_manager.py

To run keyboard teleop twist node to validate setup:

    In terminal 4:
        In: Anywhere
        ros2 run teleop_twist_keyboard teleop_twist_keyboard

This is the overall flow of data and programs: (Read robot URDF) -> (Publish link and joint states) -> (Start and show on RViz) -> (Read world and world models) -> (Start Gazebo server) -> (Spawn world, world_models and robot) -> (Start physics plugin) -> (Start teleop keyboard/autonomy stack) -> (Sensors read data and send to autonomy stack (ONLY for autononous operation)) *** -> (Read input from telop keyboard/autonomy stack) -> (Convert input from overall robot Twist to individual thruster FloatStamped) -> (Convert individual thruster FloatStamped into robot motion) -> (Loop from *** onwards)

Current status:

    Created/rewritten/modified code to start simulation, set up AUV model, publish states, spawn world, world_models, and robot into simulation
    Bring in code from example to beluga_simulation -> TO DO
    Write launch file to launch all simulation programs with a single line -> TO DO
    Need to rewrite autonomy stack to convert existing one from ROS1 to ROS2 format, and validate its function -> TO DO
    Need to tune robot model parameters for greater accuracy in simulation after taking physical measurments and making calculations -> TO DO


