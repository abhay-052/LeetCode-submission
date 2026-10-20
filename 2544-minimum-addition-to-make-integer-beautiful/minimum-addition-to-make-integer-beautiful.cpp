class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        long long d=0,a=n,c=n,b=0;
        while(n>0){
            d+=n%10;
            n=n/10;
        }
        if(d<=target) return 0;
        while(d>target){
               d-=a%10;
               a=a/10;
               
               b++;
                if (d + 1 <= target) {a += 1;break; }
            a += 1; 
        long long temp = a;
        d = 0;
        while (temp > 0) { 
            d += temp % 10;
            temp /= 10;
        }
        }
        return (long long)((a)*pow(10,b))-c;
    }
};