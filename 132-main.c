#include "binary_trees.h"

int main(void)
{
    heap_t *tree;
    int array[] = { 79, 47, 68, 87, 84, 91, 21 };
    size_t size = sizeof(array) / sizeof(array[0]);

    tree = array_to_heap(array, size);
    return (0);
}
