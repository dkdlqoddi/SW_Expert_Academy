#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int n, val = 1;
    scanf("%d", &n);
    while (n-- >= 0) {
        printf("%d ", val);
        val *= 2;
    }
    return 0;
}