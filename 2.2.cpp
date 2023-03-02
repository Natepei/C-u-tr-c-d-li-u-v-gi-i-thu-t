#include<stdio.h>
#include<conio.h>
long giaithua(int n)
{
    if (n==0)
        return 1;
        return giaithua(n-1)*n;
}int main(){
    int n, t;
printf("\nNhap n= ");
scanf("%d",&n);
t=giaithua(n);
printf("t=%d",t);
getch();
return 0;
}
