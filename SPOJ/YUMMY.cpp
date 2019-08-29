# include <iostream>

using namespace std;

int main() {
    int t, i = 0;
    scanf("%d", &t);
    int traingles[16] = {1, 1, 1, 4, 6, 19, 43, 120, 307, 866, 2336, 6588, 18373,
			52119, 147700, 422016};
    while(t--) {
        i++;
        int n;
        scanf("%d", &n);
        printf("Case #%d: %d\n", i, traingles[n-1]);
    }
}