#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(void)
{
    Node *root = malloc(sizeof(Node));
    puts("Inserting...");
	printf("%d\n", insert(root, 40)->data);
	printf("%d\n", insert(root, 29)->data);
	printf("%d\n", insert(root, 12)->data);
	printf("%d\n", insert(root, 89)->data);
	printf("%d\n", insert(root, 1)->data);
	printf("%d\n", insert(root, 35)->data);
	printf("%d\n", insert(root, 20)->data);
	printf("%d\n", insert(root, 99)->data);
	printf("%d\n", insert(root, 41)->data);
	printf("%d\n", insert(root, 34)->data);
	printf("%d\n", insert(root, 89)->data);

    puts("Finding...");
    printf("Not Found %d\n", find(root, 30));
    printf("Found %d\n", find(root, 40));
    printf("Found %d\n", find(root, 20));
    printf("Found %d\n", find(root, 99));
    printf("Not Found %d\n", find(root, 120));

    puts("Sorting....");
    in_order(root);
    printf("\n");
}
