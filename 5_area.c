/*Rectangle:
 area of rectangle=l*b
 perimeter of rectangle=2(l+b)
 
 Circle:
 area of circle:πr2
 circumference of circle:2πr
 the length & breadth of a rectangle and radius of a circle are input through the keyboard.write a program to
 calculate the area & perimeter of the rectangle and the area & circumference of circle */

 #include <stdio.h>
 int main()
 {
    float l,b,area_r,peri_r,r,area_c,cir_c;
    printf("Enter the Length & breadth of Rectangle ");
    scanf("%f %f",&l,&b);
    printf("Enter the radius of Circle ");
    scanf("%f",&r);
    area_r=(l*b);
    peri_r=(2*(l+b));
    area_c=3.14*r*r;
    cir_c=2*3.14*r;
    printf("Area of rectangle:%.2f\n",area_r);
    printf("Perimeter of rectangle:%.2f\n",peri_r);
    printf("Area of circle:%.2f\n",area_c);
    printf("Circumference of a circle:%.2f",cir_c);
    return 0;
 }