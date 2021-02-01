
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 

Node* addOne(Node *head);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        
        head = addOne(head);
        printList(head); 
    }
    return 0; 
} 


int add(Node* head)
{
    if(head==NULL)
    {
        return 1;
    }
    int carry=add(head->next);
    int sum=head->data+carry;
    carry=sum/10;
    head->data=sum%10;
    return carry;
    
}

Node* addOne(Node *head) 
{
    if(head==NULL)
    {
        return head;
    }
    int carry=add(head);
    if(carry==0)
    {
        return head;
    }
    
    Node* temp=new Node(carry);
    temp->next=head;
    return temp;

    
}