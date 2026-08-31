class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        if(n==1) return nums[0];
        for(int i=0;i<n/2+1;i+=2){
            if(nums[i]!=nums[i+1]) return nums[i];
            if(nums[n-i-1]!=nums[n-i-2]) return nums[n-i-1];
    }
    return 0;
}
};