class Solution {
public:
    int reverse(int x) {
    int x2;
	int x_temp;
	int x_sign;

	if (x>0)//check value is postive or negative
	{
		x_sign=1;
	}
	else
	{
		x_sign=-1;
	}
	x_temp=x*x_sign; // let calculate value be positive
	int x_temp2=x_temp;
	int x_temp3=0;
	int num_length=0;
	
	while(x_temp2 != 0 )//calculate value length
	{
		x_temp2 = x_temp2/10;
		num_length++;
	}
	
	for (int i=num_length-1; i>=0;i--)
	{
		int x_temp5=x_temp/pow(10,i);//Using quotient to calculate each number
		x_temp3= x_temp5* pow(10,num_length-1-i) + x_temp3;//quotion * which number in tens/hundreds/thousands... + old value
		x_temp=x_temp - x_temp5 * pow(10,i);//new value = old value - quotion * number in tens/hundreds/thousands...
	}

	x2=x_sign * x_temp3;//if original value is negative, let it be negative 
	
	if (x2 <= -2147483648)//check the value size to prevent overflow
	{
	    return 0;
	}
	else
	{
	    return x2;
	}
	}
};
