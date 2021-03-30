

// ---------------------------------------------------*****    VISUAL ALGO   *****-----------------------------//

// HEADERS
#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
// BUBBLE SORT MACROS
#define SIZE 10
//INSERTION SORT MACROS
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define IntiSize 10

// BUBBLE SORT FUCNTION DEFINITIONS/PROTOTYPES

void object(int, int, int, int, int);
void bubble(int);
void iterations(int, int, int, int);
void mixing(int, int);
void gotoxy(int, int);
void displayBubble();
int el[SIZE]; // ARRAY

// INSERTION SORT FUCNTION DEFINITIONS/PROTOTYPES
void element(int, int, int, int, int);
void InsertionSort(int);
void rows(int, int, int, int, bool, int);
void FinalArray(int, int, int);
void displayInsertion();
int ElementsArray[IntiSize]; // ARRAY

int main()
{

	int select;
	int gd = DETECT, gm;
	printf("*******  WELCOME TO VISUALGO  ******** \n\n");
	printf("WE HAVE FOLLOWING VISUALIZATIONS AVALIABLE FOR YOU\n");
	printf("1 - LINEAR SEARCH\n");
	printf("2 - BINARY SEARCH\n");
	printf("3 - BUBBLE SORT\n");
	printf("4 - INSERTION SORT\n");
	printf("Enter the Choice   -  ");
	scanf("%d", &select);
	cleardevice();

	// --------------------------------------------------------------------------------    Linear Search Algorithm  ------------------------- //

	if (select == 1)
	{

		int i, j, gm;

		gd = DETECT;

		int x1, y1, x2, y2;
		int aim; // stores the number to be seached for
		int index;
		int gap; //index for storing number of elements
		int counter = 0;
		char result[index + 1], resultpos[1];

		printf("\n");
		printf("Enter the number of elements \n");
		scanf("%d", &index);
		printf("Enter the elements \n");

		int elements[index]; // for storing the elements entered by the user
		int pos[index], posCount = 0;

		for (int z = 0; z < index; z++)
		{
			scanf("%d", &elements[z]);
		}

		printf("Enter the Number to searched \n");
		scanf("%d", &aim);
		cleardevice();

		initgraph(&gd, &gm, "C:\\TC\\BGI");

		settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
		outtextxy(25, 50, "LINEAR SEARCH");
		getch();

		settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

		for (i = 0; counter <= index; i = i + 70)
		{
			setcolor(4);						   // color of rectangle set to RED
			rectangle(100 + i, 250, 150 + i, 200); // creating rectangles

			setcolor(15); // color of rectangle is set to white
			delay(1000);

			sprintf(result, "%d", elements[counter]); // changing integer values from elements, to string and storing in in result

			if (elements[counter] < 9)
			{ // check for better indentation on display
				outtextxy(100 + i + 20, 215, result);
			}

			else if (elements[counter] > 9)
			{ // check for better indentation on display
				outtextxy(100 + i + 12, 215, result);
			}
			else
			{
				outtextxy(100 + i + 15, 215, result); // // check for better indentation on display
			}

			counter++;

			if (counter == index)
			{
				if (aim == elements[counter - 1])
				{
					setcolor(2); // setting rectangle color to green
					rectangle(100 + i, 250, 150 + i, 200);
					posCount++;
					pos[posCount] = elements[counter];
				}
				if (aim != elements[counter - 1])
				{
					setcolor(15); // setting rectangle color to white
					rectangle(100 + i, 250, 150 + i, 200);
				}
				break;
			}
			else if (aim == elements[counter - 1])
			{
				setcolor(2); // setting rectangle color to green
				rectangle(100 + i, 250, 150 + i, 200);
				posCount++;
				pos[posCount] = elements[counter];
				continue;
			}
			else
			{
				setcolor(15); // setting rectangle color to white
				rectangle(100 + i, 250, 150 + i, 200);
			}

			setcolor(15); // setting rectangle color to white
			rectangle(100 + i, 250, 150 + i, 200);

			delay(500);
		}
		delay(300);

		outtextxy(50, 280, "Number of matches : ");
		sprintf(resultpos, "%d", posCount);
		outtextxy(70, 300, resultpos);

		getch();
		closegraph();
		return 0;
	}

	// -------------------------------------------------------------------   BINARY SEARCH ALGORITHM ----------------------------------- //
	else if (select == 2)
	{

		int i, j, gd = DETECT, gm;
		int x1, y1, x2, y2;
		int aim; // stores the number to be seached for
		int index;
		int gap; //index for storing number of elements
		int counter = 0;

		printf("\n");
		printf("Enter the number of elements \n");
		scanf("%d", &index);
		printf("Enter the elements \n");
		int d = 0;
		int elements[index]; // for storing the elements entered by the user
		int pos[index], posCount = 0;
		char result[index + 1], resultpos[1];
		char indexNoString[index + 1];
		int start;
		char startp[128];
		int mid;
		char midp[128];
		int end;
		char endp[128];

		for (int z = 0; z < index; z++)
		{
			scanf("%d", &elements[z]);
		}

		start = 0;
		end = index - 1;

		printf("Enter the Number to searched \n");
		scanf("%d", &aim);
		cleardevice();
		initwindow(800, 800);
		//initgraph(&gd,&gm,"C:\\TC\\BGI");

		settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
		outtextxy(25, 50, "BINARY SEARCH");
		getch();

		settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

		//TO BE REMOVED
		outtextxy(50, 150, "START");
		outtextxy(50, 200, "MID");
		outtextxy(50, 250, "END");
		outtextxy(50, 315, "ARRAY");
		outtextxy(50, 375, "INDEX");

		outtextxy(150, 150, ":");
		outtextxy(150, 200, ":");
		outtextxy(150, 250, ":");
		outtextxy(150, 315, ":");
		outtextxy(150, 375, ":");

		for (i = 0; counter < index; i = i + 70)
		{
			setcolor(15);						   // color of rectangle is set to white
			rectangle(180 + i, 350, 230 + i, 300); // creating rectangles

			sprintf(result, "%d", elements[counter]);
			sprintf(indexNoString, "%d", counter); // changing integer values from elements, to string and storing in in result
			if (elements[counter] < 9)
			{ // check for better indentation on display
				outtextxy(180 + i + 20, 315, result);
				outtextxy(180 + i + 20, 375, indexNoString);
			}

			else if (elements[counter] > 9)
			{ // check for better indentation on display
				outtextxy(180 + i + 12, 315, result);
				outtextxy(180 + i + 12, 375, indexNoString);
			}
			else
			{
				outtextxy(180 + i + 15, 315, result);
				outtextxy(180 + i + 15, 375, indexNoString);
				// check for better indentation on display
			}

			counter++;
		}

		delay(500);
		while (start <= end)
		{
			delay(400);
			mid = (start + end) / 2;
			setcolor(2);
			sprintf(startp, "%d", start);
			sprintf(midp, "%d", mid);
			sprintf(endp, "%d", end);

			outtextxy(180, 150, startp);
			outtextxy(180, 200, midp);
			outtextxy(180, 250, endp);
			delay(500);

			setcolor(1);
			rectangle(180 + (70 * start), 300, 230 + (70 * start), 350);
			rectangle(180 + (end * 70), 300, 230 + (70 * end), 350);
			setcolor(2);
			rectangle(180 + (mid * 70), 300, 230 + (70 * mid), 350);

			// Check if x is present at mid
			if (elements[mid] == aim)
			{
				d = mid;
				break;
			}
			delay(700);
			setcolor(4);
			rectangle(180 + (mid * 70), 300, 230 + (70 * mid), 350);
			delay(700);
			setcolor(15);
			rectangle(180 + (mid * 70), 300, 230 + (70 * mid), 350);
			rectangle(180 + (70 * 0), 300, 230 + (70 * 0), 350);
			rectangle(180 + (end * 70), 300, 230 + (70 * end), 350);
			setcolor(0);
			outtextxy(180, 150, startp);
			outtextxy(180, 200, midp);
			outtextxy(180, 250, endp);

			//     If x greater, ignore left half
			if (elements[mid] < aim)
				start = mid + 1;

			// If x is smaller, ignore right half
			else
				end = mid - 1;
			delay(1000);
		}

		delay(1300);

		setcolor(15);
		outtextxy(50, 450, "Match found at position : ");
		setcolor(2);
		sprintf(resultpos, "%d", d);
		outtextxy(70, 500, resultpos);

		getch();
		closegraph();
	}

	// ----------------------------------------------------------------------------------   BUBBLE SORT ----------------------------------- //
	else if (select == 3)
	{

		// calling the display function that is written outside the main function
		displayBubble();
	}

	// ------------------------------------------------------------------------------   INSERTION SORT ----------------------------------- //
	else if (select == 4)
	{

		displayInsertion();
	}

	else
	{
		cleardevice();
	}
}

