class Solution {
public:
    bool checkString(string s) {
        int n=s.length();
        int a=0,b;
        for(int i=0;i<n;i++){
            if(s[i]=='a')a=i;
           
        }
         for(int i=0;i<n;i++){
            if(s[i]=='b'){b=i;break;}
           
        }
        return a<=b;
    }
};