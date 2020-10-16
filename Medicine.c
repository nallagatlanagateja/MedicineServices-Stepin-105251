#include <stdio.h>
void Medicine(){
	while(1)
 {
int c=0,n=0;
 int a=0;

printf("choose your medicine for\n1.Fever\n2.Common cold ");
scanf("%d", &c);
 switch (c)
 {
 case 1:
printf("1.Medium\n2.High\n");
scanf("%d",&a);
 if (a==1){
 char m[100]= "paracetamol & ibuprofen";
printf("Enter Number of tablets ");
scanf("%d", &n);
printf("Please take your medicine= %s,total=%d\n",m,n);
printf("Thanks for using our service\n\n\b");
 }
 else
  {
printf("Please consult doctor\n");
printf("Thanks for using our service\n\n\b");
 }
 break;
 case 2:
printf("1.Medium\n2.High\n");
scanf("%d",&a);
 if (a==1){
 char m[100]= "Genexa Cold Crush Tablets";
printf("Enter Number of tablets ");
scanf("%d", &n);
printf("Please take your medicine= %s,total=%d\n",m,n);
printf("Thanks for using our service\n\n\t"); 
}
 else
 {
printf("Please consult doctor\n");
printf("Thanks for using our service\n\n\b");
 }
 break;
 default:
printf("Please consult doctor\n");
printf("Thanks for using our service\n\n\b");
}
for (int i=0;i<=2000;i++){}
 }
}