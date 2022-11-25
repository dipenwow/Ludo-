#include<dos.h>
#include<time.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<graphics.h>
int x,y,i,n,gd=DETECT,gm,count=0,value,ch=0,cpuplay,blue;
int j,k,b=0,r=0,br=0,g=0,rk=0,rl=0,bk=0,bl=0,brk=0,brl=0,gk=0,gl=0,btemp=0,rtemp=0,brtemp=0,gtemp=0;
char input;
void background()
{ initgraph(&gd,&gm,"..\\BGI");
  setcolor(BROWN);
  rectangle(x/2-240,3,x/2+240,y-3);  //First border
  rectangle(x/2-237,6,x/2+237,y-6);  //Second border
  setfillstyle(1,8);
  floodfill(x/2-200,7,6);
  setfillstyle(1,9);
  floodfill(1,1,BROWN);
  setcolor(BLUE);                       //LeftUP Ghar
  setfillstyle(11,BLUE);
  rectangle(x/2-200,40,x/2-90,150);
  floodfill(x/2-199,41,BLUE);
  setfillstyle(8,BLUE);
  rectangle(x/2-220,20,x/2-70,170);
  floodfill(x/2-199,21,BLUE);
  setfillstyle(1,BLUE);
  fillellipse(x/2-145,95,10,10);
  setcolor(GREEN);                  //LeftDOWN Ghar
  setfillstyle(11,GREEN);
  rectangle(x/2-200,y-150,x/2-90,y-40);
  floodfill(x/2-199,y-149,GREEN);
  setfillstyle(8,GREEN);
  rectangle(x/2-220,y-20,x/2-70,y-170);
  floodfill(x/2-199,y-21,GREEN);
  setfillstyle(1,GREEN);
  fillellipse(x/2-144,y-95,10,10);
  setcolor(RED);                      //RightUP Ghar
  setfillstyle(11,RED);
  rectangle(x/2+90,40,x/2+200,150);
  floodfill(x/2+91,41,RED);
  setfillstyle(8,RED);
  rectangle(x/2+70,20,x/2+220,170);
  floodfill(x/2+199,21,RED);
  setfillstyle(1,RED);
  fillellipse(x/2+145,95,10,10);
  setcolor(BROWN);                      //RightDOWN Ghar
  setfillstyle(11,BROWN);
  rectangle(x/2+90,y-150,x/2+200,y-40);
  floodfill(x/2+91,y-149,BROWN);
  setfillstyle(8,BROWN);
  rectangle(x/2+70,y-170,x/2+220,y-20);
  floodfill(x/2+199,y-21,BROWN);
  setfillstyle(1,BROWN);
  fillellipse(x/2+145,y-95,10,10);
  //selection of no. of players
  if (ch==1 || ch==2)
    { setcolor(8);//for brown
      setfillstyle(1,8);
      fillellipse(x/2+145,y-95,10,10);
      setcolor(8);//for green
      setfillstyle(1,8);
      fillellipse(x/2-144,y-95,10,10);
    }
    else if(ch==3)
    {setcolor(8);//for green
      setfillstyle(1,8);
      fillellipse(x/2-144,y-95,10,10);}
  for(i=60;i<=220;i=i+30) //PlayArea
  { setcolor(BLACK);
    rectangle(x/2-i-15,y/2-15,x/2-i+15,y/2-45);
    rectangle(x/2-i-15,y/2-15,x/2-i+15,y/2+15);
    rectangle(x/2+i+15,y/2-15,x/2+i-15,y/2+15);
    rectangle(x/2-i-15,y/2+15,x/2-i+15,y/2+45);
    rectangle(x/2+i+15,y/2-15,x/2+i-15,y/2-45);
    rectangle(x/2+i+15,y/2+15,x/2+i-15,y/2+45);
    rectangle(x/2-45,15,x/2-15,i-15);
    rectangle(x/2-15,15,x/2+15,i-15);
    rectangle(x/2-15,y-15,x/2+15,y-i+15);
    rectangle(x/2+15,15,x/2+45,i-15);
    rectangle(x/2-45,y-15,x/2-15,y-i+15);
    rectangle(x/2+15,y-15,x/2+45,y-i+15);
  }
  for(i=x/2-180;i<=x/2-60;i=i+30)  //For Home colors
  { setfillstyle(9,BLUE);
    floodfill(i+14,y/2,BLACK);
    setcolor(8);
    circle(i,y/2,10);
    setfillstyle(1,8);
    floodfill(i,y/2,8);
  }
  setfillstyle(9,BLUE);
  floodfill(x/2-180,y/2-30,BLACK);
  setcolor(8);
  circle(x/2-180,y/2-30,10);
  setfillstyle(1,8);
  floodfill(x/2-180,y/2-30,8);
  for(i=x/2+180;i>=x/2+60;i=i-30)
  { setfillstyle(9,BROWN);
    floodfill(i+14,y/2+14,BLACK);
    setcolor(8);
    circle(i,y/2,10);
    setfillstyle(1,8);
    floodfill(i,y/2,8);
  }
  setfillstyle(9,BROWN);
  floodfill(x/2+180,y/2+30,BLACK);
  setcolor(8);
  circle(x/2+180,y/2+30,10);
  setfillstyle(1,8);
  floodfill(x/2+180,y/2+30,8);
  for(i=y/2+180;i>=y/2+60;i=i-30)
  { setfillstyle(9,GREEN);
    floodfill(x/2+14,i+14,BLACK);
    setcolor(8);
    circle(x/2,i,10);
    setfillstyle(1,8);
    floodfill(x/2,i,8);
  }
  setfillstyle(9,GREEN);
  floodfill(x/2-30,y/2+180,BLACK);
  setcolor(8);
  circle(x/2-30,y/2+180,10);
  setfillstyle(1,8);
  floodfill(x/2-30,y/2+180,8);
  for(i=60;i<=180;i=i+30)
  { setfillstyle(9,RED);
    floodfill(x/2+14,i-14,BLACK);
    setcolor(8);
    circle(x/2,i,10);
    setfillstyle(1,8);
    floodfill(x/2,i,8);
  }
  setfillstyle(9,RED);
  floodfill(x/2+30,y/2-180,BLACK);
  setcolor(8);
  circle(x/2+30,y/2-180,10);
  setfillstyle(1,8);
  floodfill(x/2+30,y/2-180,8);

  //  Safe Zones
  setcolor(BLACK);
  circle(x/2-30,y/2-150,11);//red
  setfillstyle(1,RED);
  floodfill(x/2-30,y/2-138,BLACK);
  circle(x/2+150,y/2-30,11);//brown
  setfillstyle(1,BROWN);
  floodfill(x/2+150,y/2-18,BLACK);
  circle(x/2+30,y/2+150,11);//green
  setfillstyle(1,GREEN);
  floodfill(x/2+30,y/2+162,BLACK);
  circle(x/2-150,y/2+30,11);//blue
  setfillstyle(1,BLUE);
  floodfill(x/2-150,y/2+18,BLACK);
  outtextxy(x-75,y-50,"Press Esc");
  outtextxy(x-75,y-35," to Exit");
}
void user_screen_1()
{ cleardevice();
  setcolor(8);
  settextstyle(0,0,2);
  outtextxy(x/2-180,y/2-120,"Welcome To PC");
  setcolor(RED);
  outtextxy(x/2+45,y/2-120,"L");
  setcolor(GREEN);
  outtextxy(x/2+65,y/2-120,"U");
  setcolor(BLUE);
  outtextxy(x/2+85,y/2-120,"D");
  setcolor(BROWN);
  outtextxy(x/2+105,y/2-120,"O");
  setcolor(7);
  settextstyle(0,0,1);
  outtextxy(x/2-90,y/2-75,"N - NEW GAME");
  outtextxy(x/2-90,y/2-55,"R - Rules");
  outtextxy(x/2-90,y/2-35,"D - Developers");
  outtextxy(x/2-90,y/2-15,"Esc - Exit.");
}

