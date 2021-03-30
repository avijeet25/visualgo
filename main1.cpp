//#include<graphics.h>  
//#include<conio.h>  
//#include<stdio.h>  
//int main()  
//{  
//    int gd = DETECT ,gm, i;  
//    float x, y,dx,dy,steps;  
//    int x0, x1, y0, y1;  
//    initgraph(&gd, &gm, "C:\\TC\\BGI");  
//    setbkcolor(WHITE);  
//    x0 = 100 , y0 = 200, x1 = 500, y1 = 300;  
//    dx = (float)(x1 - x0);  
//    dy = (float)(y1 - y0);  
//    if(dx>=dy)  
//           {  
//        steps = dx;  
//    }  
//    else  
//           {  
//        steps = dy;  
//    }  
//    dx = dx/steps;  
//    dy = dy/steps;  
//    x = x0;  
//    y = y0;  
//    i = 1;  
//    while(i<= steps)  
//    {  
//        putpixel(x, y, RED);  
//        x += dx;  
//        y += dy;  
//        i=i+1;  
//    }  
//    getch();  
//    closegraph();  
//    return 0;
//}  


//#include<stdio.h>  
//#include<graphics.h>  
//void drawline(int x0, int y0, int x1, int y1)  
//{  
//    int dx, dy, p, x, y;  
//    dx=x1-x0;  
//    dy=y1-y0;  
//    x=x0;  
//    y=y0;  
//    p=2*dy-dx;  
//    while(x<x1)  
//    {  
//        if(p>=0)  
//        {  
//            putpixel(x,y,7);  
//            y=y+1;  
//            p=p+2*dy-2*dx;  
//        }  
//        else  
//        {  
//            putpixel(x,y,7);  
//            p=p+2*dy;}  
//            x=x+1;  
//        }  
//}  
//int main()  
//{  
//    int gdriver=DETECT, gmode, error, x0, y0, x1, y1;  
//    printf("Enter co-ordinates of first point: ");  
//    scanf("%d%d", &x0, &y0);  
//    printf("Enter co-ordinates of second point: ");  
//    scanf("%d%d", &x1, &y1);  
//    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");  
//    drawline(x0, y0, x1, y1);  
//    delay(20000);
//    return 0;  
//}  
//
//#include<graphics.h>
//#include<stdio.h>
//void pixel(int xc,int yc,int x,int y);
//int main()
//{
//	int gd,gm,xc,yc,r,x,y,p;
//	detectgraph(&gd,&gm);
//	
//	
//	printf("Enter center of circle :");
//	scanf("%d%d",&xc,&yc);
//	printf("Enter radius of circle :");
//	scanf("%d",&r);
//	initgraph(&gd,&gm,"C://TurboC3//BGI");
//	x=0;
//	y=r;
//	p=1-r;
//	pixel(xc,yc,x,y);
//	
//	while(x<y)
//	{
//		if(p<0)
//		{
//			x++;
//			p=p+2*x+1;
//		}
//		else
//		{
//			x++;
//			y--;
//			p=p+2*(x-y)+1;
//		}
//		pixel(xc,yc,x,y);
//	}
//	
//	getch();
//	closegraph();
//	return 0;
//}
//
//void pixel(int xc,int yc,int x,int y)
//{
//	putpixel(xc+x,yc+y,WHITE);
//	putpixel(xc+x,yc-y,WHITE);
//	putpixel(xc-x,yc+y,WHITE);
//	putpixel(xc-x,yc-y,WHITE);
//	putpixel(xc+y,yc+x,WHITE);
//	putpixel(xc+y,yc-x,WHITE);
//	putpixel(xc-y,yc+x,WHITE);
//	putpixel(xc-y,yc-x,WHITE);
//}


