// base_conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool BaseConversion(int num, int base, string& ans);

int main()
{
    int num, base;
    string ans = "";
    cout << "Enter number and base: ";
    cin >> num >> base;
    BaseConversion(num, base, ans);
    cout << num << " in base " << base << " = " << ans << endl;
}

bool BaseConversion(int num, int base, string& ans)
{
    bool is_negative = false;
    static string digit_array = "0123456789ABCDEF";

    if ((base < 1) || (base > 16))
    {
        return false;
    }
    if (num < 0)
    {
        is_negative = true;
        num = -num;
    }
    if (num < base)
    {
        ans = digit_array[num] + ans;
        if (is_negative)
        {
            BaseConversion(-num / base, base, ans);
        }
        else
        {
            BaseConversion(num / base, base, ans);
        }
        return true;
    }
}