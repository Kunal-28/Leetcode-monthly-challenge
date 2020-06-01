class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));

        for(int i = 1; i <= n; i++){
            dp[i][0] = 1 + dp[i - 1][0];
        }
        for(int i = 1; i <= m; i++){
            dp[0][i] = 1 + dp[0][i - 1];
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){

                if(word2[i - 1] == word1[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else{
                    dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]});
                }

            }
        }
        return dp[n][m];
    }
};
