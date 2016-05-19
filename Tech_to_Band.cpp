#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std; 

long long a;
char GSM_WCDMA_CONFIG[64][100]={"GSM-850A","GSM-850B","0","0","0","0","0","GSM-DCS","GSM-EGSM","GSM-PGSM","0","0","0","0","0","0","GSM450","GSM480","GSM750","GSM850","GSM-Railways","GSM-PCS",
				 				"WCDMA B1","WCDMA B2","WCDMA B3","WCDMA B4","WCDMA B5","WCDMA B19","0","0","0","0","0","0","0","0","0","0","0","0","0","0",
								 "0","0","0","0","0","0","WCDMA B7","WCDMA B8","WCDMA B9","0","0","0","0","0","0","0","0","0","WCDMA B6","WCDMA B21","0","0"	};
char TDSCDMA_CONFIG[6][100]={"TDSCDMA B34","0","0","0","TDSCDMA B40","TDSCDMA B39"};
int temp;
int tech_num;

void input(void);
void trans(void);

int main(void) { 

	input();
	trans();

    return 0;
}

void input(void)
{
	extern int tech_num , temp ;
	extern long long a;
	
	cout << "if tech is GSM/WCDMA input 0" <<endl;
	cout << "if tech is 4G input 1"<<endl;
	cout << "if tech is TDSCDMA input 2 "<<endl;
	cout << "tech num = ";
	cin  >> tech_num  ;
	
	cout<<"if hex number, input 0 first, "<<endl;
	cout<<"if dec number, input 1 first, "<<endl;
	cout <<"number type = ";
	scanf("%d",&temp);
	
	if (temp)
	{
		cout<< "input a dec number = " ;
		scanf("%d",&a);	
	}
	else
	{
		cout<< "input a hex number = " ;
		scanf("%X",&a);	
	}
}

void trans(void)
{
	extern long long a;
	extern int tech_num;
	extern char GSM_WCDMA_CONFIG[64][100], TDSCDMA_CONFIG[6][100];
	
	int i=1;
	while (a>0)
	{
		int b;
		b=a & 0x01;
		if (b)
		{
			if (tech_num == 1)  //for  LTE
			{
				cout << "lte band " << i << endl;	
			}
			else if (tech_num == 0) // for GSM WCDMA
			{
				cout << "band " << GSM_WCDMA_CONFIG[i-1] << endl;
			}
			else  // for TDSCDMA
			{
				cout << "band " << TDSCDMA_CONFIG[i-1] << endl;
			}
			
		}
		
		a=a>>1;
		i++;
	}
}
