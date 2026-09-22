class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
        int n=nums.size();
        if(n==2) return true;
        for(int i=0;i<n;i++){
            int a=nums[i];
            nums.erase(nums.begin()+i);
            for(int j=0;j<n-2;j++){
              
                if(nums[j]>=nums[j+1]) break;
                  if(j==n-3) return true;
            }
            nums.insert(nums.begin()+i,a);
        }
        return false;
    }
};