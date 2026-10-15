#include <stdio.h>
#include <stdlib.h>

#define MAX 3  // Order = 4 (max 3 keys per node)

struct BNode {
    int keys[MAX];
    int n;           // Number of keys
    struct BNode* child[MAX+1];  // Max 4 children
    int leaf;        // 1 if leaf node
};

struct BNode* createNode(int leaf) {
    struct BNode* node = (struct BNode*)malloc(sizeof(struct BNode));
    node->leaf = leaf;
    node->n = 0;
    return node;
}

void traverse(struct BNode* node) {
    int i;
    for(i = 0; i < node->n; i++) {
        if(node->leaf == 0) {
            traverse(node->child[i]);
        }
        printf("%d ", node->keys[i]);
    }
    if(node->leaf == 0) {
        traverse(node->child[i]);
    }
}

void insert(struct BNode* root, int key) {
    struct BNode* node = root;
    
    // Go to leaf node
    while(node->leaf == 0) {
        int i = 0;
        while(i < node->n && key > node->keys[i]) {
            i++;
        }
        node = node->child[i];
    }
    
    // Insert in leaf
    int i = node->n - 1;
    while(i >= 0 && key < node->keys[i]) {
        node->keys[i+1] = node->keys[i];
        i--;
    }
    node->keys[i+1] = key;
    node->n++;
}

int main() {
    struct BNode* root = createNode(1);  // Leaf root
    
    // Insert sample data
    int keys[] = {10, 20, 5, 15, 30};
    for(int i = 0; i < 5; i++) {
        insert(root, keys[i]);
        printf("Inserted %d\n", keys[i]);
    }
    
    printf("\nB-Tree Inorder: ");
    traverse(root);
    printf("\n");
    
    return 0;
}