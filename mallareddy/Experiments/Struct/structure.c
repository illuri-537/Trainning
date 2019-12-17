#include<stdio.h>

struct bank{
	char name[20];
	float balance;
	unsigned int acc_no;

}user[5];

void customer_details()
{	
	printf("Customer Details   : \n");
	int i;
	i=1;
	while(i<=5){
	
		printf("Customer %d Name : %s\n",i,user[i].name);
		i++;
	
	}
}

void customer_balance()
{
	int i;
	i=1;
	while(i<=5){
		if(user[i].balance<1000){
			user[i].balance=user[i].balance - 100;
			printf("Account Number  : %u  \nBalance  : %f\n",user[i].acc_no,user[i].balance);

		}
		else{
			user[i].balance=user[i].balance + 100;
			printf("Account Number  : %u  \nBalance  : %f\n",user[i].acc_no,user[i].balance);

			}
				i++;
	}
}


int main()
{
	int i;
	int ch;
	i=1;
	printf("Bank Details \n  ");
	while(i<=5){
		printf("Enter customer %d name :\n",i);
		fgets(user[i].name,100,stdin);
		printf("Enter customer %d balance :\n",i);
		scanf("%f",&user[i].balance);
		printf("Enter customer %d Account Number :\n",i);
		scanf("%u",&user[i].acc_no);
		i++;
	}
	
	printf("What you want    :      \n1.Name of all the Customer  :    \n2.Balance   :    \n");	
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:	customer_details();
				break;

		case 2:	customer_balance();		
				break;
	
		default: break;
	
	}

	return 0;
}



