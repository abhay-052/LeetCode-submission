class Solution {
public:
    vector<string> createGrid(int m, int n) {
        
        vector<string> ans;
        if(m==1) {
            string s(n,'.');
            ans.push_back(s);
            return ans;
        }
        for(int i=0;i<m;i++){
            string s(n,'#');
            for(int j=i;j<i+2&&j<n;j++){
                s[j]='.';
            }
            if(i>=n-1) {
                 
                s[n-1]='.';
            
            }
            if(i==m-1){
                for(int k=i+2;k<n;k++){
                    s[k]='.';
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};