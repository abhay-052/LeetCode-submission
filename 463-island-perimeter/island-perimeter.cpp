class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
          
        
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1) ans+=4;
                if(j<grid[i].size()-1&&grid[i][j]==1&&grid[i][j+1]==1){
                    ans-=2;
                } 
                
            }
        }
        int c=grid[0].size();
        for(int i=0;i<c;i++){
            for(int j=0;j<grid.size();j++){
                
                if(j<grid.size()-1&&grid[j][i]==1&&grid[j+1][i]==1){ 
                    ans-=2;
                } 
                
            }
        }
        return ans;
    }
};