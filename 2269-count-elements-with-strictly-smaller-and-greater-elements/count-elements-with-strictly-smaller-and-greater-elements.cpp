class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size(),m=nums[0],a=nums[0];
        for(int i=0;i<n;i++){
            m=max(m,nums[i]);
            a=min(a,nums[i]);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>a&&nums[i]<m) count++;
        }
        return count;
    }
};