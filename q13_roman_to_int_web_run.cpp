class Solution {
public:
    int romanToInt(string s) {
        
    int num=0;
	int temp1 = 0 ;
	int temp2 = 3;
	for (int i=0 ; i<s.size() ; i++ )
	{
		switch (s[i])
		{
			case 'I':
				temp1=1;
				break;
			case 'V':
				temp1=5;
				break;
			case 'X':
				temp1=10;
				break;
			case 'L':
				temp1=50;
				break;	
			case 'C':
				temp1=100;
				break;
			case 'D':
				temp1=500;
				break;	
			case 'M':
				temp1=1000;
				break;		
			default:
				temp1=0;	
		}
		int compare_value=temp1/temp2;
		if (compare_value==5)
		{
			temp1=temp1-temp2-temp2;
		}
		else if (compare_value==10)
		{
			temp1=temp1-temp2-temp2;
		}

		temp2=temp1;		
		
		
		num=num+temp1;
	}
	return num;
    }
};
