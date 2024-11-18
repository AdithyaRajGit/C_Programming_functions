#include<stdio.h>
#include<math.h>

int Armstrong(int num){
int org,rem,dig,amstr;
org =num;
   for(int i=1;i<=3;i++){
    rem=num%10;
    num/=10;
    dig= pow(rem,3);
    amstr +=dig;  }
      if(org == amstr){
      printf("%d is an Armstrong number \n",org);
      return 1;
      }else {printf("%d is not an Armstrong Number \n",org);  }
      return 0;
}


int main(){
int num,count=0;
while(1){
printf("Enter a three digit number to check if it is Amstrong Number [press 0 to exit] \n");
scanf("%d",&num);
if(num == 0) break;
else if (num<0) printf("!! Entered number is negative !! \n");
else if(Armstrong(num)){
	count++;  }
}
printf("Number of Amstrong found: %d \n",count);
return 0;
}
