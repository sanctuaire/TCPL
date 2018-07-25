#include <stdio.h>

int main(void) {

    int tab, blank, newline;
    tab = blank = newline = 0;

    int nc;

    while ( (nc = getchar()) != EOF){

    if (nc == '\t')
        ++tab;
    if (nc == ' ')
        ++blank;
    if (nc == '\n')
        ++newline;
    }

    printf("Tab: %d\n", tab);
    printf("Blank: %d\n", blank);
    printf("Newline: %d\n", newline);

    return 0;
}