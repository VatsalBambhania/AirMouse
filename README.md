AirMouse is our implementation for bypassing the actual physical mouse to control cursor.

REQUIREMENTS:
   1) Linux based operating system (any flavor of linux can be used).
   2) Dedicated GPU (Any model of gpu can work just fine, AMD or nvidia either is fine).
   
   Only if you want to run it inside Docker:
   3) Docker ver 20.10.0 or above. 
   4) Install nvidia-continer-toolkit (just run setupNvidiaToolkit.sh with root privilages if it is not installed).

You need Just follow Steps given below to experience it yourself.

=> Steps to run on any Linux flavor OS enter command given below:
   $ bin/mediapipe/examples/desktop/hand_tracking/hand_tracking_gpu_cust -calculator_graph_config_file=working_mouse.pbtxt

=> Steps to run inside docker Container:
   1) Clone this project to your device.
   2) Run setupNvidiaToolkit.sh with root privilages (with sudo command).
   3) Build image. 
       Command to build image is as below:
       $ sudo docker build -t AirMouse .
   4) Run image using flags listed below
       Flags:
       --gpus all #Let conatiner utilize GPU
       -e DISPLAY=$DISPLAY  #environment variable
       --env="QT_X11_NO_MITSHM=1" #environment variable
       -v /tmp/.X11-unix:/tmp/.X11-unix #Let conatainer display Window
       --device /dev/video0 # Let container use WebCam
       --name AirMouse # Set Name of container
      At last command looks like this
       $ sudo docker run -ti \
       --gpus all \
       -e DISPLAY=$DISPLAY \
       --env="QT_X11_NO_MITSHM=1" \
       -v /tmp/.X11-unix:/tmp/.X11-unix \
       --device /dev/video0 \
       --name AirMouse 
       AirMouse
    5) In terminal of container enter command given below to start using
       $ bin/mediapipe/examples/desktop/hand_tracking/hand_tracking_gpu_cust -calculator_graph_config_file=working_mouse.pbtxt
    
    
