#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
    binary_tree_t *new_root;

    if (tree == NULL || tree->left == NULL)
        return (tree);

    new_root = tree->left;
    tree->left = new_root->right;
    new_root->right = tree;

    return (new_root);
}
