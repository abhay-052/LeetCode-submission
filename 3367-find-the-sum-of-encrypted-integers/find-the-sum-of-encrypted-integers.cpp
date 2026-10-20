class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int a=nums[i],b=0,c=0,d=0;
            while(a>0){
                b=max(b,a%10);
                a=a/10;
                c++;
            }
            while(c>0){
                d=d*10+b;
                c--;
            }
            sum+=d;
        }
        return sum;
    }
};