# ubuntu_Docker
This Docker file is a boiler plate for bulding ubuntu image furthermore and moreover it can also be used by testing ubuntu container.


# Dockerfile: 
    FROM ubuntu             #"FROM" To get ubuntu image file in local or DockerHub
    RUN apt-get -y update   #"RUN" To Run a command inside the imagefile(ubuntu) 
                                "-y" tag for without asking yes or no
    
    COPY ./docker_Essentials ./home/che #"COPY" To copy files from ./docker_Essentials  
                                to ./home/che while build
    
    WORKDIR /etc/           #"WORKDIR" it lands you to the specified directory(/etc/) 
                                when you run the imagefile(ubuntu) 

    VOLUME /test        #It persist your data inside the test but
                             be aware of that it creates multiple volumes each of your run cmd

    CMD ["/home/che/check"] #"CMD" its executing given commands while container is began to run

# Terminal: 
    # docker
        # Build the image with name:version
            docker build --tag ubuntu:1.0 
    
        # Run the image of ubuntu-test conatiner and get the shell 
            docker run -it --name ubuntu-test ubuntu:1.0 /bin/bash  

        # -v(volumes) makes the persistent directory (/test)
            docker run -v /docker_Essentials/bin:/test -it --name ubuntu-test ubuntu:1.0 /bin/bash
        # Remove all unused volumes
            docker volume prune

    # docker-compose
        #run a service(bash) into your given service(app)
            docker-compose run app bash
        
        # Used for up the continers and If containers already exist, don't recreate them. 
        docker-compose up --no-recreate 
        docker-compose down //for down the continers

        #It shows all running images 
        docker-compose images
