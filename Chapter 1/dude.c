#include <stdio.h>

#define MAX_LENGTH 20

#define IN 1
#define OUT 2
#define DONE 3

int main(void)
{
        int nlength[MAX_LENGTH];
        int c, l, state;

        for (c = 0; c < MAX_LENGTH; ++c) {
                nlength[c] = 0;
        }

        state = OUT;
        l = 0;  // word length

        while (state != DONE) {
                c = getchar();

                if (c == ' ' || c == '\n' || c == '\t' || c == EOF) {
                        if (state == IN) {
                                state = OUT;
                                if (l >= MAX_LENGTH) {
                                        nlength[MAX_LENGTH-1] += 1;
                                } else {
                                        nlength[l-1] += 1;
                                }
                                l = 0;
                        }
                        if (c == EOF) {
                                state = DONE;
                        }
                } else {
                        state = IN;
                        ++l;
                }
        }

        puts("Horizontal Histogram of Word Lengths");
        puts("------------------------------------");
        for (c = 0; c < MAX_LENGTH; ++c) {
                printf("%2d|", c + 1);
                if (nlength[c] > 0) {
                        for (l = 1; l <= nlength[c]; ++l) {
                                printf("=");
                        }
                        printf(" %d", nlength[c]);
                }
                printf("\n");
        }

        return 0;
}