class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=nums.size(); //ex. a=[1,2,3,4] ; a.size()=4
        int orig_length=k;
        int k1=k-1;
        int i=0;
        
        while (i+(orig_length-k)<=k1) //"orig_length-k" is number of specific value, i+orig_length-k is total number , it will equal k in the end
        {
            if (nums[i]==val)
            {
                k=k-1; //total length of new array 
                for (int j=i; j<=k; j++)// forward one num in each array num.
                {
                    if (k!=0)// prevent k=0, it will cause pointer to null num
                    {
                        nums[j]=nums[j+1];// forward one num in each array num.
                    }
                    else
                    {
                        i=i+1;
                    }
                }
            else
            {
                i=i+1;
            }
            }
        }
        return k;// the end length
    }
};