class Solution {
public:
    int lengthOfLastWord(string s){
    int len = 0;
        s.erase(0, s.find_first_not_of(" "));//find_first_not_of to get the index of the first non-whitespace character
        s.erase(s.find_last_not_of(" ") +1);//find_last_not_of to get the index from the end that isn't whitespace
        for(int i=0; i<s.length(); i++){
        if (s[i] == ' ')
            len = 0;
        else
            len++;   
        }
        return len;
    }    
};
