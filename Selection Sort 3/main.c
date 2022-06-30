#include <stdio.h>

int main() {


    int n,A[100];

    int i,j,min,temp;


    printf("How many number do you want: ");
    scanf("%d",&n);
    printf("Enetr %d numbers: ",n);

    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    for(i=0;i<n-1;i++){

        min=i;

        for(j=i+1;j<n;j++)

            if(A[j]<A[min])
                min=j;
        if(min!=i){

            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }

    }

    for(i=0;i<n;i++)
        printf(" %d",A[i]);

    return 0;
}
