#include <iostream>
#include <mavsdk/mavsdk.h>

int main(){ 
    std::cout << "Hello World!" << std::endl;
    mavsdk::Mavsdk mavsdk{mavsdk::Mavsdk::Configuration{mavsdk::ComponentType::GroundStation}};
    auto connectionResult  = mavsdk.add_any_connection("serial:///dev/serial/by-id/usb-FTDI_FT232R_USB_UART_XXXXXXXX-if00-port0:57600");
    if (connectionResult != mavsdk::ConnectionResult::Success) {
        std::cout << "Adding connection failed: " << connectionResult << '\n';
        return 0;
    }
}