// ----------BUBBLE SORT FUNCTIONS

void displayBubble()
{
	int n, i, d = 0, m = 0;
	printf("Enter the No of Elements : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Enter the %d Element : ", i + 1);
		scanf("%d", &el[i]);
	}
	initgraph(&d, &m, ""); //INITIALIZING THE GRAPHICS DRIVER
	settextstyle(3, 0, 3);
	setcolor(WHITE);
	line(1, getmaxy() / 2 - 150, getmaxx(), getmaxy() / 2 - 150); // LINE ABOVE GIVEN NUMBER
	setcolor(15);
	settextstyle(10, 0, 6);
	outtextxy(160, 10, "Bubble Sort");
	settextstyle(10, 0, 4);
	outtextxy(50, 100, "Input Array:");
	settextstyle(3, 0, 3);

	int x = 50, y = 150;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			object(x, 150, y, 200, el[i]);
			getch();
		}
		else
		{
			x = y;
			y += 120;
			object(x, 150, y, 200, el[i]);
			getch();
		}
	}
	bubble(n);
	cleardevice();
	//		return 0;
}
void iterations(int n, int p, int q, int index)
{
	int x = 50, y = 150;
	for (int i = 0; i < n; i++)
	{
		if (i == index || i == index + 1)
		{
			setcolor(10);
		}
		else
		{
			setcolor(15);
		}
		if (i == 0)
		{
			object(x, p, y, q, el[i]);
			getch();
		}
		else
		{
			x = y;
			y += 120;
			object(x, p, y, q, el[i]);
			getch();
		}
	}
}

