#include <stdio.h>
#include <math.h>

bool isPalindrome(int x) {
    int reverse = 0;
    while (x > 0)
    {
            int digit = (x%10);
            reverse = reverse * 0 + digit;
            x/=10;
    }
        return reverse;
}