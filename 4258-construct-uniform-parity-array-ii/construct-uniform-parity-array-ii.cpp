class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mineven=INT_MAX;
        int minodd=INT_MAX;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(nums1[i]%2!=0){
                minodd=min(minodd,nums1[i]);
            }
            else{
                 mineven=min(mineven,nums1[i]);
            }
        }
        if(minodd<mineven) return true;
        if(minodd==INT_MAX) return true;
        return false;
    }
};