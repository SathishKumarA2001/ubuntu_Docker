FROM ubuntu  

RUN apt-get -y update && apt-get -y upgrade
RUN apt-get -y install stress build-essential htop
RUN mkdir /home/che
RUN mkdir test

COPY ./docker_Essentials ./home/che
WORKDIR /home/che
#RUN gcc -o /home/che/check /home/che/check.c
#RUN chmod +x /home/che/check
#VOLUME /test 
#CMD [ "/home/che/check" ]
