#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include "serial_config.h"
#define CMD_START '\xFE'
#define CMD_END '\xFD'
#define RIG_ADDR '\x94'
#define CONTROL_ADDR '\xE0'
#define MAIN_CMD '\x07'
#define SUB_CMD0 '\xB0'
#define DATAON '\x01'
#define DATAOFF '\x00'
int main(void){
unsigned char msg0[8]={ CMD_START, CMD_START, RIG_ADDR, CONTROL_ADDR, MAIN_CMD, SUB_CMD0, CMD_END };
int serial_port;
speed_t baud=B9600;
serial_config(&serial_port, baud);	

write(serial_port, msg0, sizeof(msg0));
close(serial_port);
}