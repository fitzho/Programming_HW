class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int a=0;
        int length_num;
        for (int i=0;i<=nums.size()-1;i++)
        {
            if (nums.size()==1)// if num. of array = 1
            {
                if (nums[i]==target)
                {
                    a=i;
                }
                else if (nums[i]<target)
                {
                    a=i+1;
                }
                else
                {
                    a=0;
                }
            }
            else
            {
                if (nums[i]==target)
                {
                    break;
                }
                else if (nums[i] < target)
                {
                    a++;
                }
            }   
        }
        return a;
    }
};