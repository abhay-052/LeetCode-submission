class Solution {
public:
    long long calculateScore(vector<string>& ins, vector<int>& values) {
        int n=ins.size();
        int i=0;
       long long s=0;
        while(i>=0&&i<n){
              if(ins[i]==".") break;
            if(ins[i]=="jump"){
                ins[i]=".";
                i=i+values[i];
               continue;
            }
          
            if(ins[i]=="add"){
                ins[i]=".";
                s+=values[i];
                
                i++;
            }
            else{i++;}
        }
        return s;
    }
};