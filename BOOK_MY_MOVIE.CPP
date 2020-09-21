//               BOOK-MY-MOVIE, AN APP DEVELOPED BY  VISHRUTH S


#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
void signup();
void login();
void display();
void create();
void selectfilm();
void pay();
void choose();
void feedback();
void admin();
void welcome();

char p=301;
char d=205;
char e=184;
char c=213;
int x1[15];
char y1[26];
int x2[100];
char y2[100];
int cardval=0;
char uname[20];
char realpassword[30]="0";

ifstream fin;
ofstream fout;

class users{
	     private:
		    char username[20];
		    char password[20];
	     public:
		    void getusername()
		    {
		     gets(username);
		    }
		    void showusername()
		    {
		     cout<<username;
		    }
		    char* retusername()
		    {
		     return username;
		    }
		    void getpassword()
		    {
		     gets(password);
		    }
		    void showpassword()
		    {
		     cout<<password;
		    }
		    char* retpassword()
		    {
		     return password;
		    }
	    }s;

//film one
void create1f1();
void display1f1();
void modify1f1();
void create2f1() ;
void display2f1();
void seaterf1();

int n1;
int showbill1=0;
ifstream fin1,fin2;
ofstream fout1,fout2;

struct seatf1{
	    char a[15][26];
	    int nseat;
	   }r1;
struct seatsf1{

		   char username[20];
		   char filmname[30];
		   char genre[30];
		   char language[30];
		   int time1;
		   int time2;
		   int screen;
		   int seatx[100];
		   char seaty[100];
		   char rating[10];
	   }t1;

//film two
void create1f2();
void display1f2();
void modify1f2();
void create2f2() ;
void display2f2();
void seaterf2();

int n2;
int showbill2=0;
ifstream fin3,fin4;
ofstream fout3,fout4;

struct seatf2{
	    char a[15][26];
	    int nseat;
	   }r2;
struct seatsf2{
		   char username[20];
		   char filmname[30];
		   char genre[30];
		   char language[30];
		   int time1;
		   int time2;
		   int screen;
		   int seatx[100];
		   char seaty[100];
		   char rating[10];
	   }t2;

void main()
{
 //welcome();
 clrscr();
 int flag=0;
 char ch1;
 //create();        //TO BE USED ONLY FOR FIRST RUN

 clrscr();
 cout<<"\n\n\nHELLO  ";
 cout<<"\n\nDO YOU HAVE AN EXISTING BOOK-MY-MOVIE ACCOUNT, if yes, press Y.\n ELSE Press N to create one\n";
 cout<<"\nPRESS 0 for admin login\n";
 cout<<"\nPRESS 9 to exit\n";
 do
 {
 cin>>ch1;
  if(ch1=='y'||ch1=='Y')
   {
    flag++;
    login();
   }
  else
  if(ch1=='n'||ch1=='N')
   {
    signup();
    flag++;
   }
  else
  if(ch1=='0')
   {
    admin();
    flag++;
   }
  else
  if(ch1=='9')
  {
   exit(0);
   flag++;
  }
  else
  cout<<"\rINVALID CHOICE\n";
 }while(flag==0);
 getch();
 //feedback();
 getch();
}
void signup()
{
 char usname[30];
 clrscr();
 fin.open("users",ios::binary);
 fout.open("users",ios::binary|ios::app);
 cout<<"\nCreate a username\n";
 s.getusername();
 fin.close();
  clrscr();
 cout<<"\nCREATE PASSWORD\n";

 start:
 char pass[30]="0";
 char confpass[30]="0";
 for(int i=0;i<90;i++)
 {
  pass[i]=getch();
  if(pass[i]==13)
   break;
  cout<<"*";
 }
 cout<<"\nConfirm Password\n";
 for(i=0;i<90;i++)
 {
  confpass[i]=getch();
  if(confpass[i]==13)
   break;
  cout<<"*";
 }
 if(strcmpi(confpass,pass)!=0)
 {

  cout<<"\nMISMATCH";
  textcolor(RED+BLINK);
  cprintf("!");
  sleep(1);
  clrscr();
  cout<<"\nRenter password\n";
   goto start;
 }
 strcpy(realpassword,pass);
 strcpy(s.retpassword(),realpassword);
 fout.write((char*)&s,sizeof s);
 fout.close();
 login();
}
void display()
{
 clrscr();
 fin.open("users",ios::binary);
 while(fin.read((char*)&s,sizeof (s)))
 {
  cout<<"  ";
  s.showusername();
  cout<<"  ";
  s.showpassword();
  cout<<'\n';
 }
 fin.close();
}
void create()
{
 fout.open("users",ios::binary);
 cout<<"\nENTER DATA\n";
  s.getusername();
  s.getpassword();
  fout.write((char*)&s,sizeof s);
 fout.close();
}

