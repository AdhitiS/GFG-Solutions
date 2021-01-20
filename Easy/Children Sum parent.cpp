#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int isSumProperty(struct Node *node);

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string str;
        getline(cin, str);
        Node *root = buildTree(str);
        cout << isSumProperty(root) << "\n";

        
    }


    return 0;
}

// Return 1 if all the nodes in the tree satisfy the given property. Else return 0

int isSumProperty(Node *root)
{
 
 if(root==NULL)
 {
     return 1;
 }
 
 bool ansL=isSumProperty(root->left);
 bool ansR=isSumProperty(root->right);
 
 if(ansL==0||ansR==0)
 {
     return 0;
 }
 if(root->left==NULL&&root->right==NULL)
 {
     return 1;
 }
 else if(root->left==NULL)
 {
     if(root->right->data==root->data)
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }
 else if(root->right==NULL)
 {
     if(root->left->data==root->data)
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }
 else
 {
     if(root->left->data+root->right->data==root->data)
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }
}