//
//#include<stdio.h>
//#include<graphics.h>
//int main()
//{
// int gd=DETECT,gm;
// float p,x,y,xc,yc,a,b;
// 
// cleardevice();
// printf("Enter xc, yc:\n");
// scanf("%f%f",&xc,&yc);
// printf("Enter a, b:\n");
// scanf("%f%f",&a,&b);
// initgraph(&gd,&gm,"C:\\tc\\bgi");
// x=0;
// y=b;
// //Region 1
// p=(b*b)-(a*a*b)+(0.25*a*a);
// do
// {
//  putpixel(xc+x,yc+y,WHITE);
//  putpixel(xc+x,yc-y,WHITE);
//  putpixel(xc-x,yc+y,WHITE);
//  putpixel(xc-x,yc-y,WHITE);
//  if(p<0)
//  {
//   x=x+1;
//   p=p+2*b*b*x+b*b;
//  }
//  else
//  {
//   x=x+1;
//   y=y-1;
//   p=p+2*b*b*x-2*a*a*y+b*b;
//  }
// }while(2*b*b*x<2*a*a*y);
// //Region 2
// p=(b*b*(x+0.5)*(x+0.5))+((y-1)*(y-1)*a*a-a*a*b*b);
// do
// {
//  putpixel(xc+x,yc+y,WHITE);
//  putpixel(xc+x,yc-y,WHITE);
//  putpixel(xc-x,yc+y,WHITE);
//  putpixel(xc-x,yc-y,WHITE);
//  if(p>0)
//  {
//   y=y-1;
//   p=p-2*a*a*y+a*a;
//  }
//  else
//  {
//   x=x+1;
//   y=y-1;
//   p=p-2*a*a*y+2*b*b*x+a*a;
//  }
// }while(y!=0);
// getch();
// closegraph();
// restorecrtmode();
// return 0;
//}  
//
//#include<stdio.h>  
//#include<conio.h>  
//#include<graphics.h>  
//#include<dos.h>  
//void flood(int,int,int,int);  
//int main()  
//{  
//    int gd=DETECT,gm;  
//    initgraph(&gd,&gm,"C:/TURBOC3/bgi");  
//    rectangle(50,50,250,250);  
//    flood(55,55,10,0);  
//    getch();  
//    return 0;
//}  
//void flood(int x,int y,int fillColor, int defaultColor)  
//{  
//    if(getpixel(x,y)==defaultColor)  
//    {  
//        delay(1);  
//        putpixel(x,y,fillColor);  
//        flood(x+1,y,fillColor,defaultColor);  
//        flood(x-1,y,fillColor,defaultColor);  
//        flood(x,y+1,fillColor,defaultColor);  
//        flood(x,y-1,fillColor,defaultColor);  
//    }  
//}  
//
//// C Implementation for Boundary Filling Algorithm 
//#include <graphics.h> 
//
//// Function for 8 connected Pixels 
//void boundaryFill8(int x, int y, int fill_color,int boundary_color) 
//{ 
//	if(getpixel(x, y) != boundary_color && 
//	getpixel(x, y) != fill_color) 
//	{ 
//		putpixel(x, y, fill_color); 
//		boundaryFill8(x + 1, y, fill_color, boundary_color); 
//		boundaryFill8(x, y + 1, fill_color, boundary_color); 
//		boundaryFill8(x - 1, y, fill_color, boundary_color); 
//		boundaryFill8(x, y - 1, fill_color, boundary_color); 
//		boundaryFill8(x - 1, y - 1, fill_color, boundary_color); 
//		boundaryFill8(x - 1, y + 1, fill_color, boundary_color); 
//		boundaryFill8(x + 1, y - 1, fill_color, boundary_color); 
//		boundaryFill8(x + 1, y + 1, fill_color, boundary_color); 
//	} 
//} 
//
////driver code 
//int main() 
//{ 
//	// gm is Graphics mode which is 
//	// a computer display mode that 
//	// generates image using pixels. 
//	// DETECT is a macro defined in 
//	// "graphics.h" header file 
//	int gd = DETECT, gm; 
//
//	// initgraph initializes the 
//	// graphics system by loading a 
//	// graphics driver from disk 
//	initgraph(&gd, &gm, ""); 
//
//	// Rectangle function 
//	rectangle(150, 150, 300, 300); 
//
//	// Function calling 
//	boundaryFill8(160, 160, 3, 15); 
////	boundaryFill8(165, 165, 7, 4);
//	delay(10000); 
//
//	getch(); 
//
//	// closegraph function closes the 
//	// graphics mode and deallocates 
//	// all memory allocated by 
//	// graphics system . 
//	closegraph(); 
//
//	return 0; 
//} 

