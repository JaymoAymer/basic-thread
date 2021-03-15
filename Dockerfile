FROM gcc:latest

LABEL maintainer="James Aymer <aymerjames@gmail.com>"
LABEL description="Basic C Thread Programming"

RUN apt-get update && apt-get install make gcc bash

VOLUME /src

ENTRYPOINT ["bash"]