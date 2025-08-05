#include "Sol_5.h"

string Sol_5::longestPalindrome(string s)
{
    int length = s.length();
    string res(1, s[0]);
    for (int i = 0; i < length - 1; i++)
    {
        int left = i;
        int right = i + 1;
        while (left >= 0 && right < length &&
               s[left] == s[right])
        {
            left--;
            right++;
        }
        int templen = right - left - 1;
        if (templen > res.length())
        {
            res = s.substr(left + 1, templen);
        }

        left = i - 1;
        right = i + 1;
        while (left >= 0 && right < length &&
               s[left] == s[right])
        {
            left--;
            right++;
        }
        templen = right - left - 1;
        if (templen > res.length())
        {
            res = s.substr(left + 1, templen);
        }
    }
    return res;
}
