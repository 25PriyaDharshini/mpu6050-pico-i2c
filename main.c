#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "MPU6050.h"
#include <stdio.h>

int main() {
    stdio_init_all();

    // Initialize I2C0 on GPIO 8 (SDA), 9 (SCL)
    i2c_init(i2c0, 400 * 1000);
    gpio_set_function(8, GPIO_FUNC_I2C);
    gpio_set_function(9, GPIO_FUNC_I2C);
    gpio_pull_up(8);
    gpio_pull_up(9);

    MPU6050 mpu(i2c0, 0x68);
    mpu.init();

    printf("MPU6050 Initialized\n");

    while (true) {
        int16_t ax = mpu.readAccelX();
        int16_t ay = mpu.readAccelY();
        int16_t az = mpu.readAccelZ();

        printf("Accel X: %d, Y: %d, Z: %d\n", ax, ay, az);

        sleep_ms(500);
    }

    return 0;
}