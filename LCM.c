#include<stdio.h>

int lcm(int x,int y)
{
    int a,b,m,i=1;
    a=x;
    b=y;
    int z=1;
    while(z==1)
    {
        i++;
        m=a*i;
        if((m%b)==0)
        {
            return m;
            break;
        }
        else {continue;}
    }

}
void main()
{
    int x,y;
    printf("Enter 2 numbers to find their LCM : \n");
    scanf("%d\n%d",&x,&y);
    printf("%d",lcm(x,y));
}