void login()
{
 int found=0,tries=4,check=1;
 char pas[20]="0";
 clrscr();
 cout<<"\nENTER USERNAME\n";
 gets(uname);
 repeat:
 cout<<"\nENTER PASSWORD\n";
 for(int i=0;i<90;i++)
 {
  pas[i]=getch();
  if(pas[i]==13)
   break;
  cout<<"*";
 }

 fin.open("users",ios::binary);
 while(fin.read((char*)&s,sizeof (s)))
 {
  if(strcmpi(uname,s.retusername())==0)
  {
   tries=4;
   redo:tries--;
   if(check==0)
    {
     for(int i=0;i<90;i++)
     {
      pas[i]=getch();
      if(pas[i]==13)
      break;
      cout<<"*";
     }
    }
   if(strcmp(s.retpassword(),pas)==0)
    {
     found++;
     cout<<"\nFOUND!\n";
    }
   else
   {
    if(tries)
    {
     cout<<"\nINCORRECT PASSWORD\nRENTER PASSWORD\nYOU HAVE "<<tries<<" more attempts\n";
     check=0;
     goto redo;
    }
    else
    {
     cout<<"\nSORRY. COULDN'T FIND YOUR ACCOUNT. EXIT IN 2 SECONDS\n";
     sleep(3);
     exit(0);
    }
   }
  }
 }
 if(found!=0)
  choose();
 else
  cout<<"\nNOT FOUND\n";
 fin.close();
 getch();
}


void selectfilm()
{
 int ch,flag1=0,flag2=0,flag3=0,flag4=0;
 clrscr();
 cout<<"\n\n\n";
 cout<<"NO.     FILM       GENRE     LANGUAGE    RATING    TIMING    SEATS AVAILABLE";
 cout<<"\n\n";
 fin2.open("film1B",ios::binary);
 while(fin2.read((char*)&t1, sizeof t1)&&flag1==0)
 {
 flag1++;
 cout<<" 1  "<<t1.filmname<<"     "<<t1.genre<<"      "<<t1.language<<"        "<<t1.rating<<"        "<<t1.time1<<":"<<t1.time2<<" pm"<<"             ";
 }
 fin1.open("film1A",ios::binary);
 while(fin1.read((char*)&r1, sizeof r1)&&flag2==0)
 {
  flag2++;
  cout<<r1.nseat<<'\n';
 }
 fin1.close();
 fin2.close();
 fin4.open("film2B",ios::binary);
 while(fin4.read((char*)&t2, sizeof t2)&&flag3==0)
 {
 flag3++;
 cout<<" 2  "<<t2.filmname<<"     "<<t2.genre<<"      "<<t2.language<<"        "<<t2.rating<<"        "<<t2.time1<<":"<<t2.time2<<" pm"<<"             ";
 }
 fin3.open("film2a",ios::binary);
 while(fin3.read((char*)&r2, sizeof r2)&&flag4==0)
 {
  flag4++;
  cout<<r2.nseat<<'\n';
 }
 fin3.close();
 fin4.close();
 int temps=0;
 cout<<"\nENTER NUMBER\n";
 do
 {
 cin>>ch;
 switch(ch)
 {
  case 1:seaterf1();
	 temps++;
	 break;
  case 2:seaterf2();
	 temps++;
	 break;
  default:cout<<"\nINVALD CHOICE, please enter again\n";
 }
 }while(ch>1||temps==0);
}

