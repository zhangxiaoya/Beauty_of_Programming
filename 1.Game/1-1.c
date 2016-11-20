#include <stdio.h>
#include <windows.h>

int main()
{
    for( ; ;)
    {
        int i;
        for(i=0;i<96000000;i++)
            ;
        Sleep(10);
    }
}