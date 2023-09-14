#include "wire.h"

uint8_t wire_init(void)
{
    GPIO_InitTypeDef GPIO_InitureTx;
    GPIO_InitTypeDef GPIO_InitureRx;
    /* enable gpio clock */
    __HAL_RCC_GPIOA_CLK_ENABLE();
    
    /* gpio init */
    GPIO_InitureTx.Pin = GPIO_Tx_Pin;
    GPIO_InitureTx.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitureTx.Pull = GPIO_PULLDOWN;
    GPIO_InitureTx.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIO_Tx_Bank , &GPIO_InitureTx);

    GPIO_InitureRx.Pin = GPIO_Rx_Pin;
    GPIO_InitureRx.Mode = GPIO_MODE_INPUT;
    GPIO_InitureRx.Pull = GPIO_NOPULL;
    GPIO_InitureRx.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIO_Rx_Bank , &GPIO_InitureRx);

    wire_write(1);
    if(HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_8))
    {
        return 0;
    }
    return 1;
}

uint8_t wire_deinit(void)
{
    /* gpio deinit */
    HAL_GPIO_DeInit(GPIO_Tx_Bank, GPIO_Tx_Pin);
    HAL_GPIO_DeInit(GPIO_Rx_Bank, GPIO_Rx_Pin);
    return 0; 
}


uint8_t wire_read(uint8_t *value)
{
    /* read the data */
	HAL_GPIO_WritePin(GPIO_Tx_Bank, GPIO_Tx_Pin, RESET);
	*value  = HAL_GPIO_ReadPin(GPIO_Rx_Bank, GPIO_Rx_Pin);
    return 0;
}


uint8_t wire_write(uint8_t value)
{
    /* set the data */
    HAL_GPIO_WritePin(GPIO_Tx_Bank, GPIO_Tx_Pin ,!value);
    return 0;
}
