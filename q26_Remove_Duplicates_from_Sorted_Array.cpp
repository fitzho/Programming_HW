class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size(); //ex. a=[1,2,3,4] ; a.size()=4
        int k1=k-1;
        for (int i=0; i<k1 ;i++) // we can't type "num.size()-1" in "for loop"
        {
            if (k>=2)
            {
                if (nums[i]==nums[i+1])
                {
                    k=k-1;// if present num = next num, total length -1 to reduce duplicate num.
                }
                else
                {
                    nums[i-(nums.size()-k)+1]=nums[i+1];// if present num != next num, loop count i - (total duplicate num) + 1 = next num
                }
            }
        }
        return k;// the end length
    }
};