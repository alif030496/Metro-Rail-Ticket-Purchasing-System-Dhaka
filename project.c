#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include<time.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void ticket()
    {
        unsigned long long int mob;
        char Name[40];
        int number_tickets;
        float cal,cal2, to,_for,cost;
        int km,ifrom,ito,ch;
        km=3;

    start:

    system("CLS");
   	printf("\t\t\t\t\t----------------------------------\n");
	printf("\t\t\t\t\t            DEPARTURE             \n");
	printf("\t\t\t\t\t----------------------------------\n");
    printf("\n\t\t\t\t\t1.Uttara North.\n");
    printf("\t\t\t\t\t2.Uttara Center.\n");
    printf("\t\t\t\t\t3.Uttara South.\n");
    printf("\t\t\t\t\t4.Pallabi.\n");
    printf("\t\t\t\t\t5.Mirpur 11.\n");
    printf("\t\t\t\t\t6.Mirpur 10.\n");
    printf("\t\t\t\t\t7.Kazipara.\n");
    printf("\t\t\t\t\t8.Shewrapara.\n");
    printf("\t\t\t\t\t9.Agargaon.\n");
    printf("\t\t\t\t\t10.Bijoy Sarani.\n");
    printf("\t\t\t\t\t11.Farmgate.\n");
    printf("\t\t\t\t\t12.Karwan Bazar.\n");
    printf("\t\t\t\t\t13.Shahbag.\n");
    printf("\t\t\t\t\t14.Dhaka University.\n");
    printf("\t\t\t\t\t15.Bangladesh Secretariat.\n");
    printf("\t\t\t\t\t16.Motijheel.\n");
    printf("\t\t\t\t\t\n");

    printf("\n\t\t\t\t\tFrom-> ");
    scanf("\t\t\t\t\t%d",&ifrom);
    printf("\n\n\t\t\t\t\tProcessing");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
    system("CLS");

    printf("\t\t\t\t\t----------------------------------\n");
	printf("\t\t\t\t\t              ARRIVAL             \n");
	printf("\t\t\t\t\t----------------------------------\n");
    printf("\n\t\t\t\t\t1.Uttara North.\n");
    printf("\t\t\t\t\t2.Uttara Center.\n");
    printf("\t\t\t\t\t3.Uttara South.\n");
    printf("\t\t\t\t\t4.Pallabi.\n");
    printf("\t\t\t\t\t5.Mirpur 11.\n");
    printf("\t\t\t\t\t6.Mirpur 10.\n");
    printf("\t\t\t\t\t7.Kazipara.\n");
    printf("\t\t\t\t\t8.Shewrapara.\n");
    printf("\t\t\t\t\t9.Agargaon.\n");
    printf("\t\t\t\t\t10.Bijoy Sarani.\n");
    printf("\t\t\t\t\t11.Farmgate.\n");
    printf("\t\t\t\t\t12.Karwan Bazar.\n");
    printf("\t\t\t\t\t13.Shahbag.\n");
    printf("\t\t\t\t\t14.Dhaka University.\n");
    printf("\t\t\t\t\t15.Bangladesh Secretariat.\n");
    printf("\t\t\t\t\t16.Motijheel.\n");
    printf("\t\t\t\t\t\n");

    printf("\n\t\t\t\t\tTo-> ");
    scanf("\t\t\t\t\t%d",&ito);
    printf("\n\n\t\t\t\t\tProcessing");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
    system("CLS");


    ch=ifrom;
    if(ch==1)
    {
        _for=0;
    }
    else if(ch==2)
    {
        _for=3.5;
    }
    else if(ch==3)
    {
        _for=6.0;
    }
     else if(ch==4)
    {
        _for=20;
    }
    else if(ch==5)
    {
        _for=21.8;
    }
    else if(ch==6)
    {
        _for=22.9;
    }
    else if(ch==7)
    {
        _for=25.0;
    }
     else if(ch==8)
    {
        _for=26.4;
    }
    else if(ch==9)
    {
        _for=29;
    }
    else if(ch==10)
    {
        _for=32.6;
    }
    else if(ch==11)
    {
        _for=34.3;
    }
     else if(ch==12)
    {
        _for=36.6;
    }
    else if(ch==13)
    {
        _for=39.1;
    }
    else if(ch==14)
    {
        _for=30.2;
    }
    else if(ch==15)
    {
        _for=42.6;
    }
     else if(ch==16)
    {
        _for=44.0;
    }

    ch=ito;
    if(ch==1)
    {
        to=0;
    }
    else if(ch==2)
    {
        to=3.5;
    }
    else if(ch==3)
    {
        to=6.0;
    }
    else if(ch==4)
    {
        to=20.0;
    }
    else if(ch==5)
    {
        to=21.8;
    }
    else if(ch==6)
    {
        to=22.9;
    }
    else if(ch==7)
    {
        to=25.0;
    }
    else if(ch==8)
    {
        to=26.4;
    }
    else if(ch==9)
    {
        to=29.0;
    }
    else if(ch==10)
    {
        to=32.6;
    }
    else if(ch==11)
    {
        to=34.3;
    }
    else if(ch==12)
    {
        to=36.6;
    }
    else if(ch==13)
    {
        to=39.1;
    }
    else if(ch==14)
    {
        to=40.2;
    }
    else if(ch==15)
    {
        to=42.6;
    }
    else if(ch==16)
    {
        to=44.0;
    }
    else
    {
        printf("\t\t\t\t\tProcessing");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
        printf("\n\t\t\t\t\tInvalid Choice.");
        delay(1500);
        printf("\n\n\t\t\t\t\tChoose Again.\n\n");
        printf("\t\t\t\t\tProcessing");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
        goto start;
    }


        system("CLS");

        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\t\t\t\t\t        PASSENGER'S INFORMATION    \n");
        printf("\t\t\t\t\t---------------------------------------\n");
        printf("\n\t\t\t\t\tPassenger's Name------: ");
        scanf("%s",&Name);

        printf("\n\t\t\t\t\tMobile Number---------: +880");
        scanf("%llu",&mob);

        printf("\n\t\t\t\t\tNumber of Ticket (Max. 4 tickets): ");
        scanf("%d",&number_tickets);

        if(number_tickets>=5)
          {
            printf("\n\n\t\t\t\t\tSorry you can't buy up to 4 Tickets.");
            delay(1700);
            printf("\n\n\t\t\t\t\tReturning to Main Menu.\n\n");
            printf("\t\t\t\t\tProcessing");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
            goto start;
          }

    cal=to-_for;
    cal2=cal<0?-cal:cal;

    cost=cal2*km*number_tickets;

    printf("\n\n");
    printf("\t\t\t\t\t-------------------------------------------\n");
    printf("\t\t\t\t\t              TICKET SUMMARY   \n");
    printf("\t\t\t\t\t-------------------------------------------\n");
    printf("\n\t\t\t\t\tDistance-----------:%.2f KM.",cal2);
    printf("\n\t\t\t\t\tCost---------------:%.2f TK.",cal2*km);
    printf("\n\t\t\t\t\tNumber of Ticket---:%d.",number_tickets);
    printf("\n\t\t\t\t\t______________________________________________");
    printf("\n\t\t\t\t\tTotal Cost---------=%.2f TK.(Including VAT)\n\n",cost);

    printf("\n\t\t\t\t\tAre you confirm?");
    printf("\n\t\t\t\t\t(Y/N)-> ");
    char con;
    scanf("%s",&con);
    if(con=='y' || con=='Y')
    {
        printf("\n\n\t\t\t\t\tConfirming Ticket.");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
        system("cls");
        printf("\n\n\t\t\t\t\t-------------------------------------------\n");
        printf("\t\t\t\t\t\t        CONFIRMATION    \n");
        printf("\t\t\t\t\t-------------------------------------------\n");
        printf("\n\n\t\t\t\t\t\t     Ticket Confirmed.\n");
        printf("\n\n\t\t\t\t\tProcessing Ticket.");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");delay(150);printf("..");delay(150);

        printf("\n\n\n\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\t\t  TICKET\n");
        printf("\t\t\t\t\t-----------------------------------------\n\n");
        printf("\t\t\t\t\tPassenger's Name-----------:%s",Name);
        printf("\n\t\t\t\t\tPassenger's Mobile Number--:+880%llu",mob);
        printf("\n\t\t\t\t\tNumber of Seats------------:%d",number_tickets);
        printf("\n\t\t\t\t\t_________________________________________");
        printf("\n\t\t\t\t\tTotal Cost------------------:%.2f TK\n\n",cost);
    }
    else
    {
        printf("\n\n\t\t\t\t\tCanceling Ticket.");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
        system("cls");
        printf("\n\n\t\t\t\t\t-------------------------------------------\n");
        printf("\t\t\t\t\t\t        CONFIRMATION    \n");
        printf("\t\t\t\t\t-------------------------------------------\n");
        printf("\n\n\n\t\t\t\t\t\t      Ticket Canceled.\n");
        printf("\t\t\t\t\t");delay(2000);
        printf("\n\n\t\t\t\t\tExiting.");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
        exit(0);
      }

      FILE *fp;
      fp=fopen("Ticket.txt","a+");
      fprintf(fp,"Name:%s \t Mobile No.:%llu \t Tickets:%d \tFrom:%d \tTo:%d \tCost:%.2fTK\n",Name,mob,number_tickets,ifrom,ito,cost);
      fclose(fp);

      FILE *fp1;
      fp1=fopen("print Tickets.txt","a+");
        fprintf(fp1,"\n\n\t\t\t\t\t-----------------------------------------\n");
        fprintf(fp1,"\t\t\t\t\t\t\t  TICKET\n");
        fprintf(fp1,"\t\t\t\t\t-----------------------------------------\n\n");
        fprintf(fp1,"\t\t\t\t\tPassenger's Name-----------:%s",Name);
        fprintf(fp1,"\n\t\t\t\t\tPassenger's Mobile Number--:+880%llu",mob);
        fprintf(fp1,"\n\t\t\t\t\tNumber of Seats------------:%d",number_tickets);
        fprintf(fp1,"\n\t\t\t\t\t_________________________________________");
        fprintf(fp1,"\n\t\t\t\t\tTotal Cost------------------:%.2f TK\n\n",cost);
        fclose(fp1);


        exit(0);
}


