#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int number;
  struct node *left;
  struct node *right;
} node;

int print_tree(node *tree);

int main(void)
{
  node *tree = NULL;

  node *n = malloc(sizeof(node));

  if (n == NULL)
  {
    return 1;
  }

  n->number = 2;

  n->left = NULL;
  n->right = NULL;

  tree = n;

  n = malloc(sizeof(node));

  if (n == NULL)
  {
    // free(tree);
    return 1;
  }

  n->number = 1;
  n->left = NULL;
  n->right = NULL;

  tree->left = n;

  n = malloc(sizeof(node));

  if (n == NULL)
  {
    // free(tree->left);
    // free(tree);
    return 1;
  }

  n->number = 3;
  n->left = NULL;
  n->right = NULL;

  tree->right = n;

  print_tree(tree);
}

int print_tree(node *tree)
{
  if (tree == NULL)
  {
    return 1;
  }

  print_tree(tree->left);
  printf("%i\n", tree->number);
  print_tree(tree->right);

  return 0;
}