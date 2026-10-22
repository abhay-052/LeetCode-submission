class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
       
        vector<vector<int>> ans;
          if(m*n!=original.size()) return ans;
        for(int i=0;i<original.size();){
            vector<int> a;
            for(int j=0;j<n;j++){
                a.push_back(original[i]);
                i++;
            }
            ans.push_back(a);
        }
        return ans;
    }
};