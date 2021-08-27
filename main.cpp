#include <iostream>
#include <graphics.h>
#include <conio.h>
#include<windows.h>
#include <math.h>
#include<string>
using namespace std;

//functions used:

void first_code_image();
int first_code();
void note();
void loading();
void office_hint();
void office_code();
void boss_convo();
void sumit();
void sumit_end();
void guess_killer();
void watchmen();
void post();
void room_no();
void interrogate_watchmen();
void end();
void ankit_story();

//global variables

int h=GetSystemMetrics(SM_CYSCREEN);
int w=GetSystemMetrics(SM_CXSCREEN);
string suspect="\n";
int flag =0;

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
		suspect.append("maid");
	}
	system("cls");
	
	string st="";
	cout<<"DO YO WANT TO CHECK RAHUL's POSTMORTEM REPORT (y/n) : ";
	cin>>st;
		system("cls");
	if(st=="y"){
		post();
	}
	
	
	cout<<"What next?\n1.CHECK RAHUL'S PHONE'\n2.Interrogate Watchman";
	int n;
	cout<<"\n\nEnter your choice : ";
	cin>>n;
	system("cls");
	if (n==2){
		//what to do;
		watchmen();
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
		while(n!=1){
	cout<<"\n\nEnter your choice : ";
	cin>>n;
	system("cls");
	 if(n==2){
		//what to do;
		cout<<suspect;	
		
	}
	}

	if (n==1){
		//what to do;
		loading();
		office_hint();
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
			PlaySound(TEXT("audio/sumit_question1.wav"),NULL,SND_SYNC);
			closegraph();
	}
	else if (choice==2){
		initwindow(w,h,"DETECTIVE X");
			readimagefile("images/sumit.jpg",1,1,w,h);
			PlaySound(TEXT("audio/sumit_question2.wav"),NULL,SND_SYNC);
			closegraph();
	}
	else if(choice==3){
		initwindow(w,h,"DETECTIVE X");
			readimagefile("images/sumit.jpg",1,1,w,h);
			PlaySound(TEXT("audio/sumit_question3.wav"),NULL,SND_SYNC);
			closegraph();
	}
}
sumit_end();

}

void sumit_end(){

	int choice;
	while(choice!=2 || choice!=4){
		cout<<"1.Would You like To add sumit into suspect list? "<<endl;
		if(flag==0){
			cout<<"2.Interrogate watchmen"<<endl;
		}
		
		cout<<"3.view your suspect list"<<endl;
		cout<<"4.Guess the killer"<<endl;
		
		cin>>choice;
		system("cls");
		if(choice==1){
			suspect.append(" sumit");
		}
		else if(choice==3){
			cout<<suspect<<endl;	
		}
		else if(choice==2){
			flag==1;
			watchmen();
		}
		
	}
	if(choice==4){
			guess_killer();
		}
	
}

void guess_killer(){
	
    string ans="ankit",user="";
    cout<<"ENTER CULPRIT's NAME : ";
    cin>>user;
    
    int l=user.length();
    for(int i=0;i<l;i++){
        int c=user[i];
        user[i]=tolower(c);
    }
    if(user==ans){
       cout<<"Congratulations!!!! You Won!!"<<endl;
       cout<<"press enter to hear ankit's reason behind killing rahul"<<endl;
       getch();
       ankit_story();
       end();
    }
    else{
    cout<<"YOU LOST";
    }

}

void post(){
	int opt;
	while(opt!=4){
		cout <<"\nRAHUL's POSTMORTEM REPORT\n\n";
		cout<<"1. Time of death\n";
		cout<<"2. Cause of death\n";
		cout<<"3. Additional information\n";
		cout<<"4. EXIT\n";
		
		cin>>opt;
		system("cls");
		if (opt==1){
			initwindow(w,h,"DETECTIVE X");
			readimagefile("images/time.jpg",1,1,w,h);
			PlaySound(TEXT("audio/time.wav"),NULL,SND_SYNC);
			settextstyle(4,4,4);
	        outtextxy(w-500,h-150,"Press enter to continue!");
	        getch();
			closegraph();
		}
		else if(opt==2){
			initwindow(w,h,"DETECTIVE X");
			readimagefile("images/crime_scene.jpg",1,1,w,h);
			PlaySound(TEXT("audio/death.wav"),NULL,SND_SYNC);
			settextstyle(4,4,4);
	        outtextxy(w-500,h-150,"Press enter to continue!");
	        getch();
			closegraph();
			
		}
		else if(opt==3){
			initwindow(w,h,"DETECTIVE X");
			readimagefile("images/crime_scene.jpg",1,1,w,h);
			PlaySound(TEXT("audio/additional.wav"),NULL,SND_SYNC);
			settextstyle(4,4,4);
	        outtextxy(w-500,h-150,"Press enter to continue!");
	        getch();
			closegraph();
		}
		
	}
}

