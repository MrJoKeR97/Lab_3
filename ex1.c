#include<stdio.h>
#include<string.h>

void main()
{
    FILE *f1,*f2;

    f1= fopen("file1.txt","r");
    f2= fopen("file2.txt","w");
    char c;
    char s[100][100];
    int i = 0,j = 0;
    while((c = fgetc( f1 ))!= -1)
    {
        if(c==10){
            s[i][j] = '\0';
            i++;
            j = 0;
        }else{
            s[i][j] = c;
            j++;
        }
    }
    s[i][j] = '\0';
    for(j = i ; j>= 0 ;j--){
        fputs(s[j],f2);
        c=10;
        putc(c,f2);

    }
    fclose(f1);
    fclose(f2);
}
