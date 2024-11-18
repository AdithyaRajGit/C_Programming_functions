#include<stdio.h>
int tempconversion(float t,char u){
float convertedc, convertedf;
if(u=='c' || u=='C'){
   convertedf=(t*(9.0/5.0))+32.0;
   printf("%2f F is converted temperature. \n",converted);
   return convertedf; }
else if (u=='f' || u=='F'){
   convertedc=(t-32.0)*(5.0/9.0);
   printf("%2f C is converted temperature. \n",converted);
   return convertedc; }
//else printf("!! Invalid Unit !!\n");
}

int main(){
float temp,conv;
/* float minc=1e6,minf=1e6,min=1e6;
float maxc=-1e6,maxf=-1e6,max=-1e6;
float avg,sumc=0,sumf=0,sum=0; */
float min=0, max=0, sum=0, avg;
int convcount=0;
char unit,ch;
while(1){
  printf("Enter the temperature and unit to convert [c or f]. \n");
  scanf("%f %c",&temp,&unit);
  printf("Entered value is %2f %c \n",temp,unit);
  if(unit=='c' || unit=='C'){ temfar =  tempconversion(temp,unit); }
  if(unit=='f' || unit=='F'){ tempcel =  tempconversion(temp,unit); }
//  conv = tempconversion(temp,unit);
  convcount++;
  if(tempfar>100) printf("Warning: High temperature. \n");
  else if(tempfar<0) printf("Warning: Low temperature\n");
 printf("Press n to exit of temperature conversion and any other character to continue. \n");
 scanf(" %c",&ch);
 if(ch =='n' || ch=='N') break;
 printf("\n");
 }
/* if(unit =='f' || unit =='F'){
   sumf +=temp;
   if(temp<minf){ minf=temp; }
   if(temp>maxf){ maxf= temp; }
  }
 if(unit=='c' || unit=='C'){
   sumc +=conv;
   if(conv<minc){ minc=conv; }
   if(conv>maxc){ maxc= conv; }
}
min =(minf<minc)? minf:minc;
max =(maxf<maxc)? maxc:maxf;
sum=sumf+sumc; */


if(conv<min){ min = conv; }
if(conv<max){ max = conv; }
sum += conv;
avg=sum/convcount;
printf("Total Reading: %d\n",convcount);
printf("Sum:%f\n",sum);
printf("Average of converted temperature: %f\n",avg);
printf("Maximum temperature:%f\n",max);
printf("Minimum temperature:%f\n",min);
}
