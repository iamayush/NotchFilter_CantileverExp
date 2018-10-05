/*
 * f28377sSerial.h
 *
 * copied from f28377Dserial.h
 *
 *  Created on: Jul 14, 2015
 *      Author: fujinam2
 */

#ifndef F28377SSERIAL_H_
#define F28377SSERIAL_H_

typedef struct serial_s {
	volatile struct buffer_s TX;
	volatile struct SCI_REGS *sci;
	void (*got_data)(struct serial_s *s, char data);
} serial_t;

extern serial_t SerialA;
extern serial_t SerialB;
extern serial_t SerialC;

err_t init_serial(serial_t *s, Uint32 baud, void (*got_func)(serial_t *s, char data));
void uninit_serial(serial_t *s);
Uint16 serial_send(serial_t *s, char *data, Uint16 len);
Uint16 serial_printf(serial_t *s, char *fmt, ...);
void UART_printfLine(unsigned char line, char *format, ...);
void UART_vprintfLine(unsigned char line, char *format, va_list ap);




#endif /* F28377SSERIAL_H_ */
