#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Preorder traversal: Root -> Left -> Right
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Inorder traversal: Left -> Root -> Right
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Postorder traversal: Left -> Right -> Root
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    
    struct Node* root = newNode(1);
    root->left = newNode(12);
    root->right = newNode(9);
    root->left->left = newNode(5);
    root->left->right = newNode(6);

    printf("**Preorder traversal:** ");
    preorder(root);
    printf("\n");

    printf("**Inorder traversal:** ");
    inorder(root);
    printf("\n");

    printf("**Postorder traversal:** ");
    postorder(root);
    printf("\n");

    return 0;
}