/*
 * display.c
 *
 *  Created on: Sep 27, 2022
 *      Author: ntdat
 */


#include "display.h"
#include "main.h"


const int MAX_LED = 4;
int led_buffer [4] = {1 , 2 , 3 , 4};
void update7SEG ( int index ) {
	switch ( index ) {
		case 0:
			// Display the first 7 SEG with led_buffer [0]
			display7SEG(led_buffer[0]);
			break ;
		case 1:
			// Display the second 7 SEG with led_buffer [1]
			display7SEG(led_buffer[1]);
			break ;
		 case 2:
			// Display the third 7 SEG with led_buffer [2]
			display7SEG(led_buffer[2]);
			break ;
		case 3:
			// Display the forth 7 SEG with led_buffer [3]
			display7SEG(led_buffer[3]);
			break ;
		default :
			break;
 }
}

void updateClockBuffer (int hr, int mn)
{
	led_buffer[3] = mn % 10;
	led_buffer[2] = mn / 10;
	led_buffer[1] = hr % 10;
	led_buffer[0] = hr / 10;
};

void display7SEG(int num){
	switch(num) {
	  case 0:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,SET) ;
	    break;
	  case 1:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,SET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,SET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,SET) ;
	    break;
	  case 2:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,SET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,SET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  case 3:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,SET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  case 4:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,SET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	  	break;
	  case 5:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,SET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  case 6:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,SET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  case 7:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,SET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,SET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,SET) ;
	    break;
	  case 8:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  case 9:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  default:
		break;

	}
}
