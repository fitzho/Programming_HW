#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std; 
int determine_input(int);

int main() { 
	
	char num[999];
	int length_num;
	
	do{
		cout<<" input the value "<<endl;
		cin>>num;
				 
	  }while( atoi(num)<0 );//|| a>2147483647

	cout<< "num = " << num << endl;
	length_num=strlen(num);  // �p���J�Ʀr������ 
	
	int total;  //�̫��`�M���� 
	char temp1;   
	
	do{
		total = 0;
		for(int i = 0 ; i <= length_num-1 ; i++) //�P�_�r����סA�ӨM�w�n�[����ɭ� 
		{
			temp1 = num[i]-48;  //�N�r��̭����Ʀr��m �@�@���X�� 
			total = temp1 + total;  //�@���֥[ 
		}
		itoa(total,num,10);  //�A�N �r��̭����F�� ���� �֥[���� �w���n�b�֥[�@�� 
		length_num=strlen(num);  //�C���֥[�᳣���i����ܪ��� 

	  }while ( total > 9 ); //�P�_�Y�O �֥[����>9 �]�N�O���ƥH�W �N�b���@���֥[ 
	
	cout << "sum = " <<total << endl; //��X���G 
	
    return 0;
}

