#include <stdio.h>
 #include <stdlib.h>
struct node /* A binary tree node has data, pointer to left child and a pointer to right child */
{
    int data;
    struct node* left;
    struct node* right;
};
/* Helper function that allocates a new node with the given data and NULL left and right pointers. */
struct node* newNode(int data)
{
    struct node* node = (struct node*)
    malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
/* Given a binary tree, print its nodes according to the "bottom-up" postorder traversal. */
void printPostorder(struct node* node)
{
    if (node == NULL)
    return;
    printPostorder(node->left); // first recur on left subtree
    printPostorder(node->right); // then recur on right subtree
    printf("%d ", node->data); } // now deal with the node
void printInorder(struct node* node) /* Given a binary tree, print its nodes in inorder*/
{
    if (node == NULL)
    return;
    printInorder(node->left); /* first recur on left child */
    printf("%d ", node->data); /* then print the data of node */
    printInorder(node->right); } /* now recur on right child */
void printPreorder(struct node* node) /* Given a binary tree, print its nodes in preorder*/
{
    if (node == NULL)
    return;
    printf("%d ", node->data); /* first print data of node */
    printPreorder(node->left); /* then recur on left sutree */
    printPreorder(node->right); } /* now recur on right subtree */
int main() /* Driver program to test above functions*/
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printf("\nPreorder traversal of binary tree is \n");
    printPreorder(root);
    printf("\nInorder traversal of binary tree is \n");
    printInorder(root);
    printf("\nPostorder traversal of binary tree is \n");
    printPostorder(root);
    getchar();
    return 0;
}