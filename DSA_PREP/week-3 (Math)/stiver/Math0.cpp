#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    int cnt = 0;
    int digit;
    while (n > 0)
    {
        digit = n % 10;
        n /= 10;
        cnt++;
    }
    return cnt;
}

int ReverseAnumber(int n) {
    int rev = 0, lastDigit = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        n /= 10;
        rev = (rev * 10) + lastDigit;
    }
    cout << rev;
    return 0;
}

bool palindrome(int n) {
    int ans = n;
    int rev = 0, lastDigit = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        n /= 10;
        rev = (rev * 10) + lastDigit;
    }
    return ans == rev ? true : false;
}

bool checkArmstrong(int n) {
    int num = n;
    int sum = 0, lastDigit = 0;
    int k = to_string(num).length();
    while (n > 0)
    {
        lastDigit = n % 10;
        sum += pow(lastDigit, k);
        n /= 10;
    }
    return sum == num ? true : false;
}

int *printDivisors(int n, int &size) {
    int *divisors = new int[n];
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            divisors[count++] = i;
    }
    size = count;
    return divisors;
}

int checkPrime(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if ((n % i) == 0)
        {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
    }
    return cnt == 2 ? true : false;
}

int gcd(int a, int b) {
    while (a > 0 && b > 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a == 0 ? b : a;
}
