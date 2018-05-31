/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: 1elmasriahm
 *
 * Created on May 30, 2018, 10:31 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "IfMethods.h"
#include <stdbool.h>
//#include "NumericMethods.h"
#include "TestHeader.h"
#include <string.h>
#include "StructuresPractice.h"


/*
 * 
 */
int main(int argc, char** argv) {

//    printf(acidRain(12.0));
    
//    fibonacciSequence(15);
//    //fibonacciSequence(15);
//    bool newMan = false;
//    printf("\n%d", newMan);
//    
//    return (EXIT_SUCCESS);
    
    //Practicing Strings
    
    char name[] = "HI";
    
//    strcpy(name, "Hi There");
    
    printf(name);
    printf("\n%d", sizeof(name[0]));
    
    int finders[12];
    printf("\n%d", acidRain(12.0));
    
    struct user ahmad;
    
    ahmad.age = 12;
    strcpy(ahmad.firstName, "Hi there");
    strcpy(ahmad.lastName, "Hi there");
    ahmad.userID = 2721;
    ahmad.weight = 147.5;
    
    scanf("%s", &name);
    printf(name);
    
    student p;
    p.ager = 16;
}

