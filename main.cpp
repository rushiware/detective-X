#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <math.h>
using namespace std;

void first_code_image();
int first_code();

int h=GetSystemMetrics(SM_CYSCREEN);
int w=GetSystemMetrics(SM_CXSCREEN);

int main (){
	
	initwindow(w,h,"DETECTIVE X");
	
	readimagefile("images/homepage.jpeg",1,1,w,h);
	
	getch();
	cleardevice();
	settextstyle(4,4,4);
	outtextxy(w/2,h/2,"Press any key to begin!");
	getch();
	cleardevice();
		
	first_code_image();	
	
		
}

void first_code_image(){
	
	initwindow(w,h,"DETECTIVE X");
	readimagefile("images/phonecode.jpeg",1,1,w,h);

	settextstyle(4,4,4);
	outtextxy(w-500,h-150,"Press enter to continue!");
	getch();

	closegraph();
	
	first_code();
}
int first_code(){
	int passwd=264;
	int pass;
	
	cout<<"PRESS 00 TO RETURN TO HINT"<<endl;
	cout<<"ENTER PASSWORD HERE : "<<endl;
	
	
	cin>>pass;

	if (pass==passwd){
		initwindow(w,h,"DETECTIVE X");
		settextstyle(4,4,4);
		outtextxy(w-700,h/2,"YOU CRACKED IT ");
		getch();
		cleardevice();
		
		//enter the next function name here
		
	}
	
	else if(pass==00){
		first_code_image();
	}
	
	else{
		cout<<"PLEASE TRY AGAIN"<<"\n\n";
		
		first_code();	
	}
	
}
