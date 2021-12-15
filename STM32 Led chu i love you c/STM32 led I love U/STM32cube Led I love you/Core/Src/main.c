/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

void SystemClock_Config(void);
static void MX_GPIO_Init(void);


void SangLedI();
void SangLedLv();
void SangLedU();
void TatLed();
int main(void)
{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();

  while (1)
  {
    /* USER CODE END WHILE */
		SangLedI();
		HAL_Delay(1000);
		SangLedLv();
		HAL_Delay(1000);
		SangLedU();
		HAL_Delay(1000);
    /* USER CODE BEGIN 3 */
  }
  
}
void SangLedI(){
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, GPIO_PIN_SET); // Sáng dèn D1
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_1, GPIO_PIN_SET); // Sáng dèn D2
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET); // Sáng dèn D3
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3, GPIO_PIN_SET); // Sáng dèn D4
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_SET); // Sáng dèn D5
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET); // Sáng dèn D6
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_SET); // Sáng dèn D7
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_7, GPIO_PIN_SET); // Sáng dèn D8
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_SET); // Sáng dèn D9
}
void SangLedLv(){
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET); // Sáng dèn D10
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_10, GPIO_PIN_SET); // Sáng dèn D11
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET); // Sáng dèn D12
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET); // Sáng dèn D13
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET); // Sáng dèn D14
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET); // Sáng dèn D15
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET); // Sáng dèn D16

	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_0, GPIO_PIN_SET); // Sáng dèn D17
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_1, GPIO_PIN_SET); // Sáng dèn D18
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2, GPIO_PIN_SET); // Sáng dèn D19
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, GPIO_PIN_SET); // Sáng dèn D20
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_4, GPIO_PIN_SET); // Sáng dèn D21
}

void SangLedU(){
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_5, GPIO_PIN_SET); // Sáng dèn D22
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_6, GPIO_PIN_SET); // Sáng dèn D23
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_7, GPIO_PIN_SET); // Sáng dèn D24
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_SET); // Sáng dèn D25
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_SET); // Sáng dèn D26
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET); // Sáng dèn D27
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET); // Sáng dèn D28
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET); // Sáng dèn D29
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET); // Sáng dèn D30
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET); // Sáng dèn D31
}


void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSE;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5
                          |GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9
                          |GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13
                          |GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15
                          |GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7, GPIO_PIN_RESET);

  /*Configure GPIO pins : PE2 PE3 PE4 PE5
                           PE6 PE7 PE8 PE9
                           PE10 PE11 PE12 PE13
                           PE14 PE15 PE0 PE1 */
  GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5
                          |GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9
                          |GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13
                          |GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PD8 PD9 PD10 PD11
                           PD12 PD13 PD14 PD15
                           PD0 PD1 PD2 PD3
                           PD4 PD5 PD6 PD7 */
  GPIO_InitStruct.Pin = GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15
                          |GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
