#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int t, r, c;
    scanf("%d", &t);

    while(t--) {
        scanf("%d %d", &r, &c);
        r--; c--;
        printf("%d\n", factorial(r + c) / (factorial(r) * factorial(c)));
    }
}