#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    int height = 0, node_count = 0;
    const binary_tree_t *temp = tree;

    // Calculate the height of the tree
    while (temp)
    {
        height++;
        temp = temp->left;
    }

    // Function to count nodes in the tree
    void count_nodes(const binary_tree_t *node)
    {
        if (node)
        {
            node_count++;
            count_nodes(node->left);
            count_nodes(node->right);
        }
    }

    count_nodes(tree);
    return (node_count == (1 << height) - 1);
}
