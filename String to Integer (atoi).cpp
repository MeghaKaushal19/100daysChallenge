class Solution {
public:
    int myAtoi(string s) {
        int res = 0;
        int i = 0;
        bool sign = false;
        while(i<s.length()){
            if(s[i] != ' ' && s[i] != '+'&& s[i] != '-' && (int(s[i]) < 48 || int(s[i]) > 57))break;
            else{
                if (s[i] == ' ') res += 0;
                if (s[i] == '-') sign = true;
                if (s[i] >= '0' && s[i] <= '9') {
                    if (res > (INT_MAX - (s[i] - '0')) / 10) {
                        return (sign) ? INT_MIN : INT_MAX;
                    }
                    res = res * 10 + (s[i] - '0');
                }
            }
            if((s[i] >= 48 && s[i] <= 57 || s[i] == '+' || s[i] == '-') && (s[i+1] <48 || s[i+1] > 57))break;
            i++;
        };
        if(sign == true)res *=-1;
        return res;
    }
};
