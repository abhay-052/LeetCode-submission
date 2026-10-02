class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        set<char> s1={'q','w','e','r','t','y','u','i','o','p','Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
        set<char> s2={'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l','A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
        set<char> s3={'z', 'x', 'c', 'v', 'b', 'n', 'm','Z', 'X', 'C', 'V', 'B', 'N', 'M'};
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();){
                if(s1.find(words[i][j])!=s1.end()) j++; else j=words[i].size()+1;
                     if(j==words[i].size()) ans.push_back(words[i]);
                     
             }
        }
         for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();){
                if(s2.find(words[i][j])!=s2.end()) j++;
                  else j=words[i].size()+1;
                   if(j==words[i].size()) ans.push_back(words[i]);
                    
            }
        }
         for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();){
                if(s3.find(words[i][j])!=s3.end()) j++;
                  else j=words[i].size()+1;
                   if(j==words[i].size()) ans.push_back(words[i]);
                   
            }
        }
        return ans;
    }
};