void pay()
{
 cout<<"\nPRESS ANY KEY TO PROCEED TO PAYMENT\n";
 getch();
 clrscr();

 char cardname[40];
 int c1[4]={0},c2[4]={0},c3[4]={0},c4[4]={0};
 int expdate1=0,expdate2=0,expdate4=0,expdate3=0;
 int m1,m2,y1,y2,m,y;
 int cvv[3]={0},realcvv[3];

 cout<<"\n\nREDIRECTING TO SECURE PAYMENT PLATFORM.......\n\n";
 sleep(2);
 cout<<"\nALL CARD DETAILS ARE SECURED WITH END to END ENCRYPTION.\n";
 sleep(5);
 clrscr();
 cout<<"\nENTER CARD NUMBER\n";
 cout<<"----  ----  ----  ----"<<'\r';
 for(int i=0;i<4;i++)
  {
   c1[i]=getch();
   cout<<c1[i]-48;
  }
 cout<<"  ";
 for(i=0;i<4;i++)
  {
   c2[i]=getch();
   cout<<c2[i]-48;
  }
 cout<<"  ";
 for(i=0;i<4;i++)
  {
   c3[i]=getch();
   cout<<c3[i]-48;
  }
 cout<<"  ";
 for(i=0;i<4;i++)
  {
   c4[i]=getch();
   cout<<c4[i]-48;
  }
 cout<<"\nPROCESSING CARD NUMBER....\n";
 sleep(2);
 cout<<"\nENTER CARD EXPIRY\n";
 cout<<"MM / YY";
 expdate1=getch();
 m1=expdate1-48;
 gotoxy(1,7);
 cout<<"\r"<<expdate1-48;
 expdate2=getch();
 m2=expdate2-48;
 gotoxy(2,7);
 cout<<expdate2-48;
 expdate3=getch();
 y1=expdate3-48;
 gotoxy(6,7);
 cout<<expdate3-48;
 expdate4=getch();
 y2=expdate4-48;
 gotoxy(7,7);
 cout<<expdate4-48;
 cout<<"\n\nCHECKING VALIDITY....\n";
 sleep(1);
 m=m1*10+m2;
 y=y1*10+y2;
 if(m<1||m>12)
 {
  cout<<"\nINVALID CARD\n";
   sleep(1);
   cout<<"\nINITIATING SECURITY PROTOCOL.....";
   sleep(2);
   cout<<"\nEXIT IN  3";
   sleep(1);
   cout<<"   2";
   sleep(1);
   cout<<"   1";
   sleep(1);
   exit(0);
 }
 else
 if(y<18)
  {
   cout<<"\nINVALID CARD\n";
   sleep(1);
   cout<<"\nINITIATING SECURITY PROTOCOL.....";
   sleep(2);
   cout<<"\nEXIT IN  3";
   sleep(1);
   cout<<"   2";
   sleep(1);
   cout<<"   1";
   sleep(1);
   exit(0);
  }
 else
 if(y==18&&m<9)
  {
   cout<<"\nINVALID CARD\n";
   sleep(1);
   cout<<"\nINITIATING SECURITY PROTOCOL.....";
   sleep(2);
   cout<<"\nEXIT IN  3";
   sleep(1);
   cout<<"   2";
   sleep(1);
   cout<<"   1";
   sleep(1);
   exit(0);
  }

 else
 {
  cardval++;
  cout<<"\nENTER CVV\n";
  for(i=0;i<3;i++)
  {
   cvv[i]=getch();
   cout<<"*";
  }
  for(i=0;i<3;i++)
  realcvv[i]=cvv[i]-48;
 }
 cout<<"\n\nPROCESSING PAYMENT......\nDON'T PRESS ANY KEY.....";
 sleep(2);
 clrscr();
 cout<<"\n\n                              ";
 textcolor(GREEN+BLINK);
 cprintf("SUCCESS !!");
}
void choose()
{
 int ch1;
 clrscr();
 cout<<"\n\nTO BOOK A NEW TICKET,  PRESS 1\n";
 cout<<"TO VIEW YOUR BOOKED TICKETS, PRESS 2\n";
 do
 {
  cin>>ch1;
  switch(ch1)
  {
   case 1: showbill1=0;
	   showbill2=0;
	   selectfilm();
	   break;
   case 2: showbill1++;
	   showbill2++;
	   display2f1();
	   display2f2();
	   break;
   default: cout<<"\nINVALID CHOICE. RENTER\n";
  }
 }while(ch1>2);
}

