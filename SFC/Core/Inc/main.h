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
#define Right_Pin GPIO_PIN_13
#define Right_GPIO_Port GPIOC
#define Down_Pin GPIO_PIN_14
#define Down_GPIO_Port GPIOC
#define Center_Pin GPIO_PIN_15
#define Center_GPIO_Port GPIOC
#define Up_Pin GPIO_PIN_0
#define Up_GPIO_Port GPIOF
#define E_Pin GPIO_PIN_1
#define E_GPIO_Port GPIOF
#define D_Pin GPIO_PIN_1
#define D_GPIO_Port GPIOA
#define DP_Pin GPIO_PIN_2
#define DP_GPIO_Port GPIOA
#define OE1_Pin GPIO_PIN_3
#define OE1_GPIO_Port GPIOA
#define A_Pin GPIO_PIN_4
#define A_GPIO_Port GPIOA
#define F_Pin GPIO_PIN_5
#define F_GPIO_Port GPIOA
#define B_Pin GPIO_PIN_6
#define B_GPIO_Port GPIOA
#define G_Pin GPIO_PIN_7
#define G_GPIO_Port GPIOA
#define C_Pin GPIO_PIN_0
#define C_GPIO_Port GPIOB
#define D1_Pin GPIO_PIN_1
#define D1_GPIO_Port GPIOB
#define D2_Pin GPIO_PIN_2
#define D2_GPIO_Port GPIOB
#define D3_Pin GPIO_PIN_10
#define D3_GPIO_Port GPIOB
#define D4_Pin GPIO_PIN_11
#define D4_GPIO_Port GPIOB
#define Data_MCU_PIN_Pin GPIO_PIN_12
#define Data_MCU_PIN_GPIO_Port GPIOB
#define Data_MCU_Bjt_Pin GPIO_PIN_13
#define Data_MCU_Bjt_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_15
#define LED1_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_8
#define LED2_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_9
#define LED3_GPIO_Port GPIOA
#define OE_Seg_Common_MCU_Pin GPIO_PIN_10
#define OE_Seg_Common_MCU_GPIO_Port GPIOA
#define Heater_1_Pin GPIO_PIN_15
#define Heater_1_GPIO_Port GPIOA
#define Motor_Pin GPIO_PIN_3
#define Motor_GPIO_Port GPIOB
#define Heater_2_Pin GPIO_PIN_4
#define Heater_2_GPIO_Port GPIOB
#define FAN2_Pin GPIO_PIN_5
#define FAN2_GPIO_Port GPIOB
#define FAN_Pin GPIO_PIN_6
#define FAN_GPIO_Port GPIOB
#define Defrost_Key_Pin GPIO_PIN_8
#define Defrost_Key_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
