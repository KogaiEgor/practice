#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "fun.h"

void func(void) {
    srand(time(0));
    int i, j, mat[5][6];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            mat[i][j] = rand() % 101 - 50;
            if (mat[i][j] % 2 == 0) {
                int temp = mat[i][j];
                mat[i][j] = temp * temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}