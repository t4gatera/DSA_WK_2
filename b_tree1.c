#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
int value;
struct Node* left;
struct Node* right;
}Node;

Node* createNode(int val){
Node* node = (Node *)malloc(sizeof(Node));
node->value = val;
node->left = NULL;
node->right = NULL;
return node;
}

void inOrderTraversal(Node *node){
if(node==NULL)
return;
inOrderTraversal(node->left);
printf("%d ", node->value);
inOrderTraversal(node->right);
}

void main(){
Node* a = createNode(9);
Node* b = createNode(4);
Node* c = createNode(5);
Node* d = createNode(6);
Node* e = createNode(3);
Node* f = createNode(7);
Node* g = createNode(3);
Node* h = createNode(8);

a->left = b;
a->right = c;
b->left = d;
b->right = e;
c->left = f;
c->right = g;
d->left = h;

inOrderTraversal(a);
}
