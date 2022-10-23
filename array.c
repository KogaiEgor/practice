#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "fun.h"

void func(void) {
    srand(time(0));
    int i, arr[20];
    for (i = 0; i < 20; i++) {
        arr[i] = rand() % 101 - 50;
        if (arr[i] % 2 == 0) {
            int temp = arr[i];
            arr[i] = temp * temp;
        }
    }
    for(i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
}
