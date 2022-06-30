#include <stdio.h>

int main() {

    int n,A[100];

    int i,j,temp;

    printf("How many numbers do you need: ");
    scanf("%d",&n);
    printf("Pleaae enter %d numbers: ",n);

    for(i=0;i<n;i++)
        scanf("%d",&A[i]);


    for(i=0;i<n-1;i++){


        for(j=0;j<n-1-i;j++)

            if(A[j]<A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }

    }

    for(i=0;i<n;i++)
        printf(" %d",A[i]);




    return 0;
}
