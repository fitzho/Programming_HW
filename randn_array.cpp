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
	
	srand( (unsigned)time(NULL) );  //�ɶ����C�����檺�ܼ� 

	
	for (int temp = 0 ; temp < 10 ; temp++)  // temp <= (10-1)  // a �̭���index 
	{
			
		
			c=rand()%10+1;  //���ͤ@���H���� 
			a[temp]= c;  //�H���Ʀs�� a 
			
			for (int temp2=0 ; temp2<temp ; temp2++)
			{
				
				
				while (a[temp]==a[temp2])  //�����ƪ����p �Atemp��@�^�h 
				{
					temp--;
					break;
				}
				
			}

		
	cout << "array a["  << temp << "] = " << a[temp] << endl;	
	}

}

int num(void)  //���ͤ@���H���� 
{
	extern int b;
	b=rand()%10 + 1;
	
	cout << "b = " << b <<endl;
	return b;
}

void catch1(int a,int b)  //��ܥX a �b �H���Ʀ�}�W���� 
{
	extern int a[10];
	extern int b;
	
	cout << "position = " << b  << endl;
	
	cout <<  "a[" << b <<"] = "  <<  a[b] << endl;

}
void 	correct(int a, int correct_pos, int correct_val)  //�����w��} �P �� 
{
	extern int a[10];
	extern int correct_pos;
	extern int correct_val;
	
	cout << "correct position = " << endl;  //��J����} 
	cin  >> correct_pos  ;
	cout << endl;
	
	cout << "correct value = " << endl;  //��J�n��諸�� 
	cin  >> correct_val  ;
	cout << endl;	
	
	a[correct_pos]=correct_val;  //���w�ȵ� a ��} 
	
/*	
	cout << "a["<< correct_pos << "] = " << a[correct_pos] << endl;
	for (int temp = 0; temp < 10 ; temp++)
	{
		cout<< "a[" << temp << "] = " << a[temp] << endl;
	}
*/
}
