#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\C-programmeren1\\code\\adventOfCode\\input_dag3.txt"


int str_length(char str[]);

int main(int argc, char const *argv[])
{

FILE *fp = NULL;

fp= fopen(FILEPATH, "r");
if (fp == NULL)
{
  printf("error reading file\n");
  return -1;
}

char lineInput[50]="";



int lengte=0;
long int total=0;
while(fgets(lineInput,50,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft

  lengte=str_length(lineInput);
  lengte=lengte-1;
  int safty=5;
  printf("lengte van array 2 is %d\n", lengte );
  int temp=lengte/2;
  for (size_t i = 0; i < lengte/2; i++)
  {
    for (size_t j = 0; j < lengte/2; j++)
    {
      if(lineInput[i] == lineInput[temp+j] && safty==5)
      {
        if (lineInput[i]<=90)  //uppercase
        {
        total=(total+lineInput[i]-38);
        safty=2;
        }
        if (lineInput[i]>96)  //undercase
        {
        total=(total+lineInput[i]-96);
        safty=3;
        }
      }
    }
  }

  printf("total %ld\n", total);


}








fclose(fp);

return 0;
}


int str_length(char str[]) {
    // initializing count variable (stores the length of the string)
    int count;

    // incrementing the count till the end of the string
    for (count = 0; str[count] != '\0'; count++);

    // returning the character count of the string
    return count;
}
