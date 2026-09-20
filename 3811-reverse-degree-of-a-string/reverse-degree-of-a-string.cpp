class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int n=s.size();
        int b;
        for(int i=0;i<n;i++){
            b=(26-(s[i]-'a'))*(i+1);
            sum+=b;
        }
        return sum;
    }
};