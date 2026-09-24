class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];int b=0;
            while(a!=0){
                b+=(a%10);
                a=a/10;
            }
            if(b==i) return i;
        }
        return -1;
    }
};