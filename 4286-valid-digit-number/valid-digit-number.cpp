class Solution {
public:
    bool validDigit(int n, int x) {
        int a=0;
        while(n>0){
            if(n%10==x&&n/10==0) return false;
             if(n%10==x)a++;
             n=n/10;
        }
        if(a>0) return true;
        return false;
    }
};