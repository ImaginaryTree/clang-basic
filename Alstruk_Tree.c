#include <stdio.h>
#include <stdlib.h>

struct node{
    int item;
    struct node *left;
    struct node *right;
};

void pre_order_traversal(struct node *root){
    if (root == NULL){
        return;
    }
    printf("%i ->", root->item);
    pre_order_traversal(root->left);
    pre_order_traversal(root->right);
}

void in_order_traversal(struct node *root){
    if (root == NULL){
        return;
    }
    in_order_traversal(root->left);
    printf("%i ->", root->item);
    in_order_traversal(root->right);
}

void post_traversal(struct node *root){
    if (root == NULL){
        return;
    }
    post_traversal(root->left);
    post_traversal(root->right);
    printf("%i ->", root->item);
}

struct node *createNode(int value){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
};

struct node *insertright(struct node *root, int value){
    root->right = createNode(value);
    return root->right;
};
struct node *insertleft (struct node *root, int value){
    root->left = createNode(value);
    return root->left;
};

int main()
{
    struct node *root =createNode(1);
    insertleft(root,12);
    insertright(root,9);

    insertright(root->left,5);
    insertleft(root->left,2);

    insertright(root->right,8);
    insertleft(root->right,6);

    printf("Inorder Traversal\n");
    in_order_traversal(root);

    printf("\nPreorder Traversal\n");
    pre_order_traversal(root);

    printf("\nPostorder Traversal\n");
    post_traversal(root);
}