void feedback()
{
 int temprate;
 clrscr();
 textcolor(WHITE);
 cout<<"\n\n";
 cprintf("PLEASE SPARE A MOMENT TO RATE YOUR EXPERIENCE ON A SCALE OF 1 TO 5 STARS");
 cout<<"\n\n\n\n";
 cprintf("Press");
 textcolor(GREEN);
 cprintf(" ENTER  ");
 textcolor(WHITE);
 cprintf("key to submit your rating\n");
 int rate;
 gotoxy(1,10);
 cout<<"\n1.- VERY BAD";
 cout<<"\n2.- BAD";
 cout<<"\n3.- OK. NOT BAD";
 cout<<"\n4.- GOOD";
 cout<<"\n5.- OUTSTANDING";
 gotoxy(35,8);
 cout<<"* * * * *";
 while(rate!=13)
 {
 rate=getch();
 if(rate!=13)
  temprate=rate;
 textcolor(YELLOW);
 gotoxy(35,8);
 switch(rate)
 {
  case 49:clrscr();
	  gotoxy(1,10);
	   cout<<"\n1.- VERY BAD";
	   cout<<"\n2.- BAD";
	   cout<<"\n3.- OK. NOT BAD";
	   cout<<"\n4.- GOOD";
	   cout<<"\n5.- OUTSTANDING";
	  gotoxy(35,8);
	  cout<<"* * * * *";
	  gotoxy(35,8);
	  cprintf("*");
	  gotoxy(1,11);
	  cprintf("1.- VERY BAD");
	  break;
  case 50:clrscr();
	  gotoxy(1,10);
	   cout<<"\n1.- VERY BAD";
	   cout<<"\n2.- BAD";
	   cout<<"\n3.- OK. NOT BAD";
	   cout<<"\n4.- GOOD";
	   cout<<"\n5.- OUTSTANDING";
	  gotoxy(35,8);
	  cout<<"* * * * *";
	  gotoxy(35,8);
	  cprintf("* *");
	  gotoxy(1,12);
	  cprintf("2.- BAD");
	  break;
  case 51:clrscr();
	  gotoxy(1,10);
	   cout<<"\n1.- VERY BAD";
	   cout<<"\n2.- BAD";
	   cout<<"\n3.- OK. NOT BAD";
	   cout<<"\n4.- GOOD";
	   cout<<"\n5.- OUTSTANDING";
	  gotoxy(35,8);
	  cout<<"* * * * *";
	  gotoxy(35,8);
	  cprintf("* * *");
	  gotoxy(1,13);
	  cprintf("3.- OK. NOT BAD");
	  break;
  case 52:clrscr();
	  gotoxy(1,10);
	   cout<<"\n1.- VERY BAD";
	   cout<<"\n2.- BAD";
	   cout<<"\n3.- OK. NOT BAD";
	   cout<<"\n4.- GOOD";
	   cout<<"\n5.- OUTSTANDING";
	  gotoxy(35,8);
	  cout<<"* * * * *";
	  gotoxy(35,8);
	  cprintf("* * * *");
	  gotoxy(1,14);
	  cprintf("4.- GOOD");
	  break;
  case 53:clrscr();
	  gotoxy(1,10);
	   cout<<"\n1.- VERY BAD";
	   cout<<"\n2.- BAD";
	   cout<<"\n3.- OK. NOT BAD";
	   cout<<"\n4.- GOOD";
	   cout<<"\n5.- OUTSTANDING";
	  gotoxy(35,8);
	  cout<<"* * * * *";
	  gotoxy(35,8);
	  cprintf("* * * * *");
	  gotoxy(1,15);
	  cprintf("5.- OUTSTANDING");
 }
 }
 gotoxy(1,18);
 switch(temprate)
 {
  case 49:textcolor(RED);
	  cout<<"\n\n";
	  cprintf("SORRY TO HEAR THAT. WE WILL ALWAYS TRY TO PROVIDE A BETTER EXPERINCE IN THE        NEAR FUTURE");
	  break;
  case 50:textcolor(BROWN);
	  cout<<"\n\n";
	  cprintf("SORRY TO HEAR THAT. WE WILL PUT EVERY EFFORT TO GIVE A NICE EXPERIENCE NEXT TIME");
	  break;
  case 51:textcolor(CYAN);
	  cout<<"\n\n";
	  cprintf("THANKS FOR THE FEEDBACK. WE WILL ALWAYS KEEP IMPROVING ");
	  break;
  case 52:textcolor(YELLOW);
	  cout<<"\n\n";
	  cprintf("GLAD TO HEAR THAT. HOPE YOU HAVE A BETTER EXPERIENCE IN THE FUTURE ");
	  break;
  case 53:textcolor(GREEN);
	  cout<<"\n\n";
	  cprintf("EXTREMELY HAPPY TO HEAR THAT. HOPE TO SEE YOU AGAIN NEXT TIME ");
 }
 cout<<"\n\n";
 textcolor(CYAN);
 cprintf(" THANKS ");
 getch();
}
void welcome()
{
 clrscr();
 textcolor(RED);
 gotoxy(35,1);
 sleep(1);
 cprintf("W");
 sleep(1);
 cprintf("E");
 sleep(1);
 cprintf("L");
 sleep(1);
 cprintf("C");
 sleep(1);
 cprintf("O");
 sleep(1);
 cprintf("M");
 sleep(1);
 cprintf("E");
 sleep(1);
 clrscr();
 textcolor(GREEN+BLINK);
 gotoxy(35,1);
 cprintf("WELCOME");
 sleep(2);
 textcolor(CYAN);
 cout<<"\n\n\nWELCOME TO BOOK-MY-MOVIE  v1.0.1";
 cout<<"\n\nPRESS ANY KEY TO CONTINUE\n";
 getch();
}

