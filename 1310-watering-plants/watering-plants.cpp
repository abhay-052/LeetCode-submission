class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n=plants.size();
        int ans=0,a=capacity;
        for(int i=0;i<n;i++){
            if(capacity>=plants[i]){
                capacity-=plants[i];
                ans++;
            }
            else{
                ans+=2*(i)+1;
                capacity=a-plants[i];
            }
        }
        return ans;
    }
};