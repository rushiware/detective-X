#include <iostream>
#include <graphics.h>
#include <conio.h>
#include<windows.h>
#include <math.h>
#include<string>
using namespace std;

void first_code_image();
int first_code();
void note();
void loading();
void office_hint();
void office_code();
void boss_convo();
void sumit();
int h=GetSystemMetrics(SM_CYSCREEN);
int w=GetSystemMetrics(SM_CXSCREEN);
string suspect="\n";

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
	
	//suspect adding
	string ch;
	cout << "will you like to add maid in suspect list (y/n) : ";
	cin>>ch;
	if (ch=="y"){
		suspect.append(" maid");
	}
	system("cls");
	
	
	cout<<"What next?\n1.CHECK RAHUL'S PHONE'\n2.Interrogate Watchman";
	int n;
	cout<<"\n\nEnter your choice : ";
	cin>>n;
	system("cls");
	if (n==2){
		//what to do;
		
	}
	else if(n==1){

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
	
	cout<<"What next?\n1.To visit Rahul's office\n2.View your suspect list";
	int n;
	cout<<"\n\nEnter your choice : ";
	cin>>n;
	system("cls");
	if (n==1){
		//what to do;
		loading();
		office_hint();
	}
	else if(n==2){
		//what to do;
		cout<<suspect;	
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
void office_hint(){
	initwindow(w,h,"DETECTIVE X");
			readimagefile("images/office.jpg",1,1,w,h);
			PlaySound(TEXT("audio/office_code.wav"),NULL,SND_SYNC);

	    	settextstyle(4,4,4);
	outtextxy(w-500,h-150,"Press enter to continue!");
	getch();
	closegraph();
	office_code();
}
void office_code(){
	
	string code="InfoTech";
	string user_code;
	cout<<"PRESS 00 TO RETURN TO HINT"<<endl;
	cout<<"ENTER COMPANY'S NAME HERE : "<<endl;
	cin>>user_code;
	if(user_code==code){
		loading();
		boss_convo();
		
	}
	else if(user_code=="00"){
		office_hint();
	}
	else{
		cout<<"PLEASE TRY AGAIN"<<endl;
		office_code();
	}
}
void boss_convo(){
	int choice;
	while(choice!=5){
			cout<<"WHAT WOULD YOU LIKE TO ASK THE BOSS OF INFOTECH?"<<endl;
	cout<<"1.HOW WAS RAHUL AT WORK?"<<endl;
	cout<<"2.DO YOU FIND ANY REASON WHY WOULD RAHUL FEEL LEAVING THIS JOB?"<<endl;
	cout<<"3.HOW WAS RAHUL'S RELATION WITH OTHER EMPLOYEE'S?"<<endl;
	cout<<"4.WhY WOULD SUMIT TAUNT RAHUL?"<<endl;
	cout<<"\n\n ENTER 5 TO INTERROGATE SUMIT"<<endl;
	
	cin>>choice;
	system("cls");
	if(choice==1){
			initwindow(w,h,"DETECTIVE X");
			readimagefile("images/boss.jpg",1,1,w,h);
			PlaySound(TEXT("audio/boss_question1.wav"),NULL,SND_SYNC);
			closegraph();
	}
	else if (choice==2){
		initwindow(w,h,"DETECTIVE X");
			readimagefile("images/boss.jpg",1,1,w,h);
			PlaySound(TEXT("audio/boss_question2.wav"),NULL,SND_SYNC);
			closegraph();
	}
	else if(choice==3){
		initwindow(w,h,"DETECTIVE X");
			readimagefile("images/boss.jpg",1,1,w,h);
			PlaySound(TEXT("audio/boss_question3.wav"),NULL,SND_SYNC);
			closegraph();
	}
	else if(choice==4){
		initwindow(w,h,"DETECTIVE X");
			readimagefile("images/boss.jpg",1,1,w,h);
			PlaySound(TEXT("audio/boss_question4.wav"),NULL,SND_SYNC);
			closegraph();
	}
	}
	sumit();

}
void sumit(){
	int choice;
	while(choice!=4){
			cout<<"WHAT WOULD YOU LIKE TO ASK SUMIT?"<<endl;
	cout<<"1.HOW WAS YOUR RELATION WITH RAHUL?"<<endl;
	cout<<"2.WHY DDIDN'T YOU LIKED RAHUL'"<<endl;
	cout<<"3.WHERE WERE YOU WHEN RAHUL WAS MURDERED?"<<endl;
	cout<<"ENTER 4 TO EXIT"<<endl;
	
	cin>>choice;
	system("cls");
		if(choice==1){
			initwindow(w,h,"DETECTIVE X");
			readimagefile("images/sumit.jpg",1,1,w,h);
			PlaySound(TEXT("audio/boss_question1.wav"),NULL,SND_SYNC);
			closegraph();
	}
	else if (choice==2){
		initwindow(w,h,"DETECTIVE X");
			readimagefile("images/sumit.jpg",1,1,w,h);
			PlaySound(TEXT("audio/boss_question2.wav"),NULL,SND_SYNC);
			closegraph();
	}
	else if(choice==3){
		initwindow(w,h,"DETECTIVE X");
			readimagefile("images/sumit.jpg",1,1,w,h);
			PlaySound(TEXT("audio/boss_question3.wav"),NULL,SND_SYNC);
			closegraph();
	}
}
}
