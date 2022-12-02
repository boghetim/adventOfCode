#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\C-programmeren1\\code\\adventOfCode\\input_dag2.txt"

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
long int temp=0;
while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft

  /*
  tegenstander:
  A = Steen, B = Papier, C = Schaar
  ik:
  X = Verlies, Y = Gelijk, Z = Win
   */

if (lineInput[0]== 'A' && lineInput[2]== 'X')
{
  temp= temp+3;
  printf("ax\n");
}
if (lineInput[0]== 'A' && lineInput[2]== 'Y')
{
  temp= temp+4;
  printf("ay\n");
}
if (lineInput[0]== 'A' && lineInput[2]== 'Z')
{
  temp= temp+8;
  printf("az\n");
}
if (lineInput[0]== 'B' && lineInput[2]== 'X')
{
  temp= temp+1;
  printf("bx\n");
}
if (lineInput[0]== 'B' && lineInput[2]== 'Y')
{
  temp= temp+5;
  printf("by\n");
}
if (lineInput[0]== 'B' && lineInput[2]== 'Z')
{
  temp= temp+9;
  printf("bz\n");
}
if (lineInput[0]== 'C' && lineInput[2]== 'X')
{
  temp= temp+2;
  printf("cx\n");
}
if (lineInput[0]== 'C' && lineInput[2]== 'Y')
{
  temp= temp+6;
  printf("cy\n");
}
if (lineInput[0]== 'C' && lineInput[2] =='Z')
{
  temp= temp+7;
  printf("cz\n");
}

}

printf("uitkomt is %ld\n", temp);






fclose(fp);

return 0;
}
