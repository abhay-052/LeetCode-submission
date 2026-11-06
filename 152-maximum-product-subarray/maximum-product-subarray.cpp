class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),ans=nums[0],a=1,b=1;
        for(int i=0;i<n;i++){
             a*=nums[i];b*=nums[n-i-1];
             ans=max(ans,a);
             ans=max(ans,b);
             if(a==0) a=1;
              if(b==0) b=1;
        }
        return ans;
    }
};