void viewdetails(void)
{
	system("cls");
	printf("\t\t\t\t\t\t  ---------------------------------\n");
            printf("\t\t\t\t\t\t             STATION DETAILS    \n");
            printf("\t\t\t\t\t\t  ---------------------------------\n");
            printf("\n\n");
	printf("\t\t\t\t\t--------------------------------------------------------");
	printf("\n\t\t\t\t\tFrom   \t\t\tTo \t\t\tDistance\n");
	printf("\t\t\t\t\t--------------------------------------------------------");
	printf("\n\t\t\t\t\tUttara North  \t\tUttara Center  \t\t3.5 KM");
	printf("\n\t\t\t\t\tUttara Center  \t\tUttara South  \t\t2.5 KM");
	printf("\n\t\t\t\t\tUttara South  \t\tPallabi  \t\t14.0 KM");
	printf("\n\t\t\t\t\tPallabi  \t\tMirpur-11  \t\t1.8 KM");
	printf("\n\t\t\t\t\tMirpur-11  \t\tMirpur-10  \t\t1.1 KM");
	printf("\n\t\t\t\t\tMirpur-10  \t\tKazipara \t\t2.1 KM");
	printf("\n\t\t\t\t\tKazipara  \t\tShewrapara  \t\t1.4 KM");
	printf("\n\t\t\t\t\tShewrapara  \t\tAgargoan  \t\t2.6 KM");
	printf("\n\t\t\t\t\tAgargoan  \t\tBijoy Sarani  \t\t3.6 KM");
	printf("\n\t\t\t\t\tBijoy Saran  \t\tFarmgate  \t\t1.7 KM");
	printf("\n\t\t\t\t\tFarmgate  \t\tKarwan Bazar  \t\t2.3 KM");
	printf("\n\t\t\t\t\tKarwan Bazar  \t\tShahbag  \t\t2.5 KM");
	printf("\n\t\t\t\t\tShahbag   \t\tDhaka University\t1.1 KM");
	printf("\n\t\t\t\t\tDhaka University \tBangladesh Secretariat\t2.4 KM   ");
	printf("\n\t\t\t\t\tBangladesh Secretariat \tMotijheel\t\t1.4 KM");
}
int main()
{
    int menu_choice;

	printf("\t\t\t\t======================================================\n");delay(150);
	printf("\t\t\t\t=    |                                          |    =\n");delay(150);
	printf("\t\t\t\t=   |        -----------------------------       |   =\n");delay(150);
	printf("\t\t\t\t=  |                     WElCOME                  |  =\n");delay(150);
	printf("\t\t\t\t= |          -----------------------------         | =\n");delay(150);
    printf("\t\t\t\t=| Dhaka Mass Rapid Transit Company Limited (DMRTC) |=\n");delay(150);
	printf("\t\t\t\t======================================================\n\n\n");
    printf("\t\t\t\t");
    delay(650);
    printf("\n\n\t\t\t\tPress any key to Enter Menu.\n\n");
    printf("\t\t\t\t");
    getch();
	printf("\n\t\t\t\tEntering Menu");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
    system("cls");

    start:

    printf("\t\t\t\t\t---------------------------------\n");
	printf("\t\t\t\t\t     TICKET RESERVATION MENU    \n");
	printf("\t\t\t\t\t---------------------------------\n");
	printf("\n\t\t\t\t\t1-> Buy Ticket.\n");
	printf("\t\t\t\t\t---------------\n");
	printf("\t\t\t\t\t2-> Station Details.\n");
	printf("\t\t\t\t\t--------------------\n");
	printf("\t\t\t\t\t3-> Help.\n");
	printf("\t\t\t\t\t---------\n");
	printf("\t\t\t\t\t4-> Exit.\n");
	printf("\t\t\t\t\t---------\n");
	printf("\n\t\t\t\t\t--> ");
	scanf("\t\t\t\t\t%d",&menu_choice);

	switch(menu_choice)
	{
		case 1:
		    printf("\n\n\t\t\t\t\tEntering");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
			ticket();
			break;
		case 2:
		    printf("\n\n\t\t\t\t\tEntering Details.");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
			viewdetails();
			printf("\n\n\n\t\t\t\t\tPress any key to go to Main Menu.\n");
			printf("\t\t\t\t\t");getch();
			printf("\n\n\t\t\t\t\tReturning to Main Menu.");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
			system("cls");
			break;
		case 3:
		    printf("\n\n\t\t\t\t\tEntering Help.");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
		    system("cls");
            printf("\t\t\t\t\t---------------------------------\n");
            printf("\t\t\t\t\t               HELP    \n");
            printf("\t\t\t\t\t---------------------------------\n");
			printf("\n\n\n\t\t\t\t\tFor Help Please Call xxxxxx.\n");
			printf("\t\t\t\t\t");
			delay(3500);
			printf("\n\n\n\t\t\t\t\tPress any key to go to Main Menu.\n");
			printf("\t\t\t\t\t");getch();
			printf("\n\n\t\t\t\t\tReturning to Main Menu.");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
			system("cls");
			break;
		case 4:
		    printf("\n\n\t\t\t\t\tExiting");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\tThank You.\n\n\n\n\n");

			return(0);
		default:
		    printf("\t\t\t\t\tProcessing");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
			printf("\n\t\t\t\t\tInvalid choice");
			delay(2500);
			printf("\n\n\t\t\t\t\tReturning to Main Menu.\n\n");
			printf("\t\t\t\t\tProcessing");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");delay(150);printf("..");printf("..");
			system("cls");
	}

	goto start;

return 0;
}

