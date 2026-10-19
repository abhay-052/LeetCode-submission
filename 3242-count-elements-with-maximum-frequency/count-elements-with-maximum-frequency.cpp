class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ma=0,ans=0;
        for(auto & pair:m){
            ma=max(ma,pair.second);
        }
        for(auto & pair:m){
            if(pair.second==ma)ans+=pair.second;
        }
        return ans;
    }
};