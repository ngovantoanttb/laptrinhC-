#include <graphics.h>
#include <bits/stdc++.h>
struct toado{
    int x, y;
};
struct flap{
    toado td;
}bird;
struct Barrier{
    toado br[10];
}BR;
void init()
{
    bird.td.x=50;bird.td.y=250;
    for(int i=0;i<5;i++)
    {
        BR.br[i].x=900+i*200;
        BR.br[i].y=rand()%200+240;
    }
}
void BIRD()
{
    setfillstyle(1,14); setcolor(14); fillellipse(bird.td.x,bird.td.y,25,18);//Than chim
    setfillstyle(1,15); setcolor(15); fillellipse(bird.td.x+12,bird.td.y-9,8,4); //Mat
    setfillstyle(1,0); setcolor(0); fillellipse(bird.td.x+12,bird.td.y-9,2,2); //Mat den
    setfillstyle(1,4); setcolor(4); fillellipse(bird.td.x-13,bird.td.y,15,11);//Canh
    setcolor(0); setlinestyle(1,2,3); line(bird.td.x+15,bird.td.y,bird.td.x+30,bird.td.y);
}
void DLBIRD()
{
    setfillstyle(1,0); setcolor(0); fillellipse(bird.td.x,bird.td.y,25,18);//Than chim
    setfillstyle(1,0); setcolor(0); fillellipse(bird.td.x+12,bird.td.y-9,8,4); //Mat
    setfillstyle(1,0); setcolor(0); fillellipse(bird.td.x-13,bird.td.y,15,11);//Canh
}
void control()
{
    bird.td.y+=2;
    if(kbhit()){getch();    bird.td.y-=80;}
    if(ismouseclick(WM_LBUTTONDOWN))
    {
        int t1,t2;
        getmouseclick(WM_LBUTTONDOWN, t1, t2); bird.td.y-=80;
    }
    if(ismouseclick(WM_RBUTTONDOWN))
    {
        int t1,t2;
        getmouseclick(WM_RBUTTONDOWN, t1, t2); bird.td.y-=80;
    }
}
void display()
{
    for(int i=0;i<5;i++)
    {
        setfillstyle(1,0);
        bar(BR.br[i].x,BR.br[i].y,BR.br[i].x+40,450);
        bar(BR.br[i].x,BR.br[i].y-190,BR.br[i].x+40,BR.br[i].y-400);
    }
    for(int i=0;i<5;i++)
    {
        BR.br[i].x--;
        if(BR.br[i].x==-20) {
            BR.br[i].x=1050;
            BR.br[i].y=rand()%200+200;
        }
    }
    for(int i=0;i<5;i++)
    {
        setfillstyle(1,2);
        bar(BR.br[i].x,BR.br[i].y,BR.br[i].x+40,450);
        bar(BR.br[i].x,BR.br[i].y-190,BR.br[i].x+40,BR.br[i].y-400);
    }
}
void gameover(int &thua)
{
    for(int i=0;i<5;i++)
    {
        if((BR.br[i].x<bird.td.x && BR.br[i].x+40>bird.td.x)&&(bird.td.y>BR.br[i].y || bird.td.y<BR.br[i].y-190)) thua=1;
        else if(bird.td.y<0||bird.td.y>450) thua=1;
    }
}
int main()
{
    initwindow(1050,600);
    int thua;
    int a;
    do{
        thua=0;
            init();
            BIRD();setfillstyle(1,0); bar(0,0,1050,600);
            setfillstyle(1,15); bar(0,450,1050,600);
            setcolor(12); settextstyle(6,0,9); setbkcolor(15); outtextxy(200,460,"Flappy Bird");
        while(thua==0)
        {
            DLBIRD();
            control(); 
            BIRD();
            display();
            gameover(thua);
            for(int i=0;i<3000000;i++);
        }
        setfillstyle(1,0); bar(0,0,1050,600);
        setbkcolor(0); settextstyle(6,0,9);setcolor(12); outtextxy(100,200,"GAME OVER"); delay(2000);
        fflush(stdin);
        setfillstyle(1,0); bar(0,0,1050,600);
        setbkcolor(0);  settextstyle(6,0,5); setcolor(12); outtextxy(200,200,"Ban co muon choi lai(Y/N): ");
        a=getch();
    }while(a=='y'||a=='Y');
getch();
}