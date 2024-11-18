#include<stdio.h>

void factorial(int n){
unsigned int fact=1;
for(int i=1;i<=n;i++){
fact *= i;
}
printf("%d is Factorial of %d \n",fact,n);
}

int main(){
int num,count=0;
while(1){
printf("Enter a Number to find its Factorial [Type 0 to Exit]\n");
scanf("%d",&num);
if(num==0) {
     break;
   } else if(num<0){
    printf("!!! Entered number is Negative !!! \n");
   } else {
    factorial(num);
    count++;
   }
}
printf("Total Factorial calculated: %d \n",count);
return 0;
}