void watchmen(){
		int opt;
	while(opt!=4){
		cout <<"\nWHAT WOULD YOU LIKE TO ASK WATCHMEN?\n\n";
		cout<<"1. DID YOU SAW ANYONE COMING TO RAHUL'S APARTMENT? \n";
		cout<<"2. WAS THERE ANY OTHER WATCHMEN ON DUTY?\n";
		cout<<"3. INFO FROM CAMERA'S'\n";
		cout<<"4. EXIT\n";
		
		cin>>opt;
		system("cls");
		if (opt==1){
			initwindow(w,h,"DETECTIVE X");
			readimagefile("images/gate.jpg",1,1,w,h);
			PlaySound(TEXT("audio/watchmen_question_1.wav"),NULL,SND_SYNC);
			settextstyle(4,4,4);
	        outtextxy(w-500,h-150,"Press enter to continue!");
	        getch();
			closegraph();
		}
		else if(opt==2){
			initwindow(w,h,"DETECTIVE X");
			readimagefile("images/gate.jpg",1,1,w,h);
			PlaySound(TEXT("audio/watchmen_question_2.wav"),NULL,SND_SYNC);
			settextstyle(4,4,4);
	        outtextxy(w-500,h-150,"Press enter to continue!");
	        getch();
			closegraph();
			
		}
		else if(opt==3){
			initwindow(w,h,"DETECTIVE X");
			readimagefile("images/camera.jpg",1,1,w,h);
			PlaySound(TEXT("audio/watchmen_question_3.wav"),NULL,SND_SYNC);
			settextstyle(4,4,4);
	        outtextxy(w-500,h-150,"Press enter to continue!");
	        getch();
			closegraph();
		}
	
		
	}
		room_no();
}

void room_no(){
	initwindow(w,h,"DETECTIVE X");
			readimagefile("images/rooms.jpg",1,1,w,h);
			PlaySound(TEXT("audio/rooms.wav"),NULL,SND_SYNC);
			settextstyle(4,4,4);
	        outtextxy(w-500,h-150,"Press enter to continue!");
	        getch();
			closegraph();
	int count=10;
	int nn;

	cout<<"Watchmen's room number is a two-digit no.\n\n";
	while(count!=0){
		cout<<"\nYOU HAVE "<<count<<" CHANCES!";
		cout<<"\n\nGuess the room number : ";
		cin>>nn;
			system("cls");
		if (nn==47){
			cout <<"\nYou guessed it right"<<endl;
			
		   cout<<"Press Enter to continue"<<endl;
		   getch();
			
			break;
			
		}
		else if (nn>47){
			cout<<"\n IT IS SMALLER THAN THIS! ";
		}
		else if(nn<47){
			cout<<"\n IT IS GREATER THAN THIS! ";
		}
	
		count--;
	}
	if(count==0){
		cout<<"\n\n YOU LOST!!!\n THE WATCHMEN FLED AWAY"<<endl;
	}
	else{
		interrogate_watchmen();
	}
}

void interrogate_watchmen(){
//	loading();
	
	initwindow(w,h,"DETECTIVE X");
			readimagefile("images/rooms.jpg",1,1,w,h);
			PlaySound(TEXT("audio/mohan.wav"),NULL,SND_SYNC);
			settextstyle(4,4,4);
	        outtextxy(w-500,h-150,"Press enter to continue!");
	        getch();
			closegraph();
			guess_killer();
	
}


void ankit_story(){
		    readimagefile("images/ankit.jpg",1,1,w,h);
			PlaySound(TEXT("audio/ankit1.wav"),NULL,SND_SYNC);
			PlaySound(TEXT("audio/ankit2.wav"),NULL,SND_SYNC);
			PlaySound(TEXT("audio/ankit3.wav"),NULL,SND_SYNC);
			settextstyle(4,4,4);
	        outtextxy(w-500,h-150,"Press enter to continue!");
	        getch();
			closegraph();
			end();

}

void end(){
	readimagefile("images/detective_image.jpg",1,1,w,h);
	PlaySound(TEXT("audio/end.wav"),NULL,SND_SYNC);
}
