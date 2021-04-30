#include <SDL.h>
#include <iostream>
#include <cstdio>
#include <ctime>
#include <time.h>
using namespace std;
int l = 0;


void time(SDL_Renderer *Background, int h, int l)
{
    if(l == 0)
    for(int i=10;i<650 - (h / 10);i++)
    {
        for(int i1=500;i1<510;i1++)
        {
            SDL_RenderDrawPoint(Background,i,i1);
        }
    }
    if(l == 1)
    for(int i=10;i<350 - (h / 10);i++)
    {
        for(int i1=500;i1<510;i1++)
        {
            SDL_RenderDrawPoint(Background,i,i1);
        }
    }
    if(l == 2)
    for(int i=10;i<1000 - (h / 10);i++)
    {
        for(int i1=500;i1<510;i1++)
        {
            SDL_RenderDrawPoint(Background,i,i1);
        }
    }
}

void restart(SDL_Renderer *Background)
{
    int i=0;
    int x=400;
    int y=100;
    string restart1 = "11111100011111111000111111011111111000111100011111100011111111 11111100011111111000111111011111111000111100011111100011111111 11000011011000000011000000000011000011000011011000011000011000 11000011011000000011000000000011000011000011011000011000011000 11000011011111100000111100000011000011000011011000011000011000 11111100011111100000111100000011000011000011011111100000011000 11111100011000000000000011000011000011111111011111100000011000 11000011011000000000000011000011000011111111011000011000011000 11000011011111111011111100000011000011000011011000011000011000 110000110111111110111111000000110000110000110110000110000110002";
    while (restart1[i]!='2'){
        if(restart1[i]=='0'){
            x++;
            x++;
        }
        if(restart1[i]=='1'){
            SDL_RenderDrawPoint(Background,x,y);
            SDL_RenderDrawPoint(Background,x+1,y);
            SDL_RenderDrawPoint(Background,x,y+1);
            SDL_RenderDrawPoint(Background,x+1,y+1);
            x++;
            x++;
        }
        if(restart1[i]==' '){
            y++;
            y++;
            x=400;
        }
        i++;
    }

}


void time3(SDL_Renderer *Background, int h, int l)
{
    SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
    SDL_RenderClear(Background);
    SDL_SetRenderDrawColor(Background, 255, 0, 0, 255);
    for(int i=10;i<1000 - (h / 10);i++)
    {
        for(int i1=500;i1<510;i1++)
        {
            SDL_RenderDrawPoint(Background,i,i1);
        }
    }

}


void r3(SDL_Renderer *Background, int x, int y, int x1, int y1)
{
for(int i=x;i<x1;i++)
{
    for(int i1=y;i1<y1;i1++)
    {
        SDL_RenderDrawPoint(Background,i,i1);
    }
}
}


void r(SDL_Renderer *Background, int x, int y, int x1, int y1)
{
for(int i=0;i<x1;i++)
{
    for(int i1=0;i1<y1;i1++)
    {
        SDL_RenderDrawPoint(Background,x+i,y+i1);
    }
}
}


void ris(SDL_Renderer *Background, int x,int y)
{
int a=10;
int b=10;
SDL_SetRenderDrawColor(Background, 200, 200, 0, 255);
for(int i=0;i<a;i++)
{
for(int i1=0;i1<b;i1++)
{
SDL_RenderDrawPoint(Background,x+i,y+i1);
}
}
SDL_RenderPresent(Background);
}


void uroven2(SDL_Renderer *Background, int h)
{
SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
SDL_RenderClear(Background);
SDL_SetRenderDrawColor(Background, 255, 0, 0, 255);
int x1 = 10, y1 = 10;
time(Background, h, l);
r(Background, 0, 10, 100, 10);
r(Background, 130, 0, 10, 100);
r(Background, 100, 10, 10, 120);
r(Background, 100, 130, 110, 10);
r(Background, 130, 90, 80, 10);
SDL_SetRenderDrawColor(Background, 0, 255, 0, 255);
r(Background, 200, 100, 10, 30);
}


