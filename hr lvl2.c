#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
int a; 
int b;
int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
        
    if(a>0 && b>0){
        printf("*");
    }else if(a<0 && b>0){
        printf("+");
    }else if(b<0 && a>0){
        printf("-");
    }else if(a<0 && b<0){
        printf("*");
    }
        
    
    
        
        
    return 0;
}
