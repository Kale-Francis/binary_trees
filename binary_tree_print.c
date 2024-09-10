#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * print_tree - Recursive function to print the binary tree
 * @tree: Pointer to the root of the tree
 * @level: Current level in the tree
 * @is_left: Whether the node is a left child
 * @spaces: The amount of spaces before printing the node
 */
static void print_tree(const binary_tree_t *tree, int level, int is_left, int spaces)
{
    if (tree == NULL)
        return;

    print_tree(tree->right, level + 1, 0, spaces + 8);

    printf("%*s", spaces, "");
    if (is_left)
        printf(".--(");
    else
        printf(".--(");
    printf("%03d)", tree->n);
    if (is_left)
        printf("--.");
    else
        printf("--.");
    printf("\n");

    print_tree(tree->left, level + 1, 1, spaces + 8);
}

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root of the tree
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;
    print_tree(tree, 0, 0, 0);
}
