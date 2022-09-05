//Min Thant Naing
//minthantnaing2111@gmail.com

#include <stdio.h>

//#define party_no_1 "PartyA"
//#define party_no_2 "PartyB"
//#define party_no_3 "PartyC"
//#define party_no_4 "PartyD"
char party_no_1[] = "PartyA\0",
     party_no_2[] = "PartyB\0",
     party_no_3[] = "PartyC\0",
     party_no_4[] = "PartyD\0";

char* Ptr1 = &party_no_1;
char* Ptr2 = &party_no_2;
char* Ptr3 = &party_no_3;
char* Ptr4 = &party_no_4;





int voteCount1 = 0,
    voteCount2 = 0,
    voteCount3 = 0,
    voteCount4 = 0,
    invalidVotes = 0;


int main()
{

    int choice;


    do
    {
        printf("\n\n ******** VOTING System 2022 ********");
        printf("\n\n\t\t 1. Cast the Vote.");
        printf("\n\n\t\t 2. Find the Vote Count.");
        printf("\n\n\t\t 3. Find the Leading Party.");
        printf("\n\n\t\t 0. Exit.");

        printf("\n\n\t Please Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            castVote();
            break;
        case 2:
            votesCount();
            break;
        case 3:
            getLeadingParty();
            break;
        default:
            printf("\n\t\t Error: Invalid Choice !!!");
        }

    }
    while (choice!=0);

    getchar();
}

void castVote()
{

    int choice;

    printf("\n\n\t\tPlease chooose a Party you wanna vote!!!\n ");

    printf("\n\t\t 1. %s", Ptr1);
    printf("\n\t\t 2. %s", Ptr2);
    printf("\n\t\t 3. %s", Ptr3);
    printf("\n\t\t 4. %s", Ptr4);
    printf("\n\t\t 5. %s", "None of the above");

    printf("\n\n\t Input your choice ( 1 - 4 ) : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        voteCount1++;
        break;
    case 2:
        voteCount2++;
        break;
    case 3:
        voteCount3++;
        break;
    case 4:
        voteCount4++;
        break;
    case 5:
        invalidVotes++;
        break;
    default:
        printf(" \n\t\t Error: Wrong Chocie !! Please retry");

        getchar();
    }
    printf(" \n\t\t Thanks for your vote !!");
    ending(80);
}

void votesCount()
{
    printf("\n\n ******** Voting Statics ********");
    printf("\n\t\t %s = %d", party_no_1, voteCount1);
    printf("\n\t\t %s = %d", party_no_2, voteCount2);
    printf("\n\t\t %s = %d", party_no_3, voteCount3);
    printf("\n\t\t %s = %d", party_no_4, voteCount4);
    printf("\n\t\t %s = %d", "Spoiled Votes", invalidVotes);
    ending(80);
}

void getLeadingParty()
{
    //printf("\n \n ******** Leading Party ********");
    if(voteCount1 > voteCount2 && voteCount1 > voteCount3 && voteCount1 > voteCount4)
    {
        printf("\n\t\t*The Leading Party is %s", party_no_1);
    }
    else if(voteCount2 > voteCount1 && voteCount2 > voteCount3 && voteCount2 > voteCount4)
    {
        printf("\n\t\t*The Leading Party is %s", party_no_2);
    }
    else if(voteCount3 > voteCount2 && voteCount3 > voteCount1 && voteCount3 > voteCount4)
    {
        printf("\n\t\t*The Leading Party is %s", party_no_3);
    }
    else if(voteCount4 > voteCount2 && voteCount4> voteCount3 && voteCount4 > voteCount1)
    {
        printf("\n\t\t*The Leading Party is %s", party_no_4);
    }
    else
    {
        printf("\nxxxxxxxx Warning!!!!!!!!! No Win-Win Situation xxxxxxxx");
    }
    ending(80);
}

void ending(count)
{
    printf("\n");
    for(int x=0; x<count; x++)
    {
        printf("-");
    }
}