void last_iteration(int n, int p, int q)
{
	int x = 50, y = 150;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			object(x, p, y, q, el[i]);
			getch();
		}
		else
		{
			x = y;
			y += 120;
			object(x, p, y, q, el[i]);
			getch();
		}
	}
}

void bubble(int n)
{
	int i, j, m, temp;
	int x, y, p, q;
	x = 50;
	y = 250;
	p = 210;
	q = 260;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			char ele1[5];
			char ele2[5];
			if (el[j] > el[j + 1])
			{
				int temp;
				temp = el[j + 1];
				el[j + 1] = el[j];
				el[j] = temp;
				iterations(n, p, q, j);
				p += 60;
				q += 60;
			}
		}
	}
	/*FROM HERE WE ARE ADDING TEXT Sorted Array AND CHANGING ITS COLOR, 
		THEN THE FINAL ITERATION WITH GREEN COLOR..*/
	settextstyle(10, 0, 4);
	outtextxy(x, p + 20, "Sorted Array:");
	settextstyle(3, 0, 3);
	setcolor(10);
	last_iteration(n, p + 70, q + 70);
}

void object(int a, int b, int c, int d, int i)
{
	/* OBJECT() -- CREATES THE GIVEN ELEMENT
				IN THE RECTANGLE AND DRAWS ON THE SCREEN*/
	char s[8];
	sprintf(s, "%d", i);
	rectangle(a, b, c, d);
	settextstyle(2, 0, 6);
	outtextxy(a + 40, b + 15, s);
}

