#include <bits/stdc++.h>
using namespace std;

#define ALPHABET_SIZE (26)

// Converts key current character into index
// use only 'a' through 'z' and lower case
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];
    bool isLeaf;
};

struct TrieNode *getNode(void) {
    struct TrieNode *pNode = NULL;

    pNode = (struct TrieNode *) malloc(sizeof(struct TrieNode));

    if (pNode) {
        int i;

        pNode->isLeaf = false;

        for (i = 0; i < ALPHABET_SIZE; i++) pNode->children[i] = NULL;
    }

    return pNode;
}

void insert(struct TrieNode *, string);

bool search(struct TrieNode *, string);

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string keys[n];

        for (int i = 0; i < n; i++) {
            cin >> keys[i];
        }

        struct TrieNode *root = getNode();
        // Construct trie
        for (int i = 0; i < n; i++) insert(root, keys[i]);

        string abc;

        cin >> abc;
        // Search for different keys

        if (search(root, abc))
            cout << "1\n";
        else
            cout << "0\n";
        // char ex;
        // cin >> ex;
        // cout << ex << "\n";
    }
    return 0;
}

// root : root node of the trie
// key : string to be inserted into the trie
// If not present, inserts key into trie
// If the key is prefix of trie node, just marks leaf node

void insert(struct TrieNode *root, string key) {
    struct TrieNode* curr=root;
    for(int i=0;i<key.size();i++)
    {
        int index=key[i]-'a';
        if(!curr->children[index])
        {
            curr->children[index]=getNode();
        }
        curr=curr->children[index];
    }
    curr->isLeaf=true;
    
}

// root : root node of the trie
// key : string to search in the trie
// Returns true if key presents in trie, else false

bool search(struct TrieNode *root, string key) {
  
    
    struct TrieNode* curr=root;
    for(int i=0;i<key.size();i++)
    {
        int index=key[i]-'a';
        if(!curr->children[index])
        {
            return false;
        }
        curr=curr->children[index];
    }
    
    return (curr!=NULL&&curr->isLeaf);
    
}