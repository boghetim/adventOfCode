#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\aoc2015\\inputday5.0.txt"

void delay(int milliseconds);

int main(int argc, char const *argv[])
{

FILE *fp = NULL;

fp= fopen(FILEPATH, "r");
if (fp == NULL)
{
  printf("error reading file\n");
  return -1;
}

char lineInput[20]="";
long unsigned count=0;
int vowels=0;
int dubbel=0;
int bad=0;




while(fgets(lineInput,20,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft
//delay(1000);
      for (int i = 0; i < 20; i++)
      {
            if ((lineInput[i]== 'a')|| (lineInput[i]== 'e')|| (lineInput[i]== 'i')|| (lineInput[i]== 'o')|| (lineInput[i]== 'u'))//checking vowels
            {
              vowels++;

            }
            if (lineInput[i]==lineInput[i+1] && i<15) //checking dubbel letters in a row
            {
              dubbel=1;

            }
            if ((lineInput[i]=='a' && lineInput[i+1] == 'b') || (lineInput[i]=='c' && lineInput[i+1] == 'd') || (lineInput[i]=='p' && lineInput[i+1] == 'q') || (lineInput[i]=='x' && lineInput[i+1] == 'y'))
            {
              bad =1;

            }
      }

      if ((vowels>=3) && (dubbel ==1) && (bad ==0))
      {
        count++;
      }
      vowels=0;
      dubbel=0;
      bad=0;

}

printf("uitkomt is %ld \n", count);







fclose(fp);

return 0;
}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
