#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

Node insert(Node *node, int data)
{
	if (node->data == 0)
	{
		node->data = data;
		node->left = malloc(sizeof(Node));
		node->right = malloc(sizeof(Node));
	}
	else if (data > node->data)
	{
		insert(node->right, data);
	}
	else if (data < node->data)
	{
		insert(node->left, data);
	}
	else
	{
		puts("Node already exists");
	}

	return *node;
}
