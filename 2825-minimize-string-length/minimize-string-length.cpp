class Solution {
public:
    int minimizedStringLength(string s) {
        set<int> ss;
        for(int i=0;i<s.length();i++){
            ss.insert(s[i]);
        }
        return ss.size();
    }
};