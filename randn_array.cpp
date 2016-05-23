#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std; 

int a[10]={};
int b;
int c;
int correct_pos;
int correct_val;

void arrangement(void);
int num(void);
void catch1(int,int);
void correct(int,int,int);


int main(void) { 

	arrangement();
	
	num();
	
	catch1(a[10],b);

	correct(a[10],correct_pos,correct_val);

    return 0;
}

void arrangement(void)
{
	extern int a[10];
	int c;
	
	srand( (unsigned)time(NULL) );  //時間為每次執行的變數 

	
	for (int temp = 0 ; temp < 10 ; temp++)  // temp <= (10-1)  // a 裡面的index 
	{
			
		
			c=rand()%10+1;  //產生一個隨機數 
			a[temp]= c;  //隨機數存放給 a 
			
			for (int temp2=0 ; temp2<temp ; temp2++)
			{
				
				
				while (a[temp]==a[temp2])  //當有重複的情況 ，temp減一回去 
				{
					temp--;
					break;
				}
				
			}

		
	cout << "array a["  << temp << "] = " << a[temp] << endl;	
	}

}

int num(void)  //產生一個隨機數 
{
	extern int b;
	b=rand()%10 + 1;
	
	cout << "b = " << b <<endl;
	return b;
}

void catch1(int a,int b)  //顯示出 a 在 隨機數位址上的值 
{
	extern int a[10];
	extern int b;
	
	cout << "position = " << b  << endl;
	
	cout <<  "a[" << b <<"] = "  <<  a[b] << endl;

}
void 	correct(int a, int correct_pos, int correct_val)  //更改指定位址 與 值 
{
	extern int a[10];
	extern int correct_pos;
	extern int correct_val;
	
	cout << "correct position = " << endl;  //輸入更改位址 
	cin  >> correct_pos  ;
	cout << endl;
	
	cout << "correct value = " << endl;  //輸入要更改的值 
	cin  >> correct_val  ;
	cout << endl;	
	
	a[correct_pos]=correct_val;  //指定值給 a 位址 
	
/*	
	cout << "a["<< correct_pos << "] = " << a[correct_pos] << endl;
	for (int temp = 0; temp < 10 ; temp++)
	{
		cout<< "a[" << temp << "] = " << a[temp] << endl;
	}
*/
}
