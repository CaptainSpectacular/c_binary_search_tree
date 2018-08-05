#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(void)
{
    Node *root = malloc(sizeof(Node));
	insert(root, 10);
	insert(root, 10);
	insert(root, 5);
	insert(root, 15);
	insert(root, 13);
    printf("%d\n", root->data);
    printf("%d\n", root->left->data);
    printf("%d\n", root->right->data);
    printf("%d\n", root->right->left->data);
}
