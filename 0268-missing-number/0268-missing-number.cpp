class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       int add=0;
        int sum=n*(n+1)/2;
        for(int i=0;i<nums.size();i++) {
        add=add+nums[i];
        }
        sum=sum-add;
        return sum;
    }
  
};