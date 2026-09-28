class Solution {
public:
    string removeOccurrences(string s, string part) {
        for(int i=0;i<(int)s.length();i++){
            int k=i;
            int n=0;
            for(int j=0;j<part.length();j++){
                if(k + j < s.length() &&s[k+j]==part[j]) { n++;}
                else break;

                
            }
            if(n==part.length()){
                s.erase(i,part.length());
                i=-1;
                
            }

        }
        return s;
    }
};