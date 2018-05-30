/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TestHeader.h
 * Author: 1elmasriahm
 *
 * Created on May 30, 2018, 11:59 AM
 */

#ifndef TESTHEADER_H
#define TESTHEADER_H

#ifdef __cplusplus
extern "C" {
#endif

int fibonacciSequence(int iterations){
    int a = 0;
    int b = 1;
    int c = 0;
    
    for(int i = 0; i < iterations - 1; i++){
        c = a;
        a += b;
        b = c;
        printf("\n%d", a);
    }
    
    
}


#ifdef __cplusplus
}
#endif

#endif /* TESTHEADER_H */

