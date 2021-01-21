#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");
}
	return 0;
}

#include<climits>
Node* helper(int post[],int& size,int min, int max)
{
    if(size==0)
    {
        return NULL;
    }
    Node* root=new Node(post[size-1]);
    if(root->data>min&&root->data<max)
    {
        root->right=helper(post,--size,root->data,max);
        root->left=helper(post,--size,min,root->data);
        return root;
    }
    else
    {
        size++;
        return NULL;
    }
}

Node *constructTree (int post[], int size)
{

return helper(post,size,INT_MIN,INT_MAX);
}