#include<stdio.h>

void oddoreven(int n){
 if(n%2==0) printf("Product ID is even \n");
 else printf("Product ID is odd \n");
 }

int special(int n){
 for(int i=2;i<n;i++){
   if(n%i==0){ return 0; }
  }
return 1;
}

int main(){
int pid,count=0,countspl=0;
char ch;
while(1){
 printf("Enter The Product ID : ");
 scanf("%d",&pid);
// printf("\n");
//   if(pid==0) {
//     break;
   /*} else*/ if(pid<0){
    printf("!!! Entered number is Negative !!! \n");
   } else {
      if(special(pid)){
	 printf("The product ID has the special property! \n");
	 countspl++; }
	else {printf("The product ID does not have the special property. \n");}
      oddoreven(pid);
      count++;
      if(pid>1000)printf("WARNING: High product ID!!\n");
   }
printf("Do you want to check another product ID?(y/n) \n");
scanf(" %c",&ch);
//scanf("%c",&ch);
if(ch=='n' || ch == 'N'){ break; }
 }
printf("Total Product IDs checked: %d \nTotal Product IDs with special property found: %d \n",count,countspl);
return 0;
}
