#include <stdio.h>
#include<stdbool.h>

int main(){
  char a = 'c'; // single caracter %c
  char b[] = "Bro"; // array of characters %s

  float c = 33.333333; // 4 bytes 6-7 digits %f
  double d = 33.33333333333333; // 8 bytes 15-16 digits %lf

  bool e = true;  // 1 byte true or false %d

  char f = 100; // 1 byte -128 to 127 %d or %c 
  unsigned char g = 225; // 1byte 0 to +225 %d or %c

  short int h = 32134; // 2 byte -32768 to  32767 %d
  unsigned short int i = 65535; // 2 byte 0 to 65535 %d

  int j = 1234567890; // 4 byte -2^31 to 2^31-1 %d
}
