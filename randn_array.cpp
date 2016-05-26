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
	srand( (unsigned)time(NULL) );  //時間為每次執行的變數 
	for (int temp = 0 ; temp < NUM ; temp++)  // temp <= (10-1)  // a 裡面的index 
	{
		random_number=rand()%NUM+1;  //產生一個隨機數 1 <= c <= NUM
		//a_list[temp]= random_number;  //隨機數存放給 a 
		//*(a_list[0]+temp)=random_number;
		*(a_list[0]+temp)=random_number;
		
		for (int temp2=0 ; temp2<temp ; temp2++)
		{
			while (*(a_list[0]+temp)==(*(a_list[0]+temp2)))  //當有重複的情況 ，temp減一回去 
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
	
	for (int temp = 0 ; temp < NUM ; temp++) //創一個存放1~NUM的陣列 
	{
		array_store[temp]=temp+1;
	}
	srand( (unsigned)time(NULL) );  //時間為每次執行的變數 
	for (int temp = 0 ; temp < NUM ; temp++)   // temp 是 a_list 裡面的index 
	{
		random_number=rand()%max_num;  //產生一個隨機數 0 <= c <= max_num
		a_list[temp] =array_store[random_number];  //抓取在隨機數random_number位置的array_store，存放給 a_list[temp]
		array_store[random_number]=array_store[max_num-1];//在隨機數random_number位置的array_store的值，改為 array_store 上最後一個值 
		max_num--;
	} 
	return SUCCESS;
}


int num(void)  //產生一個隨機數 
{
	int random_position;
	random_position=rand()%NUM; // 0 <= random_position <NUM-1
	
	cout << "random_position = " << random_position <<endl;
	return random_position;
}


int show(int a_list[],int show_position)  //顯示出 a 在 隨機數位址上的值 
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


int modify(int a_list[], int modify_pos, int modify_val)  //更改指定位址 與 值 
{
	do{	
		cout << "modify position = " << endl;  //輸入更改位址 
		cin  >> modify_pos  ;
		cout << endl;
	}while (modify_pos>NUM);//判斷輸入位址是否超過範圍

	cout << "modify value = " << endl;  //輸入要更改的值 
	cin  >> modify_val  ;
	cout << endl;	

	a_list[modify_pos]=modify_val;  //指定值給 a 位址 
	cout << "a["<< modify_pos << "] = " << a_list[modify_pos] << endl;
	cout << endl;
	for (int temp = 0; temp < NUM ; temp++)
	{
		cout<< "a[" << temp << "] = " << a_list[temp] << endl;
	}
	return 0;
}
