#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root of the tree to check.
 *
 * Return: 1 if the tree is perfect, and 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    int depth = tree_depth(tree);
    return (is_perfect(tree, depth, 0));
}

/**
 * tree_depth - Measures the depth of the tree.
 * @node: A pointer to the root of the tree to measure.
 *
 * Return: The depth of the tree.
 */
int tree_depth(const binary_tree_t *node)
{
    int depth = 0;
    while (node)
    {
        depth++;
        node = node->left;
    }
    return (depth);
}

/**
 * is_perfect - Helper function to check if a tree is perfect.
 * @node: A pointer to the node to check.
 * @depth: The depth of the tree.
 * @level: The current level.
 *
 * Return: 1 if the tree is perfect, and 0 otherwise.
 */
int is_perfect(const binary_tree_t *node, int depth, int level)
{
    if (node == NULL)
        return (1);

    if (node->left == NULL && node->right == NULL)
        return (depth == level + 1);

    if (node->left == NULL || node->right == NULL)
        return (0);

    return (is_perfect(node->left, depth, level + 1) &&
            is_perfect(node->right, depth, level + 1));
}
