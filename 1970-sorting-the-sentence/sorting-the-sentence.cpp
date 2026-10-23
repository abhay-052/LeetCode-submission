class Solution {
public:
    string sortSentence(string s) {
        map <int,string> m;
        string a="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ') continue;
            if(s[i]>'0'&&s[i]<='9') {m[s[i]]=a;a="";continue;}
            a.push_back(s[i]); 
        }
        string ans;
        for(auto& pair:m){
            ans+=pair.second+" ";
        }
        ans.pop_back();
        return ans;
    }
};