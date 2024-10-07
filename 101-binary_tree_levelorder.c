#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);
    int front = 0, rear = 0;

    queue[rear++] = (binary_tree_t *)tree;

    while (front < rear)
    {
        binary_tree_t *node = queue[front++];

        func(node->n);

        if (node->left)
            queue[rear++] = node->left;
        if (node->right)
            queue[rear++] = node->right;
    }

    free(queue);
}
