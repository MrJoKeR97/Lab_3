#include<stdio.h>
void main()
{
  int c;
FILE *f;
f = fopen("9.txt", "r");
if (f) {
    while ((c = getc(f)) != EOF)
        putchar(c);
    fclose(f);
}
}



