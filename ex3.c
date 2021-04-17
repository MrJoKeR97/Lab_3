#include<stdio.h>

void main()
{
    FILE *f1;
    int a,b=0;
    f1= fopen("file1.txt","r");
    for(int i= 0 ; i<10 ; i++)
    {
        fscanf(f1,"%d",&a);
        b+=a;
    }
    fclose(f1);
    f1=fopen("file2.txt","w");
    fprintf(f1,"%d",b);
    fclose(f1);
}
