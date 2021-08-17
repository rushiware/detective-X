#include <graphics.h>
#include <iostream>
using namespace std;

int main (){
	
	int h=GetSystemMetrics(SM_CYSCREEN);
	
	int w=GetSystemMetrics(SM_CXSCREEN);
	initwindow(w,h,"DETECTIVE X");
	
	readimagefile("images/homepage.jpeg",1,1,w,h);
	
	getch();
	cleardevice();
		
	
	
	closegraph();	
}
