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
	
	srand( (unsigned)time(NULL) );  //�ɶ����C�����檺�ܼ� 

	
	for (int temp = 0 ; temp < NUM ; temp++)  // temp <= (10-1)  // a �̭���index 
	{
			
		
			c=rand()%NUM+1;  //���ͤ@���H���� 1 <= c <= NUM
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
	return a;
}

int num(void)  //���ͤ@���H���� 
{
	int random_position;
	random_position=rand()%NUM; // 0 <= random_position <NUM-1
	
	cout << "random_position = " << random_position <<endl;
	return random_position;
}

int show(int a[],int b)  //��ܥX a �b �H���Ʀ�}�W���� 
{
	
	cout << "position = " << b  << endl;
	
	cout <<  "a[" << b <<"] = "  <<  a[b] << endl;
	
	return 0;
}


int modify(int a[], int modify_pos, int modify_val)  //�����w��} �P �� 
{
	
	cout << "modify position = " << endl;  //��J����} 
	cin  >> modify_pos  ;
	cout << endl;
	
	cout << "modify value = " << endl;  //��J�n��諸�� 
	cin  >> modify_val  ;
	cout << endl;	
	
	a[modify_pos]=modify_val;  //���w�ȵ� a ��} 
	

	cout << "a["<< modify_pos << "] = " << a[modify_pos] << endl;
	for (int temp = 0; temp < NUM ; temp++)
	{
		cout<< "a[" << temp << "] = " << a[temp] << endl;
	}
	return 0;
}
