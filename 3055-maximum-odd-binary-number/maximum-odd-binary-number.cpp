class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int a=0,b=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') a++;
            else b++;
        }
        string ans;
        for(int i=0;i<b-1;i++){
           ans.push_back('1');
        }
        for(int i=0;i<a;i++){
            ans.push_back('0');
        }
        ans.push_back('1');
        return ans;
    }
};