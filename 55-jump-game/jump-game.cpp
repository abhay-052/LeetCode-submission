class Solution {
public:
    bool canJump(vector<int>& nums) {
        int a=nums[0];
        for(int i=0;i<nums.size();i++){
            if(a>=nums.size()-1) return true;
            if(nums[i]==0&&a==i) return false;
            if(i+nums[i]>a) a=i+nums[i];
        }
        return true;
    }
};