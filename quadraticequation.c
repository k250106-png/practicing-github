#include<stdio.h>
#include<math.h>
int main(){
    int discriminant,a,b,c,root1,root2,realPart,imaginaryPart ;
    printf("ENTER THE VALUES OF  a,b and c\n");
    printf("THE VALUE OF a IS:");
    scanf("%d",&a);
    printf("THE VALUE OF b IS:");
    scanf("%d",&b);
    printf("THE VALUE OF c IS:");
    scanf("%d",&c);
    printf("YOUR EQUATION IS : %dx^2+%dx+%d=0\n",a,b,c);
    discriminant=(b*b)-4*a*c ;
    printf("THE DISCRIMINANT IS : %d\n",discriminant);
    if(discriminant==0){
        printf("YOUR ROOTS ARE REAL AND SAME!!");
        root1 = -b / (2 * a); // Both roots are the same
                printf("Roots are **Real and Equal**.\n");
                printf("Root 1 = Root 2 = %d\n", root1);
    }else if (discriminant>=0){
        printf("YOUR ROOTS ARE REAL AND DISTINCT!!");
        root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are **Real and Distinct**.\n");
            printf("Root 1 = %d\n", root1);
            printf("Root 2 = %d\n", root2);
    }else {
        printf("YOUR ROOTS ARE IMAGINARY!!");
        printf("Root 1 = %d + %di\n", realPart, imaginaryPart);
        printf("Root 2 = %d - %di\n", realPart, imaginaryPart);
    }
    return 0;
}