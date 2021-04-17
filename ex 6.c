#include <stdio.h>
void main()
{
    FILE *f1, *f2,*f3;
    int a[20],b[20],c[20], n = 0,f = 0, i = 0, j = 0;
    f1 = fopen("file6.txt","r");
    //printf("Continutul  nr 1 = ");
    while(!feof(f1))
    {
        fscanf(f1,"%d ",&a[n]);
    //    printf("%d ", a[n]);
        n++;
    }
    fclose(f1);
    printf("\n");
   // printf("Contitnutul  nr 2 = ");
    f2 = fopen("file61.txt","r");
    int m = 0;
    while(!feof(f2))
    {
        fscanf(f2,"%d ",&b[m]);
     //   printf("%d ", b[m]);
        m++;
    }
    fclose(f2);

      while(i < n && j < m)
    if(a[i] < b[j])
        c[f ++] = a[i ++];
    else
        c[f ++] = b[j ++];
while(i < n)
    c[f ++] = a[i ++];
while(j < m)
    c[f ++] = b[j ++];
f3 = fopen("file62.txt","w+");
  //  printf("\nContinutul  rezultat = ");
    for(int i=0;i<f;i++)
    {
        fprintf(f3,"%d\n ",c[i]);
        //printf("%d ",c[i]);

    }
}
