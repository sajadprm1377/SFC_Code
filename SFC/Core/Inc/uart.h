#ifndef UART_H
#define UART_H

#include "stm32f0xx_hal.h"


#ifdef __cplusplus
extern "C"{
#endif

/**
 * @brief     uart init with 8 data bits, 1 stop bit and no parity
 * @param[in] baud is the baud rate
 * @return    status code
 *            - 0 success
 *            - 1 init failed
 * @note      TX is PA9 and RX is PA10
 */
uint8_t uart_init(uint32_t baud_rate);

/**
 * @brief  uart deint
 * @return status code
 *         - 0 success
 *         - 1 deinit
 * @note   none
 */
uint8_t uart_deinit(void);

/**
 * @brief     uart write data
 * @param[in] *buf points to a data buffer
 * @param[in] len is the data length
 * @return    status code
 *            - 0 success
 *            - 1 write failed
 * @note      none
 */
uint8_t uart_write(uint8_t *buf, uint16_t len);



#ifdef __cplusplus
}
#endif

#endif