//
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<graphics.h>
//#include<dos.h>
// 
//typedef struct coordinate
//{
//	int x,y;
//	char code[4];
//}PT;
// 
//void drawwindow();
//void drawline(PT p1,PT p2);
//PT setcode(PT p);
//int visibility(PT p1,PT p2);
//PT resetendpt(PT p1,PT p2);
// 
//int main()
//{
//	int gd=DETECT,v,gm;
//	PT p1,p2,p3,p4,ptemp;
//	
//	printf("\nEnter x1 and y1\n");
//	scanf("%d %d",&p1.x,&p1.y);
//	printf("\nEnter x2 and y2\n");
//	scanf("%d %d",&p2.x,&p2.y);
//	
//	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//	drawwindow();
//	delay(5000);
//	
//	drawline(p1,p2);
//	delay(5000);
//	cleardevice();
//	
//	delay(500);
//	p1=setcode(p1);
//	p2=setcode(p2);
//	v=visibility(p1,p2);
//	delay(5000);
//	
//	switch(v)
//	{
//	case 0: drawwindow();
//			delay(5000);
//			drawline(p1,p2);
//			break;
//	case 1:	drawwindow();
//			delay(5000);
//			break;
//	case 2:	p3=resetendpt(p1,p2);
//			p4=resetendpt(p2,p1);
//			drawwindow();
//			delay(5000);
//			drawline(p3,p4);
//			break;
//	}
//	
//	delay(50000);
//	closegraph();
//	return 0;
//}
// 
//void drawwindow()
//{
//	line(150,100,450,100);
//	line(450,100,450,350);
//	line(450,350,150,350);
//	line(150,350,150,100);
//}
// 
//void drawline(PT p1,PT p2)
//{
//	line(p1.x,p1.y,p2.x,p2.y);
//}
// 
//PT setcode(PT p)	//for setting the 4 bit code
//{
//	PT ptemp;
//	
//	if(p.y<100)
//		ptemp.code[0]='1';	//Top
//	else
//		ptemp.code[0]='0';
//	
//	if(p.y>350)
//		ptemp.code[1]='1';	//Bottom
//	else
//		ptemp.code[1]='0';
//		
//	if(p.x>450)
//		ptemp.code[2]='1';	//Right
//	else
//		ptemp.code[2]='0';
//		
//	if(p.x<150)
//		ptemp.code[3]='1';	//Left
//	else
//		ptemp.code[3]='0';
//	
//	ptemp.x=p.x;
//	ptemp.y=p.y;
//	
//	return(ptemp);
//}
// 
//int visibility(PT p1,PT p2)
//{
//	int i,flag=0;
//	
//	for(i=0;i<4;i++)
//	{
//		if((p1.code[i]!='0') || (p2.code[i]!='0'))
//			flag=1;
//	}
//	
//	if(flag==0)
//		return(0);
//	
//	for(i=0;i<4;i++)
//	{
//		if((p1.code[i]==p2.code[i]) && (p1.code[i]=='1'))
//			flag='0';
//	}
//	
//	if(flag==0)
//		return(1);
//	
//	return(2);
//}
// 
//PT resetendpt(PT p1,PT p2)
//{
//	PT temp;
//	int x,y,i;
//	float m,k;
//	
//	if(p1.code[3]=='1')
//		x=150;
//	
//	if(p1.code[2]=='1')
//		x=450;
//	
//	if((p1.code[3]=='1') || (p1.code[2]=='1'))
//	{
//		m=(float)(p2.y-p1.y)/(p2.x-p1.x);
//		k=(p1.y+(m*(x-p1.x)));
//		temp.y=k;
//		temp.x=x;
//		
//		for(i=0;i<4;i++)
//			temp.code[i]=p1.code[i];
//		
//		if(temp.y<=350 && temp.y>=100)
//			return (temp);
//	}
//	
//	if(p1.code[0]=='1')
//		y=100;
//	
//	if(p1.code[1]=='1')
//		y=350;
//		
//	if((p1.code[0]=='1') || (p1.code[1]=='1'))
//	{
//		m=(float)(p2.y-p1.y)/(p2.x-p1.x);
//		k=(float)p1.x+(float)(y-p1.y)/m;
//		temp.x=k;
//		temp.y=y;
//		
//		for(i=0;i<4;i++)
//			temp.code[i]=p1.code[i];
//		
//		return(temp);
//	}
//	else
//		return(p1);
//}

