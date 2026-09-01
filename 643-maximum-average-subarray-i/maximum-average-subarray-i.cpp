class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int sum=0;
        double maxi=-pow(10,5);
        for(int right=0;right<n;right++){
            sum+=nums[right];
            if(right>=k-1){
                double avg=sum*1.0/k;
                maxi=max(maxi,avg);
                sum-=nums[left];
                left++;
            }
        }
        return maxi;
    }
};