class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        map<char,int>mp;


        for(int i=0; i<magazine.length(); i++)
        {
            mp[magazine[i]]++;
        }


        for(int i=0; i<ransomNote.length(); i++)
        {
            if(mp.count(ransomNote[i])>=1){
                 mp[ransomNote[i]]--;
                if(mp[ransomNote[i]]<0)
                    return false;
            }

            else{
                return false;
            }
         }


       return true;
    }
};
