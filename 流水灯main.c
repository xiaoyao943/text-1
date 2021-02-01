#include "reg51.h"			 //
#include <intrins.h>
typedef unsigned int u16;
typedef unsigned char u8;

#define led P0

void delay(u16 i)
     {
	   while (i--);
	 } 
void main()
{	 
	 u8 i;
     led=~0x01;
	 delay(50000);
	 while (1)
	 {
	     for(i=1;i<8;i++)
	     {
	   		 led=~(0x01<<i);
			 delay(50000);
	     }	
//		 for(i=0;i<7;i++)	 //将led左移一位
//		{
//			led=_crol_(led,1);
//			delay(50000); //大约延时450ms	
//		}
//		for(i=0;i<7;i++)	//将led右移一位
//		{
//			led=_cror_(led,1);
//			delay(50000); //大约延时450ms	
//		}		
	 }
}