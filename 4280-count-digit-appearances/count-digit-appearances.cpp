class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int a=nums[i];
            while(a>0){
                if(a%10==digit) ans++;
                a=a/10;
            }

        }
        return ans;
    }
};