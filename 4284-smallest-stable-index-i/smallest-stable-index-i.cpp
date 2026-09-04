class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int ma=INT_MIN;
        for(int i=0;i<n;i++){
            ma=max(ma,nums[i]);
            int mi=INT_MAX;
            for(int j=i;j<n;j++){
                mi=min(nums[j],mi);
            }
            if((ma-mi)<=k) return i;
        }
        return -1;
    }
};