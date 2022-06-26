#include <stdio.h>
int main(){
float x,y;
char operation,space;

printf("enter num1 \n");
scanf("%f",&x);
scanf("%c",&space);
printf("enter the operation + - / * \n");
scanf("%c",&operation);
scanf("%c",&space);
printf("enter num2 \n");
scanf("%f",&y);

if(operation =='+'){
    printf("%.2f",x+y);
}
else if(operation=='-'){
       printf("%.2f",x-y);

}
else if(operation=='*'){
        printf("%.2f",x*y);

}
else if(operation=='/'){
     printf("%.2f",x/y);

}
else
    printf("not supported");



//printf("%0.2f",5.0/2);

return 0;}
