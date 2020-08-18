/*Program Name : program to Start
Author : Mr.Narongsak Singkheaw
Date : 8/18263  
*/
#include<stdio.h>//link from library stdio.h
void message();//funtion prototype declaration section
void cat();//function prototype declaration section

void main(){
    int anlmal=5;//Variable declaration
    printf("Hello World\n");//Executetable part
    printf("%i",anlmal);//Executetable part
    message();
    cat();
}

//Sub function : message
void message(){
    printf("We can take sub function\n");
}

//Sub function : cat 
void cat(){
    printf("I LOVE My cat\n");  
}

