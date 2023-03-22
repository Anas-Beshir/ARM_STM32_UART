






int main(void)
{
	/*	HSI RCC init				*/
	/*	RCC UART 1	(APB2,14)		*/
	
	/*	Tx ==> A9 output push pull Alternate function */
	/*	Rx ==> A10 Input floating 	*/
	
	/*	UART init					*/
	MUART1_voidInit();
	u8 x = 0;
	while(1)
	{
		MUSART_voidTransmitStr("22");
		x = MUSART_voidReceiveChar();
		if(x == '5')
		{
			/*	LED ON 			*/
		}else if (x == 'A')
		{
			/*	LED OFF		*/
		}
	}
return 0;
}




