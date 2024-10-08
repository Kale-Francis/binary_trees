#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* We can use a level-order traversal to check completeness */
    size_t index = 0;
    size_t nodes = binary_tree_size(tree);

    return (is_complete(tree, index, nodes));
}

/**
 * is_complete - Helper function to check completeness using index
 * @tree: Pointer to the root of the tree
 * @index: The current node index
 * @nodes: The total number of nodes in the tree
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int is_complete(const binary_tree_t *tree, size_t index, size_t nodes)
{
    if (tree == NULL)
        return (1);

    /* If index assigned to the node is more than the number of nodes, it's not complete */
    if (index >= nodes)
        return (0);

    return (is_complete(tree->left, 2 * index + 1, nodes) &&
            is_complete(tree->right, 2 * index + 2, nodes));
}

