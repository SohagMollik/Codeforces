#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int x=a+b;
        int y=b+c;
        int z=c+a;
        if(x==c || y==a || z==b)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
