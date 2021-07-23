#include <stdio.h>
 
int main() {
 
    int quantidade = 0;
    int i =0;
    
    
    scanf("%d", &quantidade);
    
    for(i=0;i<quantidade; i++)
        if( i == (quantidade-1) )
            printf("Ho!\n");
        else printf("Ho ");
        
    return 0;
}

