class Solution{   
public:
    int minimumStep(int n){
        int count=0;
        while(n>1)
        {
            if(n%3==0)
            {
                n=n/3;
                count++;
            }
            else
            {
                n--;
                count++;
            }
        }
        return count;
    }
};