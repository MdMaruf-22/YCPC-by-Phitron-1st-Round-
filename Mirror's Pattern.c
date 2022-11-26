#include <stdio.h>
int main()
{
    int n, i, j, c = 7, length = 0, max_length = n;
    scanf("%d", &n);
    length=2,max_length=n;
    int x=1,y=n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if(i==1) printf("%d",x++);
            else if(i==n) printf("%d",y--);
            else if(j==1) printf("%d",length++);
            else if(j==n) printf("%d",--max_length);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
