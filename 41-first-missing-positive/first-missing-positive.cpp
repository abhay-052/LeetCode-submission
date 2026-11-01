class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<bool> ans(n+1,false);
        ans[0]=true;
        for(int i=0;i<n;i++){
            if(nums[i]>0&&nums[i]<=n){
                ans[nums[i]]=true;
            }
        }
        for(int i=0;i<n+1;i++){
            if(ans[i]==false) return i;
        }
        return n+1;
    }
};