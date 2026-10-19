class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0) return arr;
        vector<int> a=arr;
        sort(a.begin(),a.end());
        unordered_map<int,int> m;
        m[a[0]]=1;
        for(int i=1;i<a.size();i++){
            if(m.find(a[i])==m.end()) m[a[i]]=m.size()+1;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=m[arr[i]];
        }
        return arr;
    }
};