class Solution {
public:
    string removeStars(string s) {
        ;
        for(int i=0;i<(int)s.length()-1;i++){
            if(s[i+1]=='*') {
                s.erase(i,2);
                i=i-2;
            }
        }
        return s;
    }
};