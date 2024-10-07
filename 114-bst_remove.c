#include "binary_trees.h"

/**
 * bst_remove - Removes a node from a Binary Search Tree (BST).
 * @root: A pointer to the root of the tree.
 * @value: The value to be removed.
 *
 * Return: A pointer to the new root of the tree after removal.
 */
bst_t *bst_remove(bst_t *root, int value)
{
    bst_t *temp;

    if (root == NULL)
        return (NULL);

    if (value < root->n)
        root->left = bst_remove(root->left, value);
    else if (value > root->n)
        root->right = bst_remove(root->right, value);
    else
    {
        if (root->left == NULL)
        {
            temp = root->right;
            free(root);
            return (temp);
        }
        else if (root->right == NULL)
        {
            temp = root->left;
            free(root);
            return (temp);
        }

        temp = min_value_node(root->right);
        root->n = temp->n;
        root->right = bst_remove(root->right, temp->n);
    }
    return (root);
}

/**
 * min_value_node - Finds the node with the minimum value in a BST.
 * @node: A pointer to the node to start the search.
 *
 * Return: A pointer to the node with the minimum value.
 */
bst_t *min_value_node(bst_t *node)
{
    bst_t *current = node;

    while (current && current->left != NULL)
        current = current->left;

    return (current);
}
