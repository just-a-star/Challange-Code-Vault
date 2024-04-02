#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {

        if (x < 0)
        {
            return false;
        }

        int original = x;
        int reversed = 0;
        int remainder;
        
        cout << "Enter a number: ";
        cin >> original;
        while (x != 0)
        {
            remainder = x % 10;
            reversed = reversed * 10 + remainder;
            x /= 10;
        }
      return original == reversed;  
    } 
};

int main()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;

    Solution solution;
    bool result = solution.isPalindrome(input);

    cout << "Is palindrome: " << (result ? "true" : "false") << endl;

    return 0;
}
