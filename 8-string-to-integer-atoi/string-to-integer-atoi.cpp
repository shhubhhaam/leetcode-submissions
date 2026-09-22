class Solution {
public:
    int myAtoi(string s) {
        int flag = 0;
        long int number = 0;
        int i;

        for(i = 0; i < s.size(); ++i) {
            if(s[i] != ' ') {
                break;
            }
        }

        if(s[i] == '-'){
            flag = 1;
            i++;
        } else if(s[i] == '+') {
            flag = 0;
            i++;
        }

        if(flag == 1) {
            for(int j = i; j < s.size(); j++) {
                if(s[j] >= '0' && s[j] <= '9') {
                    number = (number * 10) + int(s[j]) - '0';
                    if(-abs(number) <= pow(-2,31)) return pow(-2,31);
                } else break;
            }
        } else {
            
            for(int j = i; j < s.size(); j++) {
                if(s[j] >= '0' && s[j] <= '9') {
                    number = abs(number * 10) + int(s[j]) - '0';
                    if((number >= pow(2,31))) return pow(2,31)-1;
                } else break;
            }
        }
        return (flag == 1)?(-abs(number)):number;
    }
};
