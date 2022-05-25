//Problem Link:- https://leetcode.com/problems/flood-fill/
//Code:-
class Solution {
public:
    void dfs(vector<vector<int>> &image,int sr,int sc,int newColor,int color){
        if(sr<0 or sr>=image.size() or sc<0 or sc>=image[0].size() or image[sr][sc]!=color){
            return;
        }
        image[sr][sc]=newColor;
        dfs(image,sr+1,sc,newColor,color);
        dfs(image,sr-1,sc,newColor,color);
        dfs(image,sr,sc+1,newColor,color);
        dfs(image,sr,sc-1,newColor,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]!=newColor){
            dfs(image,sr,sc,newColor,image[sr][sc]);
        }
        return image;
    }
};
