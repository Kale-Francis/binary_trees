#include "binary_trees.h"

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    binary_tree_t *new_root;

    if (!tree || !tree->right)
        return tree;

    new_root = tree->right;
    tree->right = new_root->left;
    new_root->left = tree;

    return new_root;
}

