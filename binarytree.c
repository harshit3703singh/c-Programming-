/*#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;

    struct node*left,*right;


};
void inordertraversal(struct node*root)
{
    if(root==NULL)return;
    inordertraversal(root->left);
    printf("%d ->",root->data);
    inordertraversal(root->right);

}
*/

/*#include <stdio.h>
#include <stdlib.h>
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
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = 3;
    p->left = NULL;
    p->right = NULL;
    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p1->data = 8;
    p1->left = NULL;
    p1->right = NULL;
    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p2->data = 7;
    p2->left = NULL;
    p2->right = NULL;
    p->left=p1;
    printf("this is in order traversal of a tree %d");
}*/











#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

void inorderTraversal(struct node* root) {
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    printf("%d ->", root->data);
    inorderTraversal(root->right);
}

int main() {
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = 3;
    p->left = NULL;
    p->right = NULL;

    struct node* p1;
    p1 = (struct node*)malloc(sizeof(struct node));
    p1->data = 8;
    p1->left = NULL;
    p1->right = NULL;

    struct node* p2;
    p2 = (struct node*)malloc(sizeof(struct node));
    p2->data = 5;
    p2->left = NULL;
    p2->right = NULL;


    struct node* p3;
    p3 = (struct node*)malloc(sizeof(struct node));
    p3->data = 2;
    p3->left = NULL;
    p3->right = NULL;

    struct node* p4;
    p4 = (struct node*)malloc(sizeof(struct node));
    p4->data = 7;
    p4->left = NULL;
    p4->right = NULL;

    struct node* p5;
    p5 = (struct node*)malloc(sizeof(struct node));
    p5->data = 9;
    p5->left = NULL;
    p5->right = NULL;

    p->left = p1;
    p->right = p4;
    p1->left = p2;
    p1->right = p3;
    p4->left = p5;
    printf("Inorder Traversal: ");
    inorderTraversal(p);
    return 0;
}