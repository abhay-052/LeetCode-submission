class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0];
        int maxi=nums[0];
        int x=0;
        int y=0;
        for(int i=0;i<n;i++){
            if(mini>nums[i])
           { mini=min(mini,nums[i]);x=i;}
             if(maxi<nums[i])
           { maxi=max(maxi,nums[i]);y=i;}
        }
        int z=max(x,y)+1;int b=max(x,y);int c=min(x,y);
        int a=min(z,n-b+c+1);
        int d=min(a,n-c);
        return d;
    }
};