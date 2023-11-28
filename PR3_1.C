#include<stdio.h>
#include<conio.h>
void main(){
  int num,a=0;
  clrscr();
  printf(" enter number:-");
  scanf("%d",&num);
 do{

    num=num/10;
    a++;
    }while(num!=0);

    printf("total length of number is %d",a);
    getch();
    }





