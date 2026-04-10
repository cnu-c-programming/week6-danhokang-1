#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};

    int (*array_pointer)[5] = &arr;
    int *pointer_array[5];

    printf("%zu\n", sizeof(array_pointer));
    printf("%zu\n", sizeof(pointer_array));

    for (int i=0; i<5; i++) {
        printf("%p\n", (void*)(*array_pointer + i));
    }

    for (int i=0; i<5; i++) {
        printf("%p\n", (void*)(pointer_array + i));
    }
}
