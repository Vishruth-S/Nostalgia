//V QUIZ, A QUIZ GAME DEVELOPED BY VISHRUTH S//

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void quizmenu();            //MENU
void gamerules();           //RULES
void checkans(int,int&);    //ANSWER CHECKER
void lifeline();            //LIFELINE
void gkquestions();         //CATEGORIES
void scquestions();         //''
void techquestions();       //''
void geoquestions();        //''
void instructions();        //INSTRUCTIONS
void prize();               //PRIZE
void feedback();            //FEEDBACK
void createquiz();          //QUIZ CREATOR
int life=2,flag=0,create=0;
int ans;
int correct=0;
struct playerdata{
		  char name[80];
		  int age;
		  char place[60];
		  char g;
		 }p;
void main()
{

 clrscr();
 textcolor(RED);              //TO PRINT WELCOME
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
 cout<<"\nPLEASE ENTER YOUR NAME\n";
 gets(p.name);
 cout<<"\nHOW OLD ARE YOU\n";
 cin>>p.age;
 cout<<"\nPLEASE ENTER YOUR GENDER    M or F\n";
 cin>>p.g;
 cout<<"\nENTER YOUR CITY\n";
 gets(p.place);
 cout<<"\n\nSENDING PLAYER INFO TO SERVER.\nPLEASE WAIT.......";
 sleep(2);
 clrscr();
 cout<<"\n\nToday we have with us here ";
 if(p.g=='m'||p.g=='M')               //TO PRINT MISS/MASTER
  cout<<"Master ";
 else
  cout<<"Miss ";
 textcolor(BLUE);
 cprintf(p.name);
 cout<<" who is ";
 cout<<p.age;
 cout<<" years old and is from\n ";
 cprintf(p.place);
 sleep(3);
 cout<<"\n\nBefore You proceed into the game, I would like to suggest you to Read the Rules and Regulations of the game.";
 sleep(3);
 cout<<" If you wish to read them press ";
 textcolor(GREEN);
 cprintf("Y");
 cout<<" else if you feel  that you are confident to proceed, then press ";
 textcolor(RED);
 cprintf("N");
 cout<<"\n";
 char temp1;
 cin>>temp1;
 if(temp1=='y'||temp1=='Y')
  gamerules();
 cout<<"\nPRESS ANY KEY TO PROCEED";
 getch();
 quizmenu();
 getch();
}
 void gkquestions()
{
 life=2;
 create=1;
 clrscr();
 textcolor(MAGENTA+BLINK);
 cprintf("CURRENT AFFAIRS QUIZ");
 instructions();
 int q=1;
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
  sleep(4);
 textcolor(BROWN);
 cprintf("QUESTION 1: ");
 textcolor(BLUE);
 cprintf("The 2018 World Cancer Day was observed on which date? ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) February 5");
 sleep(1);
 cout<<"\n";
 cprintf("(2) February 3");
 sleep(1);
 cout<<"\n";
 cprintf("(3) February 4");
 sleep(1);
 cout<<"\n";
 cprintf("(4) February 2");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 2: ");
 textcolor(BLUE);
 cprintf("The Union Government is planning to build silos in some of the key    states to store which grain?");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Wheat");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Rice");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Barley");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Maize");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 3: ");
 textcolor(BLUE);
 cprintf("In the Union Budget 2018, The Union Finanace Minister Arun Jaitley     has announced the Government's plan to build a tunnel through the Sela pass. The sela pass is located in which state? ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(3);
 cprintf("(1) Arunachal Pradesh");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Manipur");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Sikkim");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Himachal Pradesh");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 4: ");
 textcolor(BLUE);
 cprintf("What is India's rank in the list of wealthiest Nations, according to a new report by New World Wealth? ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) 11th");
 sleep(1);
 cout<<"\n";
 cprintf("(2) 4th");
 sleep(1);
 cout<<"\n";
 cprintf("(3) 9th");
 sleep(1);
 cout<<"\n";
 cprintf("(4) 6th");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 5: ");
 textcolor(BLUE);
 cprintf("Which state's Tableau has won the best Tableau award at the 69th   Republic Day parade 2018? ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Assam");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Karnataka");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Odisha");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Maharashtra");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 6: ");
 textcolor(BLUE);
 cprintf("Which International organisation will launch a new Global Centre for Cybersecurity to safeguard the world from hackers? ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) World Economic Forum");
 sleep(1);
 cout<<"\n";
 cprintf("(2) UNICEF");
 sleep(1);
 cout<<"\n";
 cprintf("(3) International Telecommunication Union");
 sleep(1);
 cout<<"\n";
 cprintf("(4) International Maritime Organisation");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wush to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 7: ");
 textcolor(BLUE);
 cprintf("Which of the following Indian Metro cities has become the First to    get a floating market? ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Mumbai");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Kolkata");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Delhi");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Chennai");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 8: ");
 textcolor(BLUE);
 cprintf("Which City is expected to host the 2018 Karnataka International        Travel Expo (KITE)? ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Bijapur");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Mysore");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Bengaluru");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Mysuru");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
 prize();
}
 void geoquestions()
{
 life=2;
 create=1;
 clrscr();
 textcolor(MAGENTA+BLINK);
 cprintf("GEOGRAPHY QUIZ");
 instructions();
 int q=1;
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
  sleep(4);
 textcolor(BROWN);
 cprintf("QUESTION 1: ");
 textcolor(BLUE);
 cprintf("The largest country in the world in terms of Geographical Landmass  is");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) USA");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Australia");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Russia");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Vatican City");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 2: ");
 textcolor(BLUE);
 cprintf("Which of these is the longest river in the Indian Peninsula?");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Narmada");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Godavari");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Kaveri");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Mahanadi");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 3: ");
 textcolor(BLUE);
 cprintf("India's highest annual rainfall is reported at ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Mawsynram, Meghalaya");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Namchi, Sikkim");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Churu, Rajasthan");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Chamba, Himachal Pradesh");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 4: ");
 textcolor(BLUE);
 cprintf("The Great Victoria Desert is located in");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Canada");
 sleep(1);
 cout<<"\n";
 cprintf("(2) West Africa");
 sleep(1);
 cout<<"\n";
 cprintf("(3) North America");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Australia");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 5: ");
 textcolor(BLUE);
 cprintf("The humidity of the air depends upon ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Temperature");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Location");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Weather");
 sleep(1);
 cout<<"\n";
 cprintf("(4) All of the above");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 6: ");
 textcolor(BLUE);
 cprintf("The highest average salinity amongst the following seas is reported from the ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Dead sea");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Red sea");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Black sea");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Mediterranean sea");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 7: ");
 textcolor(BLUE);
 cprintf("The Islands of Seychelles are located in the");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Artic ocean");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Indian ocean");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Pacific ocean");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Atlantic ocean");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 8: ");
 textcolor(BLUE);
 cprintf("The island of Sri Lanka was formerly known as");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Madagascar");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Tasmania");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Ceylon");
 sleep(1);
 cout<<"\n";
 cprintf("(4) None of the above");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
 prize();
}
 void techquestions()
{
 life=2;
 create=1;
 clrscr();
 textcolor(MAGENTA+BLINK);
 cprintf("TECHNOLOGY QUIZ");
 instructions();
 int q=1;
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
  sleep(4);
 textcolor(BROWN);
 cprintf("QUESTION 1: ");
 textcolor(BLUE);
 cprintf("The Computer abbreviation 'OS' usually means ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Order of Significance");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Open Software");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Operating System");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Optical Sensor");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 2: ");
 textcolor(BLUE);
 cprintf("Firewall in computers is used for ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Data Transmission");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Security ");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Authentication");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Monitoring");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 3: ");
 textcolor(BLUE);
 cprintf("The Headquarters of Microsoft Inc. is located in");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Washington");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Texas");
 sleep(1);
 cout<<"\n";
 cprintf("(3) New York");
 sleep(1);
 cout<<"\n";
 cprintf("(4) California");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 4: ");
 textcolor(BLUE);
 cprintf("Which one of these is the first web browser invented in 1990? ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Internet Explorer");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Mosaic");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Mozilla");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Nexus");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 5: ");
 textcolor(BLUE);
 cprintf("When was the first email sent over the internet? ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) 1961");
 sleep(1);
 cout<<"\n";
 cprintf("(2) 1965");
 sleep(1);
 cout<<"\n";
 cprintf("(3) 1988");
 sleep(1);
 cout<<"\n";
 cprintf("(4) 1971");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 6: ");
 textcolor(BLUE);
 cprintf("IBM is a well known computer and Information Technology company.      What does IBM stand for?");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(3);
 cprintf("(1) International Business Machines");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Indian Business Management");
 sleep(1);
 cout<<"\n";
 cprintf("(3) International Brand Marketing");
 sleep(1);
 cout<<"\n";
 cprintf("(4) None of the Above");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 7: ");
 textcolor(BLUE);
 cprintf("What does DOCSIS stand for");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Data Over Cable Security Internet Standard");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Data Over Cable Security Interface Specification");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Data Over Cable Secure International Standards");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Data Over Cable Service Internet Standard");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 8: ");
 textcolor(BLUE);
 cprintf("What is a spider in terms of computer software?");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) A computer Virus");
 sleep(1);
 cout<<"\n";
 cprintf("(2) An application for viewing web sites");
 sleep(1);
 cout<<"\n";
 cprintf("(3) A program that catalogs web sites");
 sleep(1);
 cout<<"\n";
 cprintf("(4) A hacker who breaks into computer systems");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
 prize();
}
 void scquestions()
{
 life=2;
 create=1;
 clrscr();
 textcolor(MAGENTA+BLINK);
 cprintf("SCIENCE QUIZ");
 instructions();
 int q=1;
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
  sleep(4);
 textcolor(BROWN);
 cprintf("QUESTION 1: ");
 textcolor(BLUE);
 cprintf("Which is the most abundant element in the Earth's Atmosphere?");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Hydrogen");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Oxygen");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Nitrogen");
 sleep(1);
 cout<<"\n";
 cprintf("(4) None of the above");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 2: ");
 textcolor(BLUE);
 cprintf("Which of the following non-metal is a liquid a room temperature");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Phosphorus");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Bromine");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Chlorine");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Helium");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 3: ");
 textcolor(BLUE);
 cprintf("Quartz crystals used in watches, clocks etc. is chemically ");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Silicon Dioxide");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Germanium oxide");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Sodium Silicate");
 sleep(1);
 cout<<"\n";
 cprintf("(4) None of the above");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 4: ");
 textcolor(BLUE);
 cprintf("One Kilometre is equal to how many miles");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) 0.84");
 sleep(1);
 cout<<"\n";
 cprintf("(2) 0.5");
 sleep(1);
 cout<<"\n";
 cprintf("(3) 1.6");
 sleep(1);
 cout<<"\n";
 cprintf("(4) 0.62");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 5: ");
 textcolor(BLUE);
 cprintf("Which of the following statement is correct about the planet SATURN?");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Cooler than Pluto");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Hotter than Jupiter");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Cooler than Neptune");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Hotter than Neptune");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 6: ");
 textcolor(BLUE);
 cprintf("Light year is a unit used to measure which of the following quantities?");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Distance");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Time");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Velocity");
 sleep(1);
 cout<<"\n";
 cprintf("(4) Force");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 7: ");
 textcolor(BLUE);
 cprintf("Rickets is a disease caused by the lack of which of the following Vitamins?");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Vitamin A");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Vitamin D");
 sleep(1);

 cout<<"\n";
 cprintf("(3) Vitamin B12");
 sleep(1);
 cout<<"\n";
 cprintf("(4) None of the Above");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
  cout<<"\nYou have "<<life<<" LIFELINES Left. In case You wish to use them, ENTER ";
  cprintf("0");
  cout<<"\n\nIf you wish to return to the MAIN MENU, Press ";
  cprintf("8");
  cout<<"\n\nIf you wish to EXIT the quiz, Press ";
  cprintf("9");
  cout<<"\n\n\n";
 textcolor(BROWN);
 cprintf("QUESTION 8: ");
 textcolor(BLUE);
 cprintf("Who invented the Elevator?");
 cout<<"\nYOUR OPTIONS ARE\n";
 textcolor(YELLOW);
 sleep(2);
 cprintf("(1) Thomas Alva Edison");
 sleep(1);
 cout<<"\n";
 cprintf("(2) Alexander Graham Bell");
 sleep(1);
 cout<<"\n";
 cprintf("(3) Elisha G Otis");
 sleep(1);
 cout<<"\n";
 cprintf("(4) William Gas cogin");
 sleep(1);
 cout<<"\nPlease Enter the answer\n";
 cin>>ans;
 checkans(q++,ans);
 prize();
}
 void checkans(int q, int& ans)
 {
  char temp1,temp2,temp3;
  if(q==1||q==8)            //FOR QUESTION 1 and 8
   correct=3;               //CORRECT ANS IS OPTION 3
  else
  if(q==2||q==7)            //FOR QUESTION 2 and 7
   correct=2;               //CORRECT ANS IS OPTION 2
  else
  if(q==3||q==6)            //FOR QUESTION 3 and 6
   correct=1;               //CORRECT ANS IS OPTION 1
  else
   if(q==4||q==5)           //FOR QUESTION 4 and 5
   correct=4;               //CORRECT ANS IS OPTION 4

  if(ans==8)                //EXIT TO MENU
  {
   cout<<"\nCONFIRM EXIT  Y or N\n";
   cin>>temp1;
   if(temp1=='y'||temp1=='Y')
    quizmenu();
   else
    {
     cout<<"\nENTER ANSWER\n";
     cin>>ans;
   }
  }
  if(ans==9)               //EXIT
   {
    cout<<"\nCONFIRM EXIT  Y or N\n";
    cin>>temp2;
    if(temp2=='y'||temp2=='Y')
     {
      cout<<"\nTHANKS FOR PLAYING";
      feedback();
      cout<<"\nEXIT IN 3";
      sleep(1);
      cout<<"  2";
      sleep(1);
      cout<<"  1";
      sleep(1);
      exit(0);
     }
    else
     {
      cout<<"\nENTER ANSWER\n\n";
      cin>>ans;
     }
   }
  if(ans==0&&life!=0)           //FOR LIFELINE
   lifeline();
  else if(ans==0)
   {
    cout<<"\nSORRY. YOU HAVE USED YOUR LIFELINES. ENTER ANSWER\n";
    cin>>ans;
   }
  if(ans!=correct)             //INCORRECT ANSWER
  {
   textcolor(RED);
   cprintf("\n\nOOPS");
   sleep(1);
   textcolor(RED+BLINK);
   cprintf("\n\n\nWRONG ANSWER");
   sleep(2);
   textcolor(BROWN);
   cprintf("\n\n\n\nTHE CORRECT ANSWER IS OPTION ");
   cout<<correct;
   cout<<"\n\nIF YOU WISH TO RETURN TO THE MAIN MENU, PRESS ";
   textcolor(GREEN);
   cprintf("m");
   cout<<"\nElse if you wish to EXIT, press any other key\n";
   cin>>temp3;
   if(temp3=='m'||temp3=='M')
    quizmenu();
   feedback();
   textcolor(WHITE);
   sleep(1);
   cout<<"\n\n";
   cprintf("THANK YOU FOR PARTICIPATING IN THIS QUIZ");
   sleep(1);
   cout<<"\n\nAUTO EXIT IN \n5";
   sleep(1);
   cout<<"\n4";
   sleep(1);
   cout<<"\n3";
   sleep(1);
   cout<<"\n2";
   sleep(1);
   cout<<"\n1";
   sleep(1);
   exit(0);
  }
  else                         //CORRECT ANSWER
  {
   char a=2;                   //TEMP VARIABLE
   textcolor(CYAN+BLINK);
   cprintf("\n\nCORRECT ANSWER!!!");
   cout<<"\n\t"<<a;
   int t=random(4);
   textcolor(CYAN);
   if(t==0)
    cprintf("\nWELL DONE!!");
   if(t==1)
    cprintf("\nGOOD JOB!!");
   if(t==2)
    cprintf("\nWONDERFUL!!");
   if(t==3)
    cprintf("\nAWESOME!!");
   cout<<"\n\nPress any key to proceed to next question\n";
   getch();
   clrscr();
  }
 }
