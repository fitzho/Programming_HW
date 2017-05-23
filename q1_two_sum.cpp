#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std; 
int determine_input(int);

int main() { 
		
		int nums[]={2,11,7,15};
	    int target = 9;
	    for (int i=0;i<=(sizeof(nums)/sizeof(nums[0]));i++)
        {
        	for (int j=i;j<=(sizeof(nums)/sizeof(nums[0]));j++)
            {
                if (nums[i]+nums[j]==target)
                {
                	cout<<"num1 = " << i  << endl;
                	cout<<"num2 = " << j  << endl;
			    }
            }
        }
    return 0;
}

