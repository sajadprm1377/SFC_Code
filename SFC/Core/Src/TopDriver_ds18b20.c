#include "TopDriver_ds18b20.h"

void Ds18b20_link_Func(ds18b20_handle_t *HANDLE)
{
	DRIVER_DS18B20_LINK_INIT(HANDLE, ds18b20_handle_t);
	DRIVER_DS18B20_LINK_BUS_INIT(HANDLE,wire_init);
	DRIVER_DS18B20_LINK_BUS_DEINIT(HANDLE,wire_deinit);
	DRIVER_DS18B20_LINK_BUS_READ(HANDLE,wire_read);
	DRIVER_DS18B20_LINK_BUS_WRITE(HANDLE,wire_write);
	DRIVER_DS18B20_LINK_DELAY_MS(HANDLE, delay_ms);
	DRIVER_DS18B20_LINK_DELAY_US(HANDLE, delay_us);
	DRIVER_DS18B20_LINK_ENABLE_IRQ(HANDLE,__enable_irq);
	DRIVER_DS18B20_LINK_DISABLE_IRQ(HANDLE,__disable_irq);
	DRIVER_DS18B20_LINK_DEBUG_PRINT(HANDLE,ds18b20_interface_debug_print);

	(HANDLE)->debug_print("\r\nds18b20: welcome to driver ds18b20.\n");
}


uint8_t Ds18B20_Initialize(ds18b20_handle_t *handle , uint8_t RomMode , uint8_t Resolution
																, uint32_t UartBaudrate)
{
	  uint8_t res;

	  delay_init();
	  uart_init(UartBaudrate);
	  Ds18b20_link_Func(handle);
	  res = ds18b20_init(handle);

	  if(res == 0)
	  {
		  res = ds18b20_set_mode(handle, RomMode);
		   if(res != 0)
		   {
			  (handle)->debug_print("ds18b20: set mode failed.\n");
		   }
		   else
		   {
			   if(RomMode == DS18B20_MODE_SKIP_ROM )
			   {
				   (handle)->debug_print("ds18b20: set ROM done in skip mode.\n");
			   }

			   else if(RomMode == DS18B20_MODE_MATCH_ROM )
			   {
				   (handle)->debug_print("ds18b20: set ROM done in match mode.\n");
			   }
		   }

		   res = ds18b20_scratchpad_set_resolution(handle, Resolution);

		   if(res != 0)
		   {
			  (handle)->debug_print("ds18b20: scratchpad set resolution failed.\n");
		   }
		   else
		   {
			   if(Resolution == DS18B20_RESOLUTION_9BIT )
			   {
					  (handle)->debug_print("ds18b20: scratchpad set resolution done in 9bit.\n");
			   }

			   else if(Resolution == DS18B20_RESOLUTION_10BIT )
			   {
					  (handle)->debug_print("ds18b20: scratchpad set resolution done in 10 bit.\n");
			   }

			   else if(Resolution == DS18B20_RESOLUTION_11BIT )
			   {
					  (handle)->debug_print("ds18b20: scratchpad set resolution done in 11 bit.\n");
			   }

			   else if(Resolution == DS18B20_RESOLUTION_12BIT )
			   {
					  (handle)->debug_print("ds18b20: scratchpad set resolution done in 12 bit.\n");
			   }
		   }
	  }
	  return res;
}


void Ds18b20_Read_temp(ds18b20_handle_t *handle, int16_t *raw, float *temp)
{
	uint8_t res;

	res = ds18b20_read(handle,(int16_t *)raw,(float *)temp);

	if(res != 0)
	{
	  (handle)->debug_print("ds18b20: read temperature failed.\n");
	}
	else
	{
	  (handle)->debug_print("ds18b20: temperature is %f C \n", *temp);
	}
}
