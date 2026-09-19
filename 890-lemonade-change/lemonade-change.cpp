class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int dollor_5 = 0, dollor_10 = 0, dollor_20 = 0;

        for(int i = 0; i < bills.size(); i++) {
            if(bills[i] == 5) dollor_5++;

            else if(bills[i] == 10) {
                if(dollor_5 >= 1) {
                    dollor_5--;
                    dollor_10++;
                } else {
                    return false;
                }
            }
            else {
                if(dollor_5 >= 1 && dollor_10 >= 1) {
                    dollor_5--;
                    dollor_10--;
                    dollor_20++;
                } else if(dollor_5 >= 3) {
                    dollor_20++;
                    dollor_5 -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};