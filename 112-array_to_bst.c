#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: Pointer to the first element of the array to be converted
 * @size: Number of elements in the array
 * Return: Pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
    bst_t *tree = NULL;
    size_t i;

    for (i = 0; i < size; i++)
    {
        bst_insert(&tree, array[i]);
    }

    return (tree);
}
