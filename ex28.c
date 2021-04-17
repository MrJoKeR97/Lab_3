#include<stdio.h>
#include<string.h>
int B[100][100],n,X;
void Read_B(){
    printf("Varfuri = ");
    scanf("%d",&n);
    int scris_corect=0;
    while(scris_corect==0){
        scris_corect=1;
        for(int i=0;i<n;i++){
            printf("%d - ", i+1);
            X = 1;
            while(X!=0){
                scanf("%d", &X);
                if(X!=0){
                    B[i][0]++;
                    B[i][B[i][0]] = X-1;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=1;j<B[i][0]+1&&scris_corect==1;j++){
                if(B[i][j]<0||B[i][j]>=n){
                    printf("Introdus gresit,Introdu din nou\n");
                    scris_corect=0;

                }
            }
        }
    }



}

void main()
{
    FILE *f1;
    Read_B();
    f1= fopen("file27.txt","w+");
   for (int i =0 ; i < n ; i++){
    for (int j = 1 ; j <= B[i][0]; j++){
            fprintf(f1," %d ", B[i][j]+1);

    }
    fputc( 10,f1);
   }
   fclose(f1);
}


