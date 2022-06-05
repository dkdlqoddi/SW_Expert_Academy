#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n * (n + 1) / 2);
    return 0;
}