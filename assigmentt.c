/*name of day*/
/*#include<stdio.h>
int main()
{
int number;
printf("enter the number:");
scanf("%d",&number);
if(number>=0)
{
if(number==0)
{
printf("monday");
}
else if(number==1)
{
printf("tuesday");
}
else if(number==2)
{
printf("wednesday");
}
else if(number==3)
{
printf("thursday");
}
else if(number==4)
{
printf("friday");
}
else if(number==5)
{
printf("saturday");
}
else 
{
printf("sunday");
}
return 0;
}
}*/

/*greater number*/
/*#include <stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("enter the number: ");
if(a>b)
{
printf("greater a");
}
else
{
printf("greater b");
}
return 0;
}*/



/*#include<stdio.h>
int main()
{
int numbermonth;
printf("enter the number:");
scanf("%d",&numbermonth);
if(numbermonth >=0)
{
if(numbermonth==1)
{
printf("january");
}
else if(numbermonth==2)
{
printf("february");
}
else if(numbermonth==3)
{
printf("march");
}
else if(numbermonth==4)
{
printf("april");
}
else if(numbermonth==5)
{
printf("May");
}
else if(numbermonth==6)
{
printf("June");
}
else 
{
printf("December");
}
return 0;
}
*/

/*#include <stdio.h>
int main()
{
int sp,cp,profit;
printf("enter the number:");
scanf("%d%d",&sp,&cp);
if(sp>=cp)
{
profit=(((sp-cp)/cp)*100);
printf("profit");
}
else
{
printf("Not profit");
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the number:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a==b || c==d)
{
printf("squar");
}
else
{
printf("rectangle");
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int sp,cp;
printf("enter the number:");
scanf("%d%d",&sp,&cp);
if(cp>=sp)
{
printf("profit incurred");
}
else{
printf("loss incurred");
}
return 0;
}*/

/*#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d", &n);
if(n >= 999)
{
printf("4 digit number");
}
else {
printf("not 4 digit number");
}
return 0;
}*/

/*#include <stdio.h>
int main()
{
int number;
printf("enter the number: ");
scanf("%d",&number);
if(99 > number)
{
printf("not digit number");
}
else if(999 > number)
{
printf("3 digit number");
}
else
{
printf("not 3 digit number");
}
return 0;
}*/

/*#include <stdio.h>
int main()
{
int number;
printf("enter the number: ");
scanf("%d",&number);
if(number % 7==0)
{
printf("divisible by 7");
}
else
{
printf("not divisible by 7");
}
return 0;
}*/

/*#include <stdio.h>
int main()
{
int number;
printf("enter the number: ");
scanf("%d",&number);
if(number % 2==0)
{
printf("even number");
}
else
{
printf("odd number");
}
return 0;
}*/

/*#include <stdio.h>
int main()
{
int Age;
printf("enter the Age: ");
scanf("%d",&Age);
if(Age>=18)
{
printf("eligible for voit");
}
else
{
printf("not eligible for voit");
}
return 0;
}*/


/*#include <stdio.h>
int main()
{
int number;
printf("enter the number: ");
scanf("%d", &number);
if(number % 5 ==0)
{
printf("hello");
}
else
{
printf("bye");
}
return 0;
}*/

/*#include <stdio.h>
int main(){
char name[10];
printf("write a name: ");
scanf("%s",name);
printf("welcome %s",name);
return 0;
}*/

/*#include<stdio.h>
int main()
{
int temperature;
printf("enter the number: ");
scanf("%d",&temperature);
if(temperature > 100)
{
printf("boilling water");
}
else if(temperature < 100)
{
printf("worm water");
}
else
{
printf("not boilling water");
}
return 0;
}*/



/*#include<stdio.h>
int main()
{
int a,b,sum;
printf("enter the number: ");
scanf("%d%d",&a,&b);
sum=(a+b);
if(sum>15)
{
printf("sum is not eual to 20");
}
else if(sum<20)
{
printf("sum is eual to 20");
}
return 0;
}*/


/*#include <stdio.h>
int main()
{
int year,bonus;
int salary;
scanf("%d%d",&year,&salary);
if (year>5) {
bonus=(0.05 * salary);
printf("net bonus amount");
}
else {
printf("not bonus amount");
}
return 0;
}*/


/*#include <stdio.h>
int main()
{
int pearchased,discound;
printf("enter the number: ");
scanf("%d",&pearchased);
if(pearchased>1000){
discound=(pearchased*10);
printf("discount");
}
else
{
printf("not discount");
}
return 0;
}*/


/*#include <stdio.h>
int main()
{
int l,b;
printf("enther the value:" );
scanf("%d%d",&l,&b);
int area=(l*b);
int perimeter=(2*(l+b));
if(area<perimeter)
{
printf("perimeter");
}
else if(area>perimeter)
{
printf("area");
}
else{
printf("both of qual");
}
return 0;
}*/


/*#include<stdio.h>
int main()
{
int digit;
printf("enter the number: ");
scanf("%d",&digit);
if(digit<=9)
{
printf("1 digit number");
}
else if(digit<=99)
{
printf("2 digit number");
}
else if(digit < 100 && digit > 1000)
{
printf("3 digit number");
}
else{
printf("more than 3 digit");
}
return 0;
}*/


/*#include <stdio.h>
int main()
{
int month;
scanf("%d",&month);
if (month == 1 || month == 3 || month == 5|| month == 10|| month == 12)
{
printf("31 days");
}
else if (month == 4|| month==6 || month==9 || month==11){
printf("30 days");
}
else if (month == 2){
printf("28 or 29 days");
}
else{
printf("invalid");
}
return 0;
}*/


/*#include <stdio.h>
int main()
{
int number;
printf("enter the number:" );
scanf("%d",&number);
if (number > 0)
{
printf("possitive number");
}
else if (number == 0)
{
printf("zero");
}
else{
printf("negative number");
}
return 0;
}*/

#include <stdio.h>
char main
int main()
{
int city;
printf("type the city name: ");
scanf("%s",&city)
if (city == mumbai)
{
printf("india gat");
}
else if(city == delhi)
{
printf("red road");
}
else if(city == agra)
{
printf("taj mahal");
}
else if(city == jaipur)
{
printf("mahal");
}
else{
printf("invalid city name");
}
return 0;
} 























































































































 
