#include <stdio.h>
int num_comp(int n1, int n2);

int main()
{
    int n1,n2;
    printf("Digite dois numeros ");
    scanf("%d %d",&n1,&n2);
    printf("%d",num_comp(n1,n2));

    return 0;
}

int num_comp(int n1, int n2){
    
    if(n1>n2)
        return n1;
    
    else
        return n2;
        
       
}