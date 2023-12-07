#include<stdio.h>
#include<string.h>
#include<ctype.h>


// MACROS FOR 1ST FUN 
#define khadii 14
#define cotton 10
#define loan   8
// MACROS FOR 2ND FUN
#define electrickettle 25
#define refrigerator   105
#define microwave      98
#define cofeemaker     67
#define blender        55
#define airpurifier    80
// MACROS FOR 3RD FUN 
#define electricable  120
#define lightbulbs    32
#define batteries     104
#define electricfans  46
#define powerstrips   2
#define circuit       6
//MACROS FOR 4TH FUN 
#define puzzle         3
#define videogame      96
#define buildingbock   25
#define cardgame       6
#define remotecontroll 34
#define sciencekit     50
//MACROS FOR 5TH FUN
#define  story        20
#define  philosophy    12
#define  religious    23
#define  historical   45		
#define  political    23
#define  travel       55
//MACROS FOR  6TH  FUN 
#define  pepsi        4
#define  coke         6
#define  mangojuice   23		
#define  soda         12
//fun to fun 
#define  boomroll     14
#define  donuts       26
#define  pizza        45
#define  zinger       36		
 
//FUNCTION PROTOTYPES
float  fashion();
float  homeappliance();
float  electronic();
float  toygame();
float  book();
float  food();
float  grandtotal(float total1,float total2,float total3,float total4,float total5,float total6);
void   confirmation(int order,char ownname[40],char cousname[40],float total1,float total2,float total3,float total4,float total5,float total6);
void  adminpanel();
void  employdata();
void  markAttendance();
void  viewAttendance();
void employdata();

int   main()
{
    int choice,order,n;
    
    float total1=0,total2=0,total3=0,total4=0,total5=0,total6=0;
    char ownname[40], cousname[40];
    printf("\t-----WELCOME TO THE HBK SUPERSTORE---- \n ");             // FUNCTION DISPLAY 
    printf("\t 1) FOR ADMIN PANEL \n ");
    printf("\t 2) FOR COUSTOMER \n ");
    printf("\t ENTER YOUR CHOICE  \n ");
    scanf("%d",&n);
      
        
      
    switch(n)
    {
    case 1:
             adminpanel();
    break;
    
    case 2:
    do
    {
        printf("\t\t HBK PRODUCT CATALOG  \n ");                         // ALL CATALOG DISPLAY 
 
        printf("1) FASHION--                 \n ");
        printf("2) HOME APPLIANCES--         \n ");
        printf("3) ELECTRONICS--             \n ");
        printf("4) TOYS AND GAMES--          \n ");
        printf("5) BOOKS--                   \n ");
        printf("6) FOOD-CORNER--        \n ");
        printf("0)CHECK OUT\n");
        printf("\t\t--ENTER YOUR CHOICE -----\n ");
        scanf("%d", &choice);
          if (isalpha(choice)) {
            printf("Invalid input. Please enter a number.\n");
            break;
        }

        switch (choice)
        {
        case 1:
            total1+=fashion();
            break;

        case 2:
           total2+=homeappliance();
            break;

        case 3:
            total3+=electronic();
            break;

        case 4:
            total4+=toygame();   
            break;

        case 5:
            total5+=book();
            break;

        case 6:
           total6+=food();
            break;
       

        case 0:
       
           printf("ENTER THE ORDER NO \n\n");
            scanf("%d", &order);
            printf("ENTER THE CASHIER NAME \n\n");
            scanf("%s", ownname);
            getchar();
            
             printf("ENTER THE COUSTOMER  NAME \n\n");
            scanf("%s", cousname);
            getchar();  
             
            confirmation(order, ownname,cousname, total1, total2, total3, total4, total5, total6);

            break;

        default:
            printf("\t\tPLEASE CHECK YOUR CHOICE!!!! \n ");
            break;
        }
        
        printf("\n");
    } while (choice != 0);
   break;
    return 0;
}
}
                       /// all functions according to catalog


