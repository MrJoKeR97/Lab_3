#include<stdio.h>

struct d{
    int v;
    int e;
    int inH;
};

struct t{
    int o;
    int m;
    int s;
};

struct da{
    int z;
    int l;
    int a;
    };

struct timptrecut{
    float tveac;
    float era;
    int ora;
    int minut;
    long secunda;
    int zi;
    int luna;
    int an;};

void main(){
    struct d er;
    er.v = 100;
    er.e = 66000000;
    er.inH = 2021;

    struct t er1;
    er1.o = 24;
    er1.m = 60;
    er1.s = 60;

    struct da er2;
    er2.z = 365;
    er2.l= 12;
    er2.a = 1;

    struct timptrecut er3;

    er3.tveac = er.inH/er.v;

    printf("Veacuri=%.2f\n",er3.tveac);

    er3.ora = er1.o*er2.z*er.inH;

    printf("Ore = %d\n",er3.ora);

    er3.minut = er1.m*er1.o*er2.z*er.inH;

    printf("Minute = %d\n",er3.minut);

    er3.secunda = er3.minut*er1.s;

    printf("Secunde = %ld\n",er3.secunda);

    er3.zi = er2.z*er.inH;

    printf("Zile = %d\n",er3.zi);

    er3.luna = er.inH*er2.l;

    printf("Luni = %d\n",er3.luna);

    er3.an = er.inH;

    printf("Ani = %d",er3.an);

}

