class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        int n=nums.size();
        long long ans=0;
        sort(nums.begin(),nums.end());
        int a=n/2;
       
        if((nums[a]>k)||(nums[a]<k)){ ans+=abs(k-nums[a]);nums[a]=k;}
        for(int i=0;i<a;i++){
            if(nums[i]>k) ans+=abs(k-nums[i]);
        }
        for(int i=a+1;i<n;i++){
            if(nums[i]<k) ans+=abs(k-nums[i]);
        }
        
        return ans;
    }
};