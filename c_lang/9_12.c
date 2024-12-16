#include <stdio.h>

void main(){

    enum day{sun=1,mon=2,tue=3,wed=4,thu=5,fri=6,sat=7};

    enum day today;

    today = sat;

    printf("%d",today);

     today = wed;

    printf("%d",today);
}