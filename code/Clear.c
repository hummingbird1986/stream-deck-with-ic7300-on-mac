#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include "serial_config.h"
#define CMD_START '\xFE'
#define CMD_END '\xFD'
#define RIG_ADDR '\x94'
#define CONTROL_ADDR '\xE0'
#define MAIN_CMD '\x0F'
#define MAIN_CMD_RIT '\x21'
#define MAIN_CMD_XIT '\x21'
#define SUB_CMD0 '\x00'
#define SUB_CMD0_RIT '\x01'
#define SUB_CMD0_XIT '\x02'
#define DATAON '\x01'
#define DATAOFF '\x00'
int main(void){
unsigned char msg0[8]={ CMD_START, CMD_START, RIG_ADDR, CONTROL_ADDR, MAIN_CMD, SUB_CMD0, CMD_END };
unsigned char msg1[8]={ CMD_START, CMD_START, RIG_ADDR, CONTROL_ADDR, MAIN_CMD_RIT, SUB_CMD0_RIT, DATAOFF, CMD_END };
unsigned char msg2[8]={ CMD_START, CMD_START, RIG_ADDR, CONTROL_ADDR, MAIN_CMD_XIT, SUB_CMD0_XIT, DATAOFF, CMD_END };
int serial_port;
speed_t baud=B9600;
serial_config(&serial_port, baud);	
write(serial_port, msg0, sizeof(msg0));
write(serial_port, msg1, sizeof(msg1));
write(serial_port, msg2, sizeof(msg2));
close(serial_port);
}