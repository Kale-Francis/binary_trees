#include "binary_trees.h"

int height(const binary_tree_t *node)
{
    if (node == NULL)
        return 0;
    return 1 + height(node->left);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    int h = height(tree);
    return (height(tree->left) == h - 1 && height(tree->right) == h - 1);
}

