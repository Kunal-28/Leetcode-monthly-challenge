class Solution {
public:
    bool isPerfectSquare(long long num) {

        if(num==1|| num==2|| num==3)
            return true;


        for(long long i=2; i*i<=num; i++)
        {
            if(i*i==num)
                return true;
        }
     return false;
    }
};
