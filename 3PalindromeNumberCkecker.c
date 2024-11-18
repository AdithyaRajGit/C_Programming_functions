#include<stdio.h>
int palindrome(int n){
int org,rem,rev=0;
org = n;
 while(n!=0){ rem=n%10;
	      n/=10;
	      rev=(rev*10)+rem; }
  if(org==rev){ printf("%d is Palindrome\n",org);
	      return 1;
  }else{ printf("%d is not palindrome\n",org);
   	 return 0; }
}

int main(){
int num, count=0;
 while(1){
  printf("Enter a number to check if it is Palindrome [Type 0 to exit]\n");
  scanf("%d",&num);
   if(num==0) {
     break;
   } else if(num<0){
    printf("!!! Entered number is Negative !!! \n");
   } else if(palindrome(num)){
    count++;
   }
 }
printf("Total number of Palindrome found : %d\n",count);
}