//
//#include<stdio.h>
//#include<graphics.h>
//#include<conio.h>
//#include<stdlib.h>
//int main()
//{
// int gd,gm,n,*x,i,k=0;
////window coordinates int wx1=220,wy1=140,wx2=420,wy2=140,wx3=420,wy3=340,wx4=220,wy4=340;
// int w[]={220,140,420,140,420,340,220,340,220,140};//array for drawing window
// detectgraph(&gd,&gm); 
// initgraph(&gd,&gm,"c:\\turboc3\\bgi"); //initializing graphics
// printf("Window:-");
// setcolor(RED); //red colored window
// drawpoly(5,w); //window drawn
// printf("Enter the no. of vertices of polygon: ");
// scanf("%d",&n);
// x = (int *)malloc(n*2+1);
// printf("Enter the coordinates of points:\n");
// k=0;
// for(i=0;i<n*2;i+=2) //reading vertices of polygon
// {
//  printf("(x%d,y%d): ",k,k);
//  scanf("%d,%d",&x[i],&x[i+1]);
//  k++;
// }
// x[n*2]=x[0]; //assigning the coordinates of first vertex to last additional vertex for drawpoly method.
// x[n*2+1]=x[1];
// setcolor(WHITE);
// drawpoly(n+1,x);
// printf("\nPress a button to clip a polygon..");
// getch();
//
// setcolor(RED);
// drawpoly(5,w);
// setfillstyle(SOLID_FILL,BLACK);
// floodfill(2,2,RED);
// goto xy(1,1); //bringing cursor at starting position
// printf("\nThis is the clipped polygon..");
// getch();
//
// cleardevice();
// closegraph();
// return 0;
//}


//
//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include<math.h>
//void clip(float,float,float);
//int i,j=0,n;
//int rx1,rx2,ry1,ry2;
//float x1[8];
//float y1[8];
//int main()
//{
//int gd=DETECT,gm;
//int i,n;
//float x[8],y[8],m;
////clrscr();
//initgraph(&gd,&gm,"");
//printf("coordinates for rectangle : ");
//scanf("%d%d%d%d",&rx1,&ry1,&rx2,&ry2);
//printf("no. of sides for polygon : ");
//scanf("%d",&n);
//printf("coordinates : ");
//for(i=0;i<n;i++)
//{
//scanf("%f%f",&x[i],&y[i]);
//}
//cleardevice();
//outtextxy(10,10,"Before clipping");
//outtextxy(10,470,"Press any key....");
//rectangle(rx1,ry1,rx2,ry2);
//for(i=0;i<n-1;i++)
//line(x[i],y[i],x[i+1],y[i+1]);
//line(x[i],y[i],x[0],y[0]);
//getch();
//cleardevice();
//for(i=0;i<n-1;i++)
//{
//m=(y[i+1]-y[i])/(x[i+1]-x[i]);
//clip(x[i],y[i],m);
//clip(x[i+1],y[i+1],m);
//}
//m=(y[i]-y[0])/(x[i]-x[0]);
//clip(x[i],y[i],m);
//clip(x[0],y[0],m);
//outtextxy(10,10,"After clipping");
//outtextxy(10,470,"Press any key....");
//rectangle(rx1,ry1,rx2,ry2);
//for(i=0;i<j-1;i++)
//line(x1[i],y1[i],x1[i+1],y1[i+1]);
//getch();
//return 0;
//}
//
//void clip(float e,float f,float m)
//{
//while(e<rx1 e>rx2 f<ry1 f>ry2)
//{
//if(e<rx1)
//{
//f+=m*(rx1-e);
//e=rx1;
//}
//else if(e>rx2)
//{
//f+=m*(rx2-e);
//e=rx2;
//}
//if(f<ry1)
//{
//e+=(ry1-f)/m;
//f=ry1;
//}
//else if(f>ry2)
//{
//e+=(ry2-f)/m;
//f=ry2;
//}
//}
//x1[j]=e;
//y1[j]=f;
//j++;
//}

