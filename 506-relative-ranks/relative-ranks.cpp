class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans;
        int n= score.size();
        for(int i=0;i<n;i++){
            int count = 1;
            for(int j=0;j<n;j++){
                 if(i==j) continue;
                 if(score[i]<score[j]) count++;
            }
            if(count==1) ans.push_back("Gold Medal");
            if(count==2) ans.push_back("Silver Medal");
            if(count==3) ans.push_back("Bronze Medal");
           if(count>3) ans.push_back(to_string(count));
        }
        return ans;
    }
};