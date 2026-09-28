class Solution {
public:

    long long modPow(long long a, int b) {

        long long result = 1;

        while (b > 0) {

            if (b & 1)
                result = (result * a) % 1337;

            a = (a * a) % 1337;

            b >>= 1;
        }

        return result;
    }

    int superPow(int a, vector<int>& b) {

        long long result = 1;

        a %= 1337;

        for (int digit : b) {

            result = modPow(result, 10);

            result = (result * modPow(a, digit)) % 1337;
        }

        return result;
    }
};