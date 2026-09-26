class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>dict;
        for (const auto& pair : knowledge) {
            dict[pair[0]] = pair[1];
        }
        int n=s.length();
       
        string ans;
        for(int i=0;i<n;i++){
            string c;
           
            if(s[i]=='('){
                i++;
                while(s[i]!=')'){
                    c.push_back(s[i]);
                    i++;
                }
                 
                if(dict.count(c)){
                    ans+=dict[c];
                   
                }
                 
                 else ans.push_back('?');
            }
            
            else{
                ans.push_back(s[i]);
            }   
        }
        return ans;
    }
};