#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    // Complete this function   
    int t,x,y;
    x=(*a)+(*b);
    y=(*b)-(*a);
    if(y<0)
        y*=-1;
    *a=x;
    *b=y;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
