#include	"Std_Types.h"
#include	"Bit_Math.h"

#include	"UART_interface.h"
#include	"UART_private.h"
#include	"UART_config.h"









void	MUART1_voidInit(void)
{
	/*	Baudrate 	9600					*/
	UART1 -> BRR = 0x341 ;
	/*	UART EN , TX EN , RX EN 			*/
	SET_BIT((UART1 -> CR[0]),2);
	SET_BIT((UART1 -> CR[0]),3);
	SET_BIT((UART1 -> CR[0]),13);
	
	UART1 -> SR = 0;
}
void	MUART1_voidTransmitChar(u8 Data)
{
	
}

void	MUART1_voidTransmitStr(u8 arr[])
{
	u8 i = 0;
	while(arr[i] != '\0')
	{
		UART1 -> DR = arr[i];
		while((GET_BIT(UART1 -> SR , 6))== 0);
		i++;
	}
}

u8		MUART1_u8ReceiveChar(void)
{
	u8 Local_u8Data = 0;
		while((GET_BIT(UART1 -> SR , 5))== 0);	
		Local_u8Data = UART1 -> DR;
	return Local_u8Data;
}
