#include "binary_trees.h"
#include <stdio.h>

/* Utility function to print binary tree in 2D */
void binary_tree_print(const binary_tree_t *tree)
{
    if (!tree)
        return;

    if (tree->right)
    {
        binary_tree_print(tree->right);
        printf("    ");
    }

    printf("(%03d)\n", tree->n);

    if (tree->left)
    {
        printf("    ");
        binary_tree_print(tree->left);
    }
}
