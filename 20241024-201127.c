#include <stdio.h>
#include <stdbool.h>
int main() {
int math;
int programing;
int discrete;
int organization;
int ict;
//ENTER SCORE PER UNIT
printf ("Enter your mathematics score\n");

scanf ("%d", &math);
printf ("Enter your programing score\n"); 
scanf ("%d",& programing);
printf("enter your discrete score\n");
scanf ("%d", &discrete);
printf ("Enter your organization score\n");
scanf ("%d",& organization);
printf ("enteryourict score\n");
scanf ("%d", &ict);
//TOTAL CALCULATION
int total=(math+programing+discrete+organization+ict);
int score =total/5;
//MEAN/AVERAGING 
printf ("YOUR SCORE IS \n%d" , score);
//GRADING SYSTEM
    if (score >= 70&&score<=100) {
        printf("EXCELLENT!\nYOUR GRADE IS A\n");
    }
    else if (score>=60&&score<=69){
    printf("VERRY GOOD\n YOUR GRADE IS B");
    }
    else if(score>=50&&score<=59){
    printf ("Average performance \nyour grade is C");
    }
    else if (score>=40&&score<=49) {
    printf("Bellow average \nyour grade is D");
    }
    else if (score>=0&&score<=39)
    {
    printf("poor performance\n your grade is E");
    }
    else {
        printf("Invalid score\n enter the correct score");
    }













return 0;
    }