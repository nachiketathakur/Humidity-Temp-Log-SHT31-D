/*
 * sht31-d.h
 *
 *  Created on: Jun 14, 2025
 *      Author: Nachiketa Thakur
 */

#ifndef INC_SHT31_D_H_
#define INC_SHT31_D_H_

#include "i2c.h"
//Macro Definitions
#define SENSOR_I2C_ADDR 0x44 << 1
//Function Declaration
uint8_t sht31d_check_sensor(uint8_t sensor_add, I2C_HandleTypeDef* i2cHandle);

#endif /* INC_SHT31_D_H_ */
