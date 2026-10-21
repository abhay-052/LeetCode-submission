class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.length();
        string ans="";
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(ans.length());
            else if(s[i]==')') {
                reverse(ans.begin()+st.top(),ans.end());
                st.pop();

            }
            else ans.push_back(s[i]);
        }
        return ans;
    }
};