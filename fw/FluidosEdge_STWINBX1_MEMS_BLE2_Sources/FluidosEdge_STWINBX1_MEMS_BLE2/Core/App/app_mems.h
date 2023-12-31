/**
  ******************************************************************************
  * File Name          : app_mems.h
  * Description        : This file provides code for the configuration
  *                      of the STMicroelectronics.X-CUBE-MEMS1.10.0.0 instances.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __APP_MEMS_H
#define __APP_MEMS_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
/* Exported defines ----------------------------------------------------------*/

typedef struct EnvData {
  float Temperature;
  float Humidity;
  float Pressure;
  float Gas;
} EnvData_t;

/* Exported functions --------------------------------------------------------*/
void MX_MEMS_Init(void);
void MX_MEMS_Process(void);
void Get_MEMS_Data(uint32_t Instance, EnvData_t * env_data);

#ifdef __cplusplus
}
#endif

#endif /* __APP_MEMS_H */
