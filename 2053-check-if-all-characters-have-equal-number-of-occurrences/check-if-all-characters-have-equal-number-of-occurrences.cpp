class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        int ans=m[s[0]];
        for(auto& pair:m){
            if(pair.second!=ans) return false;
        }
        return true;
    }
};