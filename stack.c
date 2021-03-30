#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
int main()
{
	int i, j,gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	
	settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
	outtextxy(25,50,"STACK IMPLEMENTATION");
	getch();
	
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(25,100,"DATA FOR STACK - 75, 89, 168, 110, 220");
	getch();
	
	//Making container
	line(200,200,200,400);
	line(200,400,450,400);
	line(450,400,450,200);
	
//	rectangle(250,250,400,350);
//	rectangle(500,300,600,350);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(25,200,"PUSH");
	outtextxy(25,220,"OPERATION");
	outtextxy(290,420,"STACK");
	j=60;
	for(int a=0;a<3;a++){
	j=60;
	for(i=0;i<5;i++){

//		setcolor(15);
		setcolor(15);
		rectangle(500,450-j,600,500-j);
		delay(2000);
		setcolor(0);
		rectangle(500,450-j,600,500-j);

//		setcolor(15);
		j=j+60;
		
	}
	setcolor(15);
	rectangle(400,130,500,190);
	delay(2000);
	setcolor(0);
	rectangle(400,130,500,190);
	setcolor(15);
	rectangle(280,130,380,190);
	delay(2000);
	setcolor(0);
	rectangle(280,130,380,190);
	i=65;
	for(int z = 0;z<3;z++)
	{
		setcolor(15);
		rectangle(280,130+i,380,190+i);
		delay(2000);
		setcolor(0);
		rectangle(280,130+i,380,190+i);
		setcolor(15);
		i=i+65;
	}
	if(a==0){
		int a=i-65; // for going back to the last cell.
		rectangle(280,130+a,380,190+a);
		setcolor(15);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		outtextxy(130+a-20,190+a-30,"75");
	}
	if(a==1){
		int a=i-65; // for going back to the last cell.
		rectangle(280,130+a,380,190+a);
		setcolor(15);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		outtextxy(130+a-20,190+a-30,"75");
		a=i-130; // for going back to the last cell.
		rectangle(280,130+a,380,190+a);
		setcolor(15);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		outtextxy(130+a-40,190+a-30,"110");
	}
	}
	
//	delay(5000);
	getch();
	return 0;
	
}
