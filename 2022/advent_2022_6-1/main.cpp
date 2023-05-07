#include <iostream>
#include <string.h>
#include <vector>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\C-programmeren1\\code\\adventOfCode\\input_dag6.txt"

using namespace std;

int main(int argc, char const *argv[])
{

FILE *fp = NULL;

fp= fopen(FILEPATH, "r");
if (fp == NULL)
{
  printf("error reading file\n");
  return -1;
}

char lineInput[4500]="";
int j=1;
int temp=0;
int value=14;

while(fgets(lineInput,4500,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{




for (unsigned int i = 0; i < strlen(lineInput)-15; i++)
{

  for (int var=0; var < 13; ++var)
  {
    for (int j = var+1; j < 14; j++)
    {
      if(lineInput[var+i]==lineInput[j+i])
      {
        temp=1;
      }
    }
  }

  if(temp==0)
  {
    printf("value is: %d\n", value+i);
    break;
  }
  temp = 0;
}



}








fclose(fp);

return 0;
}
