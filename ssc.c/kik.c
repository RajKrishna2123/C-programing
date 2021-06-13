#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Insert a node
struct node *insert(struct node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}
int main() {
  struct node *root = NULL;
  int num,data;
  printf("\n\t deepak arya \n");
  printf("\nHow many nodes you want to insert: ");
  scanf("%d",&num);
  for(int i=0;i<num;i++)
  {
    printf("\nEnter data for node %d: ",i+1);
    scanf("%d",&data);
    root = insert(root, data);
  }
  printf("\n\tmy SAP Id is 1000014934\n");
}