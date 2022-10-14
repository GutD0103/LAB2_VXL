/*
 * ledmatrix.c
 *
 *  Created on: Oct 12, 2022
 *      Author: ntdat
 */


#include "main.h"
#include "ledmatrix.h"
 const int MAX_LED_MATRIX = 8;
 int index_led_matrix = 0;
 int index_buffer;
 uint8_t matrix_buffer[8] = {0xFF , 0x83, 0x81, 0xEC , 0xEC , 0x81 , 0x83 , 0xFF};
 uint8_t temp;

void updateLEDMatrix (int index ,int n){
	index_buffer = index + n;
	if(index_buffer > 7){
		index_buffer -= 7;
	}
	GPIOB -> ODR = (GPIOB -> ODR & 0x00FF) | (matrix_buffer[index_buffer] << 8);
	switch ( index ) {
	 case 0:
			 HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			 HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			 break ;
	 case 1:
		 HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
		 HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
		 	 break ;
	 case 2:
		 HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
		 HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
	 		 break ;
	 case 3:
		 HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
		 HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
	 		 break ;
	 case 4:
		 HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
		 HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
	 		 break ;
	 case 5:
		 HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
		 HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
	 		 break ;
	 case 6:
		 HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
		 HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
	 		 break ;
	 case 7:
		 HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
		 HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);
	 		 break ;
	 default:
		 	 break;
}
};
