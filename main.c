#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(void)
{
    Node *root = malloc(sizeof(Node));
    root->data = 10;
    printf("%d\n", root->data);
}
