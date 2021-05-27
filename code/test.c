#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include "serial_config.h"

#define CMD_START '\xFE'
#define CMD_END '\xFD'
#define RIG_ADDR '\x94'
#define CONTROL_ADDR '\xE0'
#define MAIN_CMD '\x21'
#define SUB_CMD0 '\x01'
#define DATAON '\x01'
#define DATAOFF '\x00'
int main(void){
FILE *check;
check=fopen("checkfile", "r");
if(check==NULL){
   fopen("checkfile", "w+");
   fclose(check);
}
else{}
int test;
test=getw(check);
fclose(check);
unsigned char msg0[8]={ CMD_START, CMD_START, RIG_ADDR, CONTROL_ADDR, MAIN_CMD, SUB_CMD0, DATAOFF,  CMD_END };
unsigned char msg1[8]={ CMD_START, CMD_START, RIG_ADDR, CONTROL_ADDR, MAIN_CMD, SUB_CMD0, DATAON,  CMD_END };
int serial_port;
speed_t baud=B9600;
serial_config(&serial_port, baud);
check=fopen("checkfile", "w+");
if(test==0){
   write(serial_port, msg1, sizeof(msg1)); 
   int i=1;
   putw(i, check);
}
else{
write(serial_port, msg0, sizeof(msg0));
int i=0;
putw(i, check);
}
fclose(check);
close(serial_port);
return 0;
}
