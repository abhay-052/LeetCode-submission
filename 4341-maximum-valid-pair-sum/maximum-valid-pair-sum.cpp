class Solution {
public:
     int maxValidPairSum(vector<int>& nums, int k) {
    int n = nums.size();
    int a = INT_MIN;
    
   
    vector<int> max_so_far(n, INT_MIN);
    int current_max = INT_MIN;
    for(int i = 0; i < n; i++) {
        current_max = max(current_max, nums[i]);
        max_so_far[i] = current_max;
    }
    
   
    for(int j = k; j < n; j++) {
       
        int m = max_so_far[j - k];
      
        if (m != INT_MIN) {
            a = max(a, m + nums[j]);
        }
    }
    
    return a;
    }
};