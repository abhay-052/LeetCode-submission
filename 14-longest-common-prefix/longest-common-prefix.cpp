class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            int n=strs.size();
        string ans="";
        int s=INT_MAX;
        for (int i=0;i<n;i++){
            if(strs[i].length()<s)
            s=strs[i].length();
        }
        for(int i=0;i<s;i++){
            int k=1,l=0;
            for (int j=1;j<n;j++){
               
                if(strs[l][i]==strs[k][i]){
                    k++;
                }
                else {break;}

            }
            if (k==n){ ans.push_back(strs[0][i]);}
            else break;
        }
        return ans;
    }
};