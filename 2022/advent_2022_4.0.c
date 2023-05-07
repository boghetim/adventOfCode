#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\C-programmeren1\\code\\adventOfCode\\input_dag4.txt"



int main(int argc, char const *argv[])
{

FILE *fp = NULL;

fp= fopen(FILEPATH, "r");
if (fp == NULL)
{
  printf("error reading file\n");
  return -1;
}

char lineInput[15]="";
char teZoekenKarakter = ',';
char teZoekenKarakter2 = '-';
int i=0;
int safty=10;
int value=0;
int temp=0;
int temp2=0;
int temp3=0;
int temp4=0;
while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  printf("---------------------------------------------- \n ");                  //print die elke regel af dat hij gelezen heeft
  //numberRead=atoi(lineInput);
//  printf("het gelezen getal is %d\n",numberRead);


while(lineInput[i] != teZoekenKarakter)
{
  if (lineInput[i] != teZoekenKarakter2 && safty ==10) //eerste getal
  {
    printf("first lineInput is %c\n", lineInput[i]);
    temp=(temp+(lineInput[i]-48));
    //printf("temp 1 is %d\n",temp );
    safty=9;
    //printf("%d %d\n",temp, temp2);
    i++;
  }
  if (lineInput[i] != teZoekenKarakter2 && safty ==9) //als eerste getal 2diggits is
  {
    printf("sec lineInput is %c\n", lineInput[i]);
    temp=temp*10;
    temp=(temp+(lineInput[i]-48));
    safty=8;
    //printf("%d %d\n",temp, temp2);
    i++;
  }
  if (lineInput[i] == teZoekenKarakter2)
  {
    safty=7;
    i++;
    printf(" - \n");
  }

  if (lineInput[i] != teZoekenKarakter && safty ==7) //2de getal
  {
    printf("first getal is %c\n", lineInput[i]);

    temp2=lineInput[i]-48;
    safty=6;
  //  printf("%d %d\n",temp, temp2);
    i++;
  }
  if (lineInput[i] != teZoekenKarakter && safty ==6) //als 2de getal 2diggits is
  {
    printf("sec getal is %c\n", lineInput[i]);

    temp2=temp2*10;
    temp2=(temp2+(lineInput[i]-48));
    safty=5;
  //  printf("%d %d\n",temp, temp2);
    i++;
  }
}

i++;
safty=20;



if (lineInput[i] != teZoekenKarakter2 && safty ==20) //eerste getal
{
  printf("first lineInput is %c\n", lineInput[i]);
  temp3=(temp3+(lineInput[i]-48));
  safty=19;
//  printf("%d %d\n",temp3, temp4);
  i++;
}
if (lineInput[i] != teZoekenKarakter2 && safty ==19) //als eerste getal 2diggits is
{
  printf("sec lineInput is %c\n", lineInput[i]);
  temp3=temp3*10;
  temp3=(temp3+(lineInput[i]-48));
  safty=18;
  //printf("%d %d\n",temp3, temp4);
  i++;
}
if (lineInput[i] == teZoekenKarakter2)
{
  safty=17;
  i++;
  printf("- /\n");
}

if (lineInput[i] != '\0' && safty ==17) //2de getal
{
  printf("first getal is %c\n", lineInput[i]);

  temp4=lineInput[i]-48;
  safty=16;
  //printf("%d %d\n",temp3, temp4);
  i++;
}
if (lineInput[i] != '\n' && safty ==16) //als 2de getal 2diggits is
{
  printf("sec getal is %d\n", lineInput[i]);

  temp4=temp4*10;
  temp4=(temp4+(lineInput[i]-48));
  safty=15;

  i++;
}




i=0;



printf("2testing  %d\n",temp);
printf("2testing  %d\n",temp2);
printf("2testing  %d\n",temp3);
printf("2testing  %d\n",temp4);


if ((temp >= temp3 && temp2<= temp4) || (temp3 >= temp && temp4<= temp2))
{
  value++;
}





printf("value %d\n",value );




safty=10;
temp=0;
temp2=0;
temp3=0;
temp4=0;


i=0;




}


printf("%d\n",value );




fclose(fp);

return 0;
}
