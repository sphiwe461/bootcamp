#include<stdio.h>

void    ft_ft(int *nbr)
{
        *nbr = 42;
}
int     main(int argc,char *argv[])
{
        int num[3];
        ft_ft(num);
        printf("%d\n",*num);
        return 0;
}
