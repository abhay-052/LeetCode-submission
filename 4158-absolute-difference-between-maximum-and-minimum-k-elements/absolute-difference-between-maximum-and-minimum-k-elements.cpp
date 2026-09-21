class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int x=0;
        int y=0;
        for(int i=0;i<k;i++){
             x+=nums[i];
        }
        for(int i=n-1;i>n-k-1;i--){
            y+=nums[i];
        }
        return abs(y-x);
    }
};