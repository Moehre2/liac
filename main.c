#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int main(void) {
    #ifndef CYW43_WL_GPIO_LED_PIN
    #warning blink example requires a board with a regular LED
    #endif
    cyw43_arch_init();
    while(true) {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        sleep_ms(500);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        sleep_ms(500);
    }
}