void uroven3(SDL_Renderer *Background, int h, int l)
{
    SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
    SDL_RenderClear(Background);
    SDL_SetRenderDrawColor(Background, 255, 0, 0, 255);

    r3(Background, 0, 0, 150, 100);
    r3(Background, 0, 150, 150, 250);
    r3(Background, 0, 100, 20, 150);
    r3(Background, 0, 100, 20, 150);
    r3(Background, 150, 0, 500, 50);
    r3(Background, 180, 80, 500, 200);
    r3(Background, 500, 0, 530, 200);
    r3(Background, 0, 230, 600, 250);
    r3(Background, 570, 0, 600, 250);
    r3(Background, 530, 0, 600, 50);
    SDL_SetRenderDrawColor(Background, 0, 255, 0, 255);
    r3(Background, 535, 55, 565, 85);
}


void uroven(SDL_Renderer *Background,int a,int b,int x1,int y1,int aa,int bb,int xx1,int yy1,int xxx1, int yyy1, int aaa,int bbb, int h)
{
SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
SDL_RenderClear(Background);
SDL_SetRenderDrawColor(Background, 255, 0, 0, 255);
for(int i=0;i<a;i++)
{
    for(int i1=0;i1<b;i1++)
    {
        SDL_RenderDrawPoint(Background,x1+i,y1+i1);
    }
}
for(int i=0;i<aa;i++)
{
    for(int i1=0;i1<bb;i1++)
    {
        SDL_RenderDrawPoint(Background,xx1+i,yy1-i1);
    }
}
time(Background, h, l);
SDL_SetRenderDrawColor(Background, 0, 255, 0, 255);
for(int i=0;i<aaa;i++)
{
    for(int i1=0;i1<bbb;i1++)
    {
        SDL_RenderDrawPoint(Background,xxx1+i,yyy1-i1);
    }
}
}


void pravo(SDL_Renderer *Background, int &x,int &y, int h)
{
int a=10;
int b=10;
x=x+5;
SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
SDL_RenderClear(Background);
SDL_SetRenderDrawColor(Background, 255, 0, 0, 255);
if(l == 0)
uroven(Background,500,10,0,100,10,100,490,100,600,40,20,20, h);
if(l == 1)
uroven2(Background, h);
if(l == 2)
    {
    uroven3(Background, h, l);

    }
SDL_SetRenderDrawColor(Background, 200, 200, 0, 255);
for(int i=0;i<a;i++)
{
for(int i1=0;i1<b;i1++)
{
SDL_RenderDrawPoint(Background,x+i,y+i1);
}
}
SDL_RenderPresent(Background);
}


void levo(SDL_Renderer *Background, int &x,int &y, int h)
{
int a=10;
int b=10;
x=x-5;
SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
SDL_RenderClear(Background);
SDL_SetRenderDrawColor(Background, 255, 0, 0, 255);
if(l == 0)
    uroven(Background,500,10,0,100,10,100,490,100,600,40,20,20, h);
if(l == 1)
uroven2(Background, h);
if(l == 2)
    {
    uroven3(Background, h, l);

    }
SDL_SetRenderDrawColor(Background, 200, 200, 0, 255);
for(int i=0;i<a;i++)
{
for(int i1=0;i1<b;i1++)
{
SDL_RenderDrawPoint(Background,x+i,y+i1);
}
}
SDL_RenderPresent(Background);
}


void verh(SDL_Renderer *Background, int &x,int &y, int h)
{
int a=10;
int b=10;
y=y-5;
SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
SDL_RenderClear(Background);
SDL_SetRenderDrawColor(Background, 255, 0, 0, 255);
if(l == 0)
uroven(Background,500,10,0,100,10,100,490,100,600,40,20,20, h);
if(l == 1)
uroven2(Background, h);
if(l == 2)
    {
    uroven3(Background, h, l);

    }
SDL_SetRenderDrawColor(Background, 200, 200, 0, 255);
for(int i=0;i<a;i++)
{
for(int i1=0;i1<b;i1++)
{
SDL_RenderDrawPoint(Background,x+i,y+i1);
}
}
SDL_RenderPresent(Background);
}


