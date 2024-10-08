#include "binary_trees.h"

bst_t *bst_insert(bst_t **tree, int value)
{
    bst_t *new_node;
    bst_t *current;
    bst_t *parent;

    if (!tree)
        return NULL;

    current = *tree;
    parent = NULL;

    while (current)
    {
        parent = current;
        if (value < current->n)
            current = current->left;
        else if (value > current->n)
            current = current->right;
        else
            return NULL; // No duplicate values
    }

    new_node = binary_tree_node(parent, value);
    if (!new_node)
        return NULL;

    if (!parent)
        *tree = new_node; // Tree was empty
    else if (value < parent->n)
        parent->left = new_node;
    else
        parent->right = new_node;

    return new_node;
}

