class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>a(26,false);
        for(int i=0;i<sentence.length();i++){
            a[sentence[i]-'a']=true;
        }
        for(int i=0;i<26;i++){
            if(a[i]==false) return false;
        }
        return true;
    }
};