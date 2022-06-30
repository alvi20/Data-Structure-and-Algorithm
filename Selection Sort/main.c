#include <stdio.h>

int main() {

    int n=7,A[]={6,12,0,18,11,99,55};

    int i,j,minimum,t;


    for(i=0;i<n-1;i++){

        minimum=i;

        for(j=i+1;j<n;j++){

            if(A[minimum]>A[j])
                minimum=j;
        }

        if(minimum!=i){
            t=A[i];
            A[i]=A[minimum];
            A[minimum]=t;
        }

    }

    for(i=0;i<n;i++)
        printf(" %d",A[i]);


    return 0;
}
