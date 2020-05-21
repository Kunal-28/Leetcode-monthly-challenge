class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {

        if(c.size()==2)
            return 2;



        for(int i=0; i<c.size()-2; i++)
        {
            if((c[i+2][1]-c[i+1][1])*(c[i+1][0]-c[i][0])!=(c[i+2][0]-c[i+1][0])*(c[i+1][1]-c[i][1]))
                return false;
        }


       return true;
    }
};

