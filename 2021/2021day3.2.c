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
char output[15]="";
long int c0=0;
output[0]='1';
int check=0;

for (int i = 1; i <= 12; i++) {
  fp= fopen(FILEPATH, "r");
  c0=0;


  while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
  {
      for (int x = 0; x < i-1; x++)
      {
        if(output[x] == lineInput[x])
        {
          check=1;
        }
      }

      if (lineInput[i]== '1' & check ==1)
      {
        c0+= 1;
        check=0;
      }
      if (lineInput[i]== '0' & check ==1)
      {
        c0-=1;
        check=0;
      }

  }
  fclose(fp);

  if (c0 >=0)
  {
    output[i]='0';
  }
  if (c0 <0)
  {
    output[i]='1';
  }
}
printf("-----------------------------------------------");


for (int p = 0; p < 12; p++) {
printf("%c", output[p]);
}









return 0;
}
