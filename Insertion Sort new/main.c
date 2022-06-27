#include <stdio.h>

int main() {
    int i,j,t,n=8,A[]={3,7,4,9,5,10,34,12};


    for(j=1;j<=n-1;j++) {

        t = A[j];
        i = j - 1;

        while (  (i >= 0) && (A[i] > t) ) {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = t;
    }

    for(j=0;j<=n-1;j++)

        printf("%d\n",A[j]);

    return 0;
}

