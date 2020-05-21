class Solution {
public:
    int findComplement(int n) {


         int x=1;

        while(n>x)x=2*x+1;


       return n^x;
    }
};
