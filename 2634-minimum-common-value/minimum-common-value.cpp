class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n2=nums2.size();
        set<int> s;
        for(int i=0;i<n2;i++){
            s.insert(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(s.find(nums1[i])!=s.end()) return nums1[i];
        }
        return -1;
    }
};