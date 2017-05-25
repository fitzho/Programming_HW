#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std; 
int determine_input(int);

int main() { 
		
		int nums[]={0,4,3,0};
	    int target = 0;
	    int ans[2];
	    
	    for (int i=0;i<=sizeof(nums)/sizeof(nums[0])-2;i++)
        {
        	for (int j=i+1;j<=sizeof(nums)/sizeof(nums[0])-1;j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    ans[0]=i;
                    ans[1]=j;
                	cout << ans[0] << " " << ans[1] << endl;
                }
            }
        }
        
        return 0;
}

