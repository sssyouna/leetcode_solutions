#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);

    // Maximum possible length is max(lenA, lenB) + 1
    int maxLen = (lenA > lenB ? lenA : lenB) + 2;

    char *result = (char *)malloc(maxLen * sizeof(char));

    int i = lenA - 1;
    int j = lenB - 1;
    int k = 0;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    result[k] = '\0';

    // Reverse the string
    for (int l = 0, r = k - 1; l < r; l++, r--) {
        char temp = result[l];
        result[l] = result[r];
        result[r] = temp;
    }

    return result;
}