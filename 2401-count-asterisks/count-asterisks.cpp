class Solution {
public:
    int countAsterisks(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*') ans++;
            if(s[i]=='|'){
                i++;
                while(i<n&&s[i]!='|'){
                    i++;
                }
            }
        }
        return ans;
    }
};