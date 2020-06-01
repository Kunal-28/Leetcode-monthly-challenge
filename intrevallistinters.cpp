class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {

        vector<vector<int>>res;

        for(int i=0; i<A.size(); i++)
        {
            for(int j=0; j<B.size(); j++)
            {
                if(( A[i][0] >= B[j][0] && A[i][0] <= B[j][1] ) ||
			        (B[j][0] >= A[i][0] && B[j][0] <= A[i][1] ) ){

                    int in=max(A[i][0],B[j][0]);
                    int ou=min(A[i][1],B[j][1]);

                    res.push_back({in,ou});

                }
            }
        }

        return res;
    }
};