void admin()
{
 int i=0;
 char pas[20],ch;
 clrscr();
 repeat:
 cout<<"\nENTER PASSWORD\n";
 while(1)
 {
  ch=getch();
  if(ch==13)
   break;
  cout<<'*';
  pas[i]=ch;
  i++;
 }
 pas[i]='\0';
 if(strcmpi("vishruth",pas)==0)
 {

  int ch;
  cout<<"\nPRESS 1 to display details of users\n";
  cout<<"PRESS 2 to display details of movies\n";
  cin>>ch;
  switch(ch)
  {
   case 1:clrscr();
	cout<<"USERNAME               PASSwORD\n";
	fin.open("users",ios::binary);
	while(fin.read((char*)&s,sizeof s))
	{
	 s.showusername();
	 cout<<"                 ";
	 s.showpassword();
	 cout<<'\n';
	}
	fin.close();
	break;
   case 2:clrscr();
	cout<<"\n\n\n";
	cout<<"NO.     FILM       GENRE     LANGUAGE    RATING    TIMING    SEATS AVAILABLE";
	cout<<"\n\n";
	fin2.open("film1B",ios::binary);
	while(fin2.read((char*)&t1, sizeof t1))
	{
	 cout<<" 1  "<<t1.filmname<<"     "<<t1.genre<<"      "<<t1.language<<"      "<<t1.rating<<"      "<<t1.time1<<":"<<t1.time2<<" pm"<<"             ";
	 break;
	}
	fin1.open("film1A",ios::binary);
	while(fin1.read((char*)&r1, sizeof r1))
	{
	 cout<<r1.nseat<<'\n';
	 break;
	}
	fin1.close();
	fin2.close();
	fin4.open("film2B",ios::binary);
	while(fin4.read((char*)&t2, sizeof t2))
	{
	 cout<<" 2  "<<t2.filmname<<"     "<<t2.genre<<"      "<<t2.language<<"        "<<t2.rating<<"        "<<t2.time1<<":"<<t2.time2<<" pm"<<"             ";
	 break;
	}
	fin3.open("film2A",ios::binary);
	while(fin3.read((char*)&r2, sizeof r2))
	{
	 cout<<r2.nseat<<'\n';
	 break;
	}
	fin3.close();
	fin4.close();
	break;
    default:cout<<"\nINVALID CHOICE\n";
  }
 }
 else
  cout<<"\nINVALID PASSWORD\n";
}

