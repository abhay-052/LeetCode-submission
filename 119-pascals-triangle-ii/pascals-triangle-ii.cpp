class Solution {
public:
    vector<int> getRow(int r) {
        vector<int> ans;
        for(int i=0;i<=r;i++){
            if(i>1){
                vector<int> a(i-1,0);
                for(int j=0;j<i-1;j++){
                    a[j]=ans[j]+ans[j+1];
                    
                }
                  for(int j=0;j<i-1;j++){
                   ans[j+1]=a[j];
                 }   
            }
            ans.push_back(1);
        }
        return ans;
    }
};