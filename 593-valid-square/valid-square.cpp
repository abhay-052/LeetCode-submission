class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        long long a=(p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]);
        long long b=(p1[0]-p3[0])*(p1[0]-p3[0])+(p1[1]-p3[1])*(p1[1]-p3[1]);
        long long c=(p1[0]-p4[0])*(p1[0]-p4[0])+(p1[1]-p4[1])*(p1[1]-p4[1]);
        long long d=(p2[0]-p3[0])*(p2[0]-p3[0])+(p2[1]-p3[1])*(p2[1]-p3[1]);
        long long e=(p2[0]-p4[0])*(p2[0]-p4[0])+(p2[1]-p4[1])*(p2[1]-p4[1]);
        long long f=(p4[0]-p3[0])*(p4[0]-p3[0])+(p4[1]-p3[1])*(p4[1]-p3[1]);
        unordered_map<long long,int> m;
        set<long long> s;
        vector<long long> v={a,b,c,d,e,f};
        for(int i=0;i<6;i++){
            if(m.find(v[i])==m.end()) m[v[i]]=1;
            else m[v[i]]++;
            s.insert(v[i]);
        }
       if(s.size()==2){
        long long first = *s.begin(); 
        long long second = *next(s.begin(), 1); 
          if(first==2*second) {if(m[first]==2&&m[second]==4){
            return true;
          }}
          if(2*first==second) {if(m[first]==4&&m[second]==2){
            return true;
          }}

       }
       
       return false;
    }
};