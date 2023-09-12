#include "Ejercicio04.h"

void generar(vector<string>& res, string s, int open, int close, int n) {
    if (open == n && close == n) {
        res.push_back(s);
        return;
    }
    if (open < n) {
        generar(res, s + "(", open + 1, close, n);
    }
    if (close < open) {
        generar(res, s + ")", open, close + 1, n);
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    vector<string> res;
    generar(res, "", 0, 0, n);
    return res;
}