float fashion() {
    int choice;
    float total1 = 0;

    do {
        printf("\t--FASHION/DRESS CATALOG AVAILABLE FOR YOU---  \n");
        printf("1) KHADI  ($%d)\n", khadii);
        printf("2) COTTON ($%d)\n", cotton);
        printf("3) LOAN   ($%d)\n", loan);
        printf("0)BACK TO MAIN MENU\n");

        scanf("%d", &choice);

        if (isalpha(choice)) {
            printf("Invalid input. Please enter a number.\n");
            break;
        }

        if (choice == 1) {
            printf("\nKAHDI-(CLOTHES) WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO CART \n\n", khadii);
            total1 += khadii;
        } else if (choice == 2) {
            printf("COTTON-(CLOTHES) WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO CART \n\n", cotton);
            total1 += cotton;
        } else if (choice == 3) {
            printf("LOAN-(CLOTHES) WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO CART \n\n", loan);
            total1 += loan;
        } else if (choice == 0) {
            printf("BACK TO THE MAIN MENU...\n");
        } else {
            printf("\t--SORRY, THIS CHOICE IS NOT AVAILABLE--\n\n");
            break;
        }

    } while (choice != 0);

    return total1;
}


   
   
                          
float  homeappliance()            // 2nd function
{
    int choice;
    float total2=0;
    do
    {
        printf("\t--HOMEAPPLIANCE CATALOG AVAILABLE FOR YOU---  \n");
        printf("1)ELECTRIC KETTLE ($%d)\n",electrickettle);
        printf("2) REFRIGERATER   ($%d)\n",refrigerator);
        printf("3) MICROWAVE OVEN ($%d)\n",microwave);
        printf("4) COFEE MAKER    ($%d)\n",cofeemaker);
        printf("5) BLENDER        ($%d)\n",blender);
        printf("6) AIR PURIFIER   ($%d)\n",airpurifier);
        printf("0)BACK TO MAIN MENU\n");
        scanf("%d", &choice);
        if (isalpha(choice)) {
            printf("Invalid input. Please enter a number.\n");
            break;
        }

        switch (choice)
        {
        case 1:
            printf("ELECTRIC-KETTLE WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n",electrickettle);
            total2+=electrickettle;
            break;
        case 2:
            printf("REFRIGERATOR WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n",refrigerator);
            total2+=refrigerator;
            break;
        case 3:
            printf("MICROWAVE WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO TOUR CART \n\n",microwave);
            total2+=microwave;
            break;
         case 4:
            printf("COFEE MAKERR WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n",cofeemaker);
            total2+=cofeemaker;
            break;
         case 5:
            printf("BLENDER WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n",blender);
            total2+=blender;
            break;
          case 6:
            printf("AIR-PURIFIER WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n",airpurifier);
            total2+=airpurifier;
            break;     
          case 0:
                printf("BACK TO THE MAIN MENU...\n");
                break;
          default:
                printf("\t--SORRY, THIS CHOICE IS NOT AVAILABLE--\n\n");
                break;
        }
      }
     while (choice != 0);
    return total2;
}



float electronic()           //3Rd function
{
    int choice;
    float total3=0;
    do
    {
        printf("\t--ELECTRONICS PRODUCTS AVAILABLE FOR YOU---  \n");
        printf("1) ELECTRIC CABLES   ($%d)\n",electricable);
        printf("2) LIGHT BULBS       ($%d)\n",lightbulbs);
        printf("3) BATTERIES         ($%d)\n",batteries);
        printf("4) ELECTRIC FANS     ($%d)\n",electricfans);
        printf("5) POWER STRIPS      ($%d)\n",powerstrips);
        printf("6) CIRCUIT/BREAKERS  ($%d)\n",circuit);
        printf("0)BACK TO MAIN MENU\n");
        scanf("%d", &choice);
        if (isalpha(choice)) {
            printf("Invalid input. Please enter a number.\n");
            break;
        }

        switch (choice)
        {
        case 1:
            printf("ELECTRIC-CABLE WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n",electricable);
             total3+=electricable;
            break;
        case 2:
            printf("LIGHT BULB WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n",lightbulbs);
            total3+=lightbulbs;
            break;
        case 3:
            printf("BATTERIES WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO TOUR CART \n\n",batteries);
            total3+=batteries;
            break;
         case 4:
            printf("ELECTRIC FANS WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n",electricfans);
            total3+=electricfans;
            break;
         case 5:
            printf("POWER STRIPS WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n",powerstrips);
            total3+=powerstrips;
            break;
          case 6:
            printf("CIRCUIT/BREAKERS WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n",circuit);
            total3+=circuit;
            break;     
          case 0:
                printf("BACK TO THE MAIN MENU...\n");
                break;
            default:
                printf("\t--SORRY, THIS CHOICE IS NOT AVAILABLE--\n\n");
                break;
        }
      }
     while (choice != 0);
     return total3;
}

