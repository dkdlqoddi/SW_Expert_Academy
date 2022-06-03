#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    while (n >= 0)
        printf("%d ", n--);
    return 0;
}