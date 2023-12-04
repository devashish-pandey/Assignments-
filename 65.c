//to check matrix is symmetric or not
#include <stdio.h>
int main (){
    int A[3][3],B[3][3],i,j,f=0;

    for (i=0;i<3;++i){
        for(j=0;j<3;++j){
            scanf("%d",&A[i][j]);
        }
    }
    printf ("Matrix is ..........\n");
      for (i=0;i<3;++i){
        for(j=0;j<3;++j){
        printf("%2d",A[i][j]);
        }
        printf("\n");
    }



      for (i=0;i<3;++i){
        for(j=0;j<3;++j){
        B[i][j] = A [j][i];
        }
      }
      printf("\n transpose of Matrix is......... \n");

      for (i=0;i<3;++i){
        for(j=0;j<3;++j){
            printf("%2d",B[i][j]);
        }
        printf("\n");
      }


      for (i=0;i<3;++i){
        for(j=0;j<3;++j){

if   (A[i][j]  != B[i][j]){
    f = 1;
    break;
}

        }
      }


            if (f==0){
               printf("matrix is symmetric\n");

            }
            else
            printf("matrix is not symmetric\n");

    return 0;
}