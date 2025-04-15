//example of Structure

#include<stdio.h>
struct Student{
	int roll;
	char name[10];
	float marks;
};
	void show(struct Student s);
	void get(struct Student *p);
int main(){
	struct Student s1,s2;
	get(&s1);
	show(s1);
	
	return 0;
}

	void show(struct Student s){
	printf("\nRoll=%d \nName=%s \nMarks=%.2f",s.roll,s.name,s.marks);
	}
	
	void get(struct Student *p){
		printf("Give roll,name,marks:\n");
			scanf("%d",&p->roll);
			scanf("%s",&p->name);
			scanf("%f",&p->marks);
	}

