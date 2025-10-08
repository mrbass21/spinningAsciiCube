#include <stdio.h>
#include <string.h>

#define WIDTH 15
#define HEIGHT 15

int asciiBackgroundChar = '#';

float viewBuffer[WIDTH * HEIGHT];

int main(int argc, char **argv) {

  printf("\x1b[2J");
  memset(viewBuffer, asciiBackgroundChar, WIDTH * HEIGHT);
  
  for(int k = 0; k <= WIDTH * HEIGHT; k++) {
    putchar((k%WIDTH == 0) ? viewBuffer[k]: 10);
  }
  
  return 0;
}