//
//#include<stdio.h>
//#include<conio.h>
////#include<iostream.h>
//#include<graphics.h>
//#define ROUND(a) ((int)(a+0.5))
//#define n 4
//
//#define LEFT_EDGE 0x1
//#define RIGHT_EDGE 0x2
//#define BOTTOM_EDGE 0x4
//#define TOP_EDGE 0x8
//
//#define INSIDE(a)  (!a)
//#define REJECT(a,b) (a&b)
//#define ACCEPT(a,b) (!(a|b))
//
//typedef struct wcpt2
//{
//    int x,y;
//}wcpt2;
//
//typedef struct dcpt
//{
//    int x,y;
//}dcpt;
//
//int main()
//{
//    int gd=DETECT,gm;
//    int left,top,right,bottom;
//    int x1,x2,y1,y2;
//    int maxx, maxy,i;
//       /* our polygon array */int poly[10];
//    void clipline(dcpt,dcpt,wcpt2,wcpt2);
//    cleardevice();
//
//    initgraph(&gd,&gm,"c:\\tc30\\bgi");
//    maxx = getmaxx()/4;
//    maxy = getmaxy()/4;
//
//    poly[0] = 20;        /* 1st vertex */
//    poly[1] = maxy / 2;
//
//    poly[2] = maxx - 10; /* 2nd */
//    poly[3] = 10;
//
//    poly[4] = maxx - 50; /* 3rd */
//    poly[5] = maxy - 20;
//
//    poly[6] = maxx / 2;  /* 4th */
//    poly[7] = maxy / 2;
//
///*   drawpoly doesn't automatically close   the polygon, so we close it.*/
//    poly[8] = poly[0];
//    poly[9] = poly[1];
//
//   /* draw the polygon */
//    drawpoly(5, poly);
//
//    rectangle(20,25,80,125);
//    wcpt2 pt1,pt2;
//    dcpt winmin,winmax;
//
//    winmin.x=20;
//    winmin.y=25;
//    winmax.x=80;
//    winmax.y=125;
//
//    pt1.x=20;
//    pt1.y=maxy/2;
//    pt2.x=maxx-10;
//    pt2.y=10;
//
////    clipline(winmin,winmax,pt1,pt2);int i=0;
//    for(int index=0;index<n;index++)
//    {
//        if(index==n-1)
//        {
//            pt1.x=poly[i];
//            pt1.y=poly[i+1];
//            i=0;
//            pt2.x=poly[i];
//            pt2.y=poly[i+1];
//            clipline(winmin,winmax,pt1,pt2);
//        }
//        else
//        {
//            pt1.x=poly[i];
//            pt1.y=poly[i+1];
//            pt2.x=poly[i+2];
//            pt2.y=poly[i+3];
//            clipline(winmin,winmax,pt1,pt2);
//        }
//        i+=2;
//    }
//    pt1.x=poly[i];
//    pt1.y=poly[i+1];
//    clipline(winmin,winmax,pt1,pt2);
//    getch();
//    return 0;
//}
//
//
//unsigned char encode(wcpt2 pt,dcpt winmin,dcpt winmax)
//{
//    unsigned char code=0x00;
//    if(pt.x < winmin.x)
//        code=code | LEFT_EDGE;
//    if(pt.x > winmax.x)
//        code=code | RIGHT_EDGE;
//    if(pt.y < winmin.y)
//        code=code | TOP_EDGE;
//    if(pt.y > winmax.y)
//        code=code | BOTTOM_EDGE;
//    return code;
//}
//
//
//void swappts(wcpt2 *p1,wcpt2 *p2)
//{
//    wcpt2 tmp;
//    tmp = *p1;
//    *p1 = *p2;
//    *p2 = tmp;
//}
//
//
//void swapcode(unsigned char *c1,unsigned char *c2)
//{
//    unsigned char tmp;
//    tmp = *c1;
//    *c1 = *c2;
//    *c2 = tmp;
//}
//
//
//void clipline(dcpt winmin,dcpt winmax,wcpt2 p1,wcpt2 p2)
//{
//    unsigned char encode(wcpt2,dcpt,dcpt);
//    unsigned char code1,code2;
//    int done = 0 , draw = 0;
//    float m;
//    void swapcode(unsigned char *c1,unsigned char *c2);
//    void swappts(wcpt2 *p1,wcpt2 *p2);
//
//    while(!done)
//    {
//        code1 = encode(p1,winmin,winmax);
//        code2 = encode(p2,winmin,winmax);
//        if(ACCEPT(code1,code2))
//        {
//            draw = 1;
//            done = 1;
//        }
//        else if(REJECT(code1,code2))
//            done = 1;
//        else if(INSIDE(code1))
//        {
//                swappts(&p1,&p2);
//                swapcode(&code1,&code2);
//        }
//        if(code1 & LEFT_EDGE)
//        {
//                p1.y += (winmin.x - p1.x) *  (p2.y - p1.y) / (p2.x - p1.x);
//                p1.x = winmin.x;
//        }
//        else if(code1 & RIGHT_EDGE)
//        {
//                p1.y += (winmax.x - p1.x) *  (p2.y - p1.y) / (p2.x - p1.x);
//                p1.x = winmax.x;
//        }
//        else if(code1 & TOP_EDGE)
//        {
//            if(p2.x != p1.x)
//                p1.x += (winmin.y - p1.y) *  (p2.x - p1.x) / (p2.y - p1.y);
//                p1.y = winmin.y;
//        }
//        else if(code1 & BOTTOM_EDGE)
//        {
//            if(p2.x != p1.x)
//                p1.x += (winmax.y - p1.y) *  (p2.x - p1.x) / (p2.y - p1.y);
//                p1.y = winmax.y;
//        }
//    }
//    if(draw)
//    {
//    setcolor(5);
//    line(p1.x,p1.y,p2.x,p2.y);
//    }
//}

