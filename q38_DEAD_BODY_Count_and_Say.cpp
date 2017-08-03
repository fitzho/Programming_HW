#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <string>
#include <math.h>
using namespace std; 
int determine_input(int);

int top=0;


int main() { 
	
	int debug_count_index=1;
	int b=111221;
	int n=1;
	int b_temp1=0;
	int b_temp2=0;
	int b_temp_now;
	int b_temp_pre;
	int b_temp_pre_count;
	int b_temp_pre_count_pre;
	int b_temp_pre_not_reflash;
	
    int remainder_now=0;
    int remainder_pre=0;
	int count_num=1;
    for (int i=1;i<=n;i++)
    {
    	remainder_now=0;
    	remainder_pre=0;
    	b_temp1=0;
    	b_temp2=0;
    	b_temp_now=0;
    	b_temp_pre=0;
    	b_temp_pre_count=1;
    	b_temp_pre_count_pre=1;
    	count_num=1;
    	b_temp_pre_not_reflash=0;
    	
        while (b%10 != 0) 
        {
        	cout << "//////////////////////debug count index = " << debug_count_index << endl;
        	count_num=1;
        	b_temp_pre_count=1;
        	
            remainder_now = b%10;
            cout << "remainder_now = " << remainder_now << endl;
            
            b=b/10;
            cout << "b = " << b << endl;
            
            if (remainder_now == remainder_pre)
            {
                count_num++;
                b_temp1=count_num*10+remainder_now;// b_temp=b_temp*100 ?
                cout << "if set up, b_temp1 = " << b_temp1 << endl;
            }
            else
            {
            	b_temp1 = count_num*10+remainder_now; //b_temp1*100 + count_num*10+remainder_now;// b_temp=b_temp*100 ?
				cout << "if no set up, b_temp1 = " << b_temp1 << endl;
			}
            
            while (b_temp_pre != 0)
            {
            	cout << "while loop first b_temp_pre = " << b_temp_pre << endl;
            	b_temp_pre=b_temp_pre / 100 ;
            	cout << "while loop second b_temp_pre = " << b_temp_pre << endl;
            	if (remainder_pre != remainder_now)
            	{
            		b_temp_pre_count=b_temp_pre_count * 100;
            		cout << "if set up, b_temp_pre_count = " << b_temp_pre_count << endl;
				}
				else//new add
				{
					b_temp_pre_count=b_temp_pre_count_pre;
					cout << "if no set up, b_temp_pre_count = " << b_temp_pre_count << endl;
				}
			}
			
			b_temp_pre_count_pre=b_temp_pre_count;
            cout << "b_temp_pre_count_pre = " << b_temp_pre_count_pre << endl;
            
            b_temp_now=b_temp1;
            cout << "b_temp_now = " << b_temp_now << endl;
            
            if (remainder_pre != remainder_now)//???????????????????????????????
            {
            	b_temp2=b_temp_now * b_temp_pre_count + b_temp_pre_not_reflash;
            	cout << "if set up, b_temp2 = " << b_temp2 << endl;
			}
            else
            {
            	b_temp2=b_temp_now * b_temp_pre_count;
            	cout << "if no set up, b_temp2 = " << b_temp2 << endl;
			}
            b_temp_pre=b_temp2;
            b_temp_pre_not_reflash=b_temp_pre;
            
            remainder_pre=remainder_now;
            cout<< "remainder_pre =" << remainder_pre << endl;
            
            debug_count_index++;
        }
        //b=b_temp1*100 + b_temp2;
        b=b_temp2;
        //b=b_temp1;
        cout<< "b = " << b << endl;
        //cout<< "b_temp_pre = " << b_temp_pre << endl;
    }
	
	return 0;
}

