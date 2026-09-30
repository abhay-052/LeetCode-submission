class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                m[s[i]]=1;
            }
            else{
                m[s[i]]++;
            }
        }
        unordered_map<char,int> mp;
         for(int i=0;i<t.length();i++){
            if(mp.find(t[i])==mp.end()){
                mp[t[i]]=1;
            }
            else{
                mp[t[i]]++;
            }
        }
        char ch='a';
        for(int i=0;i<26;i++){
            char ch1=ch+i;
            if(m[ch1]!=mp[ch1]){
                
           
                return ch1;
            }
        }
        return ch;
    }
};