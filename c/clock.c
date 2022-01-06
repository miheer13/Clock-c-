#include <stdio.h>
#include <windows.h>

int main() {
    int hr, min, sec:
    int d=1000;

    printf("Set Time: ");
    scanf("%d%d%d",&hr, &min, &sec);

    if(hr>12 || min>60 || sec>60) {
        printf("invalid time!");
        exit(0);
    }

    while (1)
    {
        sec++;
        
        if (sec>59)
        {
            min++;
            s=0;
        }
        
        if (min>59)
        {
            hr++;
            m=0;
        }

        if (hr>12)
        {;
            hr=1;
        }

        printf("\n\n Clock: %02d:%02d:%02d",hr, min, sec);
        Sleep(d);

        system("cls")
    }
    
}