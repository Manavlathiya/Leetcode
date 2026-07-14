class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n,x;
        int sum = 0;
        n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        x=n*(n+1)/2;
        return x-sum;

    }
};