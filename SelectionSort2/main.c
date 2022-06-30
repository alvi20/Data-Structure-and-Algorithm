#include <stdio.h>

int main() {

    int n=10,A[]={12,2,55,11,67,25,120,5,99,35};

    int i,j,min,t;

    for(i=0;i<n-1;i++) {

        min = i;

        for (j = i + 1; j < n; j++) {

            if (A[j] < A[min])
                min = j;
        }
            if (min != i) {

                t = A[i];
                A[i] = A[min];
                A[min] = t;
            }


        }

      for(i=0;i<n;i++)
          printf(" %d",A[i]);

    return 0;
}
