#include<stdio.h>
#include<conio.h>
int main()
{
         float radius;
         double area;
         printf("\n Enter the radius of the circle :");
         scanf("%f",&radius);
         area = 3.14*radius*radius;
         printf("\n area = %.21f", area);
         return 0;

}
