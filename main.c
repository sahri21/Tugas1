#include <stdio.h>
#include <stdlib.h>
float hitung(int num1, int num2, char oprator);
int main()
{
    int num1,num2;
    char oprator;
    float hasil;
    printf("Masukkan angka pertama=");scanf("%d",&num1);
    printf("Masukkan angka kedua=");scanf("%d",&num2);
    fflush(stdin);
    printf("Masukkan angka oprator (+ - / *)");scanf("%c",&oprator);
    puts("");
    printf("%d %c %d = %.2f\n",num1,oprator,num2,hitung(num1,num2,oprator));
    return 0;
}
float hitung(int num1, int num2, char oprator)
{
    float hasil;
    if(oprator=='+')
    {
        hasil=num1+num2;
    }

    else if(oprator=='-')
    {
        hasil=num1-num2;
    }
     else if(oprator=='*')
    {
        hasil=num1*num2;
    }
     else if(oprator=='/')
    {
        hasil=num1/num2;
    }
return(hasil);
}


