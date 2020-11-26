#include<stdio.h>
int main()
 {
         int x,y,z,k;
        printf(" enter the value of X ");
        scanf("%d",& x);
        printf(" enter the value of Y");
        scanf("%d",& y);
        printf(" enter the value of Z");
        scanf("%d",& z);
        k = y+z;
        if (k%x==0)
        {
                printf(" YES ");
        }
        else
        {
                printf(" NO");
        }

        return(0);
}