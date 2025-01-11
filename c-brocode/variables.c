#include <stdio.h>
int main(){
  int x; // declataion
  x = 5; // initialization

  int y = 10;   // declaration + initialization

  int age = 22;
  float temperature = 32.5; // floating point number
  char name[] = "nevin"; // array of charecter 
  
  
  
  
  printf("hello %s\n", name); // to print characters we place a placeholder with % followed by s 
  printf("you are %d year old\n",age); // to print integer values we do %d
  printf("current temperature is %f\n", temperature); // to print floating point values we do %f
  return 0;
}