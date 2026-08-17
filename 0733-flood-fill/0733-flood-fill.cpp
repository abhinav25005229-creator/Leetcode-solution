class Solution {
public:
void dfs(vector<vector<int>>& image,int i, int j,int original,int newcolor){
    int m=image.size();
    int n= image[0].size();
    if(i<0||i>=m||j<0||j>=n||image[i][j]==newcolor||image[i][j]!=original)return ;

    ///Assign
    image[i][j]=newcolor;

    dfs(image,i-1,j,original,newcolor);///// top 
     dfs(image,i+1,j,original,newcolor);///// Bottom 

      dfs(image,i,j-1,original,newcolor);///// left 
       dfs(image,i,j+1,original,newcolor);///// right 

}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image, sr, sc, image[sr][sc],color);
        return image;
    }
};