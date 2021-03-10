class Solution {
public:
    string intToRoman(int num) {
        pair<int, string> pm[]{{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, 
                               {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, 
                               {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
        string res;
        for (const auto &[i, s] : pm) {
            int n = num / i;
            
            while (n) {
                res += s; 
                num -= i;
                n = num / i;
            }
        }
        return res;
    }
};
