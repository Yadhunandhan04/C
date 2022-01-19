255999999999999999999999999999999999999999999+++++++++++++++++000000000000000000000000000000000000000000/////#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
void creation(); 
void deposit(); 
void withdraw(); 
void balance(); 
int a=0,i=2021;
struct bank 
{ 
    int no; 
    char name[20]; 
    float bal; 
    float dep; 
}s[20]; 
        void main() 
        { 
            int ch; 
            while(1) 
            {   
                printf("\n\t****BANKING****\n");  
                printf("\n1 : Creation"); 
                printf("\n2 : Deposit"); 
                printf("\n3 : Withdraw"); 
                printf("\n4 : Balance Enquiry"); 
                printf("\n5 : Exit"); 
                printf("\n\nEnter any Option : "); 
                scanf("%d",&ch); 
                switch(ch) 
                { 
                    case 1: creation(); 
                        break; 
                    case 2: deposit(); 
                        break; 
                    case 3: withdraw(); 
                        break; 
                    case 4: balance(); 
                        break; 
                    case 5: exit(0); 
                        defalut:printf("Thankyou for Banking in our Bank"); 
                } 
            } 
        }
        void creation()
        {  
            printf("\n****ACCOUNT CREATION****");  
            printf("\nYour Account Number is : %d",i); 
            s[a].no = i; 
            printf("\nEnter your Name : "); 
            scanf("%s",s[a].name); 
            printf("Your Minimum Deposit is 500"); 
            s[a].dep=500;
            a++;
            i++;
            printf("\n\nYour Account is created successfully");
        } 
        void deposit() 
        { 
            int no,b=0,m=0; 
            float A; 
            printf("\n****DEPOSIT****"); 
            printf("\nEnter your Account Number : "); 
            scanf("%d",&no); 
            for(b=0;b<i;b++) 
            { 
                if(s[b].no == no) 
                m=b;
            }
            if(s[m].no == no) 
            { 
                printf("\nAccount Number : %d",s[m].no); 
                printf("\nName : %s",s[m].name); 
                printf("\nDeposit : %.2f",s[m].dep); 
                printf("\nEnter how much to deposit now : "); 
                scanf("%f",&A);
                s[m].dep+=A; 
                printf("Deposited Amount is : %.2f",s[m].dep); 
            } 
            else 
            { 
                printf("\nACCOUNT NUMBER IS INVALID"); 
            } 
        } 
        void withdraw() 
        { 
            int no,b=0,m=0; 
            float A;  
            printf("\n****WITHDRAW****"); 
            printf("\nEnter your Account Number : "); 
            scanf("%d",&no); 
            for(b=0;b<i;b++) 
            { 
                if(s[b].no == no) 
                m=b; 
            } 
            if(s[m].no == no) 
            { 
                printf("\n Account Number : %d",s[m].no); 
                printf("\n Name : %s",s[m].name);
                printf("\n Deposit : %.2f",s[m].dep); 
                printf("\n Enter Withdraw Amount : "); 
                scanf("%f",&A); 
                if(s[m].dep<A+500)
                {
                    printf("\nCANNOT WITHDRAW, YOUR ACCOUNT HAS MINIMUM BALANCE"); 
                } 
                else
                { 
                    s[m].dep-=A; 
                    printf("\nThe Balance Amount is : %.2f",s[m].dep); 
                } 
            } 
            else 
                { 
                    printf("ACCOUNT NUMBER IS INVALID");
                } 
    
        } 
        void balance() 
        { 
            int no,b=0,m=0; 
            float A;
            printf("\n****BALANCE ENQUIRY****"); 
            printf("\nEnter your Account Number : "); 
            scanf("%d",&no); 
            for(b=0;b<i;b++)        
            { 
                if(s[b].no == no) 
                m=b; 
            } 
            if(s[m].no==no) 
            { 
                printf("\nAccount Number : %d",s[m].no); 
                printf("\nName : %s",s[m].name);
                printf("\nBalance : %.2f",s[m].dep); 
            } 
            else 
            { 
                printf("ACCOUNT NUMBER IS INVALID");
            } 
        }