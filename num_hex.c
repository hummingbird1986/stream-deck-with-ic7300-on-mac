#include <stdio.h>

void NumToHex (int *year, int *month, int *date, int *hour, int *minute){

unsigned char NumConvert[60]={'\x00', '\x01', '\x02','\x03', '\x04', '\x05', '\x06', '\x07', '\x08', '\x09', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x20', '\x21', '\x22', '\x23', '\x24', '\x25', '\x26', '\x27', '\x28', '\x29', '\x30', '\x31', '\x32', '\x33', '\x34', '\x35', '\x36', '\x37', '\x38', '\x39', '\x40', '\x41', '\x42', '\x43', '\x44', '\x45', '\x46', '\x47', '\x48', '\x49', '\x50', '\x51', '\x52', '\x53'     , '\x54', '\x55', '\x56', '\x57', '\x58', '\x59' };

*year=NumConvert[*year];
*month=NumConvert[*month];
*date=NumConvert[*date];
*hour=NumConvert[*hour];
*minute=NumConvert[*minute];
}
