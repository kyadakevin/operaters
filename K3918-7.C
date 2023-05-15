#include<stdio.h>
#include<conio.h>


main()

{ int a=10, b=30, c=40, d=45;
  clrscr();

  (a>b)?(a>c)?(a>d)?printf("a is max"):printf("d is max"):(c>d)?printf("c is max"):printf("d is max")
       :(b>c)?(b>d)?printf("b is max"):printf("d is max"):(c>d)?printf("c is max"):printf("d is max");


   getch();

}
