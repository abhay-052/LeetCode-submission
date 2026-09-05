class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefix;
        vector<int> suffix;
        int m=INT_MIN;
        int a=INT_MAX;
        for(int i=0;i<n;i++){
            m=max(nums[i],m);
            prefix.push_back(m);
        }
        for(int j=n-1;j>=0;j--){
            a=min(nums[j],a);
            suffix.push_back(a);
        }
        for(int i=0;i<n;i++){
            int j=prefix[i]-suffix[n-i-1];
            if(j<=k) return i;
        }
        return -1;
    }
};