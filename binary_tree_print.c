#include <stdio.h>
#include "binary_trees.h"

/* Function prototype for printing binary trees */
void binary_tree_print(const binary_tree_t *tree);

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
    /* Example printing function for binary trees, customize as needed */
    if (tree == NULL)
        return;

    if (tree->left || tree->right)
        printf(".--(%03d)--.\n", tree->n);
    else
        printf("(%03d)\n", tree->n);

    if (tree->left != NULL)
        printf("(%03d)--. ", tree->left->n);
    if (tree->right != NULL)
        printf("      (%03d)--.\n", tree->right->n);
}
