class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        int a=0;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push('(');
            if(s[i]==')') {
                if(st.size()==0) a++;
                else st.pop();
            }
        }return a+st.size();

    }
};