void niz(SDL_Renderer *Background, int &x,int &y, int h)
{
int a=10;
int b=10;
y=y+5;
SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
SDL_RenderClear(Background);
SDL_SetRenderDrawColor(Background, 255, 0, 0, 255);
if(l == 0)
uroven(Background,500,10,0,100,10,100,490,100,600,40,20,20, h);
if(l == 1)
uroven2(Background, h);
if(l == 2)
    {
    uroven3(Background, h, l);
    }
SDL_SetRenderDrawColor(Background, 200, 200, 0, 255);
for(int i=0;i<a;i++)
{
for(int i1=0;i1<b;i1++)
{
SDL_RenderDrawPoint(Background,x+i,y+i1);
}
}
SDL_RenderPresent(Background);
}


void risstart(SDL_Renderer *Background)
{
    SDL_SetRenderDrawColor(Background, 255, 0, 0, 255);
    int i=0;
    int x=100;
    int y=100;
    string start1 = "00111111011111111000111100011111100011111111 00111111011111111000111100011111100011111111 11000000000011000011000011011000011000011000 11000000000011000011000011011000011000011000 00111100000011000011000011011000011000011000 00111100000011000011000011011000011000011000 00000011000011000011111111011111100000011000 00000011000011000011111111011000011000011000 11111100000011000011000011011000011000011000 111111000000110000110000110110000110000110002";
    while (start1[i]!='2'){
        if(start1[i]=='0'){
            x++;
            x++;
            }
        if(start1[i]=='1'){
            SDL_RenderDrawPoint(Background,x,y);
            SDL_RenderDrawPoint(Background,x+1,y);
            SDL_RenderDrawPoint(Background,x,y+1);
            SDL_RenderDrawPoint(Background,x+1,y+1);
            x++;
            x++;
        }
        if(start1[i]==' '){
            y++;
            y++;
            x=100;
        }
        i++;
    }
}


void risexit(SDL_Renderer *Background)
{
    int i=0;
    int x=200;
    int y=100;
    string exit1 = "111111110110000110111111011111111 111111110110000110111111011111111 110000000111100110001100000011000 110000000111100110001100000011000 111111000001111000001100000011000 111111000001111000001100000011000 110000000110011110001100000011000 110000000110011110001100000011000 111111110110000110111111000011000 1111111101100001101111110000110002";
    while (exit1[i]!='2'){
        if(exit1[i]=='0'){
            x++;
            x++;
        }
        if(exit1[i]=='1'){
            SDL_RenderDrawPoint(Background,x,y);
            SDL_RenderDrawPoint(Background,x+1,y);
            SDL_RenderDrawPoint(Background,x,y+1);
            SDL_RenderDrawPoint(Background,x+1,y+1);
            x++;
            x++;
        }
        if(exit1[i]==' '){
            y++;
            y++;
            x=200;
        }
        i++;
    }
}


