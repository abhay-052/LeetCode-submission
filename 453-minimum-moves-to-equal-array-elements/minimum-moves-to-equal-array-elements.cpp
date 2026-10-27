class Solution {
public:
    int minMoves(vector<int>& nums) {
      
       int ans=0,n=nums.size(),m=INT_MAX;
       for(int i=0;i<nums.size();i++){
           m=min(m,nums[i]);
       }
       for(int i=0;i<nums.size();i++){
           ans+=nums[i]-m;
       } 
       return ans;
    }
};