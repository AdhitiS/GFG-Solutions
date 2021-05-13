#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int *, int, int, int);
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        cout<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function

int partition(int a[],int l,int r)
{
    int i=l;
    for(int j=l;j<r;j++)
    {
        if(a[r]>=a[j])
        {
            swap(a[i],a[j]);
            i++;
        }
        
    }
    swap(a[i],a[r]);
    return i;


}

int kthSmallest(int arr[], int l, int r, int k)
{
    int m=rand()%(r-l+1);
    swap(arr[l+m],arr[r]);
    int ind=partition(arr,l,r);
    if(ind-l+1==k)
    {
        return arr[ind];
    }
    if(ind-l+1>k)
    {
        return kthSmallest(arr,l,ind-1,k);
    }  
    return kthSmallest(arr,ind+1,r,k-(ind-l+1));  
}