class Solution {
public:
    string intToRoman(int num) {
        
    int num_1=num;
	char roman_idx[]="IVXLCDM";
	char combination_roman[100000]="";
	char temp[100000]="";
	
	for (int j=1000;j>0;j=j/10)
	{
		int quotient = num_1/j;
		
		num_1=num_1-quotient*j;
		
		int roman_num=0;	
		for (int i=j;i>1;i=i/10)
		{
			roman_num++;
			//cout << "eee"<<endl;
		}
		
		if (quotient >= 4)
		{
			if(quotient == 9)
			{
				temp[0]=roman_idx[roman_num*2];
				temp[1]=roman_idx[roman_num*2+2];
				strcat(combination_roman,temp );
				quotient=0;
			}
			else if(quotient == 4)
			{
				temp[0]=roman_idx[roman_num*2];
				temp[1]=roman_idx[roman_num*2+1];
				strcat(combination_roman,temp );
				quotient=0;
			}
			else
			{
			    temp[1]='\0';
				temp[0]=roman_idx[roman_num*2+1];
				strcat(combination_roman,temp );
				quotient=quotient-5;
			}
		}
		for (int k=0 ; k <quotient ; k++)
		{
		    temp[1]='\0';
			temp[0]=roman_idx[roman_num*2];
			strcat(combination_roman,temp );
		}
	}
	return combination_roman;
	
    }
};
