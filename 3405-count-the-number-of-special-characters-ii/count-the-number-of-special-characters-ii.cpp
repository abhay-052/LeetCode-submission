class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> m;
        for (char c = 'a'; c <= 'z'; ++c) {
            m[c] = -1;
            m[toupper(c)] = -1;
        }
        int n=word.length();
        for(int i=0;i<n;i++){
            
             if (word[i] >= 'a' && word[i] <= 'z') m[word[i]]=i;
             else{
                if(m[word[i]]==-1) m[word[i]]=i;
             }
        }
        char c='A';
        int ans=0;
        for(int i=0;i<26;i++){
            if(m[c+i+32]!=-1&&m[c+i]!=-1&&m[c+i]>m[c+i+32]) ans+=1;;
            
        }
        return ans;
    }
};