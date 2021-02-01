#include "reg51.h"


unsigned char led [8]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};

void delay(unsigned int i)
{
    while(i--);
}

void main()
{
	 unsigned char i;
     while(1)
		 {
		    
					 for(i=0;i<8;i++)
					 {
					     P0 = led[i];
						   delay(50000);
					 }
				 
		 }
}