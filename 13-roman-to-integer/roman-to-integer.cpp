class Solution {
public:
    int romanToInt(string s) {
        int n=s.length()-1;
        int ans=0;
        for(int i=n;i>=0;i--){
            if(i>=0&&s[i]=='I'){
                ans+=1;
                
            }
            if(s[i]=='V'){
                ans+=5;
               if(i>0&&s[i-1]=='I'){
                ans-=1;i--;
               }
            }
          if(i>=0&&s[i]=='X'){
                ans+=10;
                if(i>0&&s[i-1]=='I'){
                ans-=1;i--;
               }
           } 
           if(i>=0&&s[i]=='L'){
                ans+=50;
               if(i>0&&s[i-1]=='X'){
                ans-=10;i--;
               }
            } 
          if(i>=0&&s[i]=='C'){
                ans+=100;
               if(i>0&&s[i-1]=='X'){
                ans-=10;i--;
               }
            } 
            if(i>=0&&s[i]=='D'){
                ans+=500;
               if(i>0&&s[i-1]=='C'){
                ans-=100;i--;
               }
            } 
            if(i>=0&&s[i]=='M'){
                ans+=1000;
               if(i>0&&s[i-1]=='C'){
                ans-=100;i--;
               }
            } 
        }
        return ans;
    }
};