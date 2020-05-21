class Solution {
public:
    int numJewelsInStones(string J, string S) {

        int res=0;


        unordered_map<char,int>mp;

        for(int i=0;  i<J.size(); i++)
        {
            mp[J[i]]++;
        }


        for(int i=0 ;i<S.size(); i++){

            if(mp.count(S[i])>=1){
                res++;
            }

        }


      return res;
    }
};
