class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int>res;

        if(s.length()<p.length() || (s.length()==p.length() && p!= s))
            return res;



        map<char,int>mp1,mp2;

       for(int i=0;i<26;i++){
            mp1[i] = 0;
            mp2[i] = 0;
        }




        for(int i=0; i<p.size(); i++)
        {
            mp1[s[i]-'a']++;
            mp2[p[i]-'a']++;
        }

        for(int i=0; i<s.size()-p.size()+1; i++)
        {
            if(mp1==mp2)
                res.push_back(i);


              mp1[s[i]-'a']--;
              mp1[s[i+p.size()]-'a']++;

        }
       return res;
    }
};
