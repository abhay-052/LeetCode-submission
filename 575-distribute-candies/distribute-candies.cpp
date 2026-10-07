class Solution {
public:
    int distributeCandies(vector<int>& c) {
        unordered_map<int,int> m;
        for(int i=0;i<c.size();i++){
            if(m.find(c[i])==m.end()) m[c[i]]=0;
            else m[c[i]]++;
        }
        if(m.size()<(c.size()/2)) return m.size();
        return c.size()/2;
    }
};