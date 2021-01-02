#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }
// } Driver Code Ends

void MyQueue:: push(int x)
{
        // Your Code
        if(front==NULL)
        {
            front=new QueueNode(x);
            rear=front;
        }
        else
        {
            rear->next=new QueueNode(x);
            rear=rear->next;
        }
}

int MyQueue :: pop()
{
        // Your Code
        if(front==NULL)
        {
            return -1;
        }
        int x=front->data;
        front=front->next;
        return x;
}