void user_screen_2()
{  cleardevice();
   bar3d(50,50,x-50,y-50,15,1);
   outtextxy(x/2-100,y/2-70,"Enter the number of players");
   outtextxy(x/2-40,y/2-50,"1 player");
   outtextxy(x/2-40,y/2-40,"2 players");
   outtextxy(x/2-40,y/2-30,"3 players");
   outtextxy(x/2-40,y/2-20,"4 players");
}

void rule_page()
{ settextstyle(1,0,2);
  outtextxy(x/2-180,y/2-100,"Rules for the Game");
  settextstyle(0,0,0);
  outtextxy(x/2-200,y/2-50,"1. Only 6 will allow player to take out token.");
  outtextxy(x/2-200,y/2-30,"2. Three consecutive 6s will change the player turn.");
  outtextxy(x/2-200,y/2-10,"3. The one of reach finish first will win.");
  outtextxy(x-190,y/2+50,"Go Back? Press Esc");
}

void developers()
{  cleardevice();
   bar3d(50,50,x-50,y-50,15,1);
   settextstyle(1,0,2);
   outtextxy(x/2-180,y/2-100,"Game Developers");
   settextstyle(0,0,0);
   outtextxy(x/2-40,y/2-50,"Aakash Chaudary");
   outtextxy(x/2-40,y/2-40,"Chetana Bhandari");
   outtextxy(x/2-40,y/2-30,"Dipendra Shakya");
   outtextxy(x/2-40,y/2-20,"Gaurav Kumar Shrestha");
   outtextxy(x-200,y-90,"Go Back? Press Esc");
   settextstyle(1,0,3);
   outtextxy(x/2-30,y/2+20,"A Third Semester Project");
}

void bsafe(int i,int j)
{setcolor(BLUE);
 setfillstyle(1,BLUE);
 fillellipse(i,j,10,10);}

 void rsafe(int i,int j)
{setcolor(RED);
 setfillstyle(1,RED);
 fillellipse(i,j,10,10);}

void brsafe(int i,int j)
{setcolor(BROWN);
 setfillstyle(1,BROWN);
 fillellipse(i,j,10,10);}

 void gsafe(int i,int j)
{setcolor(GREEN);
 setfillstyle(1,GREEN);
 fillellipse(i,j,10,10);}

void kill(int i,int j,int take)
{    if (getpixel(i,j)==BLUE)
      { if(take==0 || take==13 || take==26 || take==39 || take==8 || take==21 || take==34 || take==47)
       {bsafe(i,j);}
       else
       {
      b=0;
      count--;
      setcolor(BLUE);
      setfillstyle(1,BLUE);
      fillellipse(x/2-145,95,10,10);
      }
      }

      else if (getpixel(i,j)==RED)
      { if(take==0 || take==13 || take==26 || take==39 || take==8 || take==21 || take==34 || take==47)
       {rsafe(i,j);}
       else
       {
      r=0;
      count--;
      setcolor(RED);
      setfillstyle(1,RED);
      fillellipse(x/2+145,95,10,10);
      }
      }
      else if(getpixel(i,j)==GREEN)
      {if(take==0 || take==13 || take==26 || take==39 || take==8 || take==21 || take==34 || take==47)
      {gsafe(i,j);}
      else
      {
      g=0;
      count--;
      setcolor(GREEN);
      setfillstyle(1,GREEN);
      fillellipse(x/2-144,y-95,10,10);
      }
      }
       else if(getpixel(i,j)==BROWN)
      {if(take==0 || take==13 || take==26 || take==39 || take==8 || take==21 || take==34 || take==47)
      {brsafe(i,j);}
      else
      {
      br=0;
      count--;
      setcolor(BROWN);
      setfillstyle(1,BROWN);
      fillellipse(x/2+145,y-95,10,10);
      }
      }
}

