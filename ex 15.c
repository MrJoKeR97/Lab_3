#include<stdio.h>
int main(){
FILE*f;
f=fopen("15.txt","r");
int num[100];
int j=0,n;
printf("alege un numar de la 1 la 9: ");
scanf("%d",&n);
for(int i=0;!feof(f);i++){
        fscanf(f,"%d",&num[i]);
        if(num[i]==n){
            j++;
        }
}
printf("\nnumarul %d apare de %d ori",n,j);
fclose(f);
}