void lifeline()
{
 life--;                   //TO REDUCE THE LIFELINE WHEN USED
 int lifel;
 cout<<"\nPLEASE SELECT FROM ONE OF THE LIFELINES";
 if(flag!=1)
  {
   cout<<"\n(1)";
   textcolor(BLUE);
   cprintf("50-50");
   if(flag==2)            //IF second lifeline has been used
   {
    textcolor(RED);
    cout<<"\n(2)";
    cprintf("UNAVAILABLE");
   }
  }
 if(flag!=2)
  {
   if(flag==1)            //IF first lifeline has been used
   {
    cout<<"\n(1)";
    textcolor(RED);
    cprintf("UNAVAILABLE");
   }
   textcolor(BLUE);
   cout<<"\n(2)";
   cprintf("SHOW ANSWER\n");
  }
 cout<<'\n';
 cin>>lifel;
 if(lifel==2)
   {
    cout<<"\nCORRECT ANS IS OPTION "<<correct;
    cout<<"\nENTER ANSWER\n";
    cin>>ans;
    ans=correct;
    flag=2;
   }
  else
  if(lifel==1)
   {
     int t=correct;
     cout<<"\nPOSSIBLE CORRECT ANSWERS ARE: ";
     textcolor(YELLOW);
     if(t!=4)
      cout<<"("<<++t<<")"<<" & "<<"("<<t<<")";
	else
      cout<<"("<<t<<")"<<" & "<<"(1)";
     cout<<"\nENTER ANSWER\n";
     cin>>ans;
     flag=1;
   }
 }
