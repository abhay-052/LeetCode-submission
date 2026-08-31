class Solution {
public:
    int maxPower(string s) {
        char ch=s[0];
        int count=1;
        int ans=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==ch) count++;
            else {
                ans=max(ans,count);
                count=1;
                ch=s[i];
            }
        }
        return max(ans,count);
    }
};