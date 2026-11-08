#include<stdio.h>
int main(){
    struct student{
        int sapid;
        char name[20];
        char Branch[10];
    };
    struct student s1={1001,"Rohit","CSE"};
    struct student *ptr=&s1;
    printf("%d\n",(*ptr).sapid);
    printf("%s\n",(*ptr).name);
    printf("%s\n",(*ptr).Branch);
    return 0;
}
