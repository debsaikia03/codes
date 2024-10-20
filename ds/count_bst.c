#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* new_node(int x) 
{
  struct node *node;
  node = malloc(sizeof(struct node));
  node->data = x;
  node->left = NULL;
  node->right = NULL;
}

struct node* insert(struct node *root, int n)
{
    if(root == NULL)
      return new_node(n);
    
    else if(n > root->data)
        root->right = insert(root->right, n);
    
    else
        root->left = insert(root->left, n);

    return root;
}

void inorder(struct node *root) 
{
  if (root != NULL)
  {
    inorder(root -> left);
    printf("%d ", root -> data); 
    inorder(root -> right); 
  }

  else
    return;
}

int count(struct node *root)
{
  if(root == NULL)
    return 0;
  
  int l = count(root->left);
  int r = count(root->right);

  return(l+r+1);
}

int main()
{
    struct node *root;

    int n,m;
    
    printf("Enter no. of node elements: ");
    scanf("%d",&n);

    printf("Enter root element: ");
    scanf("%d",&m);

    root = new_node(m);

    printf("Enter other %d node elements:\n",n-1);

    for(int i=0 ; i<n-1; i++)
    {
        int x;
        printf("Enter for element %d: ",i+1);
        scanf("%d",&x);
        insert(root, x);
    }
     
    printf("BST in inorder:\n");
    inorder(root);

    int c = count(root);
    
    printf("\nNo. of nodes in the BST: %d",c);
}