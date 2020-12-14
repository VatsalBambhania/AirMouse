FROM nvidia/cudagl:10.1-base

RUN apt update
RUN apt-get update
RUN apt-get install build-essential

#installing opencv

WORKDIR AirMouse

COPY opencv ./opencv

COPY installOpencv.sh .

RUN chmod +x installOpencv.sh

COPY bin ./bin

COPY mediapipe ./mediapipe

COPY working_mouse.pbtxt .

RUN ls

RUN ./installOpencv.sh

RUN apt-get install -y libgtk2.0-dev