#include <iostream>
#include <graphics.h>
#include <conio.h>
#include<windows.h>
#include <math.h>
using namespace std;

void first_code_image();
int first_code();
void note();
void loading();

int h=GetSystemMetrics(SM_CYSCREEN);
int w=GetSystemMetrics(SM_CXSCREEN);

int main (){
	
	initwindow(w,h,"DETECTIVE X");
	
	readimagefile("images/homepage.jpeg",1,1,w,h);
		settextstyle(4,4,4);
	outtextxy(w-500,h-150,"Press enter to continue!");

	
	getch();

	closegraph();
	initwindow(w,h,"DETECTIVE X");
	readimagefile("images/detective_image.jpg",1,1,w,h);
	PlaySound(TEXT("audio/message1.wav"),NULL,SND_SYNC);
	settextstyle(4,4,4);
	outtextxy(w-500,h-150,"Press enter to continue!");
	getch();

    initwindow(w,h,"DETECTIVE X");
	readimagefile("images/door.jpg",1,1,w,h);
	PlaySound(TEXT("audio/intro.wav"),NULL,SND_SYNC);
    readimagefile("images/blood.jpg",1,1,w,h);
	PlaySound(TEXT("audio/message2.wav"),NULL,SND_SYNC);
	readimagefile("images/crime_scene.jpg",1,1,w,h);
	PlaySound(TEXT("audio/message3.wav"),NULL,SND_SYNC);
	settextstyle(4,4,4);
	outtextxy(w-500,h-150,"Press enter to continue!");
		getch();
	cleardevice();
	closegraph();
	
	cout<<"What's next\n1.Interrogate Watchman\n2.Check Rahul's phone";
	int n;
	cout<<"\n\nEnter your choice : ";
	cin>>n;
	system("cls");
	if (n==1){
		//what to do;
		
	}
	else if(n==2){
//		initwindow(w,h,"DETECTIVE X");
//	outtextxy(400,400,"Loading...");
//	rectangle(399,379,750,391);
//	for(int i=0;i<350;i++){
//		setcolor(3);
//		rectangle(400,380,400+i,390);
//		delay(10);
//	}
//	getch();
//		closegraph();
	loading();
		first_code_image();			
	}

	
		
}

void first_code_image(){
	
	initwindow(w,h,"DETECTIVE X");
	readimagefile("images/phonecode.jpeg",1,1,w,h);
    PlaySound(TEXT("audio/phonecase.wav"),NULL,SND_SYNC);
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
    system("cls");
	if (pass==passwd){
		initwindow(w,h,"DETECTIVE X");
		settextstyle(4,4,4);
		outtextxy(w-700,h/2,"YOU CRACKED IT ");
		PlaySound(TEXT("audio/password.wav"),NULL,SND_SYNC);
		getch();
		cleardevice();
		note();
		
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

void note(){
		initwindow(w,h,"DETECTIVE X");
			readimagefile("images/notes_app.jpg",1,1,w,h);
			PlaySound(TEXT("audio/notes.wav"),NULL,SND_SYNC);

	    	settextstyle(4,4,4);
	outtextxy(w-500,h-150,"Press enter to continue!");
	getch();
	cleardevice();
	closegraph();
	
	cout<<"What's next\n1.To visit Rahul's office\n2.View your suspect list";
	int n;
	cout<<"\n\nEnter your choice : ";
	cin>>n;
	if (n==1){
		//what to do;
		loading();
	}
	else if(n==2){
		//what to do;	
	}
	    	
}
void loading(){
		initwindow(w,h,"DETECTIVE X");
	outtextxy(400,400,"Loading...");
	rectangle(399,379,750,391);
	for(int i=0;i<350;i++){
		setcolor(3);
		rectangle(400,380,400+i,390);
		delay(10);
	}
		closegraph();
}
