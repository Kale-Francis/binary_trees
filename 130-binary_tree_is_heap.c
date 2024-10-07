#include "binary_trees.h"

/**
 * binary_tree_is_complete - Helper function to check if binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * @index: Current index in the array representation
 * @number_nodes: Total number of nodes in the tree
 * Return: 1 if tree is complete, otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree, int index, int number_nodes)
{
    if (tree == NULL)
        return (1);

    if (index >= number_nodes)
        return (0);

    return (binary_tree_is_complete(tree->left, 2 * index + 1, number_nodes) &&
            binary_tree_is_complete(tree->right, 2 * index + 2, number_nodes));
}

/**
 * binary_tree_is_heap - Checks if a binary tree is a valid Max Binary Heap
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if tree is a valid Max Binary Heap, otherwise 0
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    int number_nodes = binary_tree_size(tree);
    return binary_tree_is_complete(tree, 0, number_nodes);
}
