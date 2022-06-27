#include <stdio.h>

int main() {

    int i,j,t,n,Array[100];

    printf("Enter numbers that you need: ");
    scanf("%d",&n);

    printf("Enter %d numbers: ", n);


      for(i=0;i<=n-1;i++)
      scanf("%d",&Array[i]);

     //Insertion Algorithm  Code

    for(j=1;j<=n-1;j++){

        t=Array[j];
        i=j-1;

        while( (i>=0) && (Array[i]<t) ){

            Array[i+1]=Array[i];

            i=i-1;

        }

        Array[i+1]=t;
    }

     //    End of IC

    for(j=0;j<=n-1;j++)
        printf(" %d",Array[j]);

    return 0;
}
