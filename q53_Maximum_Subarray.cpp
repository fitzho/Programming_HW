//Sum of value that select contiguous numer from array
//The count of contiguous numer is unknown
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int output=nums[0];//set first value to output
        int sum=0;
        for (int i=0; i<nums.size() ; i++)
        {
            sum=sum+nums[i];//sum of part array 
            output=max(output,sum);
            sum=max(sum,0);// if sum is smaller than 0, let sum = next array value
        }
        return output;
        
    }
};