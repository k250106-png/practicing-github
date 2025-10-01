#include<stdio.h>
int main(){
    int shape;
    float area,radius,lenght,width;
    float pi=3.14;
    printf("ENTER THE SHAPE YOU WANT TO CALCULATE THE AREA OF: \n");
    printf("1. circle\n");
    printf("2. rectangle\n");
    printf("3. triangle\n");
    scanf("%d",&shape);
    switch(shape){
        case 1:
        printf("ok you want to calculate the area of circle!!!!\n");
        printf("enter the value of radius:");
        scanf("%f",&radius);
        area = pi*radius*radius;
        printf("the area of circle is:%f",area);
        break;

        case 2:
        printf("ok you want to calculate the area of rectangle!!!!\n");
        printf("enter the value of lenght:");
        scanf("%f",&lenght);
        printf("enter the value of width:");
        scanf("%f",&width);
        area = lenght*width;
        printf("the area of rectangle is:%f",area);
        break;

        case 3:
        printf("ok you want to calculate the area of triangle!!!!\n");
        printf("enter the value of lenght:");
        scanf("%f",&lenght);
        printf("enter the value of width:");
        scanf("%f",&width);
        area = 0.5*lenght*width;
        printf("the area of triangle is:%f",area);
        

        break; 
        default:
        printf("##you enter wrong shape##");
        break;
    }
    return 0;
}