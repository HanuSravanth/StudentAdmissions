#include <stdint.h>
#include "app_consts.h"
#ifndef STUDENTS_H_INCLUDED
#define STUDENTS_H_INCLUDED


typedef struct _student_ Student;
struct _student_
{
    char    name[STUDENT_NAME_LEN];
    char    program[PROGRAM_NAME_LEN];
    char    email[STUDENT_EMAIL_LEN];
    int16_t stdrank;
    float   uggrade;
    int32_t regnumber;
    char    status[ADMISSION_STATUS];
};

typedef struct _wait_student_ Wait_Student;
struct _waiting_student_
{
    Student stdudent_details;
    char    program2[PROGRAM_NAME_LEN];
    char    program3[PROGRAM_NAME_LEN];
};

typedef struct _program_ Program;
struct _program_
{
    int8_t  machine_learning_seats;
    int8_t  bigdata_seats;
    int8_t  embedded_seats;

    int8_t  ml_seats_filled;
    int8_t  bda_seats_filled;
    int8_t  es_seats_filled;

    int32_t emb_regnum;
    int32_t ml_regnum;
    int32_t bda_regnum;
};

Student new_student(char name[], char program[], char email[], int32_t stdrank, float uggrade[]);
const char* admission_status(Student std);
Program program_seats(int8_t ml, int8_t bda, int8_t es);
int32_t allot_seat();
//int8_t  count_applications();
int8_t  filled_seats(Program pg, char program[]);
//Student allot_wait_list();

#endif // STUDENTS_H_INCLUDED