//one
void seaterf1()
{
 //create1f1();    //TO BE USED ONLY FOR FIRST RUN
 //create1f2();

 int x,f,g;
 char y;
 clrscr();
 cout<<"\nENTER NO OF PEOPLE\n";
 cin>>n1;
 if(n1==0)
  exit(0);
 else
 if(n1>r1.nseat)
  cout<<"\nSEATS UNAVAILABLE\n";
 else
 {
  display1f1();
  textcolor(YELLOW);
  cout<<"\nSELECT SEATS   ENTER ROW FOLLOWED BY COLUMN (for eg ";
  cprintf(" 5 f");
  cout<<")PRESS ENTER KEY AFTER EACH FULL SEAT. USE ONLY ";
  textcolor(GREEN);
  cprintf("SPACEBAR");
  textcolor(YELLOW);
  cout<<"BETWEEN   EACH ENTRY";
  int i=0;
  while(i<n1)
  {
   gotoxy(5,24);
   cin>>x;
   cin>>y;
   x1[i]=x;
   y1[i]=y;
   if(r1.a[x1[i]-1][y1[i]-97]==' ')
   {
    cout<<"INVALID ENTRY";
    gotoxy(5,24);
   }
   else
   if(r1.a[x1[i]-1][y1[i]-97]==p)
   {
    cout<<"                   SEAT TAKEN";
    gotoxy(5,24);
   }
   else
   {
   x2[i]=x;
   y2[i]=y;
   f=y-80+(y-96);
   g=x+6;
   gotoxy(f,g);
   cprintf("# ");
   i++;
   }
  }
  modify1f1() ;
  display1f1();
  create2f1() ;
  pay();
  if(cardval)
  {
   display2f1();
  }
 }
 getch();
}


void display1f1()
{
 clrscr();
 cout<<"\n";
 cout<<"                                  All eyes this way "<<'\n';
 cout<<"             "<<c;
 for(int i=0;i<55;i++)
  cout<<d;
 cout<<e<<"\n\n";
  cout<<"                 ";
 for(char k='a';k<='z';k++)
  cout<<k<<" ";
 cout<<"\n";
 fin1.open("film1A",ios::binary);
 while(fin1.read((char*)&r1, sizeof r1))
 {
 for(i=0;i<15;i++)
 {
  if(i<9)
   cout<<"\n            "<<i+1<<"    ";
  else
   cout<<"\n            "<<i+1<<"   ";
  for(int j=0;j<26;j++)
   cout<<r1.a[i][j]<<" ";
 }
 }
 fin1.close();
}
void create1f1()
{
 fout1.open("film1A",ios::binary);

 for(int i=0;i<15;i++)
  for(int j=0;j<26;j++)
    r1.a[i][j]=220;

 r1.a[0][0]=' ';
}