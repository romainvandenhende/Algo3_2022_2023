#include <stdio.h>
#include <stdlib.h>
float surface_ou_volume(float rayon ,char,type){
switch(type){
case 's':return 3.14*r*r;
case'v':return 3.14*(4/3)*r*r*r;
default:return 0;
}

int main ()
{
    float rayon=5;
    printf("%f\n",surface_ou_volume(r,'v'));
}
