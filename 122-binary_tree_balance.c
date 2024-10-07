#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root of the tree to measure.
 *
 * Return: The balance factor of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root of the tree to measure.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return ((left_height > right_height ? left_height : right_height) + 1);
}
