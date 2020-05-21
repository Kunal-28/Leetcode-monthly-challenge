class Solution {
public:
    bool checkInclusion(string s2, string s1) {



        if(s2.length()>s1.length())
            return false;


        if(s1.length()==s2.length()){
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2)
                return true;

            else{
                return false;
            }
        }

        map<char,int>mp1,mp2;


       for(int i=0;i<26;i++){
            mp1[i] = 0;
            mp2[i] = 0;
        }

         for(int i=0; i<s2.size(); i++)
        {
            mp1[s1[i]-'a']++;
            mp2[s2[i]-'a']++;
        }

             for(int i=0; i<s1.size()-s2.size()+1; i++)
        {
            if(mp1==mp2)
                return true;


              mp1[s1[i]-'a']--;
              mp1[s1[i+s2.size()]-'a']++;

        }
      return false;

    }
};
