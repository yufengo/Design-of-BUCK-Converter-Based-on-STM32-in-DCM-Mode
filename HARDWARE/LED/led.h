#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
/************************************************
 DCM模式下的BUCK变换器数字系统控制
 博客：https://blog.csdn.net/tichimi3375
 作者：唯恋殊雨
************************************************/
#define LED0 PAout(8)// PB5
#define LED1 PDout(2)// PE5	

void LED_Init(void);//初始化

		 				    
#endif
