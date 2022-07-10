#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[]="ved-is-ved";
    char* tk=strtok(str,"-");
    while(tk != NULL)
    {
        cout<<tk<<endl;
        tk=strtok(NULL,"-");
        
    }

}