float toygame()      //4th function
{
    int choice;
    float total4=0;
    do
    {
        printf("\t--TOY&GAMES PRODUCTS AVAILABLE FOR YOU---  \n");
        printf("1) PUZZLES             ($%d)\n",puzzle);
        printf("2) VIDEO GAMES         ($%d)\n",videogame);
        printf("3) BUILDING -BLOCKS    ($%d)\n",buildingbock);
        printf("4) CARD GAMES          ($%d)\n",cardgame);
        printf("5) REMOTE-CONTROLLED   ($%d)\n",remotecontroll);
        printf("6) SCIENCE KITS        ($%d)\n",sciencekit);
        printf("0)BACK TO MAIN MENU\n");
        
        scanf("%d", &choice);
          if (isalpha(choice)) {
            printf("Invalid input. Please enter a number.\n");
            break;
        }

        switch (choice)
        {
        case 1:
            printf("PUZZLE GAME WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n",puzzle);
            total4+=puzzle;
            break;
        case 2:
            printf("VIDEO GAMES WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n",videogame);
             total4+=videogame;
            break;
        case 3:
            printf("BUILDING BLOCK (PRICE : $%d) IS SUCCESSFULLY ADDED TO TOUR CART \n",buildingbock);
             total4+=buildingbock;
            break;
         case 4:
            printf("CARD GAMES WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n",cardgame);
             total4+=cardgame;
            break;
         case 5:
            printf("REMOTE-CONTROLLED(CARS) WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n",remotecontroll);
             total4+=remotecontroll;
            break;
        case 6:
            printf("SCIENCE-KITS WITH (PRICE : $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n",sciencekit);
             total4+=sciencekit;
            break;     
        case 0:
                printf("BACK TO THE MAIN MENU...\n");
         break;
         default:
                printf("\t--SORRY, THIS CHOICE IS NOT AVAILABLE--\n\n");
          break;
        }
      }
     while (choice != 0);
     return total4;
}