void dice(int DC)
{ for(i=1;i<3;i++)      //Dice Section
  { setlinestyle(0,0,3);
    setcolor(8);
    rectangle(x/2-20,y/2-20,x/2+20,y/2+20);
    setfillstyle(1,8);
    floodfill(x/2,y/2,8);
    setcolor(DC);
    rectangle(x/2-20,y/2-20,x/2+20,y/2+20);
    setcolor(WHITE);
    fillellipse(x/2,y/2,2,2);
    delay(100);
    setcolor(8);
    rectangle(x/2-20,y/2-20,x/2+20,y/2+20);
    fillellipse(x/2,y/2,2,2);
    delay(20);
    setcolor(DC);
    setlinestyle(0,0,3);
    line(x/2-28.3,y/2,x/2,y/2-28.3);
    line(x/2,y/2-28.3,x/2+28.3,y/2);
    line(x/2-28.3,y/2,x/2,y/2+28.3);
    line(x/2,y/2+28.3,x/2+28.3,y/2);
    setcolor(WHITE);
    fillellipse(x/2-5,y/2,2,2);
    fillellipse(x/2+5,y/2,2,2);
    delay(100);
    setcolor(8);
    line(x/2-28.3,y/2,x/2,y/2-28.3);
    line(x/2,y/2-28.3,x/2+28.3,y/2);
    line(x/2-28.3,y/2,x/2,y/2+28.3);
    line(x/2,y/2+28.3,x/2+28.3,y/2);
    fillellipse(x/2-5,y/2,2,2);
    fillellipse(x/2+5,y/2,2,2);
    delay(20);
    setcolor(DC);
    rectangle(x/2-20,y/2-20,x/2+20,y/2+20);
    setcolor(8);
    fillellipse(x/2-10,y/2,2,2);
    fillellipse(x/2,y/2,2,2);
    fillellipse(x/2+10,y/2,2,2);
    delay(100);
    setcolor(8);
    rectangle(x/2-20,y/2-20,x/2+20,y/2+20);
    fillellipse(x/2-10,y/2,2,2);
    fillellipse(x/2,y/2,2,2);
    fillellipse(x/2+10,y/2,2,2);
    delay(20);
    setcolor(DC);
    line(x/2-28.3,y/2,x/2,y/2-28.3);
    line(x/2,y/2-28.3,x/2+28.3,y/2);
    line(x/2-28.3,y/2,x/2,y/2+28.3);
    line(x/2,y/2+28.3,x/2+28.3,y/2);
    setcolor(8);
    fillellipse(x/2-5,y/2-5,2,2);
    fillellipse(x/2-5,y/2+5,2,2);
    fillellipse(x/2+5,y/2-5,2,2);
    fillellipse(x/2+5,y/2+5,2,2);
    delay(100);
    setcolor(8);
    line(x/2-28.3,y/2,x/2,y/2-28.3);
    line(x/2,y/2-28.3,x/2+28.3,y/2);
    line(x/2-28.3,y/2,x/2,y/2+28.3);
    line(x/2,y/2+28.3,x/2+28.3,y/2);
    fillellipse(x/2-5,y/2-5,2,2);
    fillellipse(x/2-5,y/2+5,2,2);
    fillellipse(x/2+5,y/2-5,2,2);
    fillellipse(x/2+5,y/2+5,2,2);
    delay(20);
    setcolor(DC);
    rectangle(x/2-20,y/2-20,x/2+20,y/2+20);
    setcolor(8);
    fillellipse(x/2-10,y/2-10,2,2);
    fillellipse(x/2-10,y/2+10,2,2);
    fillellipse(x/2,y/2,2,2);
    fillellipse(x/2+10,y/2-10,2,2);
    fillellipse(x/2+10,y/2+10,2,2);
    delay(100);
    setcolor(8);
    rectangle(x/2-20,y/2-20,x/2+20,y/2+20);
    fillellipse(x/2-10,y/2-10,2,2);
    fillellipse(x/2-10,y/2+10,2,2);
    fillellipse(x/2,y/2,2,2);
    fillellipse(x/2+10,y/2-10,2,2);
    fillellipse(x/2+10,y/2+10,2,2);
    delay(20);
    setcolor(DC);
    line(x/2-28.3,y/2,x/2,y/2-28.3);
    line(x/2,y/2-28.3,x/2+28.3,y/2);
    line(x/2-28.3,y/2,x/2,y/2+28.3);
    line(x/2,y/2+28.3,x/2+28.3,y/2);
    setcolor(WHITE);
    fillellipse(x/2-10,y/2-10,2,2);
    fillellipse(x/2,y/2-10,2,2);
    fillellipse(x/2+10,y/2-10,2,2);
    fillellipse(x/2-10,y/2+10,2,2);
    fillellipse(x/2,y/2+10,2,2);
    fillellipse(x/2+10,y/2+10,2,2);
    delay(100);
    setcolor(8);
    line(x/2-28.3,y/2,x/2,y/2-28.3);
    line(x/2,y/2-28.3,x/2+28.3,y/2);
    line(x/2-28.3,y/2,x/2,y/2+28.3);
    line(x/2,y/2+28.3,x/2+28.3,y/2);
    fillellipse(x/2-10,y/2-10,2,2);
    fillellipse(x/2,y/2-10,2,2);
    fillellipse(x/2+10,y/2-10,2,2);
    fillellipse(x/2-10,y/2+10,2,2);
    fillellipse(x/2,y/2+10,2,2);
    fillellipse(x/2+10,y/2+10,2,2);
    delay(20);
  }
  setcolor(DC);
  rectangle(x/2-20,y/2-20,x/2+20,y/2+20);
  setfillstyle(1,DC);
  floodfill(x/2,y/2,DC);
  setlinestyle(0,0,0);
  setcolor(WHITE);
  setfillstyle(1,7);
  switch(n)
  { case 1:
     fillellipse(x/2,y/2,2,2);
     break;
     case 2:
     fillellipse(x/2-5,y/2,2,2);
     fillellipse(x/2+5,y/2,2,2);
     break;
     case 3:
     fillellipse(x/2-10,y/2,2,2);
     fillellipse(x/2,y/2,2,2);
     fillellipse(x/2+10,y/2,2,2);
     break;
     case 4:
     fillellipse(x/2-5,y/2-5,2,2);
     fillellipse(x/2-5,y/2+5,2,2);
     fillellipse(x/2+5,y/2-5,2,2);
     fillellipse(x/2+5,y/2+5,2,2);
     break;
     case 5:
     fillellipse(x/2-10,y/2-10,2,2);
     fillellipse(x/2-10,y/2+10,2,2);
     fillellipse(x/2,y/2,2,2);
     fillellipse(x/2+10,y/2-10,2,2);
     fillellipse(x/2+10,y/2+10,2,2);
     break;
     case 6:
     fillellipse(x/2-10,y/2-10,2,2);
     fillellipse(x/2,y/2-10,2,2);
     fillellipse(x/2+10,y/2-10,2,2);
     fillellipse(x/2-10,y/2+10,2,2);
     fillellipse(x/2,y/2+10,2,2);
     fillellipse(x/2+10,y/2+10,2,2);
     break;
  }
}
void turn_function()
{ setcolor(9);
  outtextxy(15,y/2,"RED");               // turn display
  outtextxy(15,y/2,"BROWN");
  outtextxy(15,y/2,"BLUE");
  outtextxy(15,y/2,"GREEN");
  value=count%ch;
  count++;
  switch(value)
  { case 0:
     dice(1);
     if (n==6)
      {outtextxy(15,y/2,"BLUE");}
    else
     {outtextxy(15,y/2,"RED");}
     if (cpuplay==1)
      {
        delay(1000);
      }
     break;
    case 1:
     dice(4);
     if (n==6)
      {outtextxy(15,y/2,"RED");}

     else if (ch==1 || ch==2)
     {outtextxy(15,y/2,"BLUE");}
     else
     {
     outtextxy(15,y/2,"BROWN");
     }
     break;
    case 2:
     dice(6);
     if (n==6)
      {outtextxy(15,y/2,"BROWN");}
     else if (ch==3)
     {outtextxy(15,y/2,"BLUE");}
     else
     {
     outtextxy(15,y/2,"GREEN");
     }
     break;
    case 3:
     dice(2);
      if (n==6)
      {outtextxy(15,y/2,"GREEN");}
    else
     {outtextxy(15,y/2,"BLUE");}
     break;
  }
}

