#include <stdio.h>

int main() {

    int n=5,A[]={3,34,25,1,87};

    int i,j,temp;


    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-1-i;j++)

            if(A[j]>A[j+1]){

                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }


    }
     for(i=0;i<n;i++)
     printf(" %d",A[i]);


    return 0;
}
