class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int j=0;
        int max=0;
        for(int i=0;i<gain.size();i++){
            int k=j+gain[i];
            j=k;
            if(k>max) max=k;
        }  
        return max;
    }
};