#include<stdio.h>

void     ft_swap(int *a,int *b)
{
        int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;
}
int     main(int argc,char *argv[])
{
        int x,y;

        puts("Please enter x and y below");
        scanf("%d %d",&x,&y);
        printf("Before swap is was\n");
        printf("%d %d",x,y);
        ft_swap(&x,&y);
        printf("%d %d\n",x,y);
        return 0;
}
