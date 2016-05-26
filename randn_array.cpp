#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std; 

#define NUM 9
#define SUCCESS 0
#define FAILED  -1
/*
int generate_random_list(int (*a_list)[NUM]);
int generate_random_list( "a pointer to an array" )
int generate_random_list(int (*a_list)[NUM])
{
	int random_number;
	srand( (unsigned)time(NULL) );  //�ɶ����C�����檺�ܼ� 
	for (int temp = 0 ; temp < NUM ; temp++)  // temp <= (10-1)  // a �̭���index 
	{
		random_number=rand()%NUM+1;  //���ͤ@���H���� 1 <= c <= NUM
		//a_list[temp]= random_number;  //�H���Ʀs�� a 
		//*(a_list[0]+temp)=random_number;
		*(a_list[0]+temp)=random_number;
		
		for (int temp2=0 ; temp2<temp ; temp2++)
		{
			while (*(a_list[0]+temp)==(*(a_list[0]+temp2)))  //�����ƪ����p �Atemp��@�^�h 
			{
				temp--;
				break;
			}
		}
	} // End of for (int temp = 0 ; temp < NUM ; temp++)
//	return SUCCESS;
}
*/

//int *generate_random_list(int *);
int generate_random_list(int *);
int num(void);
int show(int a[],int);
int modify(int a[],int,int);
int show_random_list(int *);

int main(void)
{ 
	int random_list[NUM];
	//ret = generate_random_list(random_list);
	//generate_random_list(&random_list);
	generate_random_list(random_list);
	show(random_list,num());
	show_random_list(random_list);
	int modify_pos,modify_val;
	modify(random_list,modify_pos,modify_val);
	
    return 0;
}


int generate_random_list(int *a_list)
{
	int random_number;
	int max_num=NUM;
	int array_store[NUM];
	
	for (int temp = 0 ; temp < NUM ; temp++) //�Ф@�Ӧs��1~NUM���}�C 
	{
		array_store[temp]=temp+1;
	}
	srand( (unsigned)time(NULL) );  //�ɶ����C�����檺�ܼ� 
	for (int temp = 0 ; temp < NUM ; temp++)   // temp �O a_list �̭���index 
	{
		random_number=rand()%max_num;  //���ͤ@���H���� 0 <= c <= max_num
		a_list[temp] =array_store[random_number];  //����b�H����random_number��m��array_store�A�s�� a_list[temp]
		array_store[random_number]=array_store[max_num-1];//�b�H����random_number��m��array_store���ȡA�אּ array_store �W�̫�@�ӭ� 
		max_num--;
	} 
	return SUCCESS;
}


int num(void)  //���ͤ@���H���� 
{
	int random_position;
	random_position=rand()%NUM; // 0 <= random_position <NUM-1
	
	cout << "random_position = " << random_position <<endl;
	return random_position;
}


int show(int a_list[],int show_position)  //��ܥX a �b �H���Ʀ�}�W���� 
{	
	cout << "position = " << show_position  << endl;
	cout <<  "a[" << show_position <<"] = "  <<  a_list[show_position] << endl;
	return 0;
}


//show_random_list(int *a, num)
show_random_list(int *a_list)
{
	for (int list_index=0;list_index<NUM;list_index++)
	{
		cout << "array list["  << list_index << "] = " << a_list[list_index] << endl;
	}
}


int modify(int a_list[], int modify_pos, int modify_val)  //�����w��} �P �� 
{
	do{	
		cout << "modify position = " << endl;  //��J����} 
		cin  >> modify_pos  ;
		cout << endl;
	}while (modify_pos>NUM);//�P�_��J��}�O�_�W�L�d��

	cout << "modify value = " << endl;  //��J�n��諸�� 
	cin  >> modify_val  ;
	cout << endl;	

	a_list[modify_pos]=modify_val;  //���w�ȵ� a ��} 
	cout << "a["<< modify_pos << "] = " << a_list[modify_pos] << endl;
	cout << endl;
	for (int temp = 0; temp < NUM ; temp++)
	{
		cout<< "a[" << temp << "] = " << a_list[temp] << endl;
	}
	return 0;
}
