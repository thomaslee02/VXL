/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void clearAllClock () {
	HAL_GPIO_WritePin(led_1_GPIO_Port, led_1_Pin, SET);
	HAL_GPIO_WritePin(led_2_GPIO_Port, led_2_Pin, SET);
	HAL_GPIO_WritePin(led_3_GPIO_Port, led_3_Pin, SET);
	HAL_GPIO_WritePin(led_4_GPIO_Port, led_4_Pin, SET);
	HAL_GPIO_WritePin(led_5_GPIO_Port, led_5_Pin, SET);
	HAL_GPIO_WritePin(led_6_GPIO_Port, led_6_Pin, SET);
	HAL_GPIO_WritePin(led_7_GPIO_Port, led_7_Pin, SET);
	HAL_GPIO_WritePin(led_8_GPIO_Port, led_8_Pin, SET);
	HAL_GPIO_WritePin(led_9_GPIO_Port, led_9_Pin, SET);
	HAL_GPIO_WritePin(led_10_GPIO_Port, led_10_Pin, SET);
	HAL_GPIO_WritePin(led_11_GPIO_Port, led_11_Pin, SET);
	HAL_GPIO_WritePin(led_12_GPIO_Port, led_12_Pin, SET);
}
/*
void display7SEG(int num) {
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, SET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
	}
}
*/
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int count = 0;
//  int status = 0, status_op = 0;
//  int count_red = 5, count_yellow = 2, count_green = 3;
//  int count_red_op = 5, count_yellow_op = 2, count_green_op = 3;
//  HAL_GPIO_WritePin(red_led_GPIO_Port, red_led_Pin, SET);
//  HAL_GPIO_WritePin(yellow_led_GPIO_Port, yellow_led_Pin, SET);
//  HAL_GPIO_WritePin(green_led_GPIO_Port, green_led_Pin, SET);
//  HAL_GPIO_WritePin(red_led_op_GPIO_Port, red_led_op_Pin, SET);
//  HAL_GPIO_WritePin(yellow_led_op_GPIO_Port, yellow_led_op_Pin, SET);
//  HAL_GPIO_WritePin(green_led_op_GPIO_Port, green_led_op_Pin, SET);
  while (1) {
//	  switch (status) {
//	  	  case 0:
//	  		  display7SEG(count_red);
//	  		  HAL_GPIO_WritePin(red_led_GPIO_Port, red_led_Pin, RESET);
//	  		  HAL_GPIO_WritePin(yellow_led_GPIO_Port, yellow_led_Pin, SET);
//	  		  HAL_GPIO_WritePin(green_led_GPIO_Port, green_led_Pin, SET);
//	  		  count_red--;
//	  		  if (count_red==0) {
//	  			  status = 2;
//	  			  count_red = 5;
//	  		  }
//	  		  break;
//	  	  case 1:
//	  		  display7SEG(count_yellow);
//	  		  HAL_GPIO_WritePin(yellow_led_GPIO_Port, yellow_led_Pin, RESET);
//	  		  HAL_GPIO_WritePin(red_led_GPIO_Port, red_led_Pin, SET);
//	  		  HAL_GPIO_WritePin(green_led_GPIO_Port, green_led_Pin, SET);
//	  		  count_yellow--;
//	  		  if (count_yellow==0) {
//	  			  status = 0;
//	  			  count_yellow = 2;
//	  		  }
//	  		  break;
//	  	  case 2:
//	  		  display7SEG(count_green);
//	  		  HAL_GPIO_WritePin(green_led_GPIO_Port, green_led_Pin, RESET);
//	  		  HAL_GPIO_WritePin(red_led_GPIO_Port, red_led_Pin, SET);
//	  		  HAL_GPIO_WritePin(yellow_led_GPIO_Port, yellow_led_Pin, SET);
//	  		  count_green--;
//	  		  if (count_green==0) {
//	  			  status = 1;
//	  			  count_green = 3;
//	  		  }
//	  		  break;
//	  }
//	  switch (status_op) {
//	  	  	  case 0:
//	  	  		HAL_GPIO_WritePin(green_led_op_GPIO_Port, green_led_op_Pin, RESET);
//	  	  		HAL_GPIO_WritePin(red_led_op_GPIO_Port, red_led_op_Pin, SET);
//	  	  		HAL_GPIO_WritePin(yellow_led_op_GPIO_Port, yellow_led_op_Pin, SET);
//	  	  		count_green_op--;
//	  	  		if (count_green_op==0) {
//	  	  			  status_op = 1;
//	  	  			  count_green_op = 3;
//	  	  			  	  		  }
//	  	  		break;
//	  	  	  case 1:
//	  	  		  HAL_GPIO_WritePin(yellow_led_op_GPIO_Port, yellow_led_op_Pin, RESET);
//	  	  		  HAL_GPIO_WritePin(red_led_op_GPIO_Port, red_led_op_Pin, SET);
//	  	  		  HAL_GPIO_WritePin(green_led_op_GPIO_Port, green_led_op_Pin, SET);
//	  	  		  count_yellow_op--;
//	  	  		  if (count_yellow_op==0) {
//	  	  			  status_op = 2;
//	  	  			  count_yellow_op = 2;
//	  	  		  }
//	  	  		  break;
//	  	  	  case 2:
//	  	  		HAL_GPIO_WritePin(red_led_op_GPIO_Port, red_led_op_Pin, RESET);
//	  	  		HAL_GPIO_WritePin(yellow_led_op_GPIO_Port, yellow_led_op_Pin, SET);
//	  	  		HAL_GPIO_WritePin(green_led_op_GPIO_Port, green_led_op_Pin, SET);
//	  	  		count_red_op--;
//	  	  		if (count_red_op==0) {
//	  	  			  status_op = 0;
//	  	  			  count_red_op = 5;
//	  	  		}
//	  	  		break;
//	  	  }
	  if (count>=12) count = 0;
	  clearAllClock();
	  switch (count) {
		case 0:
			HAL_GPIO_TogglePin(led_1_GPIO_Port, led_1_Pin);
			break;
		case 1:
			HAL_GPIO_TogglePin(led_2_GPIO_Port, led_2_Pin);
			break;
		case 2:
			HAL_GPIO_TogglePin(led_3_GPIO_Port, led_3_Pin);
			break;
		case 3:
			HAL_GPIO_TogglePin(led_4_GPIO_Port, led_4_Pin);
			break;
		case 4:
			HAL_GPIO_TogglePin(led_5_GPIO_Port, led_5_Pin);
			break;
		case 5:
			HAL_GPIO_TogglePin(led_6_GPIO_Port, led_6_Pin);
			break;
		case 6:
			HAL_GPIO_TogglePin(led_7_GPIO_Port, led_7_Pin);
			break;
		case 7:
			HAL_GPIO_TogglePin(led_8_GPIO_Port, led_8_Pin);
			break;
		case 8:
			HAL_GPIO_TogglePin(led_9_GPIO_Port, led_9_Pin);
			break;
		case 9:
			HAL_GPIO_TogglePin(led_10_GPIO_Port, led_10_Pin);
			break;
		case 10:
			HAL_GPIO_TogglePin(led_11_GPIO_Port, led_11_Pin);
			break;
		case 11:
			HAL_GPIO_TogglePin(led_12_GPIO_Port, led_12_Pin);
			break;
	}
	  ++count;
	  HAL_Delay(1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

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
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, red_led_op_Pin|yellow_led_op_Pin|green_led_op_Pin|led_1_Pin
                          |led_2_Pin|led_3_Pin|led_4_Pin|led_5_Pin
                          |led_6_Pin|led_7_Pin|led_8_Pin|led_9_Pin
                          |led_10_Pin|led_11_Pin|led_12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, a_Pin|b_Pin|c_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : red_led_op_Pin yellow_led_op_Pin green_led_op_Pin led_1_Pin
                           led_2_Pin led_3_Pin led_4_Pin led_5_Pin
                           led_6_Pin led_7_Pin led_8_Pin led_9_Pin
                           led_10_Pin led_11_Pin led_12_Pin */
  GPIO_InitStruct.Pin = red_led_op_Pin|yellow_led_op_Pin|green_led_op_Pin|led_1_Pin
                          |led_2_Pin|led_3_Pin|led_4_Pin|led_5_Pin
                          |led_6_Pin|led_7_Pin|led_8_Pin|led_9_Pin
                          |led_10_Pin|led_11_Pin|led_12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : a_Pin b_Pin c_Pin d_Pin
                           e_Pin f_Pin g_Pin */
  GPIO_InitStruct.Pin = a_Pin|b_Pin|c_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

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
