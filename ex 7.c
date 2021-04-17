#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isOperand(char c)
{
  return (c >= '0' && c <= '9');
}
int value(char c)
{
  return (c - '0');
}

int evaluate(char* exp)
{
  if (*exp == '\0')
    return -1;
  int res = value(exp[0]);
   for (int i = 1; exp[i]; i += 2)
  {
    char opr = exp[i], opd = exp[i + 1];
    if (!isOperand(opd))
      return -1;
    if (opr == '+')
      res += value(opd);
    else if (opr == '-')
      res -= value(opd);
    else if (opr == '*')
      res *= value(opd);
    else if (opr == '/' && opd != '0')
      res /= value(opd);
    else
      return -1;
  }
  return res;
}
int validate(char cod[255], char expr[255])
{
  int i;
  for (i = 0; i < strlen(expr); i++)
    if (strchr(cod, expr[i]) == 0)
      return 1;
  return 0;
}
int main()
{
  FILE* f = fopen("fisier.txt", "r");
  char cod[255];
  char expr[255];

  fscanf(f, "%s", cod);
  fscanf(f, "%s", expr);

  if (validate(cod, expr))
    printf("Codul caracterului nu a fost citit initial\n");
  else
  {
    expr[strlen(expr) - 1] = '\0';
    int rezultat = evaluate(expr);
    (rezultat == -1) ? printf("Expresia nu este valida\n") :
      printf("%d\n", rezultat);
  }
  return 0;  }
