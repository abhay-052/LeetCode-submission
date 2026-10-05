class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int a=0;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(boxes[j]=='1'){
                    a+=abs(i-j);
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};