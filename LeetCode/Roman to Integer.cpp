#include <iostream>

class Solution {
public:
    int getval(char a) {
        switch (a) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(std::string s) {
        int n = s.size();
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if ((i + 1) < n && getval(ch) < getval(s[i + 1]))
                sum = sum - getval(ch);
            else
                sum += getval(ch);
        }
        return sum;
    }
};

int main() {
    Solution solution;
    std::string romanNum = "MCMXCIV"; // Example Roman numeral to convert
    
    int result = solution.romanToInt(romanNum);
    
    std::cout << "The integer representation of the Roman numeral " << romanNum << " is: " << result << std::endl;
    
    return 0;
}
