class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        stack<int>st;
        stack<int> star;
        string s1=s;
        for(int i=0;i<n;i++){
            
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else{
                if(st.size()!=0) st.pop();
                else if(star.size()!=0) star.pop();
                else return false;
            }
        }
        while(st.size()!=0&&star.size()!=0){
            if(st.top()>star.top()) return false;
            st.pop();
            star.pop();
        }
        if(st.size()==0) return true;
        return false;

    }
};