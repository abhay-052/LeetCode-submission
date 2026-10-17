class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        
        int n=cost.size();
        long long a=0;
        unordered_map<char,long long> m;
        for(int i=0;i<n;i++){
            if(m.find(s[i])==m.end()) m[s[i]]=cost[i];
            else m[s[i]]+=cost[i];
            a+=cost[i];
        }
        long long ma=INT_MIN;
        for(auto& pair:m){
            ma=max(ma,pair.second);
        }
        return a-ma;
    }
};