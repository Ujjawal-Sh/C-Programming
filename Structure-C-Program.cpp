#include<iostream>
#include<string.h>
   struct person
   {
     int id;
     char name[20];
     int salary;	
   };
   int main(){
   	struct person p1;
   	p1.id=1;
   	strcpy(p1.name,"sam");
   	p1.salary=1000;
   	printf("id of person is %id\n",p1.id);
   	printf("name of person is %s\n",p1.name);
   	printf("salary of person is %d\n",p1.salary);
   }
