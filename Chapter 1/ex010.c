#include <stdio.h>

int main() {

  int input;

  while((input = getchar()) != EOF){

    int escaped = 0;

    if(input == '\t'){
        putchar('\\');
        putchar('t');
        escaped = 1;
    }

    if(input == '\b'){
        putchar(92);
        putchar('b');
        escaped = 1;
    }

    if(input == '\\'){
        putchar('\\');
        putchar('\\');
        escaped = 1;
    }

    if(escaped == 0){
      putchar(input);
    }
  }
}