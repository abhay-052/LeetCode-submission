class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;long long x=1;
        while(n>0){
            int a=n%10;
            if(a>0) ans.push_back(a*x);
            x*=10;n/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};