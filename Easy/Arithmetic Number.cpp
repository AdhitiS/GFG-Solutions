class Solution{
public:
    int inSequence(int A, int B, int C){
        if(A==B)
        {
            return 1;
        }
        else if(C==0)
        {
            return 0;
        }
        int diff=B-A;
        if(diff<0&&C<0&&abs(diff)%abs(C)==0)
        {
            return 1;
        }
        else if(diff>0&&C>0&&diff%C==0)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};