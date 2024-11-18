#include<stdio.h>

float tofarenheit(float c){
   float cf;
   cf=(c*(9.0/5.0))+32.0;
   printf("%.3f F is converted temperature. \n",cf);
   return cf; }

float tocelcius(float f){
   float cc;
   cc=(f-32.0)*(5.0/9.0);
   printf("%.3f C is converted temperature. \n",cc);
   return cc; }

int main(){
int count=0;
float max,min,sum=0;
float temp, tempc, tempf, convfar, convcel;
float avg;
char unit,ch;
do{
  printf("Enter the temperature and unit to convert [c or f]. \n");
  scanf("%f %c",&temp,&unit);
  printf("Entered value is %.3f %c \n",temp,unit);
 if(unit=='C' || unit=='c'){ tempc=temp;
                             convfar= tofarenheit(tempc);
			     count++;
			     if(count==1){max=convfar;
			      		  min=convfar;  }
			     else{ (convfar>max)?(max=convfar):(convfar<min)?(min=convfar):((max=max) && (min=min));  }
			      sum += convfar;    }

 else if(unit=='F' || unit=='f'){ tempf=temp;
                                  convcel = tocelcius(tempf);
				  count++;
				  if(count==1){max=tempf;
					       min=tempf;  }
				  else{ (tempf>max)?(max=tempf):(tempf<min)?(min=tempf):((max=max) && (min=min));  }
				  sum += tempf;  }

 else printf(" ! ! ! Invalid input ! ! !");

 ((convfar>100)||(tempf>100))?printf("!! High Temperature !!\n"):((convfar<0)||(tempf<0))?printf("!! Low Temperature !!\n"):0;

// if((convfar>100)||(tempf>100))

 printf("Press Y/y to continue conversion. \n");
 scanf(" %c",&ch);
 }while(ch=='y' || ch=='Y');

printf("\n");
printf("Total conversions: %d \n",count);;
printf("Sum:%.3f\n",sum);
printf("Average Temperature: %.3f F\nMinimum Temperature: %.3f F\nMaximum Temperature: %.3f F\n",sum/count,max,min);
return 0;
}


