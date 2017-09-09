#include<stdio.h>
#include<string.h>
#define LEN 40
#define STR_CON struct contact
#define LIST struct list

enum class {friend,family,schoolmate};

struct contact{
	char name[LEN],company[LEN];address[LEN],email[LEN];
	char mobile[15],telephone[15],QQ[15];
	enum class label;

};

struct list{
	struct contact *sc;
	int size;
	int Maxsize;
};

void init(LIST *pt,int ms);
void manual_input(LIST *pt);
void file_input(LIST *pt);
void find(LIST *pt);
void delete(LIST *pt,char );
void alter(LIST *pt,char );
void output(LIST *pt,char );
