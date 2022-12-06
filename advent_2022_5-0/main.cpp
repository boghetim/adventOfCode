#include <iostream>
#include <string.h>
#include <vector>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\C-programmeren1\\code\\adventOfCode\\input_dag5.txt"

using namespace std;

vector<vector<char>> myvector{{'G','T' ,'R','W'},
{'G','C','H','P','M','S', 'V' ,'W'},
{'C','L','T','S','G','M'},
{'J','H','D','M','W','R', 'F'},
{'P','Q','L','H','S','W', 'F' ,'J'},
{'P','J','D','N','F','M', 'S'},
{'Z','B','D','F','G','C', 'S' ,'J'},
{'R','T' ,'B'},
{'H','N','W','L','C'}};


int main()
{
   FILE *fp = NULL;
   fp= fopen(FILEPATH, "r");
   if (fp == NULL)
   {
     printf("error reading file\n");
     return -1;
   }

    char lineInput[25]="";
    int i, j;
    int amount=0;
    int vectorPlaats=0;
    int docMove=0;;
    int docGet=0;;

    while(fgets(lineInput,25,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
    {


        if(lineInput[0]=='m')
        {

        if(lineInput[5]=='1'){amount=1; }
        if(lineInput[5]=='2'){amount=2; }
        if(lineInput[5]=='3'){amount=3; }
        if(lineInput[5]=='4'){amount=4; }
        if(lineInput[5]=='5'){amount=5; }
        if(lineInput[5]=='6'){amount=6; }
        if(lineInput[5]=='7'){amount=7; }
        if(lineInput[5]=='8'){amount=8; }
        if(lineInput[5]=='9'){amount=9; }

        if(lineInput[6]=='0'){amount=(amount*10);}
        if(lineInput[6]=='1'){amount=(amount*10)+1;}
        if(lineInput[6]=='2'){amount=(amount*10)+2;}
        if(lineInput[6]=='3'){amount=(amount*10)+3;}
        if(lineInput[6]=='4'){amount=(amount*10)+4;}
        if(lineInput[6]=='5'){amount=(amount*10)+5;}
        if(lineInput[6]=='6'){amount=(amount*10)+6;}
        if(lineInput[6]=='7'){amount=(amount*10)+7;}
        if(lineInput[6]=='8'){amount=(amount*10)+8;}
        if(lineInput[6]=='9'){amount=(amount*10)+9;}

        if(amount<10)
        {
        if(lineInput[12]=='1'){docMove=0;}
        if(lineInput[12]=='2'){docMove=1;}
        if(lineInput[12]=='3'){docMove=2;}
        if(lineInput[12]=='4'){docMove=3;}
        if(lineInput[12]=='5'){docMove=4;}
        if(lineInput[12]=='6'){docMove=5;}
        if(lineInput[12]=='7'){docMove=6;}
        if(lineInput[12]=='8'){docMove=7;}
        if(lineInput[12]=='9'){docMove=8;}

        if(lineInput[17]=='1'){docGet=0;}
        if(lineInput[17]=='2'){docGet=1;}
        if(lineInput[17]=='3'){docGet=2;}
        if(lineInput[17]=='4'){docGet=3;}
        if(lineInput[17]=='5'){docGet=4;}
        if(lineInput[17]=='6'){docGet=5;}
        if(lineInput[17]=='7'){docGet=6;}
        if(lineInput[17]=='8'){docGet=7;}
        if(lineInput[17]=='9'){docGet=8;}
        }

        if(amount>=10)
        {
            if(lineInput[13]=='1'){docMove=0;}
            if(lineInput[13]=='2'){docMove=1;}
            if(lineInput[13]=='3'){docMove=2;}
            if(lineInput[13]=='4'){docMove=3;}
            if(lineInput[13]=='5'){docMove=4;}
            if(lineInput[13]=='6'){docMove=5;}
            if(lineInput[13]=='7'){docMove=6;}
            if(lineInput[13]=='8'){docMove=7;}
            if(lineInput[13]=='9'){docMove=8;}

            if(lineInput[18]=='1'){docGet=0;}
            if(lineInput[18]=='2'){docGet=1;}
            if(lineInput[18]=='3'){docGet=2;}
            if(lineInput[18]=='4'){docGet=3;}
            if(lineInput[18]=='5'){docGet=4;}
            if(lineInput[18]=='6'){docGet=5;}
            if(lineInput[18]=='7'){docGet=6;}
            if(lineInput[18]=='8'){docGet=7;}
            if(lineInput[18]=='9'){docGet=8;}
        }


            i=myvector[docMove].size();
            j = 0;
            while(j != amount)
            {
                j++;
                myvector[docGet].push_back(myvector[docMove][i-j]);

            }
            for (int var = 0; var < amount; ++var)
            {
              myvector[docMove].pop_back();
            }
           }

   }
    cout << "---------------------" << endl;

    for (int var = 0; var < 10; ++var)
    {


         cout << "---------------------" << endl;
         cout << myvector[var][myvector[var].size()-1] << endl;
    }






 fclose(fp);
 return 0;

}
