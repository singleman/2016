#include "contact.h"

void init(LIST *pt,int ms)
{
	if(ms < 0)
	{
		printf("Illegal value of ms\n");
		exit(1);
	}	
	pt->Maxsize = ms;
	pt->sc = malloc(ms*sizeof(LIST));
	pt->size = 0;
}

void clearlist(LIST *pt)
{
	if(pt->sc != NULL)
		free(pt->sc);
	pt->size = 0;
	pt->Maxsize = 0;
}

void againMalloc(LIST *pt)
{
	STR_CON *ptemp = realloc(pt->sc,2*pt->Maxsize*sizeof(LIST));
	if(!ptemp)
	{
		printf("no more space to use!\n");
		exit(1);
	}
	pt->sc = ptemp;
	pt->Maxsize = 2*pt->Maxsize;
}

char get_choice(void)
{
	int ch;

	printf("Enter the letter of your choice:\n");
	printf("************************************************\n");
	printf("a. add  new;		c. change a message;\n");
	printf("d. delete some;		f. find someone;\n");
	printf("l. load;		s. save;\n");
	printf("o. other function coming soon;\n");
	printf("q. quit;\n");
	printf("************************************************\n");
	ch = get_first();
	while((ch != 'a' && ch != 'c' && ch != 'd' && ch != 'f' && ch != 'l' && ch != 's' && ch != 'o' && ch != 'q'))
	{
		printf("please respond with the right letter!\n");
		ch = get_first();
	}
	return ch;
}

char get_first(void)
{
	int ch;

	ch = getchar();
	while(getchar() != '\n')
		continue;
	return ch;
}
/*
void init(LIST *pt,int ms)
{
	if(ms < 0)
	{
		printf("Illegal value of ms\n");
		exit(1);
	}	
	pt->Maxsize = ms;
	pt->sc = malloc(ms*sizeof(LIST));
	pt->size = 0;
}

void clearlist(LIST *pt)
{
	if(pt->sc != NULL)
		free(pt->sc);
	pt->size = 0;
	pt->Maxsize = 0;
}

void againMalloc(LIST *pt)
{
	STR_CON *ptemp = realloc(pt->sc,2*pt->Maxsize*sizeof(LIST));
	if(!ptemp)
	{
		printf("no more space to use!\n");
		exit(1);
	}
	pt->sc = ptemp;
	pt->Maxsize = 2*pt->Maxsize;
}


*/
