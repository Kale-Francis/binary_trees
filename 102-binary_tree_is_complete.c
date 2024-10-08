#include "binary_trees.h"
#include <stdbool.h>

size_t count_nodes(const binary_tree_t *tree)
{
    if (!tree)
        return 0;
    return 1 + count_nodes(tree->left) + count_nodes(tree->right);
}

bool is_complete(const binary_tree_t *tree, size_t index, size_t number_nodes)
{
    if (!tree)
        return true;
    if (index >= number_nodes)
        return false;
    return is_complete(tree->left, 2 * index + 1, number_nodes) &&
           is_complete(tree->right, 2 * index + 2, number_nodes);
}

int binary_tree_is_complete(const binary_tree_t *tree)
{
    if (!tree)
        return 0;
    size_t node_count = count_nodes(tree);
    return is_complete(tree, 0, node_count);
}