float  book()     //5th function 
{
    int choice;
    float total5=0;

    do {
        printf("\n\t---BOOKS AVAILABLE FOR YOU---  \n");
        printf("1) STORY        ($%d)\n", story);
        printf("2) PHILOSOPHY    ($%d)\n", philosophy);
        printf("3) RELIGIOUS    ($%d)\n", religious);
        printf("4) HISTORICAL   ($%d)\n", historical);
        printf("5) POLITICAL    ($%d)\n", political);
        printf("6) SCIENCE-KITS  ($%d)\n", travel);
        printf("0) BACK TO MAIN MENU\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
          if (isalpha(choice)) {
            printf("Invalid input. Please enter a number.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("STORY BOOKS WITH (PRICE: $%d) SUCCESSFULLY ADDED TO YOUR CART\n", story);
                total5+=story;
                break;
            case 2:
                printf("PHILOSOPHY BOOKS WITH (PRICE: $%d) SUCCESSFULLY ADDED TO YOUR CART\n", philosophy);
                 total5+= philosophy;
                break;
            case 3:
                printf("RELIGIOUS BOOKS WITH (PRICE: $%d) SUCCESSFULLY ADDED TO YOUR CART\n", religious);
                 total5+=religious;
                break;
            case 4:
                printf("HISTORICAL BOOKS WITH (PRICE: $%d) SUCCESSFULLY ADDED TO YOUR CART\n", historical);
                 total5+=historical;
                break;
            case 5:
                printf("POLITICAL BOOKS WITH (PRICE: $%d) SUCCESSFULLY ADDED TO YOUR CART\n", political);
                 total5+=political;
                break;
            case 6:
                printf("SCIENCE-KITS WITH (PRICE: $%d) SUCCESSFULLY ADDED TO YOUR CART\n", travel);
                 total5+=travel;
                break;
            case 0:
                printf("BACK TO THE MAIN MENU...\n");
                break;
            default:
                printf("\t--SORRY, THIS CHOICE IS NOT AVAILABLE--\n\n");
                break;
        }
      }
     while (choice != 0);
     return total5;
}



float  food()   // 6TH FUNCTION
{
    int choice, choice1, choice2;
    float total6=0;
    do
    {
        printf("\t --FOOD-CORNER--  \n");

        printf(" YOU WANNA BUY***\n");
        printf("1)DRINKS \n");
        printf("2)FAST-FOOD \n");
        printf("0)BACK TO MAIN MENU\n");
        printf("PLEASE ENTER YOUR CHOICE \n");

        scanf("%d", &choice);
          if (isalpha(choice)) {
            printf("Invalid input. Please enter a number.\n");
            break;
        }

        switch (choice)
        {
        case 1: // FOR COLD DRINKS
            do
            {
                printf("--AVAILABLE COLD-DRINKS & JUICES \n\n");
                printf("1)PEPSI       ($%d)\n", pepsi);
                printf("2)COKE        ($%d)\n", coke);
                printf("3)MANGO-JUICE ($%d)\n", mangojuice);
                printf("4)SODA        ($%d)\n", soda);
                printf("0)BACK TO MAIN MENU\n");
                printf("ENTER YOUR CHOICE \n\n");
                scanf("%d", &choice1);
                if (isalpha(choice)) {
                printf("Invalid input. Please enter a number.\n");
                break;
                }

                switch (choice1)
                {
                case 1:
                    printf("PEPSI WITH (PRICE: $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n", pepsi);
                    total6+=pepsi;
                    break;
                case 2:
                    printf("COKE WITH (PRICE: $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n", coke);
                    total6+=coke;
                    break;
                case 3:
                    printf("MANGO-JUICE WITH (PRICE: $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n", mangojuice);
                    total6+=mangojuice;
                    break;
                case 4:
                    printf("SODA  WITH (PRICE: $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n", soda);
                    total6+=soda;
                    break;
                case 0:
                    break; // Exit the inner loop
                default:
                    printf(" --I'M SORRY, THE ONLY DRINKS AND JUICES ARE AVAILABLE!! \n\n");
                }
            } while (choice1 != 0);
            break;

        case 2: // FOR FAST FOOD
            do
            {
                printf("--AVAILABLE FAST FOOD  \n\n");
                printf("1)BOOM-ROLL ($%d) \n", boomroll);
                printf("2)DONUTS    ($%d)\n", donuts);
                printf("3)PIZZA     ($%d)\n", pizza);
                printf("4)ZINGER    ($%d)\n", zinger);
                printf("0)BACK TO MAIN MENU\n");
                printf("ENTER YOUR CHOICE \n\n");
                scanf("%d", &choice2);
                  if (isalpha(choice)) {
            printf("Invalid input. Please enter a number.\n");
            break;
        }

                switch (choice2)
                {
                case 1:
                    printf("BOOM-ROLL WITH (PRICE: $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n", boomroll);
                    total6+=boomroll;
                    break;
                case 2:
                    printf("DONUTS WITH (PRICE: $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n", donuts);
                    total6+=donuts;
                    break;
                case 3:
                    printf("PIZZA WITH (PRICE: $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n", pizza);
                    total6+=pizza;
                    break;
                case 4:
                    printf("ZINGER  WITH (PRICE: $%d) IS SUCCESSFULLY ADDED TO YOUR CART \n\n", zinger);
                    total6+=zinger;
                    break;
                case 0:
                    break;                         //  where i exit the programm 
                default:
                    printf("\t--I'M SORRY, THE ONLY FAST FOODS ARE AVAILABLE!! \n\n");
                }
            } while (choice2!= 0);
            break;

        case 0:
            printf("Exiting the food corner.\n");         // where i exit the main 
            break;

        default:
            printf("--I'M SORRY, THE ONLY DRINKS AND FAST FOODS ARE AVAILABLE \n\n");
        }
    } while (choice!= 0);
    return total6;
}






float grandtotal(float total1,float total2,float total3,float total4,float total5,float total6)
{
float add;
add=total1+total2+total3+total4+total5+total6;
return add;
}








void confirmation(int order, char ownname[40], char cousname[40],float total1, float total2, float total3, float total4, float total5, float total6)
{
    float add, dis,dis1;

    printf("\t\t  ORDER CONFIRMATION \n");
    printf("\t\t     HBK SUPERMART  \n\n");

    printf("\tADDRESS: HBK SUPERSTORE MAIN RING ROAD OPP KABIR'S RESTAURANT  (PWR) \n\n");
    printf("\t--ORDERNO#  %d\n", order);
    printf("\t--CASHIER NAME : %s\n",ownname);
    printf("\t--COUSTOMER NAME : %s\n\n",cousname);
    
    printf("\t DESCRIPTION    \t\t   TOTAL \n\n");
    printf("\t FASHION        \t\t   $%.2f \n", total1);
    printf("\t HOME APPLIANCES\t\t   $%.2f \n", total2);
    printf("\t ELECTRONICS    \t\t   $%.2f \n", total3);
    printf("\t TOYS AND GAMES \t\t   $%.2f \n", total4);
    printf("\t BOOKS          \t\t   $%.2f \n", total5);
    printf("\t FOOD CORNER    \t\t   $%.2f \n\n", total6);

    add = total1 + total2 + total3 + total4 + total5 + total6;

    if (add > 500)
    {
        dis = add * 0.15;
       
    }
    else
    {
    
        dis = 0;
    }
    
    printf("\t DISCOUNT       \t\t   $%.2f \n", dis);
    printf("\t GRAND TOTAL    \t\t   $%.2f \n\n", add);
    printf("\t ***THANK YOU FOR SHOPPING WITH US***");

    
}
             
           



void adminpanel() {
    int a = 0, choice = -1;  // Initialize choice to -1
    char user_n[10];
    char pass_n[10];
    char user[10] = "user";
    char pass[10] = "pass";
    
    do {
        printf("------------------------ LOGIN FORM ----------------------------\n");
        printf("ENTER USERNAME:- ");
        scanf("%s", user_n);
        printf("ENTER PASSWORD:- ");
        scanf("%s", pass_n);

        if (strcmp(user_n, user) == 0 && strcmp(pass_n, pass) == 0) {
            printf("\n\n\nWELCOME !!!! LOGIN IS SUCCESSFUL\n");

            while (choice != 0) {
                printf("\n\t\t------ ADMIN PORTAL---- \n\n");
                printf("1) EMPLOY DATA\n");
                printf("2) MANAGE ATTENDANCE\n");
                printf("0) EXIT\n");
                printf("ENTER YOUR CHOICE: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        employdata();
                        break;

                    case 2:
                        markAttendance();
                        viewAttendance();
                        break;

                    case 0:
                        printf("EXITING THE PROGRAM\n");
                        break;

                    default:
                        printf("\nInvalid choice. Please enter a valid option.\n");
                        break;
                }
            }
            // Break the outer loop when choice is 0
            break;
        } else {
            printf("\nSORRY !!!! LOGIN IS UNSUCCESSFUL\n");
            a++;
        }

    } while (a < 2);
}



       
      

void employdata()
{
   printf("\t\t----EMPLOY DATA----\n");              
printf("\t*    NAME  \t PHno  \t EMPLOY ID \tADDRESS\n");
printf("\t1)   ALI   \t 32**  \t 4321      \t PWR\n");
printf("\t2)   AQIB  \t 92**  \t 6542      \t LAH\n");
printf("\t3)   AWAIS \t 98**  \t 9876      \t KAR\n");
printf("\t4)   DAWOOD\t 90**  \t 7865      \t LAH\n");
printf("\t5)   AKMAL \t 32**  \t 5432      \t PWR\n");
printf("\t6)   SAFI  \t 43**  \t 3245      \t RWP\n");

}





void markAttendance() {
    char employees[6];

    // Open the file in write mode to mark attendance
    FILE *ptr = fopen("employ.txt", "w");

    if (ptr != NULL) {
        // Mark attendance for each employee
        for (int i = 0; i < 6; i++) {
            printf("Enter attendance for Employee %d (P for present, A for absent): ", i + 1);
            scanf(" %c", &employees[i]);

            // Check for valid input
            if ((employees[i] != 'a' && employees[i] != 'A') && (employees[i] != 'p' && employees[i] != 'P')) {
                printf("INVALID INPUT: Please enter 'A' or 'P'.\n");
                i--; // Decrement i to re-enter attendance for the current employee
            } else {
                fprintf(ptr, "%c ", employees[i]); // Write to the file
            }
        }

        fclose(ptr); // Close the file
    } else {
        printf("Error opening the file for writing.\n");
    }
}

void viewAttendance() {
    char employees[6];

    // Open the file in read mode to view attendance
    FILE *ptr = fopen("employ.txt", "r");

    if (ptr != NULL) {
        // Read attendance for each employee
        for (int i = 0; i < 6; i++) {
            fscanf(ptr, " %c", &employees[i]); // Note the space before %c to skip leading whitespace
            printf("Employee %d: %c\n", i + 1, employees[i]);
        }

        fclose(ptr); // Close the file
    } else {
        printf("Error opening the file for reading.\n");
    }
}




























             
