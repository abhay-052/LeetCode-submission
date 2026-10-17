class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long ans;
        long long m=INT_MIN;
        int a=0;
        for(int i=0;i<nums.size();i++){
             if(m<abs(nums[i])){
                m=abs(nums[i]);
                a=i;
             }
        }
        long long n=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(i==a) continue;
             if(n<abs(nums[i])){
                n=abs(nums[i]);
                
             }
        }
        ans=m*n*100000;
        return ans;

    }
};