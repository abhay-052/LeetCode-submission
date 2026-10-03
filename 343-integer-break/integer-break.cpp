class Solution {
public:
    int integerBreak(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        int ans=1;
        while(n>=1){
            if(n==1) ans=ans/3*4;
            if(n==2) ans=ans*2;
            if(n>=3) ans*=3;
            n=n-3;
        }
        return ans;
    }
};