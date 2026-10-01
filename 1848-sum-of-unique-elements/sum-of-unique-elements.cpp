class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]]=1;
            }
            else{
                m[nums[i]]++;
            }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]==1) ans+=nums[i];
        }
        return ans;
    }
};