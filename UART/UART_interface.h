#ifndef		UART_INTERFACE_H
#define		UART_INTERFACE_H


void	MUART1_voidInit(void);

void	MUART1_voidTransmitChar(u8 Data);

void	MUART1_voidTransmitStr(u8 arr[]);

u8		MUART1_u8ReceiveChar(void);



#endif	