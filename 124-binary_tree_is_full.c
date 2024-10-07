#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root of the tree to check.
 *
 * Return: 1 if the tree is full, and 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (1);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left && tree->right)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    return (0);
}
