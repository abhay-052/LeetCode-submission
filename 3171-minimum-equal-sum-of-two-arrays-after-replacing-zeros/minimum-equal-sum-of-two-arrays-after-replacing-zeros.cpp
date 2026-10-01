class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0;
        int z2=0,z1=0;
        for(int i=0;i<nums1.size();i++){
            sum1+=nums1[i];
            if(nums1[i]==0) z1++;
        }
        for(int i=0;i<nums2.size();i++){
            sum2+=nums2[i];
            if(nums2[i]==0) z2++;
        }
        if (z1 == 0 && sum1 < sum2 + z2) return -1;
        if (z2 == 0 && sum2 < sum1 + z1) return -1;
        if(sum1+z1>sum2+z2) return sum1+z1;
        if(sum1==sum2) return sum1+max(z1,z2);
        return sum2+z2;
    }
};