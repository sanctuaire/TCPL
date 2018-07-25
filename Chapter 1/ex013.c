#include <stdio.h>

int main(void) {


    //line counting

    int count, i, c;
    int array[5];

    i = c = count = 0;

    //lleno el array de 9s para no tener sorpresas.

    for (i = 0; i < 5; ++i)
        array[i] = 9;

    i = 0;
    while ( ((c = getchar()) != EOF) && i < 5) {

        if( c != ( ' ' || '\t' || '\n'))
            ++count;
        else {
            array[i] = count;
            ++i; }
    }
    for(i = 0; i < 5; ++i)
        printf("%d\n", array[i]);

}