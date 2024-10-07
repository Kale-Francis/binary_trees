#include "binary_trees.h"

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL Tree.
 * @tree: A pointer to the root of the tree to check.
 *
 * Return: 1 if the tree is a valid AVL Tree, and 0 otherwise.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (is_avl(tree, NULL, NULL));
}

/**
 * is_avl - Helper function to validate if tree is AVL.
 * @tree: A pointer to the node being checked.
 * @min: A pointer to the minimum value allowed.
 * @max: A pointer to the maximum value allowed.
 *
 * Return: 1 if valid AVL tree, otherwise 0.
 */
int is_avl(const binary_tree_t *tree, const binary_tree_t *min, const binary_tree_t *max)
{
    int left_height, right_height;

    if (tree == NULL)
        return (1);

    if (min && tree->n <= min->n)
        return (0);
    if (max && tree->n >= max->n)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (abs(left_height - right_height) > 1)
        return (0);

    return (is_avl(tree->left, min, tree) &&
            is_avl(tree->right, tree, max));
}
