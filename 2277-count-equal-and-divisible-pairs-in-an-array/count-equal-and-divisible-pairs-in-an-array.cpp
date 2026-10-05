class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<(int)nums.size();i++){
            for(int j=i+1;j<(int)nums.size();j++){
               if((nums[i]==nums[j])&& (((i*j)%k)==0)){
                
                ans++;
               }
            }
        }
        return ans;
    }
};