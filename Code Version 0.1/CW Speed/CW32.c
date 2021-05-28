#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include "serial_config.h"
#define CMD_START '\xFE'
#define CMD_END '\xFD'
#define RIG_ADDR '\x94'
#define CONTROL_ADDR '\xE0'
#define MAIN_CMD '\x14'
#define SUB_CMD0 '\x0C'
#define DATA1 '\x01'
#define DATA2 '\x60'
int main(void){
unsigned char msg0[9]={ CMD_START, CMD_START, RIG_ADDR, CONTROL_ADDR, MAIN_CMD, SUB_CMD0, DATA1, DATA2, CMD_END };
int serial_port;
speed_t baud=B9600;
serial_config(&serial_port, baud);	

write(serial_port, msg0, sizeof(msg0));
close(serial_port);
}