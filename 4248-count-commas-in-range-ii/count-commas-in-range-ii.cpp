class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        if(n>=pow(10,3)&& n<pow(10,6)){
            ans+=n-999;
        }
         if(n>=pow(10,6)&& n<pow(10,9)){
            ans+=pow(10,6)-999+2*(n-(pow(10,6)-1))-1;
        }
         if(n>=pow(10,9)&& n<pow(10,12)){
            ans+=pow(10,6)-999+2*(pow(10,9)-(pow(10,6)-1))+3*(n-(pow(10,9)-1))-3;
        }
         if(n>=pow(10,12)&& n<=pow(10,15)){
           ans+=pow(10,6)-999+2*(pow(10,9)-(pow(10,6)-1))+3*(pow(10,12)-(pow(10,9)-1))+4*(n-(pow(10,12)-1))-6;
        }
        if(n==pow(10,15)) return ans+1;
        return ans;
    }
};