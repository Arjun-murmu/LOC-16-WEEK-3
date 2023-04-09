//QNA 5(b)
#include<stdio.h>

int main(){
    int k = 5;
    int*p = &k;
    int**m = &p;
    **m = 6;
    printf("%d\n",k);
    return 0;
}
// answer : 6


//QNA (a)
//answer : k is a pointer to pointer char

//QNA 6
//answer : a.struture elements can be initialized at the time of declaration
