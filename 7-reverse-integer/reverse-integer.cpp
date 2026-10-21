class Solution {
public:
    int reverse(int x) {
        long long ans=0,a=x;
        if(a<0) a=a*-1;
        while(a>0){
            ans=ans*10+a%10;
            a=a/10;
        }
        if(ans<INT_MIN||ans>INT_MAX) return 0;
        if(x<0) return -ans;
        return ans;
    }
};