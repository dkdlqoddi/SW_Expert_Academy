#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int A, B;
    scanf("%d %d", &A, &B);
    switch (A) {
    case 1:
        switch (B) {
        case 2:
            printf("B");
            break;
        case 3:
            printf("A");
            break;
        }
        break;
    case 2:
        switch (B) {
        case 1:
            printf("A");
            break;
        case 3:
            printf("B");
            break;
        }
        break;
    case 3:
        switch (B) {
        case 1:
            printf("B");
            break;
        case 2:
            printf("A");
            break;
        }
        break;
    }
    return 0;
}