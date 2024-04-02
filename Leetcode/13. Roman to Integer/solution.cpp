#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {

        int result = 0;
        int current = 0;

        for (int i = 0; i < s.length(); i++)
        {

            switch (s[i])
            {
            case 'I':
                if (i + 1 < s.length() && s[i + 1] == 'V')
                {
                    current = 4;
                    i++;
                }
                if (i + 1 < s.length() && s[i + 1] == 'X')
                {
                    current = 9;
                    i++;
                }
                else
                {
                    current = 1;
                }
                break;
            case 'V':
                current = 5;
                break;
            case 'X':
                if (i + 1 < s.length() && s[i + 1] == 'L')
                {
                    current = 40;
                    i++;
                }
                if (i + 1 < s.length() && s[i + 1] == 'C')
                {
                    current = 90;
                    i++;
                }
                else
                {
                    current = 10;
                }

                break;
            case 'L':
                current = 50;
                break;
            case 'C':
                if (i + 1 < s.length() && s[i + 1] == 'D')
                {
                    current = 500;
                    i++;
                }
                if (i + 1 < s.length() && s[i + 1] == 'M')
                {
                    current = 900;
                    i++;
                }
                else
                {
                    current = 100;
                }
                break;
            case 'D':
                current = 500;
                break;
            case 'M':
                current = 1000;
                break;
            default:
                break;
            }

            result = result + current;
        }
        return result;
    }
};