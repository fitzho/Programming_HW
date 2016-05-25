#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std; 

#define NUM 412

static int a[NUM];

int *generate_random_list(int *);
int num(void);
int show(int a[],int);
int modify(int a[],int,int);


int main(void) { 


	generate_random_list(a);
	
	show(a,num());

	
	int modify_pos,modify_val;
	modify(a,modify_pos,modify_val);
	
	
    return 0;
}

//int generate_random_list( "a pointer to an array" )
int *generate_random_list(int *a)
{

	int c;
	
	srand( (unsigned)time(NULL) );  //時間為每次執行的變數 

	
	for (int temp = 0 ; temp < NUM ; temp++)  // temp <= (10-1)  // a 裡面的index 
	{
			
		
			c=rand()%NUM+1;  //產生一個隨機數 1 <= c <= NUM
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
	return a;
}

int num(void)  //產生一個隨機數 
{
	int random_position;
	random_position=rand()%NUM; // 0 <= random_position <NUM-1
	
	cout << "random_position = " << random_position <<endl;
	return random_position;
}

int show(int a[],int b)  //顯示出 a 在 隨機數位址上的值 
{
	
	cout << "position = " << b  << endl;
	
	cout <<  "a[" << b <<"] = "  <<  a[b] << endl;
	
	return 0;
}


int modify(int a[], int modify_pos, int modify_val)  //更改指定位址 與 值 
{
	
	cout << "modify position = " << endl;  //輸入更改位址 
	cin  >> modify_pos  ;
	cout << endl;
	
	cout << "modify value = " << endl;  //輸入要更改的值 
	cin  >> modify_val  ;
	cout << endl;	
	
	a[modify_pos]=modify_val;  //指定值給 a 位址 
	

	cout << "a["<< modify_pos << "] = " << a[modify_pos] << endl;
	for (int temp = 0; temp < NUM ; temp++)
	{
		cout<< "a[" << temp << "] = " << a[temp] << endl;
	}
	return 0;
}
