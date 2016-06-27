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
	length_num=strlen(num);  // 計算輸入數字的長度 
	
	int total;  //最後總和的值 
	char temp1;   
	
	do{
		total = 0;
		for(int i = 0 ; i <= length_num-1 ; i++) //判斷字串長度，來決定要加到哪時候 
		{
			temp1 = num[i]-48;  //將字串裡面的數字位置 一一取出來 
			total = temp1 + total;  //一直累加 
		}
		itoa(total,num,10);  //再將 字串裡面的東西 換成 累加的值 預防要在累加一次 
		length_num=strlen(num);  //每次累加後都有可能改變長度 

	  }while ( total > 9 ); //判斷若是 累加的值>9 也就是兩位數以上 就在做一次累加 
	
	cout << "sum = " <<total << endl; //輸出結果 
	
    return 0;
}

