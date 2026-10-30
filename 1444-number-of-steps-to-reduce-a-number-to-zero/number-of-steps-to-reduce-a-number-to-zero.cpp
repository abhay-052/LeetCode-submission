class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        while(num!=0){
            if(num%2==0){
                num/=2;
                ans++;
            }
            if(num%2!=0){
                num-=1;
                ans++;
            }
        }
        return ans;
    }
};