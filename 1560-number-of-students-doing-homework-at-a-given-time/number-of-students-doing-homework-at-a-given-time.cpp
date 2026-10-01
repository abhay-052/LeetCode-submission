class Solution {
public:
    int busyStudent(vector<int>& start, vector<int>& end, int query) {
        int ans=0;
        for(int i=0;i<start.size();i++){
            if(query>=start[i]&&query<=end[i]) ans++;
        }
        return ans;
    }
};