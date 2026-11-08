class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map <int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            int a=0,b=nums[i];
            while(b>0){
                a=a*10+(b%10);
                b/=10;
            }
            m[a]++;

        }
       
        return m.size();
    }
};