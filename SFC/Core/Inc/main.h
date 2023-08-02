/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define D1_Pin GPIO_PIN_1
#define D1_GPIO_Port GPIOA
#define D2_Pin GPIO_PIN_2
#define D2_GPIO_Port GPIOA
#define D3_Pin GPIO_PIN_3
#define D3_GPIO_Port GPIOA
#define D4_Pin GPIO_PIN_4
#define D4_GPIO_Port GPIOA
#define A_Pin GPIO_PIN_5
#define A_GPIO_Port GPIOA
#define B_Pin GPIO_PIN_6
#define B_GPIO_Port GPIOA
#define C_Pin GPIO_PIN_7
#define C_GPIO_Port GPIOA
#define D_Pin GPIO_PIN_0
#define D_GPIO_Port GPIOB
#define E_Pin GPIO_PIN_1
#define E_GPIO_Port GPIOB
#define F_Pin GPIO_PIN_8
#define F_GPIO_Port GPIOA
#define G_Pin GPIO_PIN_9
#define G_GPIO_Port GPIOA
#define Element1_Pin GPIO_PIN_10
#define Element1_GPIO_Port GPIOA
#define Element2_Pin GPIO_PIN_11
#define Element2_GPIO_Port GPIOA
#define Motor_Pin GPIO_PIN_12
#define Motor_GPIO_Port GPIOA
#define FAN_Pin GPIO_PIN_15
#define FAN_GPIO_Port GPIOA
#define K1_Pin GPIO_PIN_3
#define K1_GPIO_Port GPIOB
#define K2_Pin GPIO_PIN_4
#define K2_GPIO_Port GPIOB
#define K3_Pin GPIO_PIN_5
#define K3_GPIO_Port GPIOB
#define K4_Pin GPIO_PIN_6
#define K4_GPIO_Port GPIOB
#define Temp_Sensor_Pin GPIO_PIN_7
#define Temp_Sensor_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
