class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        if(word[0]>=97&&word[0]<=122){
            for(int j=1;j<word.length();j++){
                if(word[j]<97) return false;
            }
        }
        if(word[0]>=65&&word[0]<=90){
            if(1<n&&word[1]>=65&&word[1]<=90)
            {for(int j=2;j<n;j++){
                if(word[j]<65||word[j]>90) return false;
            }}
            if(1<n&&word[1]>=97&&word[1]<=122){
                for(int j=2;j<word.length();j++){
                if(word[j]<97) return false;
                }
            }
        }
        return true;

        
    }
};