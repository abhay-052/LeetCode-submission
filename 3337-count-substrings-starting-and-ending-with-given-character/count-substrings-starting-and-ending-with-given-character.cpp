class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long ans=1;
        long long a=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==c) a++;

        }
       ans=a*(a+1)/2;
        return ans;
    }
};