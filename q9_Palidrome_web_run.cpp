class Solution {
public:
    bool isPalindrome(int x) {
        int x_temp1=x;
        int x_temp2=x;
        int x_temp_length=x;
        int num_length=0;
        int x_temp3=0, x_temp4=0;
        int x_temp5=0, x_temp6=0;
        while(x_temp_length != 0 )//calculate value length
	    {
		    x_temp_length = x_temp_length/10;
		    num_length++;
	    }
	    for (int i=num_length-1; i>=(num_length+1)/2;i--) //take count for max to max/2
	    {
	        x_temp3 = x_temp1 / pow(10,i);//calculate quotient number
	        int temp = (num_length-i);
	        int temp2 = pow(10,temp);
	        x_temp4 = (x_temp2 % temp2)/pow(10,temp-1);//calculate remainder number
	        
	        
	        if (x_temp3 != x_temp4)
	        {
	        	break;//break from for loop
	        }
	        
	        x_temp1 = x_temp1 - x_temp3 * pow(10, i) ;
	        x_temp2 = x_temp2 - x_temp4;
	        
	    }
	    
		if ((x_temp3 != x_temp4)||(x<0))
	    {
	        return false;
        }
	    else
	    {
	        return true;
        }

    }
};