// -----------------------------INSERTION SORT FUNCTIONS---
void displayInsertion()
{

	int n, i, d = 0, gm, m = 0;
	int gd = DETECT;
	int xdistance;
	printf("Enter the Number of Elements: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Enter the %d Element : ", i + 1);
		scanf("%d", &ElementsArray[i]);
	}

	cleardevice();
	initwindow(800, 800);

	//initwindow(1000,1000);
	xdistance = MAX(130 + (n * 110), getmaxx());
	/*	settextstyle(3,0,3);
	setcolor(WHITE); */

	setcolor(15);
	settextstyle(10, 0, 6);
	outtextxy(160, 10, "Insertion Sort");
	settextstyle(10, 0, 4);
	line(1, getmaxy() / 2 - 315, xdistance, getmaxy() / 2 - 315); // Line After Insertion Sort Heading
	getch();

	outtextxy(90, 100, "Input Array:");
	settextstyle(3, 0, 3);
	int x = 90, y = 150;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			element(x, 155, y, 205, ElementsArray[i]);
			//			getch();
		}
		else
		{
			x = y + 50;
			y += 110;
			element(x, 155, y, 205, ElementsArray[i]);
			//			getch();
		}
		delay(250);
	}
	line(1, getmaxy() / 2 - 192, xdistance, getmaxy() / 2 - 192); // Line After Input Array
	getch();

	InsertionSort(n);

	getch();
}

void rows(int n, int p, int q, int index, bool flag, int off)
{
	int x = 90, y = 150, dist = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == index + 1)
		{
			if (flag)
				setcolor(14);
			else
				setcolor(2);
		}
		else
		{
			setcolor(15);
		}
		if (i == 0)
		{
			element(x, p, y, q, ElementsArray[i]);
			//			getch();
		}
		else
		{
			x = y + 50;
			y += 110;
			element(x, p, y, q, ElementsArray[i]);
			//		getch();
		}
		delay(250);
		if (i == index + 1)
		{
			setcolor(2);
			if (flag == false)
			{
				rectangle(90 - 10, p - 10, y + 10, q + 10);
			}
			else
			{
				dist = ((off * 110) + 150);
				rectangle(90 - 10, p - 10, dist + 10, q + 10);
				/*	dist = ((off*110)+150);
				rectangle(90-10,p-10,dist+10,q+10);	*/
			}
		}
		delay(250);
	}
	getch();
}

void FinalArray(int n, int p, int q)
{
	int x = 90, y = 150;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			element(x, p, y, q, ElementsArray[i]);
			//		getch();
		}
		else
		{
			x = y + 50;
			y += 110;
			element(x, p, y, q, ElementsArray[i]);
			//	getch();
		}
		delay(250);
	}
}

void InsertionSort(int n)
{
	int i, j, m, temp;
	int x, y, p, q;
	bool flag;
	x = 90;
	y = 150;
	p = 250;
	q = 300;
	int key;
	int a = 0;
	for (i = 1; i < n; i++)
	{
		key = ElementsArray[i];
		j = i - 1;
		flag = false;

		while (j >= 0 && ElementsArray[j] > key)
		{
			ElementsArray[j + 1] = ElementsArray[j];
			j = j - 1;
			flag = true;
		}
		ElementsArray[j + 1] = key;
		a = a + 1;
		rows(n, p, q, j, flag, a);
		p = q + 30;
		q += 80;
	}

	/*FROM HERE WE ARE ADDING TEXT Sorted Array AND CHANGING ITS COLOR, 
		THEN THE FINAL ITERATION WITH GREEN COLOR..*/
	settextstyle(10, 0, 4);
	outtextxy(x, p + 20, "Sorted Array:");
	settextstyle(3, 0, 3);
	setcolor(2);
	FinalArray(n, p + 80, q + 80);
}

void element(int a, int b, int c, int d, int i)
{
	/* element() -- CREATES THE GIVEN ELEMENT IN THE RECTANGLE AND DRAWS ON THE SCREEN*/
	char s[8];
	sprintf(s, "%d", i);
	rectangle(a, b, c, d);
	settextstyle(2, 0, 6);
	outtextxy(a + 25, b + 20, s);
	line(a, b + 10, c, b + 10);
}

