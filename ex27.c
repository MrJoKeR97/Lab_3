#include<stdio.h>
#include<string.h>
int A[100][100],n,X;
void Read_A(){
    printf("Varfuri = ");
    scanf("%d",&n);
    int scris_corect=0;
    while(scris_corect==0){
        scris_corect=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d", &X);
                A[i][j]=X;
            }
        }
     for(int i=0;i<n;i++){
        for(int j=0;j<n&&scris_corect==1;j++){
                if(A[i][j]!=0&&A[i][j]!=1){
                    printf("Introdus gresit,Introdu din nou\n");
                    scris_corect=0;

                }
        }
     }}

}

void main()
{
    FILE *f1;
    Read_A();
    f1= fopen("file27.txt","w+");
   for (int i =0 ; i < n ; i++){
    for (int j = 0 ; j < n; j++){
            fprintf(f1,"%d", A[i][j]);

    }
    fputc( 10,f1);
   }
   fclose(f1);
}

