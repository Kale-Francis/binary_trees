#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor, or NULL if none
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (first == NULL || second == NULL)
        return (NULL);

    /* Climb up the tree until both nodes are at the same level */
    while (first != second)
    {
        if (first == NULL)
            return (NULL);
        if (second == NULL)
            return (NULL);

        /* Move up the tree */
        first = first->parent;
        second = second->parent;
    }

    return ((binary_tree_t *)first);
}