void replay();

void mechanism()
{ 
 switch(value)
 { case 0:
  if (cpuplay==1)
  {blue=0;}
   if (getpixel(x/2-145,95)==1 && n==6)
  {
setcolor(8);
circle(x/2-145,95,10);
setfillstyle(1,8);
floodfill(x/2-145,95,8);
setcolor(BLACK);
circle(x/2-180,y/2-30,10);
setfillstyle(1,BLUE);
floodfill(x/2-180,y/2-30,BLACK);
bk=x/2-180;
bl=y/2-30;
count--;
blue=1;
}
else if(getpixel(x/2-145,95)==1 && n!=6)
{break;
}
else
{if (n==6)
  {count--;
    blue=1;

  }
 b=b+n;
 if (b>56)
  {b=b-n;}


if(b>=1 && b<=4)    //first row//
{
    setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
    i=x/2-180+((n+btemp)*30);
    j=y/2-30;
      btemp=n;
      bk=i;
      bl=j;
      kill(bk,bl,b);
   setcolor(BLACK);
   circle(i,y/2-30,10);
  setfillstyle(1,BLUE);
    floodfill(i,y/2-30,BLACK);
 }
else if(b>=5 && b<=10) //1st column//
{ setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
 i=x/2-30;
j=y/2-60-((b-5)*30);
      bk=i;
      bl=j;
      kill(bk,bl,b);
  setcolor(BLACK);
   circle(x/2-30,j,10);
  setfillstyle(1,BLUE);
    floodfill(x/2-30,j,BLACK);
    }
else if(b>10 && b< 13 )
{setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
j=y/2-210;
i=x/2-30+((b-10)*30);
      bk=i;
      bl=j;
      kill(bk,bl,b);
 setcolor(BLACK);
   circle(i,y/2-210,10);
  setfillstyle(1,BLUE);
    floodfill(i,y/2-210,BLACK);
}
else if(b>=13 && b< 18 )
{setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
j=y/2-180+((b-13)*30);
      i=x/2+30;
      bk=i;
      bl=j;
      kill(bk,bl,b);
 setcolor(BLACK);
   circle(x/2+30,j,10);
  setfillstyle(1,BLUE);
    floodfill(x/2+30,j,BLACK);
}
 else if(b>=18 && b<24  )
{setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
i=x/2+60+((b-18)*30);
      j=y/2-30;
      bk=i;
      bl=j;
      kill(bk,bl,b);
 setcolor(BLACK);
   circle(i,y/2-30,10);
  setfillstyle(1,BLUE);
    floodfill(i,y/2-30,BLACK);
}
else if(b>=24 && b< 26 )
{setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
j=y/2+((b-24)*30);
      i=x/2+210;
      bk=i;
      bl=j;
      kill(bk,bl,b);
 setcolor(BLACK);
   circle(x/2+210,j,10);
  setfillstyle(1,BLUE);
    floodfill(x/2+210,j,BLACK);
}
 else if(b>=26 && b<31  )
{setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
i=x/2+180-((b-26)*30);
      j=y/2+30;
      bk=i;
      bl=j;
      kill(bk,bl,b);
 setcolor(BLACK);
   circle(i,y/2+30,10);
  setfillstyle(1,BLUE);
    floodfill(i,y/2+30,BLACK);
}
else if(b>=31 && b< 37 )
{setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
j=y/2+60+((b-31)*30);
      i=x/2+30;
      bk=i;
      bl=j;
      kill(bk,bl,b);
 setcolor(BLACK);
   circle(x/2+30,j,10);
  setfillstyle(1,BLUE);
    floodfill(x/2+30,j,BLACK);
}
 else if(b>=37 && b<39  )
{setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
i=x/2-((b-37)*30);
      j=y/2+210;
      bk=i;
      bl=j;
      kill(bk,bl,b);
 setcolor(BLACK);
   circle(i,y/2+210,10);
  setfillstyle(1,BLUE);
    floodfill(i,y/2+210,BLACK);
}
else if(b>=39 && b< 44 )
{setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
j=y/2+180-((b-39)*30);
      i=x/2-30;
      bk=i;
      bl=j;
      kill(bk,bl,b);
 setcolor(BLACK);
   circle(x/2-30,j,10);
  setfillstyle(1,BLUE);
    floodfill(x/2-30,j,BLACK);
}
 else if(b>=44 && b<50  )
{setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
i=x/2-60-((b-44)*30);
j=y/2+30;
      bk=i;
      bl=j;
      kill(bk,bl,b);
 setcolor(BLACK);
   circle(i,y/2+30,10);
  setfillstyle(1,BLUE);
    floodfill(i,y/2+30,BLACK);
}
else if(b==50 )
       {
       setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
  i=x/2-210;
  j=y/2;
  bk=i;
      bl=j;
      kill(bk,bl,b);

 setcolor(BLACK);
   circle(x/2-210,y/2,10);
  setfillstyle(1,BLUE);
    floodfill(x/2-210,y/2,BLACK);
}
 else if(b>=51 && b<56  )
{setcolor(8);
 circle(bk,bl,10);
 setfillstyle(1,8);
 floodfill(bk,bl,8);
i=x/2-180+((b-51)*30);
 setcolor(BLACK);
   circle(i,y/2,10);
  setfillstyle(1,BLUE);
    floodfill(i,y/2,BLACK);
    bk=i;
    bl=y/2;
}
 else if(b==56)
 {delay(1000);
 cleardevice();
 cout<<"Blue won the game";
 delay(2000);
 replay();
}}
break;
case 1:
if (cpuplay==1)
  {blue=1;}

if (getpixel(x/2+145,95)==4 && n==6)
{setcolor(8);
circle(x/2+145,95,10);
setfillstyle(1,8);
floodfill(x/2+145,95,8);
setcolor(BLACK);
circle(x/2+30,y/2-180,10);
setfillstyle(1,RED);
floodfill(x/2+30,y/2-180,BLACK);
rk=x/2+30;
rl=y/2-180;
count--;
blue=0;

}
else if(getpixel(x/2+145,95)==4 && n!=6)
{break;
}

else
{if (n==6)
  {count--;
    blue=0;}
r=r+n;
if (r>56)
{r=r-n;}


if(r>=1 && r<=4)    //first row//
{
    setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
  i=x/2+30;
    j=y/2-180+((n+rtemp)*30);
    rtemp=n;
     rk=i;
      rl=j;
      kill(rk,rl,r);

   setcolor(BLACK);
   circle(x/2+30,j,10);
  setfillstyle(1,RED);
    floodfill(x/2+30,j,BLACK);
    rk=x/2+30;
    rl=j;



 }
else if(r>=5 && r<=10) //1st column//
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
i=x/2+60+((r-5)*30);
j=y/2-30;
 rk=i;
      rl=j;
      kill(rk,rl,r);

  setcolor(BLACK);
   circle(i,y/2-30,10);
  setfillstyle(1,RED);
    floodfill(i,y/2-30,BLACK);
    rk=i;
    rl=y/2-30;
    }
else if(r>10 && r< 13 )
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
  i=x/2+210;
j=y/2-30+((r-10)*30);
 rk=i;
      rl=j;
      kill(rk,rl,r);

 setcolor(BLACK);
   circle(x/2+210,j,10);
  setfillstyle(1,RED);
    floodfill(x/2+210,j,BLACK);
    rk=x/2+210;
    rl=j;
}
else if(r>=13 && r< 18 )
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
i=x/2+180-((r-13)*30);
j=y/2+30;
 rk=i;
      rl=j;
      kill(rk,rl,r);

 setcolor(BLACK);
   circle(i,y/2+30,10);
  setfillstyle(1,RED);
    floodfill(i,y/2+30,BLACK);
    rk=i;
    rl=y/2+30;
}
 else if(r>=18 && r<24  )
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
  i=x/2+30;
