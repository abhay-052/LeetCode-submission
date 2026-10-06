class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int ,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()) m[nums[i]]++;
            else m[nums[i]]=1;
        }
        for (const auto& pair : m){
            if(pair.second>1) ans.push_back(pair.first);
        }
        return ans;
    }
};