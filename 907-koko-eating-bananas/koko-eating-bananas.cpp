bool canEat(vector<int>& arr,int hoursHave,int k){
    long long hoursNeeded=0;
    for(int i=0;i<arr.size();i++){
        hoursNeeded+=(int)ceil((arr[i]*1.0)/k);
    }
    if(hoursHave>=hoursNeeded) return true;
    else return false;
}
//int getMax()
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid=(low+high)/2;
            if(canEat(piles,h,mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};