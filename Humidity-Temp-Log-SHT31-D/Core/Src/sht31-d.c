/*
 * sht31-d.c
 *
 *  Created on: Jun 14, 2025
 *      Author: Nachiketa Thakur
 */

#include "sht31-d.h"

uint8_t sht31d_check_sensor(uint8_t sensor_add, I2C_HandleTypeDef* i2cHandle)
{
	uint8_t ret_val = 0;
	if (HAL_I2C_IsDeviceReady(i2cHandle, sensor_add, 3, 100) == HAL_OK)
	{
		ret_val = 1;  // Sensor is ready
	}
	return ret_val;  // No acknowledgment received
}
