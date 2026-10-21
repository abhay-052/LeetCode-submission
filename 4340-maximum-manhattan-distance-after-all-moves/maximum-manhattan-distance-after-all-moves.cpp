class Solution {
public:
    int maxDistance(string moves) {
        int a=0,b=0,c=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U') a++;
            if(moves[i]=='D') a--;
            if(moves[i]=='L') b++;
            if(moves[i]=='R') b--;
            if(moves[i]=='_') c++;
        }
        return abs(a)+abs(b)+c;
    }
};