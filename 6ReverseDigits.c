#include<stdio.h>

int rev(int a){
int rem,reversed=0;
 while(a!=0){
  rem=a%10;
  a /=10;
  reversed= reversed*10+rem;
 }
return reversed;
}

int main(){
int n,count=0;
  while(1){
  printf("Enter a positive number to reverse [type 0 exit]\n");
  scanf("%d",&n);
	if(n==0){break;}
	else if(n<0){printf("Invalid input! Please enter a positive number\n");}
	else{
	  printf("Revresed number : %d\n",rev(n));
	  count++;
	}
  }
printf("Numbrer of times Reversed is %d\n",count);
return 0;
}
