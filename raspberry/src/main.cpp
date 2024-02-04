#include <iostream>
#include <pigpio.h>
#include <unistd.h>

constexpr static auto led_pin = 17;

int main(){
     if (gpioInitialise() < 0){
          std::cerr << "gpio initialization failed.\n";
          return EXIT_FAILURE;
     }
     std::cout << "gpio initialized" << std::endl;
     gpioSetMode(led_pin, PI_OUTPUT);

     while(true){
        std::cout << "running loop\n";
        gpioWrite(led_pin, 1); // Turn the LED on
        sleep(1);              // Wait for 1 second
        gpioWrite(led_pin, 0); // Turn the LED off
        sleep(1);              // Wait for 1 s
     }
     
     gpioTerminate();
     return EXIT_SUCCESS;
}