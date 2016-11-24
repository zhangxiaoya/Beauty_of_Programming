#include <stdio.h>
#include <windows.h>

const double busyTime = 10;
const double idleTime = busyTime;

int main(){
    while (true) {

        double statTime = GetTickCount();

        while(GetTickCount()-statTime <= busyTime)
            ;
        Sleep(idleTime);
    }
}
