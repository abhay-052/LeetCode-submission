class Solution {
public:
    string processStr(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='#') ans+=ans;
            else if(s[i]=='%') reverse(ans.begin(),ans.end());
            else if(ans.length()>0&&s[i]=='*') ans.erase(ans.size()-1,1);
            if(s[i]!='#'&&s[i]!='%'&&s[i]!='*') {ans.push_back(s[i]);}
        }
        return ans;
    }
};