#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 * @tree: Double pointer to the root node of the BST to insert the value
 * @value: The value to store in the node to be inserted
 * Return: Pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
    if (!tree)
        return (NULL);

    if (!*tree)
    {
        *tree = binary_tree_node(NULL, value);
        return (*tree);
    }

    if (value < (*tree)->n)
    {
        if (!(*tree)->left)
            return ((*tree)->left = binary_tree_node(*tree, value));
        else
            return (bst_insert(&((*tree)->left), value));
    }
    else if (value > (*tree)->n)
    {
        if (!(*tree)->right)
            return ((*tree)->right = binary_tree_node(*tree, value));
        else
            return (bst_insert(&((*tree)->right), value));
    }

    return (NULL); /* If value already exists, do nothing */
}
