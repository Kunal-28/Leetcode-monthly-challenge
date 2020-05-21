class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {

    int sum=0,max1=A[0],min1=A[0],t1=0,t2=0;

        for(int i=0; i<A.size(); i++)
        {
            sum=sum+A[i];
            t1=A[i]+max(0,t1);
            t2=A[i]+min(0,t2);

            max1=max(max1,t1);
            min1=min(min1,t2);
        }


        return max1>0?max(max1,sum-min1):max1;
    }
};
