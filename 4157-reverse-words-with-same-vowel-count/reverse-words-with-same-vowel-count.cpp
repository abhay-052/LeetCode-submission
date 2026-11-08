class Solution {
public:
    string reverseWords(string s) {
        string s1="";int j=0,a=0;
        while(j<s.length()&&s[j]!=' '){
            if(s[j]=='a'||s[j]=='i'||s[j]=='e'||s[j]=='o'||s[j]=='u') a++;
           
            s1+=s[j]; j++;
        }
        for(int i=j+1;i<s.length();i++){
            string s2="";int b=0;
            while(i<s.length()&&s[i]!=' '){
                if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'){ b++;}
               
                s2+=s[i]; i++;
            }
            if(a==b) reverse(s2.begin(),s2.end());
            s1+=" "+s2;
        }
        return s1;
    }
};