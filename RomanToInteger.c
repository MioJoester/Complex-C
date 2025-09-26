#include <stdio.h>
#include <string.h>

int value(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int total = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        int current = value(s[i]);
        int next = (i + 1 < n) ? value(s[i + 1]) : 0;

        if (current < next) {
            total -= current;  
        } else {
            total += current;
        }
    }
    return total;
}
