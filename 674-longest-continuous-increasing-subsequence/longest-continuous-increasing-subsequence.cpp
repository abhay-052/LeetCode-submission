class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans=1;
        int b=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                b++;
            }
            else{
                ans=max(ans,b);
                b=1;
            }
        }
        return max(ans,b);
    }
};