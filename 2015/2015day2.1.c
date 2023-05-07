#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\aoc2015\\inputday2.txt"


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
int length=0;
int weigth=0;
int height=0;
int total=0;
int counter=0;



while(fgets(lineInput,15,fp) != NULL )
{

  printf("%s", lineInput);

   //EXTRACT THE 3 NUMBERS
  if (sscanf(lineInput, "%d x %d x %d", &length, &weigth, &height) == 3)
  {
        printf("First: %d, Second: %d, Third: %d\n", length, weigth, height);
  }
  else
  {
        printf("Failed to extract three numbers\n");
  }


  //check wich one is lowest
  if (length <= weigth && length <= height) //length lowest
  {
         if (weigth <= height) //weigth 2th lowest
         {
            total+=((2*(length+weigth))+(length*weigth*height));
         }
         else //height 2th lowest
         {
            total+=((2*(length+height))+(length*weigth*height));
         }
 }

  else if (length >= weigth && weigth <= height) // weigth lowest
  {
        if (length <= height) //length 2th lowest
        {
            total+=((2*(length+weigth))+(length*weigth*height));
        }
        else
        {
            total+=((2*(weigth+height))+(length*weigth*height));
        }
  }

  else //height lowest
  {
        if (length <= weigth) //length 2th lowest
        {
            total+=((2*(length+height))+(length*weigth*height));
        }
        else
        {
            total+=((2*(weigth+height))+(length*weigth*height));
        }
  }
printf("uitkomt is %d \n", total);
}

printf("uitkomt is %d \n", total);



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
