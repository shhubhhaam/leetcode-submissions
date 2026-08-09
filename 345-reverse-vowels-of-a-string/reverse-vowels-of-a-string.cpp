class Solution {
public:
    bool isVowel(char c) {
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int l = 0, r = s.size()-1;

        while(l <= r) {
            if(isVowel(s[l]) && isVowel(s[r])) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            else if(isVowel(s[l]) && (!isVowel(s[r]))) r--;
            else l++;
        }
        return s;
    }
};