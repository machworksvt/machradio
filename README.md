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
