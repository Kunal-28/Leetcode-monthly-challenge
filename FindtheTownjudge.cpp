class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {

        map<int,int>mp;

        if(trust.size()==0)
            return 1;


        for(int i=0; i<trust.size(); i++){
            if(mp.count(trust[i][1])==0){
                mp.insert({trust[i][1],1});
            }

            else{
                mp[trust[i][1]]++;
            }

        }


         for(int i=0; i<trust.size(); i++)
        {
            mp[trust[i][0]]--;
        }



        for(auto x: mp){
            if(x.second==N-1){
                return x.first;
            }
        }


     return -1;
    }
};
