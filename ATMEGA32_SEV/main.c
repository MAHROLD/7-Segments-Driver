/*
 * main.c
 *
 *  Created on: Dec 2, 2022
 *      Author: nadin
 */
#include "STD_Types.h"
#include "BIT_Math.h"
#include <util/delay.h>

#include "DIO.h"
#include "SEV.h"

void main(void)
{
	uint8 Local_u8Counter = 0;
	DIO_voidInit();
	SEV_PowerOn(0);
	while(1)
	{

     SEV_Display(0,Local_u8Counter);
      _delay_ms(1000);
      Local_u8Counter++;
      if(Local_u8Counter == 10)
      {
    	  Local_u8Counter = 0;
      }
      /* Local_u8Counter  %= 10;*/
	}
}
