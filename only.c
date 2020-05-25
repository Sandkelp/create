#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

float engagementCalc(int a, int b); //initializes the engagment calc
int sum;
float pay;
int main(void){

    int i;
    string name = get_string("What is your name?: \n");
    printf("Hello %s welcome to Sankalp's explore task. This program figures out how much you could make as an instagram influencer. \n", name); //introduces the user

    int followers = get_int("How many followers do you have?: ");//get the number of followers

    int likes[3];//defines the array of likes

    printf("\nEnter the number of likes on your last three (hit enter after each number): ");// askes the user for their number of likes

    //using a for loop to store numbers in an array
    for(i = 0; i < 3; i++){

    scanf("%d", &likes[i]);//stores each value that the user gave as an individual value in the array likes
    }

    for( i = 0; i < 3; i ++){

     sum = sum + likes[i];// adds all of the values in the likes array

    }
   float engagement = engagementCalc(sum, followers);
   printf("eng = %.2f\n", engagement);

if (engagement < 3){ //sees if the user has low engament so the money will be less
    if (followers < 1000000){//checks if the user has a small account which means they have a small account but a
     pay = (followers * engagement) / 10000; //formula for small account
    }
    else{
    pay = (followers * engagement) / 1000;// calculates the pay if the user has a very large account
    }
}
else{
    if(followers < 5000){
        pay = (followers * engagement) / 3000; //formula for small account with a large engagment rate
    }
    else if (followers < 500000){
        pay = (followers * engagement) / 8000; //formula for small account
    }
    else {
        pay = (followers * engagement) / 1000; //formula for small account
    }
}
printf("With %i followers and an engagment rate of %.2f, you could earn $%.2f per post.\n", followers, engagement, pay);




}

float engagementCalc(int a, int b){
    float avgLikes = a / 3;
    float per = (a / b) * 100; // divides the average likes by the number of followers and multiplies it by 100 to get the engagement rate as a percent.
    return per;// returns the percent
}

