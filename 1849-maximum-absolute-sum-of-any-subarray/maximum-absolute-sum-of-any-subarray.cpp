class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int ma=INT_MIN;
        int a=0;
        for(int i=0;i<n;i++){
            a+=nums[i];
            ma=max(ma,a);
            if(a<0) a=0;
        }
        a=0;
        int mi=INT_MAX;
        for(int i=0;i<n;i++){
            a+=nums[i];
            mi=min(a,mi);
            if(a>0) a=0;
        }
        mi=abs(mi);
        return max(ma,mi);
    }
};