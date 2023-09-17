//#include "uart.h"
//#include <stdarg.h>
//#include <stdio.h>
//#include <string.h>
//
///**
// * @brief uart1 var definition
// */
//UART_HandleTypeDef g_uart_handle;              /**< uart handle */
//volatile uint8_t g_uart_tx_done;               /**< uart tx done flag */
//
//
///**
// * @brief     uart init with 8 data bits, 1 stop bit and no parity
// * @param[in] baud is the baud rate
// * @return    status code
// *            - 0 success
// *            - 1 init failed
// * @note      TX is PA9 and RX is PA10
// */
//uint8_t uart_init(uint32_t baud)
//{
//    g_uart_handle.Instance = USART1;
//    g_uart_handle.Init.BaudRate = baud;
//    g_uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
//    g_uart_handle.Init.StopBits = UART_STOPBITS_1;
//    g_uart_handle.Init.Parity = UART_PARITY_NONE;
//    g_uart_handle.Init.Mode = UART_MODE_TX_RX;
//    g_uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
//    g_uart_handle.Init.OverSampling = UART_OVERSAMPLING_16;
//
//    /* uart init */
//    if (HAL_UART_Init(&g_uart_handle) != HAL_OK)
//    {
//        return 1;
//    }
//
//    return 0;
//}
//
///**
// * @brief  uart deint
// * @return status code
// *         - 0 success
// *         - 1 deinit
// * @note   none
// */
//uint8_t uart_deinit(void)
//{
//    /* uart deinit */
//    if (HAL_UART_DeInit(&g_uart_handle) != HAL_OK)
//    {
//        return 1;
//    }
//
//    return 0;
//}
//
///**
// * @brief     uart write data
// * @param[in] *buf points to a data buffer
// * @param[in] len is the data length
// * @return    status code
// *            - 0 success
// *            - 1 write failed
// * @note      none
// */
//uint8_t uart_write(uint8_t *buf, uint16_t len)
//{
//    uint16_t timeout = 1000;
//
//    /* set tx done 0 */
//    g_uart_tx_done = 0;
//
//    /* transmit */
//    if (HAL_UART_Transmit(&g_uart_handle, (uint8_t *)buf, len , timeout ) != HAL_OK)
//    {
//        return 1;
//    }
//    return 0;
//}
//
