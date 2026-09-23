class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0;
        int n=nums.size()-1;
        while(i<n){
            int mid=i+(n-i)/2;
            if(nums[mid]<nums[mid+1]){
                i=mid+1;
            }
            else{
                n=mid;
            }
        }
        return i;
    }
};