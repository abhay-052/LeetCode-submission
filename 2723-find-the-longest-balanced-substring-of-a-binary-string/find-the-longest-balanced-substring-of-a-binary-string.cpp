class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int n=s.length(),a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') a++;
            if(s[i]=='1') {
                b++;
                
            }
             c=max(c,2*min(a,b));
            if(i<n-1&&s[i]=='1'&&s[i+1]=='0') {a=0;b=0;}
        }
        return c;
    }
};