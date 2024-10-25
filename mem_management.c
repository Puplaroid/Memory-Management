#include <stdio.h>
#include <stdlib.h>

void stack_grow(int *previous_address, int count, int max_depth) {
    int local_variable;
    printf("Stack address (layer %d): %p\n", count, (void*)&local_variable);

    if (previous_address != NULL) {
        if (&local_variable < previous_address)
            printf("Stack is growing downward\n");
        else
            printf("Stack is growing upward\n");
    }

    if (count < max_depth) {
        stack_grow(&local_variable, count + 1, max_depth);
    }
}

void heap_grow(int *previous_address, int count, int max_depth) {
    int *heap_var = (int *)malloc(sizeof(int));  
    printf("Heap address (layer %d): %p\n", count, (void*)heap_var);

    if (previous_address != NULL) {
        if (heap_var > previous_address)
            printf("Heap is growing upward\n");
        else
            printf("Heap is growing downward\n");
    }

    if (count < max_depth) {
        heap_grow(heap_var, count + 1, max_depth);
    }

    free(heap_var);
}

int main() {
    int var_nums = 5;
    printf("Demonstrating stack growth:\n");
    stack_grow(NULL, 1, var_nums);

    printf("\nDemonstrating heap growth:\n");
    heap_grow(NULL, 1, var_nums);

    return 0;
}
