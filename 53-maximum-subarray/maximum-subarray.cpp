class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int m=INT_MIN;
        int a=0;
        for(int i=0;i<n;i++){
              a+=nums[i];
              m=max(m,a);
              if(a<0) a=0;
        }
        return m;
    }
};