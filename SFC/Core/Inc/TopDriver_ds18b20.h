#ifndef TOPDRIVER_DS18B20_H
#define TOPDRIVER_DS18B20_H

#include "driver_ds18b20.h"
#include "delay.h"
#include "wire.h"
#include <uart.h>

void Ds18b20_link_Func(ds18b20_handle_t *HANDLE);

void Ds18b20_Read_temp(ds18b20_handle_t *handle, int16_t *raw, float *temp);

uint8_t Ds18B20_Initialize(ds18b20_handle_t *handle , uint8_t RomMode
						,uint8_t Resolution , uint32_t UartBaudrate);
#endif
