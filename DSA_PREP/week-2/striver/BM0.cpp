#include <bits/stdc++.h>
using namespace std;

// swap two numbers without three variable
int swap(int a, int b)
{
    cout << "The values Before swaping of a is " << a << " and b is " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "The values After swaping of a is " << a << " and b is " << b << endl;
    return 0;
}
// check if the ith bit is set or not
bool BitIsSet(int n, int i)
{
    if (((n >> i) & 1) == 1)
        return true;
    else
        return false;
}
// Setting ith bit
int SetBit(int n, int i)
{
    int ans = ((1 << i) | n);
    return ans;
}
// Clear the ith bit
int ClearBit(int n, int i)
{
    int ans = ((~(1 << i) & n));
    return ans;
}
// Toggle the ith bit
int ToggleBit(int n, int i)
{
    int ans = (((1 << i) ^ n));
    return ans;
}
// Remove the last set bit
int RemoveLastSetBit(int n)
{
    int ans = n & (n - 1);
    return ans;
}
// Check the number is power of 2
bool CheckPowerOfTwo(int n)
{
    if ((n > 0) && (n & (n - 1)) == 0)
        return true;
    else
        return false;
}
// Count the number of set bits
int CountSetBits(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}

int main()
{
    int a = 9982;
    int b = 2;
    cout << CountSetBits(a) << endl;
    cout << CheckPowerOfTwo(a) << endl;
    cout << RemoveLastSetBit(a) << endl;
    cout << ToggleBit(a, b) << endl;
    cout << ClearBit(a, b) << endl;
    cout << SetBit(a, b) << endl;
    cout << swap(a, b) << endl;
    cout << BitIsSet(a, b) << endl;
}
