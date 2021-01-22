#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}


bool isPalindrome(Node *head)
{
   
    if(head==NULL||head->next==NULL)
    {
        return true;
    }
    Node* temp=head;
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    temp=slow->next;
    slow->next=NULL;
    
    Node* prev=NULL;
    Node* curr=temp;
    Node* nex=temp->next;
    
    while(curr!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=nex;
        if(nex==NULL)
        {
            break;
        }
        nex=nex->next;
    }
    
    while(head!=NULL&&prev!=NULL)
    {
        if(head->data!=prev->data)
        {
            return false;
        }
        head=head->next;
        prev=prev->next;
    }
    return true;
}