#include <stdio.h>

int main(){
    
    int t1,t2,t3,n,i;
    printf("Enter the Number of Terms");
    scanf("%d",&n);
    printf("Enter the Value of 1st two terms :");
    scanf("%d %d",&t1,&t2);
    for(i=1;i<=n;i++)
    {printf("%d \n",t1);
    t3=t1+t2;
    t1=t2;
    t2=t3;

    }

}