#ifndef		UART_PRIVATE_H
#define		UART_PRIVATE_H

#define UART1 ((volatile UART1_t*)x40013800)

typedef struct
{
	u32 SR;
	u32 DR;
	u32 BRR;
	u32 CR[3];
	u32 GTPR;

}UART1_t;





#endif	