j=y/2+60+((r-18)*30);
 rk=i;
      rl=j;
      kill(rk,rl,r);

 setcolor(BLACK);
   circle(x/2+30,j,10);
  setfillstyle(1,RED);
    floodfill(x/2+30,j,BLACK);
    rk=x/2+30;
    rl=j;
}
else if(r>=24 && r< 26 )
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
i=x/2-((r-24)*30);
j=y/2+210;
 rk=i;
      rl=j;
      kill(rk,rl,r);

 setcolor(BLACK);
   circle(i,y/2+210,10);
  setfillstyle(1,RED);
    floodfill(i,y/2+210,BLACK);
    rk=i;
    rl=y/2+210;

}
 else if(r>=26 && r<31  )
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
  i=x/2-30;
j=y/2+180-((r-26)*30);
 rk=i;
      rl=j;
      kill(rk,rl,r);

 setcolor(BLACK);
   circle(x/2-30,j,10);
  setfillstyle(1,RED);
    floodfill(x/2-30,j,BLACK);
    rk=x/2-30;
    rl=j;
}
else if(r>=31 && r< 37 )
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
i=x/2-60-((r-31)*30);
j=y/2+30;
 rk=i;
      rl=j;
      kill(rk,rl,r);

 setcolor(BLACK);
   circle(i,y/2+30,10);
  setfillstyle(1,RED);
    floodfill(i,y/2+30,BLACK);
    rk=i;
    rl=y/2+30;
}
 else if(r>=37 && r<39  )
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
  i=x/2-210;
