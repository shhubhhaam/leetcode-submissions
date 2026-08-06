class Solution {
public:
    bool checkDivision(int n, int t) {
        int product = 1;
        while(n != 0) {
            product *= n%10;
            n /= 10;
        }
        return product%t == 0;
    }
    int smallestNumber(int n, int t) {
        bool flag = 0;
        while(flag == 0) {
            if(checkDivision(n, t)) return n;
            n++;
        }
        return -1;
    }
};