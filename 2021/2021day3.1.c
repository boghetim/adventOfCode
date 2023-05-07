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
char ttt[15]="";
char c02[15]="";
long int c0=0;
int checker=0;


//eerste getal checken of er meer 0 of 1 zijn

while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{
if (lineInput[0]== '1')
{
  c0+= 1;
}
if (lineInput[0]== '0')
{
  c0-=1;
}
}
fclose(fp);

//opslaan welke meer zijn (0 of 1)
if (c0 >=0)
{
  ttt[0]='1';
}
if (c0 <0)
{
  ttt[0]='0';
}

//hier bekijken of vorige waarde overeenkomt met lineinput en ttt(output)  zoja enkel dan regels bekijken anders niet

for (int i = 1; i < 12; i++)
{
c0=0;

fp= fopen(FILEPATH, "r");

  while(fgets(lineInput,15,fp) != NULL)    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
  {
    for (int x = 0; x <= i-1; x++) {
      if (lineInput[x] == ttt[x]) {
        checker =1;
      }
    }

    if (checker ==1)
    {
      if (lineInput[i]== '1')
      {
        c0+= 1;
      }
      if (lineInput[i]== '0')
      {
        c0-=1;
      }
      checker=0;
    }
  }
  if (c0 >0)
  {
    ttt[i]='1';
  }
  if (c0 <=0)
  {
    ttt[i]='0';
  }
}


for (int p = 0; p < 13; p++) {
printf("%c", ttt[p]);
}

// 2de stuk is het andersom dan vorige code
//-----------------------------------------------------------------------------------------------------------//
printf("\n\n");

//eerste getal checken of er meer 0 of 1 zijn

while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{
if (lineInput[0]== '1')
{
  c0+= 1;
}
if (lineInput[0]== '0')
{
  c0-=1;
}
}
fclose(fp);

//opslaan welke minder zijn (0 of 1)
if (c0 >0)
{
  c02[0]='0';
}
if (c0 <=0)
{
  c02[0]='1';
}

//hier bekijken of vorige waarde overeenkomt met lineinput en ttt(output)  zoja enkel dan regels bekijken anders niet

for (int i = 1; i < 12; i++)
{
c0=0;

fp= fopen(FILEPATH, "r");

  while(fgets(lineInput,15,fp) != NULL)    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
  {
    for (int y = 0; y <= i-1; y++) {
      if (lineInput[y] == c02[y]) {
        checker =1;
      }
      }

      if (checker ==1)
      {

      if (lineInput[i]== '1')
      {
        c0+= 1;
      }
      if (lineInput[i]== '0')
      {
        c0-=1;
      }
      checker=0;
      }

  }
  if (c0 >=0)
  {
    c02[i]='0';
  }
  if (c0 <0)
  {
    c02[i]='1';
  }
}


for (int p = 0; p < 12; p++) {
printf("%c", c02[p]);
}





printf("\n\n");





fclose(fp);

return 0;
}
