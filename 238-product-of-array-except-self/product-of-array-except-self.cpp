class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> p(nums.size(),1);
        vector<int> s(nums.size(),1);
        int n=nums.size();
        for(int i=1;i<n;i++){
            s[i]=nums[i-1]*s[i-1];
        }
        for(int i=n-2;i>=0;i--){
            p[i]=nums[i+1]*p[i+1];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=p[i]*s[i];
        }
        return ans;
    }
};