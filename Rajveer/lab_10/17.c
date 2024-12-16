/*
Create an enum to represent traffic light signals (e.g., RED, YELLOW, GREEN). Write a program that simulates the behavior of a traffic light by displaying the current light and asking the user if they want to proceed or stop.
*/

#include<stdio.h>

typedef enum {
RED,
YELLOW,
GREEN
} TrafficLight;

void main(){

TrafficLight signal = RED;

printf("Numeric value of RED: %d\n", signal); 
if (signal == RED) {
printf("Stop\n");
} else if (signal == YELLOW) {
printf("Caution\n");
} else if (signal == GREEN) {
printf("Go\n");
}

printf("\nName: Rajveer Chaudhari \n");
printf("Roll Number: 202411024\n");

}