void instructions()
{
 cout<<"\n\nPRESS ";
 textcolor(YELLOW);
 cprintf("1");
 cout<<" , ";
 cprintf("2");
 cout<<" , ";
 cprintf("3");
 cout<<" or ";
 cprintf("4");
 cout<<" as Answers to the questions that follow";
 cout<<"\n\n\n";
 sleep(3);
}
void quizmenu()
{
 clrscr();
 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
 textcolor(MAGENTA);
 cprintf("QUIZ MENU");
 textcolor(WHITE);
 cout<<'\n';
 cprintf("Please select from one of the options given below");
 cout<<'\n';
 textcolor(YELLOW);
 cprintf("(1)");
 cout<<"CURRENT AFFAIRS\n";
 cprintf("(2)");
 cout<<"GEOGRAPHY\n";
 cprintf("(3)");
 cout<<"SCIENCE\n";
 cprintf("(4)");
 cout<<"TECHNOLOGY\n";
 cprintf("(5)");
 cout<<"CREATE YOUR OWN QUIZ\n\n\n";
 cprintf("(6)");
 cout<<"EXIT\n";
 int quizopt;
 cin>>quizopt;
 switch(quizopt)
 {
   case 1:gkquestions();
	  break;
   case 2:geoquestions();
	  break;
   case 3:scquestions();
	  break;
   case 4:techquestions();
	  break;
   case 5:if(create==0)
	  { textcolor(WHITE);
	    cprintf("\nYOU CAN USE THIS ONLY AFTER PLAYING A QUIZ\nPRESS ANY KEY TO PROCEED");
	    getch();
	    quizmenu();
	   }
	  else
	  createquiz();
	  break;
   case 6:feedback();
	  exit(0);
 }
}
void prize()
{
 int temp;
 clrscr();
 textcolor(GREEN+BLINK);
 cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t";
 cprintf("CONGRATULATIONS!!!!!");
 textcolor(CYAN);
 cout<<'\n';
 sleep(1);
 cprintf("YOU HAVE SUCCESFULLY ANSWERED ALL THE QUESTIONS OF THIS QUIZ");
 cout<<"\n\nHere's Your Certificate\n\n";
 sleep(2);
 textcolor(WHITE);
 cprintf("THIS IS TO CERTIFY THAT ");
 if(p.g=='m'||p.g=='M')
  cprintf("MASTER  ");
 else
  cprintf("MISS  ");
 cprintf(p.name);
 cprintf("  HAS SUCCESFULLY COMPLETED ANSWERING ALL THE QUESTIONS OF THIS QUIZ!!!");
 sleep(4);
 clrscr();
 cout<<"\n\n\nTHANKS FOR PLAYING.\nHOPE YOU ENJOYED!\n\nPLEASE RATE MY QUIZ ON A SCALE OF 0 to 5\n";
  feedback();
 cout<<"\n\nIf you wish to return to the main menu, Press ";
 textcolor(YELLOW);
 cprintf("0");
 cout<<"\nElse Press any key to Exit\n ";
 cin>>temp;
 if(temp==0)
  quizmenu();
 else
  exit(0);
}
void gamerules()
{
 cout<<" PLEASE READ ALL THE RULES CAREFULLY\n";
 sleep(2);
 clrscr();
 gotoxy(35,1);
 textcolor(MAGENTA);
 cprintf("RULES");
 cout<<"\n\n";
 cout<<"1.There are ";
 textcolor(YELLOW);
 cprintf("5");
 cout<<" different categories of quizzes\n";
 sleep(2);
 cout<<"2.Each category contains ";
 cprintf("8");
 cout<<" objective questions\n";
 sleep(1);
 cout<<"3.Press ";
 cprintf("1,2,3 ");
 cout<<" or ";
 cprintf("4");
 cout<<" as answers to each question\n";
 cout<<"4.You will have ";
 cprintf("2");
 cout<<" lifelines at the beginning of each quiz. In case You wish to use them, Press ";
 cprintf("0");
 sleep(3);
 cout<<"\n5.If you wish to exit to the main menu from a quiz, Press ";
 cprintf("8");
 cout<<".\nElse if you wish to Exit out of the Quiz, Press ";
 cprintf("9");
 sleep(4);
 cout<<"\n6.You can only enter your option ";
 cprintf("ONCE");
 sleep(1);
 textcolor(RED);
 cout<<"\n\nNOTE:";
 cprintf("ANY INVALID ENTRY WILL BE TREATED AS INCORRECT ANSWER");
 sleep(1);
}
void feedback()
{
 int temprate;
 clrscr();
 textcolor(WHITE);
 cprintf("\n\nPLEASE RATE MY QUIZ ON A SCALE OF 1 TO 5 STARS");
 cout<<"\n\n";
 cprintf("Press ENTER key to submit your rating\n");
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

void createquiz()
{
 struct gamedata{
		char creator[50];
		char gamecat[50];
		int n;
		int e,m;
	       }g;
 struct quiz{
	    char q[500];
	    char opt1[100];
	    char opt2[100];
	    char opt3[100];
	    char opt4[100];
	    int  rightopt;
	   }s[20];
 clrscr();
 textcolor(CYAN);
 cprintf("WELCOME TO THE QUIZ CREATOR 2.0\n");
 int temp,ans;
 char a=166;
 cout<<"\nEnter Your Name\n";
 gets(g.creator);
 cout<<"\nEnter Quiz Name/Category\n";
 gets(g.gamecat);
 cout<<"\nEnter Number of questions\n";
 cin>>g.n;
 cout<<"\nEnter a number to be used for RETURNING to main menu\n";
 cin>>g.m;
 cout<<"\nEnter a number to be used for EXITING from Quiz\n";
 cin>>g.e;
 cout<<"\n\n";
 textcolor(BROWN);
 cprintf("NOTE:");
 textcolor(WHITE);
 cprintf(" By Using this quiz creator, You agree to our terms and conditions and       our Privacy policy.");
 cout<<'\n';
 cprintf(" The QUIZ CREATOR");
 cout<<a;
 cprintf(",QUIZ CREATOR 2.0");
 cout<<a;
 cprintf(" are the trademarks of the V QUIZ");
 cout<<a;
 cprintf(", created by VISHRUTH S.   The Illegal use or reproduction of any part of the QUIZ CREATOR 2.0");
 cout<<a;
 cprintf(" , in any manner, by any individual or group, is a violation of the Copyright act and doing so will result in Severe penalties ");
 getch();
 for(int i=0; i<g.n; i++)
 {
  clrscr();
  cout<<"\nEnter Question number "<<i+1<<"\n";
  gets(s[i].q);
  cout<<"\nEnter Options 1,2,3 and 4\n";
  gets(s[i].opt1);
  gets(s[i].opt2);
  gets(s[i].opt3);
  gets(s[i].opt4);
  cout<<"\nEnter Correct ";
  textcolor(YELLOW);
  cprintf("OPTION");
  cout<<'\n';
  textcolor(WHITE);
  cin>>s[i].rightopt;
 }
 cout<<"\nPRESS ANY KEY TO PLAY\n";
 getch();
 textcolor(MAGENTA+BLINK);
 cprintf(g.gamecat);
 cprintf(" QUIZ");
 for(i=0; i<g.n; i++)
 {
  clrscr();
  textcolor(MAGENTA+BLINK);
  cprintf(g.gamecat);
  cprintf(" QUIZ");
  textcolor(CYAN);
  cprintf(" By ");
  cprintf(g.creator);
  textcolor(BLUE);
  cout<<"\n\nQUESTION "<<i+1<<": ";
  cprintf(s[i].q);
  textcolor(YELLOW);
  sleep(3);
  cout<<"\nYour OPTIONS are: ";
  cout<<'\n';
  cprintf("(1) ");
  cprintf(s[i].opt1);
  sleep(1);
  cout<<'\n';
  cprintf("(2) ");
  cprintf(s[i].opt2);
  sleep(1);
  cout<<'\n';
  cprintf("(3) ");
  cprintf(s[i].opt3);
  sleep(1);
  cout<<'\n';
  cprintf("(4) ");
  cprintf(s[i].opt4);
  sleep(1);
  cout<<"\nENTER ANSWER\n";
  cin>>ans;
  if(ans==g.e)
  {
   cout<<"\nTHANKS.\nEXIT IN 2 seconds";
   sleep(2);
   exit(0);
  }
  else
  if(ans==g.m)
  {
   cout<<"\nTHANKS.\nEXIT IN 2 seconds";
   sleep(2);
   quizmenu();
  }
  else
  if(ans!=s[i].rightopt)
  {
   textcolor(RED+BLINK);
   cprintf("\nWRONG ANSWER ");
   sleep(1);
   cout<<"\nTHE CORRECT ANSWER IS OPTION "<<s[i].rightopt;
   sleep(1);
   cout<<"\nEXIT IN\n3";
   sleep(1);
   cout<<"\n2";
   sleep(1);
   cout<<"\n1";
   sleep(1);
   quizmenu();
  }
  textcolor(CYAN+BLINK);
  cprintf("\nCORRECT ANSWER");
  cout<<"\n\nPRESS ANY KEY TO PROCEED\n";
  getch();
 }
 prize();
 getch();
}
