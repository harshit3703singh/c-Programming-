#include <stdio.h>
#include <malloc.h>
struct node
{

    int data;
    struct node *left, *right;
};
void inordertraversal(struct node *root)
{
    if (root == NULL)
        return;
    inordertraversal(root->left);
    printf("%d ->", root->data);
    inordertraversal(root->right);
}
int main()
{
    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p1->data = 10;
    p1->left = NULL;
    p1->right = NULL;

    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p2->data = 20;
    p2->left = NULL;
    p2->right = NULL;

    struct node *p3;
    p3 = (struct node *)malloc(sizeof(struct node));
    p3->data = 30;
    p3->left = NULL;
    p3->right = NULL;

    struct node *p4;
    p4 = (struct node *)malloc(sizeof(struct node));
    p4->data = 40;
    p4->left = NULL;
    p4->right = NULL;

    struct node *p5;
    p5 = (struct node *)malloc(sizeof(struct node));
    p5->data = 50;
    p5->left = NULL;
    p5->right = NULL;

    struct node *p6;
    p6 = (struct node *)malloc(sizeof(struct node));
    p6->data = 60;
    p6->left = NULL;
    p6->right = NULL;

    struct node *p7;
    p7 = (struct node *)malloc(sizeof(struct node));
    p7->data = 70;
    p7->left = NULL;
    p7->right = NULL;

    struct node *p8;
    p8 = (struct node *)malloc(sizeof(struct node));
    p8->data = 80;
    p8->left = NULL;
    p8->right = NULL;

    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;
    p3->left = p6;
    p3->right = p7;
    p4->left = p8;
    printf("in order traversal \n\n");
    inordertraversal(p1);

    return 0;
}