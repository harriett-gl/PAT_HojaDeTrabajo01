#include "Ejercicio02.h"

bool Ejercicio02::isPalindrome(string& s)
{
    if (s.length() == 0 || s.length() == 1) {
        return true;
    }
    if (s[0] != s[s.length() - 1]) {
        return false;
    }
    string sub = s.substr(1, s.length() - 2);
    return isPalindrome(sub);
}

