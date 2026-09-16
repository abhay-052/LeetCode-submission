class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            if(numbers[j]==(target-numbers[i])){
                ans.push_back(i+1);
                ans.push_back(j+1);
            }
              if(numbers[j]>(target-numbers[i])){
                  j--;
              }
              else{
                i++;
              }
        }
        return ans;
    }
};