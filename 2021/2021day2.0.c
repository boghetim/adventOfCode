#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\aoc2021\\inputday2.txt"

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
long int tempx=0;
long int tempy=0;


while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  //printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft



if (lineInput[0]== 'f')	//forward
{
  tempx+= (lineInput[8] - 48);
}
if (lineInput[0]== 'd') //down
{
  tempy-= (lineInput[5]-48);
}
if (lineInput[0]== 'u') //up
{
  tempy += (lineInput[3]-48);
}

}

printf("uitkomt is %ld voor horizontal\n", tempx);
printf("uitkomt is %ld voor aim\n", tempy);


printf("total is  %ld\n", tempx * tempy);






fclose(fp);

return 0;
}
