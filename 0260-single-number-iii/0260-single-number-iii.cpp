class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int n1=0;
        long long int n2=0;
        long long int n=0;
        int x=nums.size();
        for(int i=0;i<x;i++){
            n=n^nums[i];
        }
        long long int mask = n & -n;
        for(int i=0;i<x;i++){
            if((nums[i] & mask) == 0){
                n1=n1^nums[i];
            }
            else{
                n2=n2^nums[i];
            }
        }
        vector<int> result;
        result.push_back(n1);
        result.push_back(n2);

        return result;
    }
};