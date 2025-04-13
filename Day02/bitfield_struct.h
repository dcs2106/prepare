

#include <stdio.h>
#include <stdint.h>
typedef struct {
   uint8_t power_on:1;
   uint8_t error:1;
   uint8_t busy:1;
   uint8_t mode:2;
   uint8_t reserved:3;
} SensorStatus;


void print_sensor_status(SensorStatus ss);
