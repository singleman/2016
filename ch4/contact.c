#include"contact.h"

int main()
{
	LIST pt;
	int choice;
	void (*pfun)(LIST *);  //pointer to a function 14.16
	init(&pt,10);
	while((choice = get_choice()) != 'q')
	{
		switch(choice)
		{
			case 'a':
				  break;
			case 'c':
				  break;
			case 'd':
				  break;
			case 'f':
				  break;
			case 's':
				  break;
			case 'l': 
				  break;
			default : printf("Program error\n");
				  break;
		}
		system("clear");	//this work!
		//clear();
		//pfun(&pt);
		//clear();
	}
	
	printf("ByeBye~see you later\n");
	clearlist(&pt);
	return 0;
}
