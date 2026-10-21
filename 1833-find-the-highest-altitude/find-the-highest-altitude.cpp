class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0,b=0;
        for(int i=0;i<gain.size();i++){
            b+=gain[i];
            a=max(a,b);
        }
        return a;
    }
};