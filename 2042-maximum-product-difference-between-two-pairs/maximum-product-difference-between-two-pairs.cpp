class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a=0,b=-1,c=0,d=INT_MAX,e=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>a){
                a=nums[i];
                b=i;
            }
        }
        nums.erase(nums.begin()+b);
        b=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>c){
                c=nums[i];
                b=i;
            }
        }
         nums.erase(nums.begin()+b);
        b=-1;
         for(int i=0;i<nums.size();i++){
            if(nums[i]<d){
                d=nums[i];
                b=i;
            }
        }
         nums.erase(nums.begin()+b);
        b=-1;
          for(int i=0;i<nums.size();i++){
            if(nums[i]<e){
                e=nums[i];
                b=i;
            }
        }
        return(a*c)-(d*e);
    }
};