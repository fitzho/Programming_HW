#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std; 

int a[10]={};
int b;

void catch1(int,int);
void arrangement(void);
int num(void);

int main(void) { 

	arrangement();
	
	num();
	
	catch1(a[10],b);


    return 0;
}

void arrangement(void)
{
	extern int a[10];
	int c;
	
	srand( (unsigned)time(NULL) );

	
	for (int temp = 0 ; temp <= (10-1) ; temp++)
	{
//		do{
			
		
			c=rand()%10+1;
			a[temp]= c;
			
			for (int temp2=0 ; temp2<temp ; temp2++)
			{
				
				
				while (a[temp]==a[temp2])
				{
					//a[temp] = 0;
					//cout<< "  temp  " << temp  << "  a [temp]  " << a[temp]   << endl;
					temp--;
					break;
				}
				
			}

//		}while (a[temp]=0);
		
	cout << "array a["  << temp << "] = " << a[temp] << endl;	
	}

}

int num(void)
{
	extern int b;
	b=rand()%10 + 1;
	
	cout << "b = " << b <<endl;
	return b;
}

void catch1(int a,int b)
{
	extern int a[10];
	extern int b;
	
	cout << "position = " << b  << endl;
	
	cout <<  "a[" << b <<"] = "  <<  a[b] << endl;


}
