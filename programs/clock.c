

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
// Calculates new co-ordinates of a figure after 
// rotating it at an angle about a point (cx,cy)
void rotate( int figure[], int edges, double angle, int cx, int cy ) {
	double x, y;
	angle = -1 * (angle*3.14/180);
	double cos_a = cos(angle);
	double sin_a = sin(angle);
	for (int i=0; i < edges; i++) {
		x = figure[2*i] - cx;
		y = figure[2*i+1] - cy;
		figure[2*i] = floor( (x * cos_a) - (y * sin_a) + cx + 0.5 );
		figure[2*i+1] = floor( (x * sin_a)+(y * cos_a) + cy + 0.5 );
	}
}
void drawClock(int,int,int);
void main() {
	int second_hand[4],minute_hand[4], hour_hand[4], edges = 2 ;
	double angle;
	int cx=300, cy=200;
	int gd = DETECT, gm;
	initgraph( &gd, &gm, "" );
	int max_y = getmaxy();
	clrscr();
	cleardevice();
	angle = -6;
	// Set the initial position of the second, minute and the hour hands.
	second_hand[0] = cx ;
	second_hand[1] = max_y - cy;
	second_hand[2] = cx;
	second_hand[3] = max_y - 320;
	hour_hand[0] = cx;
	hour_hand[1] = max_y - cy;
	hour_hand[2] = cx + 90;
	hour_hand[3] = max_y - 200;
	minute_hand[0] = cx;
	minute_hand[1] = max_y - cy;
	minute_hand[2] = cx;
	minute_hand[3] = max_y - 310;
	cleardevice();
	setbkcolor(WHITE);
	// Draw the clock
	drawClock(cx,max_y - cy,150);
	setlinestyle(SOLID_FILL,0,1);
	// Draw the minute and the hour hand
	drawpoly(2,minute_hand);
	drawpoly(2,hour_hand);
	int i=0;
	while(!kbhit()) {
		setcolor(RED);
		drawpoly(2,second_hand);
		setcolor(GREEN);
		drawpoly(2,minute_hand);
		setcolor(BLUE);
		drawpoly(2,hour_hand);
		delay(1000);
		// set delay(10) to tick the clock fast
		setcolor(15);
		drawpoly(2,second_hand);
		rotate(second_hand,edges,angle,cx,max_y - cy);
		i++;
		// Reset the second hand and move the minute hand 
		// when the second hand has moved 60 times.
		if(i%60 == 0) {
			second_hand[0] = cx ;
			second_hand[1] = max_y - cy;
			second_hand[2] = cx;
			second_hand[3] = max_y - 320;
			drawpoly(2,minute_hand);
			rotate(minute_hand,edges,angle,cx,max_y - cy);
		}
		// Move the minute hand 
		// when the second hand has moved 720 (60*12) times.
		if(i%720 == 0) {
			i = 0;
			drawpoly(2,hour_hand);
			rotate(hour_hand,edges,angle,cx,max_y - cy);
		}
	}
	getch();
}
// Function to draw the clock 
void drawClock(int cx, int cy, int r) {
	setcolor(GREEN);
	setlinestyle(SOLID_FILL,0,3);
	circle(cx,cy,r);
	int max_y = getmaxy();
	int center[2] = {
		cx, max_y - 340
	}
	;
	for (int i=0; i<60; i++) {
		if(i%5 == 0) {
			circle(center[0],center[1],2);
		} else {
			circle(center[0],center[1],1);
		}
		rotate(center,1,-6,cx,cy);
	}
}
