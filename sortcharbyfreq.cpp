class Solution {
public:

 map<char,int> freq;
    string frequencySort(string s) {
        for(int i=0;i<s.length();i++)
            freq[s[i]]++;
        string ans;
        char c;
        int max=-1;
        while(ans.length()!=s.length())
        {
            for(auto i:freq)
            {
                if(i.second>max)
                {
                   max=i.second;
                    c=i.first;
                }
            }
            while(max>0)
            {
                ans+=c;
                freq[c]--;
                max--;
            }
        }
        return ans;
    }
};

/* */
