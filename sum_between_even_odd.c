#include "sum_between_even_odd.h"
#include <stdio.h>
#include <stdlib.h>
#include "index_first_even.h"
#include "index_last_odd.h"

int sum_between_even_odd(int arr[], int size, int first_even, int last_odd) {
    int sum = 0;
    for (int i = first_even; i < last_odd; i++) {
        sum += abs(arr[i]);
    }
    return sum;
}
