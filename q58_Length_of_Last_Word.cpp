class Solution {
public:
    int lengthOfLastWord(string s) {
        int string_length = s.size();
        int last_length=0;
        int last_length_prevent_end_space=0;
        int i=0;
        
        for ( i ; i<string_length ; i++)
        {
            if (s[i] == ' ')
            {
                last_length=0;
            }
            else
            {
                last_length++;
                last_length_prevent_end_space=last_length;
            }
        }
        
        if (s[string_length-1] == ' ')
        {
            return last_length_prevent_end_space;
        }
        else
        {
            return last_length;
        }
    }
};