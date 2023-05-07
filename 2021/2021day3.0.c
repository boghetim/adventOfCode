#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\aoc2021\\inputday3.txt"

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
long int c0=0;
long int c1=0;
long int c2=0;
long int c3=0;
long int c4=0;
long int c5=0;
long int c6=0;
long int c7=0;
long int c8=0;
long int c9=0;
long int c10=0;
long int c11=0;


while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  //printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft



if (lineInput[0]== '1')
{
  c0+= 1;
}
if (lineInput[0]== '0')
{
  c0-=1;
}
if (lineInput[1]== '1')
{
  c1+= 1;
}
if (lineInput[1]== '0')
{
  c1-=1;
}
if (lineInput[2]== '1')
{
  c2+= 1;
}
if (lineInput[2]== '0')
{
  c2-=1;
}
if (lineInput[3]== '1')
{
  c3+= 1;
}
if (lineInput[3]== '0')
{
  c3-=1;
}
if (lineInput[4]== '1')
{
  c4+= 1;
}
if (lineInput[4]== '0')
{
  c4-=1;
}
if (lineInput[5]== '1')
{
  c5+= 1;
}
if (lineInput[5]== '0')
{
  c5-=1;
}
if (lineInput[6]== '1')
{
  c6+= 1;
}
if (lineInput[6]== '0')
{
  c6-=1;
}
if (lineInput[7]== '1')
{
  c7+= 1;
}
if (lineInput[7]== '0')
{
  c7-=1;
}
if (lineInput[8]== '1')
{
  c8+= 1;
}
if (lineInput[8]== '0')
{
  c8-=1;
}
if (lineInput[9]== '1')
{
  c9+= 1;
}
if (lineInput[9]== '0')
{
  c9-=1;
}
if (lineInput[10]== '1')
{
  c10+= 1;
}
if (lineInput[10]== '0')
{
  c10-=1;
}
if (lineInput[11]== '1')
{
  c11+= 1;
}
if (lineInput[11]== '0')
{
  c11-=1;
}

}

//if negatief ist 0 if positief ist 1
printf("uitkomt is %ld voor horizontal\n", c0);
printf("uitkomt is %ld voor horizontal\n", c1);
printf("uitkomt is %ld voor horizontal\n", c2);
printf("uitkomt is %ld voor horizontal\n", c3);
printf("uitkomt is %ld voor horizontal\n", c4);
printf("uitkomt is %ld voor horizontal\n", c5);
printf("uitkomt is %ld voor horizontal\n", c6);
printf("uitkomt is %ld voor horizontal\n", c7);
printf("uitkomt is %ld voor horizontal\n", c8);
printf("uitkomt is %ld voor horizontal\n", c9);
printf("uitkomt is %ld voor horizontal\n", c10);
printf("uitkomt is %ld voor horizontal\n", c11);







fclose(fp);

return 0;
}
