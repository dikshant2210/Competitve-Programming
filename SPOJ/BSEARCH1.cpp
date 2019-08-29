#include <iostream>
#include <stdio.h>

using namespace std;

int BinarySearch (int A[], int numberElements, int X) {
    int Left=0, Right=numberElements, mid;

    while (Left <= Right) {
        mid=(Left + Right) / 2;

        if (X==A[mid]) {
            if (mid == 0 || A[mid - 1] != X) return mid;
            else Right = mid - 1;
        }
        else if (X<A[mid]) Right = mid-1;
                       else Left = mid+1;
    }
    return -1;
}

int main() {
    int n, q, query_num;
    scanf("%d%d", &n, &q);
    int A[n];
    for(int i = 0; i < n; i++) scanf("%d", &A[i]);
    while (q--) {
        scanf("%d", &query_num);
        printf("%d\n", BinarySearch(A, n-1, query_num));
    }
}