int main(int argc, char* argv[])
{
int res = 0;
while(true)
{
    res = 0;
    while(res == 0)
    {
int x = 100,y = 20, j = 0;
long long k = 0;
int h = 0;
// xx1 490 yy1 100 aa 10 bb 100
    // xxx1 400 yyy1 40 aaa 20 bbb 20
SDL_Event e;
SDL_Init(SDL_INIT_EVERYTHING);
SDL_Renderer *Background;
SDL_Window *MainWindow ;
SDL_CreateWindowAndRenderer(1920, 1024, 0, &MainWindow,&Background );
SDL_SetRenderDrawColor(Background, 255, 255, 0, 255);
r(Background,100,100,88,20);
r(Background,200,100,66,20);
risstart(Background);
risexit(Background);
SDL_RenderPresent(Background);
int menu = 1;
int mx, my;
while (menu==1 && res == 0)
{

    while (SDL_PollEvent(&e))
    {

        SDL_GetMouseState(&mx, &my);


        if (e.type == SDL_MOUSEBUTTONDOWN && ((mx > 200 && my > 100) && (mx < 266 && my < 120)))
        {
            switch(e.button.button)
            {

                case SDL_BUTTON_LEFT:
                    SDL_DestroyWindow(MainWindow);
                    SDL_Quit();
                continue;

            }

        }


        if (e.type == SDL_MOUSEBUTTONDOWN && ((mx > 100 && my > 100) && (mx < 188 && my < 120)))
        {
            switch(e.button.button)
            {

                case SDL_BUTTON_LEFT:
                    menu++;
                continue;

            }

        }
    }

}

ris(Background, 0, 0);
SDL_RenderPresent(Background);

uroven(Background,500,10,0,100,10,100,490,100,600,40,20,20, h);
SDL_RenderPresent(Background);
l = 0;
ris(Background, 100,20);

int p;
 clock_t t;
    t = clock();

while(l == 0 && res == 0){
         uroven(Background,500,10,0,100,10,100,490,100,600,40,20,20, h);
         ris(Background, x, y);
         SDL_RenderPresent(Background);
while (SDL_PollEvent(&e))
{

    if (e.type == SDL_KEYDOWN)
    {
        switch(e.key.keysym.sym)
        {
            case SDLK_d:
                pravo(Background, x, y, h);
            continue;


            case SDLK_a:
                levo(Background, x, y, h);
            continue;


            case SDLK_w:
                verh(Background, x, y, h);
            continue;


            case SDLK_s:
                niz(Background, x, y, h);
            continue;


            case SDLK_z:
                SDL_DestroyWindow(MainWindow);
                SDL_Quit();
            continue;
        }

    }

    if ((x >= 480 && x <= 500 && y >=-5 && y <= 100)||(x>=0 && x<=500 && y>=90 && y<=100))
    {
        res++;
        SDL_DestroyWindow(MainWindow);
        SDL_Quit();

        j++;
    }

    if((y > 10 && y < 40) && (x > 590 && x < 620))
    {
        SDL_SetRenderDrawColor(Background, 0, 0, 0, 255);
        SDL_RenderClear(Background);
        SDL_RenderPresent(Background);
        l++;
    }
}

h = h + clock() - t;
t = clock();
if(h > 6500 && j == 0)
{
    SDL_DestroyWindow(MainWindow);
    SDL_Quit();
    res++;

}
}
if(res != 0)
{
    SDL_CreateWindowAndRenderer(1920, 1024, 0, &MainWindow,&Background );
    SDL_SetRenderDrawColor(Background, 255, 255, 0, 255);
    restart(Background);
    SDL_RenderPresent(Background);
    int uy = 0;
    while (uy==0)
    {

        while (SDL_PollEvent(&e))
        {

            SDL_GetMouseState(&mx, &my);


            if (e.type == SDL_MOUSEBUTTONDOWN && ((mx > 400 && my > 100) && (mx < 530 && my < 120)))
            {
                switch(e.button.button)
                {

                    case SDL_BUTTON_LEFT:
                        uy++;
                    continue;
                }

            }


        }
    }
    SDL_DestroyWindow(MainWindow);
    SDL_Quit();
    break;
}



h = 0;
l = 1;
x=0;
y=0;
k = 0;
ris(Background, 0,0);
uroven2(Background, h);
SDL_RenderPresent(Background);
t = clock();
while(l == 1 && res == 0){
    uroven2(Background, h);
    ris(Background, x, y);
    SDL_RenderPresent(Background);
while (SDL_PollEvent(&e))
{
    if (e.type == SDL_KEYDOWN)
    {
        switch(e.key.keysym.sym)
        {

            case SDLK_d:
                pravo(Background, x, y, h);
            continue;


            case SDLK_a:
                levo(Background, x, y, h);
            continue;


            case SDLK_w:
                verh(Background, x, y, h);
            continue;


            case SDLK_s:
                niz(Background, x, y, h);
            continue;


            case SDLK_z:
                SDL_DestroyWindow(MainWindow);
                SDL_Quit();
            continue;
        }
    }


    if((y < 0) || (y > 5 && x < 112) || (y < 5 && x > 118) || (x > 120 && y > 20 && y < 100) || (x > 120 && (y > 118 || y < 102))|| ((x > 112 || x < 118) && y > 118))
    {
        res++;
        SDL_DestroyWindow(MainWindow);
        SDL_Quit();

        j++;
    }


    if(x > 190 && y > 100 && y < 120)
    {
        SDL_SetRenderDrawColor(Background, 0, 0, 0, 255);
        SDL_RenderClear(Background);
        SDL_RenderPresent(Background);
        l++;
    }

}
h = h + clock() - t;
t = clock();
if(h > 3500 && j == 0)
{
        res++;
        SDL_DestroyWindow(MainWindow);
        SDL_Quit();

}
}
if(res != 0)
{
    SDL_CreateWindowAndRenderer(1920, 1024, 0, &MainWindow,&Background );
    SDL_SetRenderDrawColor(Background, 255, 255, 0, 255);
    restart(Background);
    SDL_RenderPresent(Background);
    int uy = 0;
    while (uy==0)
    {

        while (SDL_PollEvent(&e))
        {

            SDL_GetMouseState(&mx, &my);


            if (e.type == SDL_MOUSEBUTTONDOWN && ((mx > 400 && my > 100) && (mx < 530 && my < 120)))
            {
                switch(e.button.button)
                {

                    case SDL_BUTTON_LEFT:
                        uy++;
                    continue;
                }

            }


        }
    }
    SDL_DestroyWindow(MainWindow);
    SDL_Quit();
    break;
}
h = 0;
uroven3(Background, h, l);
ris(Background, 20,120);
x = 20;
y = 120;
k = 0;
l = 2;
SDL_Delay(500);
SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
SDL_RenderClear(Background);
SDL_RenderPresent(Background);
ris(Background, x, y);
t = clock();
while(l == 2 && res == 0){
        ris(Background, x, y);
        SDL_RenderPresent(Background);
while (SDL_PollEvent(&e))
{
    if (e.type == SDL_KEYDOWN)
    {

        ris(Background, x, y);
        SDL_RenderPresent(Background);

        switch(e.key.keysym.sym)
        {

            case SDLK_d:
                SDL_SetRenderDrawColor(Background, 255, 0, 0, 0);
                SDL_RenderPresent(Background);
                pravo(Background, x, y, h);
                SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
                SDL_RenderClear(Background);
                SDL_RenderPresent(Background);
                ris(Background, x, y);
            continue;


            case SDLK_a:
                SDL_SetRenderDrawColor(Background, 255, 0, 0, 0);
                SDL_RenderPresent(Background);
                levo(Background, x, y, h);
                SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
                SDL_RenderClear(Background);
                SDL_RenderPresent(Background);
                ris(Background, x, y);
            continue;


            case SDLK_w:
                SDL_SetRenderDrawColor(Background, 255, 0, 0, 0);

                SDL_RenderPresent(Background);
                verh(Background, x, y, h);
                SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
                SDL_RenderClear(Background);

                SDL_RenderPresent(Background);
                ris(Background, x, y);
            continue;


            case SDLK_s:
                SDL_SetRenderDrawColor(Background, 255, 0, 0, 0);

                SDL_RenderPresent(Background);
                niz(Background, x, y, h);
                SDL_SetRenderDrawColor(Background, 0, 0, 0, 0);
                SDL_RenderClear(Background);
                SDL_RenderPresent(Background);
                ris(Background, x, y);
            continue;


            case SDLK_z:
                SDL_DestroyWindow(MainWindow);
                SDL_Quit();
            continue;

        }
    }
    if ((x<150 && y<100)||(x<20)||(x<150 && y>140)||(y>220)||(x>170 && x<530 && y>70 && y<200)||(y<50 && x<600)||(x>560))
    {
        res++;
        SDL_DestroyWindow(MainWindow);
        SDL_Quit();

        j++;
    }
    if((x > 530 && x < 565) && y < 85)
    {
        SDL_DestroyWindow(MainWindow);
        SDL_Quit();
        cout<<endl<<"gg wp";
        j++;
    }

}
if(res != 0)
{
    SDL_CreateWindowAndRenderer(1920, 1024, 0, &MainWindow,&Background );
    SDL_SetRenderDrawColor(Background, 255, 255, 0, 255);
    restart(Background);
    SDL_RenderPresent(Background);
    int uy = 0;
    while (uy==0)
    {

        while (SDL_PollEvent(&e))
        {

            SDL_GetMouseState(&mx, &my);


            if (e.type == SDL_MOUSEBUTTONDOWN && ((mx > 400 && my > 100) && (mx < 530 && my < 120)))
            {
                switch(e.button.button)
                {

                    case SDL_BUTTON_LEFT:
                        uy++;
                    continue;
                }

            }


        }
    }
    SDL_DestroyWindow(MainWindow);
    SDL_Quit();
    break;
}
}
}
}
}
