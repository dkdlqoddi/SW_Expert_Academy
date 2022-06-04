#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if ((n % i) == 0)
            printf("%d ", i);
    }
    return 0;
}