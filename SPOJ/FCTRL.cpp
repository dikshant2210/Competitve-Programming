#include <iostream>
#include <cmath>

using namespace std;

int fives(int n) {
    int count = 0;
    int i = 5;
    while (i <= n) {
        count += n / i;
        i *= 5;
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int w;
        scanf("%d", &w);
        int count = fives(w);
        printf("%d\n", count);
    }
}