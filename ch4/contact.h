#ifndef _CONTACT_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<curses.h>   // int clear(void);
#define LEN 40
#define STR_CON struct contact
#define LIST struct list
enum class {friend,family,schoolmate};

struct contact{
	char name[LEN],company[LEN],address[LEN],email[LEN];
	char mobile[15],telephone[15],QQ[15];
	enum class label;

};

struct list{
	struct contact *sc;
	int size;
	int Maxsize;
};

void init(LIST *pt,int ms);
void clearlist(LIST *pt);
void manual_input(LIST *pt);
void file_input(LIST *pt);
void find(LIST *pt);
void delete(LIST *pt);
void change(LIST *pt);
void output(LIST *pt);
char get_choice(void);
char get_first(void);

#endif //! _CONTACT_H
