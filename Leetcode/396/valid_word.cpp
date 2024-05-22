#include <bits/stdc++.h>
using namespace std;
    bool isValid(string word) {
        if (word.size() < 3) return false;
        int vowels = 0, cons = 0;
        for (char c : word) {
            if (c >= '0' && c <= '9') continue;
            c |= 32;
            if (c < 'a' || c > 'z') return false;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
            else cons++;
        }
        return vowels && cons;
    }