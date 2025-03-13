#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    int original = x;
     if(x<0) return false;
    int reverse = 0;
   
    while (x > 0)
    {
            int digit = (x%10);
            reverse = reverse * 10 + digit;
            x/=10;
    }
        return reverse == original;
}