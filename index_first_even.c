#include "index_first_even.h"
#include <stdio.h>

int index_first_even(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            return i;
        }
    }
    return -1;
}
