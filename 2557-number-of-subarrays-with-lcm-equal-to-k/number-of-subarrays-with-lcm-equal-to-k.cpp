class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int l=1;
            for(int j=i;j<nums.size();j++){
                 if (k % nums[j] != 0) {
                    break;}
                l=lcm(l,nums[j]);
                if(l==k) ans++;
                else if (l > k) {
                    break;
                }

            }
        }
        return ans;
    }
};