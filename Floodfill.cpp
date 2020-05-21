class Solution {
public:


    void dfs(vector<vector<int>>& image, int i, int j , int newColor, int oldColor){
        if(i<0 || i>=image.size()||j<0||j>=image[0].size() || image[i][j]!= oldColor || image[i][j] == newColor)
            return;
        image[i][j] = newColor;
        dfs(image,i+1,j,newColor,oldColor);
        dfs(image,i-1,j,newColor,oldColor);
        dfs(image,i,j-1,newColor,oldColor);
        dfs(image,i,j+1,newColor,oldColor);

    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {

        dfs(image,sr,sc,newColor,image[sr][sc]);
        return image;

    }
};
