#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(void)
{
    Node *root = malloc(sizeof(Node));
    puts("Inserting...");
	insert(root, 10);
	insert(root, 10);
	insert(root, 5);
	insert(root, 15);
	insert(root, 13);
    printf("%d\n", root->data);
    printf("%d\n", root->left->data);
    printf("%d\n", root->right->data);
    printf("%d\n", root->right->left->data);

    puts("Finding...");
    printf("Found %d\n", find(root, 10));
    printf("Found %d\n", find(root, 15));
    printf("Found %d\n", find(root, 5));
    printf("Found %d\n", find(root, 13));
    printf("Not Found %d\n", find(root, 120));
}
