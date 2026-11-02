class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==1) return 0;
        if(n==2) return nums[1]-nums[0];
        int ans=0,m=nums[n/2];
        for(int i=0;i<n;i++){
            ans+=abs(nums[i]-m);
        }
        return ans;
    }
};