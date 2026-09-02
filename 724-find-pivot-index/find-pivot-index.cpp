class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>PS(nums.size());
        int k=-1;
        PS[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            PS[i]=PS[i-1]+nums[i];
        }
        int l,r;
        for(int i=0;i<nums.size();i++){
            if(i==0) l=0;
            else{
                l=PS[i-1];
            }
            r=PS[nums.size()-1]-PS[i];
            if(l==r){
                k=i;
                break;
            }
        }
        return k;    
    }
};