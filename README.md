# Building the docker image

```bash
docker-compose build dev 
```

# Running the docker container w/ no usb 
```bash
docker-compose run --rm dev bash
```

# Running the docker container w/ usb
```bash 
USB_DEVICE=</path/to/usb/device> docker-compose \
    -f docker-compose.yml \
    -f docker-compose.hardware.yml \
    run --rm dev bash
```

# VS Code dev container

Install the VS Code Dev Containers extension, then run:

```text
Dev Containers: Reopen in Container
```

The dev container uses the same `dev` service from `docker-compose.yml`, so VS Code will see the same CMake, ROS2, and MAVSDK environment as the Docker shell.
