#include "sum_before_even_and_after_odd.h"
#include <stdio.h>
#include <stdlib.h>
#include "index_first_even.h"
#include "index_last_odd.h"

int sum_before_even_and_after_odd(int arr[], int size, int first_even, int last_odd) {
    int sum = 0;
    for (int i = 0; i < first_even; i++) {
        sum += abs(arr[i]);
    }
    for (int i = last_odd; i < size; i++) {
        sum += abs(arr[i]);
    }
    return sum;
}
