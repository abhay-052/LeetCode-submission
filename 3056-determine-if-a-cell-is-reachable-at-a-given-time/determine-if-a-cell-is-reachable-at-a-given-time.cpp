class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx&&sy==fy) return t!=1;
        long long a=sx-fx;
        long long b=sy-fy;
        return max(abs(a),abs(b))<=t;
    }
};