j=y/2-((r-37)*30);
 rk=i;
      rl=j;
      kill(rk,rl,r);

 setcolor(BLACK);
   circle(x/2-210,j,10);
  setfillstyle(1,RED);
    floodfill(x/2-210,j,BLACK);
    rk=x/2-210;
    rl=j;
}
else if(r>=39 && r< 44 )
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
i=x/2-180+((r-39)*30);
j=y/2-30;
 rk=i;
      rl=j;
      kill(rk,rl,r);

 setcolor(BLACK);
   circle(i,y/2-30,10);
  setfillstyle(1,RED);
    floodfill(i,y/2-30,BLACK);
    rk=i;
    rl=y/2-30;
}
 else if(r>=44 && r<50  )
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
  i=x/2-30;
j=y/2-60-((r-44)*30);
 rk=i;
      rl=j;
      kill(rk,rl,r);

 setcolor(BLACK);
   circle(x/2-30,j,10);
  setfillstyle(1,RED);
    floodfill(x/2-30,j,BLACK);
    rk=x/2-30;
    rl=j;
}
else if(r==50 )
       {
       setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
  i=x/2;
  j=y/2-210;
   rk=i;
      rl=j;
      kill(rk,rl,r);

 setcolor(BLACK);
   circle(x/2,y/2-210,10);
  setfillstyle(1,RED);
    floodfill(x/2,y/2-210,BLACK);
    rk=x/2;
   rl= y/2-210;
}
 else if(r>=51 && r<56  )
{setcolor(8);
  circle(rk,rl,10);
  setfillstyle(1,8);
  floodfill(rk,rl,8);
j=y/2-180+((r-51)*30);
 setcolor(BLACK);
   circle(x/2,j,10);
  setfillstyle(1,RED);
    floodfill(x/2,j,BLACK);
    rk=x/2;
    rl=j;
}
 else if(r==56)
 {delay(1000);
 cleardevice();
 cout<<"Red won the game";
 delay(2000);
 replay();
}
}
break;
case 2:
if (getpixel(x/2+145,y-95)==BROWN && n==6)
{
setcolor(8);
circle(x/2+145,y-95,10);
setfillstyle(1,8);
floodfill(x/2+145,y-95,8);
setcolor(BLACK);
circle(x/2+180,y/2+30,10);
setfillstyle(1,BROWN);
floodfill(x/2+180,y/2+30,BLACK);
brk=x/2+180;
brl=y/2+30;
count--;
}
else if(getpixel(x/2+145,y-95)==BROWN && n!=6)
{break;
}
else
{

//for BROWN//
if (n==6)
  {count--;}
br=br+n;
if (br>56)
  {br=br-n;}
if(br>=1 && br<=4)    //first row//
{    setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
    i=x/2+180-((n+brtemp)*30);
    j=y/2+30;
    brtemp=n;
     brk=i;
      brl=j;
      kill(brk,brl,br);

   setcolor(BLACK);
   circle(i,y/2+30,10);
  setfillstyle(1,BROWN);
    floodfill(i,y/2+30,BLACK);
    brk=i;
    brl=y/2+30;

 }
else if(br>=5 && br<=10) //1st column//
{
 setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
    i=x/2+30;
j=y/2+60+((br-5)*30);
brk=i;
      brl=j;
      kill(brk,brl,br);

  setcolor(BLACK);
   circle(x/2+30,j,10);
  setfillstyle(1,BROWN);
    floodfill(x/2+30,j,BLACK);
    brk=x/2+30;
    brl=j;
    }
else if(br>10 && br< 13 )
{ setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
i=x/2+30-((br-10)*30);
j=y/2+210;
brk=i;
      brl=j;
      kill(brk,brl,br);
 setcolor(BLACK);
   circle(i,y/2+210,10);
  setfillstyle(1,BROWN);
    floodfill(i,y/2+210,BLACK);
    brk=i;
    brl=y/2+210;
}
else if(br>=13 && br< 18 )
{ setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
    i=x/2-30;
j=y/2+180-((br-13)*30);
brk=i;
      brl=j;
      kill(brk,brl,br);
 setcolor(BLACK);
   circle(x/2-30,j,10);
  setfillstyle(1,BROWN);
    floodfill(x/2-30,j,BLACK);
    brk=x/2-30;
    brl=j;
}
 else if(br>=18 && br<24  )
{ setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
i=x/2-60-((br-18)*30);
j=y/2+30;
brk=i;
      brl=j;
      kill(brk,brl,br);
 setcolor(BLACK);
   circle(i,y/2+30,10);
  setfillstyle(1,BROWN);
    floodfill(i,y/2+30,BLACK);
    brk=i;
    brl=y/2+30;
}
else if(br>=24 && br< 26 )
{ setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
    i=x/2-210;
j=y/2-((br-24)*30);
brk=i;
      brl=j;
      kill(brk,brl,br);
 setcolor(BLACK);
   circle(x/2-210,j,10);
  setfillstyle(1,BROWN);
    floodfill(x/2-210,j,BLACK);
    brk=x/2-210;
    brl=j;
}
 else if(br>=26 && br<31  )
{ setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
i=x/2-180+((br-26)*30);
j=y/2-30;
brk=i;
      brl=j;
      kill(brk,brl,br);
 setcolor(BLACK);
   circle(i,y/2-30,10);
  setfillstyle(1,BROWN);
    floodfill(i,y/2-30,BLACK);
    brk=i;
    brl=y/2-30;
}
else if(br>=31 && br< 37 )
{ setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
    i=x/2-30;
j=y/2-60-((br-31)*30);
brk=i;
      brl=j;
      kill(brk,brl,br);
 setcolor(BLACK);
   circle(x/2-30,j,10);
  setfillstyle(1,BROWN);
    floodfill(x/2-30,j,BLACK);
    brk=x/2-30;
    brl=j;
}
 else if(br>=37 && br<39  )
{ setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
i=x/2+((br-37)*30);
j=y/2-210;
brk=i;
      brl=j;
      kill(brk,brl,br);
 setcolor(BLACK);
   circle(i,y/2-210,10);
  setfillstyle(1,BROWN);
    floodfill(i,y/2-210,BLACK);
    brk=i;
    brl=y/2-210;
}
else if(br>=39 && br< 44 )
{ setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
    i=x/2+30;
j=y/2-180+((br-39)*30);
brk=i;
      brl=j;
      kill(brk,brl,br);
 setcolor(BLACK);
   circle(x/2+30,j,10);
  setfillstyle(1,BROWN);
    floodfill(x/2+30,j,BLACK);
    brk=x/2+30;
    brl=j;
}
 else if(br>=44 && br<50  )
{ setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
i=x/2+60+((br-44)*30);
j=y/2-30;
brk=i;
      brl=j;
      kill(brk,brl,br);
 setcolor(BLACK);
   circle(i,y/2-30,10);
  setfillstyle(1,BROWN);
    floodfill(i,y/2-30,BLACK);
    brk=i;
    brl=y/2-30;
}
else if(br==50 )
       {
  setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
    i=x/2+210;
    j=y/2;
    brk=i;
      brl=j;
      kill(brk,brl,br);
 setcolor(BLACK);
   circle(x/2+210,y/2,10);
  setfillstyle(1,BROWN);
    floodfill(x/2+210,y/2,BLACK);
    brk=x/2+210;
    brl=y/2;

}
 else if(br>=51 && br<56  )
{ setcolor(8);
    circle(brk,brl,10);
    setfillstyle(1,8);
    floodfill(brk,brl,8);
i=x/2+180-((br-51)*30);
 setcolor(BLACK);
   circle(i,y/2,10);
  setfillstyle(1,BROWN);
    floodfill(i,y/2,BLACK);
    brk=i;
    brl=y/2;
}
 else if(br==56)
 {delay(1000);
 cleardevice();
 cout<<"Brown won the game";
 delay(2000);
 replay();
}    }
break;
case 3:
//for Green//
if(getpixel(x/2-144,y-95)==GREEN && n==6)
{
setcolor(8);
circle(x/2-144,y-95,10);
setfillstyle(1,8);
floodfill(x/2-144,y-95,8);
setcolor(BLACK);
circle(x/2-30,y/2+180,10);
setfillstyle(1,GREEN);
floodfill(x/2-30,y/2+180,BLACK);
gk=x/2-30;
gl=y/2+180;
count--;
}
else if(getpixel(x/2-144,y-95)==GREEN && n!=6)
{break;
}
else
{

if (n==6)
  {count--;}
g=g+n;
if (g>56)
{g=g-n;}

if(g>=1 && g<=4)    //first row//
{    setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
       i=x/2-30;
      j=y/2+180-((n+gtemp)*30);
      gtemp=n;
       gk=i;
      gl=j;
      kill(gk,gl,g);
   setcolor(BLACK);
   circle(x/2-30,j,10);
  setfillstyle(1,GREEN);
    floodfill(x/2-30,j,BLACK);
    gk=x/2-30;
    gl=j;
 }
else if(g>=5 && g<=10) //1st column//
{  setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
i=x/2-60-((g-5)*30);
j=y/2+30;
 gk=i;
      gl=j;
      kill(gk,gl,g);

  setcolor(BLACK);
   circle(i,y/2+30,10);
  setfillstyle(1,GREEN);
    floodfill(i,y/2+30,BLACK);
    gk=i;
    gl=y/2+30;
    }
else if(g>10 && g< 13 )
{ setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
  i=x/2-210;
j=y/2+30-((g-10)*30);
 gk=i;
      gl=j;
      kill(gk,gl,g);
 setcolor(BLACK);
   circle(x/2-210,j,10);
  setfillstyle(1,GREEN);
    floodfill(x/2-210,j,BLACK);
    gk=x/2-210;
    gl=j;
}
else if(g>=13 && g< 18 )
{ setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
i=x/2-180+((g-13)*30);
j=y/2-30;
 gk=i;
      gl=j;
      kill(gk,gl,g);
 setcolor(BLACK);
   circle(i,y/2-30,10);
  setfillstyle(1,GREEN);
    floodfill(i,y/2-30,BLACK);
    gk=i;
    gl=y/2-30;
}
 else if(g>=18 && g<24  )
{ setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
  i=x/2-30;
j=y/2-60-((g-18)*30);
 gk=i;
      gl=j;
      kill(gk,gl,g);
 setcolor(BLACK);
   circle(x/2-30,j,10);
  setfillstyle(1,GREEN);
    floodfill(x/2-30,j,BLACK);
    gk=x/2-30;
    gl=j;
}
else if(g>=24 && g< 26 )
{ setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
i=x/2+((g-24)*30);
j=y/2-210;
 gk=i;
      gl=j;
      kill(gk,gl,g);
 setcolor(BLACK);
   circle(i,y/2-210,10);
  setfillstyle(1,GREEN);
    floodfill(i,y/2-210,BLACK);
    gk=i;
    gl=y/2-210;
}
 else if(g>=26 && g<31  )
{ setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
  i=x/2+30;
j=y/2-180+((g-26)*30);
 gk=i;
      gl=j;
      kill(gk,gl,g);
 setcolor(BLACK);
   circle(x/2+30,j,10);
  setfillstyle(1,GREEN);
    floodfill(x/2+30,j,BLACK);
    gk=x/2+30;
    gl=j;
}
else if(g>=31 && g< 37 )
{ setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
i=x/2+60+((g-31)*30);
j=y/2-30;
 gk=i;
      gl=j;
      kill(gk,gl,g);
 setcolor(BLACK);
   circle(i,y/2-30,10);
  setfillstyle(1,GREEN);
    floodfill(i,y/2-30,BLACK);
    gk=i;
    gl=y/2-30;
}
 else if(g>=37 && g<39  )
{ setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
  i=x/2+210;
j=y/2+((g-37)*30);
 gk=i;
      gl=j;
      kill(gk,gl,g);
 setcolor(BLACK);
   circle(x/2+210,j,10);
  setfillstyle(1,GREEN);
    floodfill(x/2+210,j,BLACK);
    gk=x/2+210;
    gl=j;
}
else if(g>=39 && g< 44 )
{ setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
i=x/2+180-((g-39)*30);
j=y/2+30;
 gk=i;
      gl=j;
      kill(gk,gl,g);
 setcolor(BLACK);
   circle(i,y/2+30,10);
  setfillstyle(1,GREEN);
    floodfill(i,y/2+30,BLACK);
    gk=i;
    gl=y/2+30;
}
 else if(g>=44 && g<50  )
{ setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
  i=x/2+30;
j=y/2+60+((g-44)*30);
 gk=i;
      gl=j;
      kill(gk,gl,g);
 setcolor(BLACK);
   circle(x/2+30,j,10);
  setfillstyle(1,GREEN);
    floodfill(x/2+30,j,BLACK);
    gk=x/2+30;
    gl=j;
}
else if(g==50 )
       {  setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
  i=x/2;
  j=y/2+210;
   gk=i;
      gl=j;
      kill(gk,gl,g);
 setcolor(BLACK);
   circle(x/2,y/2+210,10);
  setfillstyle(1,GREEN);
    floodfill(x/2,y/2+210,BLACK);
    gk=x/2;
    gl=y/2+210;
}
 else if(g>=51 && g<56  )
{ setcolor(8);
  circle(gk,gl,10);
  setfillstyle(1,8);
  floodfill(gk,gl,8);
j=y/2+180-((g-51)*30);
 setcolor(BLACK);
   circle(x/2,j,10);
  setfillstyle(1,GREEN);
    floodfill(x/2,j,BLACK);
    gk=x/2;
    gl=j;
}
 else if(g==56)
 {delay(1000);
 cleardevice();
 cout<<"Green won the game";
 delay(2000);
 replay();
}}
break;
}
if((blue==1 && cpuplay==1) || (cpuplay==0 && (ch==2 || ch==3 || ch==4)))
{
input=getch();
}
}
void innermechanism()
{
  cleardevice();
      char turnchange;
      background();
      setcolor(7);
      outtextxy(15,y/2-25,"TURN : ");
      outtextxy(15,y/2,"BLUE");
      input='d';
      getch();
      while(input!=27)
   { srand(time(0));
     n = rand() % 6+1 ;
     turn_function();
     mechanism();

   }
}

void replay()
{ char val;
  start:
  user_screen_1();
  val=getch();
  if(val==78 || val==110)
  { user_screen_2();
    np:
    scanf("%d",&ch);
    if(ch==2 ||ch==3|| ch==4)
    { cpuplay=0;
      innermechanism();
    }
    else if(ch==1)
    { cpuplay=ch;
      ch=2;
      innermechanism();

    }
    else
    { goto np;
    }
  }
  else if(val==68 || val==100)
  {
    cleardevice();
    developers();
    while(getch()!=27)
    { }
    goto start;
  }
  else if(val==82 || val==114)
  { cleardevice();
    rule_page();
    while(getch()!=27)
    { }
    goto start;

  }
  else if(val==27)
  { exit(0);
  }
  else
  { goto start;
  }
}
void main()
{ start:
  clrscr();
  char val;
  initgraph(&gd,&gm,"..//BGI");
  x = getmaxx();
  y = getmaxy();
  setbkcolor(9);
  replay();
}