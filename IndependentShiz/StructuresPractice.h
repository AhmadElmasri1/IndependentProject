/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StructuresPractice.h
 * Author: ahmad
 *
 * Created on May 30, 2018, 11:50 PM
 */

#ifndef STRUCTURESPRACTICE_H
#define STRUCTURESPRACTICE_H

#ifdef __cplusplus
extern "C" {
#endif

struct user {
    int userID;
    char firstName[25];
    char lastName[25];
    int age;
    float weight;
    
};

typedef struct{
    int ager;
} student;


#ifdef __cplusplus
}
#endif

#endif /* STRUCTURESPRACTICE_H */

