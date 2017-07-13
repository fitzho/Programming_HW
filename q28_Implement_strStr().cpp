class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = haystack.size(), b=needle.size();
        int i=0;
        int j=0;
        if (b==0)
        {
            return 0;
        }
        for(j=0;j<=a-b;j++)//j is index of haystack
        {
            for(i=0;i<=b-1-1;i++)// i is index of needle
            {
                if (haystack[j+i] != needle[i])
                {
                    break;//break "i" for loop
                }
            }
            
            if (i-1 == b-1-1)//after run i = b-1-1, next time i=b-1-1+1. So we need to set i-1 to check
            {
                if (haystack[j+i] == needle[i])//if it run to the latest index, and the value of latest index is same, it return index of hay
                    return j;
            }
        }
        return -1;
    }
};