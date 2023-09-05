#include <stdio.h>


int main(void) {
    int array[] = {5, 2, 7, 4, 1, 6, 3, 0};
    int size = 8;
    int min, temp;

    for(int i = 0; i < (size - 1); i++) {
        min = i;
        for(int j = i; j < size; j++) {
            if(array[j] < array[min]) {
                min = j;
            }
        }

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}