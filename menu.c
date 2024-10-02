#include <stdio.h>
#include "index_first_even.h"
#include "index_last_odd.h"
#include <stdio.h>
#include <stdlib.h>
#include "sum_before_even_and_after_odd.h"
#include "index_first_even.h"

int main() {
    int string;
    scanf("%d", &string);

    int arr[100];
    int size = 0;
    char c;

    while (scanf("%d%c", &arr[size], &c) == 2) {
        size++;
        if (c == '\n') {
            break;
        }
    }

    int first_even = index_first_even(arr, size);
    int last_odd = index_last_odd(arr, size);

    switch (string) {
    case 0:
        printf("%d\n", first_even);
        break;
    case 1:
        printf("%d\n", last_odd);
        break;
    case 2:
        printf("%d\n", sum_between_even_odd(arr, size, first_even, last_odd));
        break;
    case 3:
        printf("%d\n", sum_before_even_and_after_odd(arr, size, first_even, last_odd));
        break;
    default:
        printf("Данные некорректны\n");
        break;
    }

    return 0;
}
