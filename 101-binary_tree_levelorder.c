#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal
 * @tree: Pointer to the root of the tree
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    /* Implement a queue using an array or linked list to track nodes */
    size_t height = binary_tree_height(tree) + 1;
    size_t level;

    for (level = 0; level < height; level++)
        binary_tree_level(tree, func, level);
}

/**
 * binary_tree_level - Executes a function on nodes at a specific level
 * @tree: Pointer to the root of the tree
 * @func: Pointer to the function to execute
 * @level: The level to execute on
 */
void binary_tree_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
    if (tree == NULL)
        return;

    if (level == 0)
        func(tree->n);
    else
    {
        binary_tree_level(tree->left, func, level - 1);
        binary_tree_level(tree->right, func, level - 1);
    }
}

