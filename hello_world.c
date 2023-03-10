#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();

  const uint LED_PIN = 16;
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);
    
  int count = 0;
  while (true) {
    //printf("Hello x%d\n", ++count);
    
    gpio_put(LED_PIN, 1);
    sleep_ms(250);
    gpio_put(LED_PIN, 0);
    sleep_ms(250);
  }
  return 0;
}
