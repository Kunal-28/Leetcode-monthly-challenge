class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {


        int v=0;


        for(auto i: nums){

            v=v^i;
        }


    return v;
   }
};