//
//#include<iostream.h>
//
//#include<conio.h>
//#include<graphics.h>
//#define round(a) ((int)(a+0.5))
//int k;
//float xmin,ymin,xmax,ymax,arr[20],m;
//void clipl(float x1,float y1,float x2,float y2)
//{
//    if(x2-x1)
//        m=(y2-y1)/(x2-x1);
//    else
//        m=100000;
//    if(x1 >= xmin && x2 >= xmin)
//    {
//        arr[k]=x2;
//        arr[k+1]=y2;
//        k+=2;
//    }
//    if(x1 < xmin && x2 >= xmin)
//    {
//        arr[k]=xmin;
//        arr[k+1]=y1+m*(xmin-x1);
//        arr[k+2]=x2;
//        arr[k+3]=y2;
//        k+=4;
//    }
//    if(x1 >= xmin  && x2 < xmin)
//    {
//        arr[k]=xmin;
//        arr[k+1]=y1+m*(xmin-x1);
//        k+=2;
//    }
//}
//
//void clipt(float x1,float y1,float x2,float y2)
//{
//    if(y2-y1)
//        m=(x2-x1)/(y2-y1);
//    else
//        m=100000;
//    if(y1 <= ymax && y2 <= ymax)
//    {
//        arr[k]=x2;
//        arr[k+1]=y2;
//        k+=2;
//    }
//    if(y1 > ymax && y2 <= ymax)
//    {
//        arr[k]=x1+m*(ymax-y1);
//        arr[k+1]=ymax;
//        arr[k+2]=x2;
//        arr[k+3]=y2;
//        k+=4;
//    }
//    if(y1 <= ymax  && y2 > ymax)
//    {
//        arr[k]=x1+m*(ymax-y1);
//        arr[k+1]=ymax;
//        k+=2;
//    }
//}
//
//void clipr(float x1,float y1,float x2,float y2)
//{
//    if(x2-x1)
//        m=(y2-y1)/(x2-x1);
//    else
//        m=100000;
//    if(x1 <= xmax && x2 <= xmax)
//    {
//        arr[k]=x2;
//        arr[k+1]=y2;
//        k+=2;
//    }
//    if(x1 > xmax && x2 <= xmax)
//    {
//        arr[k]=xmax;
//        arr[k+1]=y1+m*(xmax-x1);
//        arr[k+2]=x2;
//        arr[k+3]=y2;
//        k+=4;
//    }
//    if(x1 <= xmax  && x2 > xmax)
//    {
//        arr[k]=xmax;
//        arr[k+1]=y1+m*(xmax-x1);
//        k+=2;
//    }
//}
//
//void clipb(float x1,float y1,float x2,float y2)
//{
//    if(y2-y1)
//        m=(x2-x1)/(y2-y1);
//    else
//        m=100000;
//    if(y1 >= ymin && y2 >= ymin)
//    {
//        arr[k]=x2;
//        arr[k+1]=y2;
//        k+=2;
//    }
//    if(y1 < ymin && y2 >= ymin)
//    {
//        arr[k]=x1+m*(ymin-y1);
//        arr[k+1]=ymin;
//        arr[k+2]=x2;
//        arr[k+3]=y2;
//        k+=4;
//    }
//    if(y1 >= ymin  && y2 < ymin)
//    {
//        arr[k]=x1+m*(ymin-y1);
//        arr[k+1]=ymin;
//        k+=2;
//    }
//}
// 
//void main()
//{
//    int gdriver=DETECT,gmode,n,poly[20];
//    float xi,yi,xf,yf,polyy[20];
//    clrscr();
//    cout<<"Coordinates of rectangular clip window :\nxmin,ymin             :";
//    cin>>xmin>>ymin;
//    cout<<"xmax,ymax             :";
//    cin>>xmax>>ymax;
//    cout<<"\n\nPolygon to be clipped :\nNumber of sides       :";
//    cin>>n;
//    cout<<"Enter the coordinates :";
//    for(int i=0;i < 2*n;i++)
//		cin>>polyy[i];
//    polyy[i]=polyy[0];
//    polyy[i+1]=polyy[1];
//    for(i=0;i < 2*n+2;i++)
//		poly[i]=round(polyy[i]);
//    initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
//    setcolor(RED);
//    rectangle(xmin,ymax,xmax,ymin);
//    cout<<"\t\tUNCLIPPED POLYGON";
//    setcolor(WHITE);
//    fillpoly(n,poly);
//	getch();
//    cleardevice();
//    k=0;
//    for(i=0;i < 2*n;i+=2)
//		clipl(polyy[i],polyy[i+1],polyy[i+2],polyy[i+3]);
//    n=k/2;
//    for(i=0;i < k;i++)
//		polyy[i]=arr[i];
//    polyy[i]=polyy[0];
//    polyy[i+1]=polyy[1];
//    k=0;
//    for(i=0;i < 2*n;i+=2)
//		clipt(polyy[i],polyy[i+1],polyy[i+2],polyy[i+3]);
//    n=k/2;
//    for(i=0;i < k;i++)
//		polyy[i]=arr[i];
//    polyy[i]=polyy[0];
//    polyy[i+1]=polyy[1];
//    k=0;
//    for(i=0;i < 2*n;i+=2)
//		clipr(polyy[i],polyy[i+1],polyy[i+2],polyy[i+3]);
//    n=k/2;
//    for(i=0;i < k;i++)
//		polyy[i]=arr[i];
//    polyy[i]=polyy[0];
//    polyy[i+1]=polyy[1];
//    k=0;
//    for(i=0;i < 2*n;i+=2)
//		clipb(polyy[i],polyy[i+1],polyy[i+2],polyy[i+3]);
//    for(i=0;i < k;i++)
//		poly[i]=round(arr[i]);
//    if(k)
//		fillpoly(k/2,poly);
//    setcolor(RED);
//    rectangle(xmin,ymax,xmax,ymin);
//    cout<<"\tCLIPPED POLYGON";
//    getch();
//    closegraph();
//}

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void dda(int,int,int,int,int,int,int,int);
void dda(int x1,int y1,int x2,int y2,int xmin,int ymin,int xmax,int ymax)
{
            float dx,dy;
            float steps,x=x1,y=y1;
            int i=0;
            dx=x2-x1;
            dy=y2-y1;
            if(abs(dx)>=abs(dy))
                        steps=abs(dx);
            else
                        steps=abs(dy);
            dx=dx/steps;
            dy=dy/steps;
            while(i++<=steps)
            {
            if(x>=xmin && x<=xmax && y>=ymin && y<=ymax)
            {
                        line(x,y,x2,y2);
                        return;
            }
                        x=x+dx;
                        y=y+dy;
            }
}
int main()
{
            int n,gd,gm,x1,x2,y1,y2,xRec,yRec,b1,b2,b3,b4,l,b,yMin,yMax,xMin,xMax;
            float m;
            int a[10][4],i,j, flag=0,in=0;
            gd=DETECT;
            gm=DETECT;
            initgraph(&gm,&gd,"C:\\TC\\BGI");

            printf("Enter the length and breadth of the clipping window:\n");
            scanf("%d%d",&l,&b);

            printf("Enter the starting co-ord of the rectangle\n");
            scanf("%d%d",&xRec,&yRec);
//            cleardevice();

            rectangle(xRec,yRec,xRec+l,yRec+b);
            getch();
//            cleardevice();


            printf("Enter the no of lines\n");
            scanf("%d",&n);

            for(i=0;i<n;i++)
            {
                        printf("Enter the co-ord of line %d\n",i+1);
                        for(j=0;j<2;j++)
                        {
                                    scanf("%d",&a[i][j]);
                        }
                        a[i][2]=a[0][0];
                        a[i][3]=a[0][1];
                        if(i!=0)
                        {
                               a[i-1][2]=a[i][0];
                               a[i-1][3]=a[i][1];
                        }
            }
//            cleardevice();
            rectangle(xRec,yRec,xRec+l,yRec+b);
            for(i=0;i<n;i++)
            {
                        line(a[i][0],a[i][1],a[i][2],a[i][3]);
            }
            getch();
            cleardevice();
            rectangle(xRec,yRec,xRec+l,yRec+b);

            xMin=xRec;
            yMin=yRec;
            xMax=xRec+l;
            yMax=yRec+b;

            for(i=0;i<n;i++)
            {
                        flag=0;
                        x1=a[i][0];
                        x2=a[i][2];
                        y1=a[i][1];
                        y2=a[i][3];

                        if(x1>=xMin && x1<=xMax && y1>=yMin && y1<=yMax)
                                    flag++;
                        if(x2>=xMin && x2<=xMax && y2>=yMin && y2<=yMax)
                                    flag++;


                        switch(flag)
                        {
                                    case 0:
                                                break;

case 1: if(x2>=xMin && x2<=xMax && y2>=yMin &&    y2<=yMax)
                                                {
                                                            dda(x1,y1,x2,y2,xMin,yMin,xMax,yMax);

                                                }
                                                else
                                                {
                                                            dda(x2,y2,x1,y1,xMin,yMin,xMax,yMax);

                                                }
                                                break;
                                    case 2: line(x1,y1,x2,y2);
                                                break;
                        }
            }

            getch();

            closegraph();
            return 0;
}
