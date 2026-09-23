#include "utils.h"
#include "n32g031.h"

void delay_ms(uint32_t ms) {
    // Simple blocking loop for delay (approximate for default clock)
    for (volatile uint32_t i = 0; i < ms * 1000; i++) {
        __NOP();
    }
}