#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

Node *insert(Node *node, int data)
{
	if (node->data == 0)
	{
		node->data = data;
		node->left = malloc(sizeof(Node));
		node->right = malloc(sizeof(Node));
	}
	else if (data > node->data)
	{
		return insert(node->right, data);
	}
	else if (data < node->data)
	{
		return insert(node->left, data);
	}
	else
	{
		puts("Node already exists");
	}

	return node;
}

int find(Node *node, int data)
{
    if (node == NULL)
    {
        return -1;
    }
    else if (node->data == data)
    {
        return node->data;
    }
    else if (data < node->data)
    {
        return find(node->left, data);
    }
    else if (data > node->data)
    {
        return find(node->right, data);
    }
}

void in_order(Node *root)
{
    if (root->data == 0)
    {
        return;
    }

    in_order(root->left);
    printf("%d ", root->data);
    in_order(root->right);
}
