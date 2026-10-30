class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<long long,int> m;
        int n= arr.size();
        for(int i=0;i<n;i++){
              m[arr[i]]++; 
        }
        vector<int> f;
        for(auto & a:m){
            f.push_back(a.second);
        }
        sort(f.begin(),f.end());
        int c=f.size();
        for(int i=0;i<f.size();i++){
            
            if (k >= f[i]) {
                k -= f[i];
                c--;
            }
            if(k<0) break;
        }
        return c;
    }
};