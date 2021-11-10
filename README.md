# ubuntu_Docker
This Docker file is a boiler plate for bulding ubuntu image furthermore and moreover it can also be used by testing ubuntu container.



// Docker file Syntax Explanation and Terminal Docker command explanation

# Dockerfile: 
    FROM ubuntu             #"FROM" To get ubuntu image file in local or DockerHub
    RUN apt-get -y update   #"RUN" To Run a command inside the imagefile(ubuntu) 
                                "-y" tag for without asking yes or no
    
    COPY ./docker_Essentials ./home/che #"COPY" To copy files from ./docker_Essentials  
                                to ./home/che while build
    
    WORKDIR /etc/           #"WORKDIR" it lands you to the specified directory(/etc/) 
                                when you run the imagefile(ubuntu) 

    VOLUME /home/che        #

    CMD ["/home/che/check"] #"CMD" for executing some cmd while run the container

# Terminal: 
    # Build the image with name:version
        docker build --tag ubuntu:1.0 
    
    # Run the image of ubuntu-test conatiner and get the shell 
    docker run -it --name ubuntu-test ubuntu:1.0 /bin/bash  

    # -v(volumes) makes the persistent directory (/test)
    docker run -v /docker_Essentials/bin:/test -it --name ubuntu-test ubuntu:1.0 /bin/bash
