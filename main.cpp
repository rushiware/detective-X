#include <graphics.h>
#include <iostream>
using namespace std;

int main (){
	
	int h=GetSystemMetrics(SM_CYSCREEN);
	
	int w=GetSystemMetrics(SM_CXSCREEN);
	initwindow(w,h,"DETECTIVE X");
	
	readimagefile("images/homepage.jpeg",1,1,w,h);
	
	getch();
		initwindow(w,h,"DETECTIVE X");
	settextstyle(4,4,2);
	outtextxy(500,500,"Press any key to begin!");
	getch();
	cleardevice();
	
	
	
	closegraph();	
}
