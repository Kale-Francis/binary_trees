#include <stdio.h>
#include "binary_trees.h"

void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    printf("  .--(%03d)--.\n", tree->n);

    if (tree->left != NULL)
        printf("(%03d)--. ", tree->left->n);
    if (tree->right != NULL)
        printf("      (%03d)--.\n", tree->right->n);
}
