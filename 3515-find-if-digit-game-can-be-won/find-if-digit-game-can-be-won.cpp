class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,a=0,b=0;
        while(i<nums.size()&&nums[i]<10){
            a+=nums[i];
            i++;
        }
          while(i<nums.size()&&nums[i]<100){
            b+=nums[i];
            i++;
        }
        return a!=b;
    }
};