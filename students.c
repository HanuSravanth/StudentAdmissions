#include "students.h"
#include <assert.h>
#include <string.h>

Program pgm;

Student new_student(char name[], char program[], char email[], int32_t stdrank, float uggrade[])
{
    //Student std = {*name[], *program[], *email[], stdrank, 0, uggrade, "none"};

    Student std;
    Student std1;
    strcpy(std.name, name);
    strcpy(std.program, program);
    strcpy(std.email, email);
    std.stdrank = stdrank;
    std.regnumber = 0;
    //std.uggrade = uggrade;
    strcpy(std.status,"procesng");
    std1 = allot_seat(std);
    return std1;
}

const char* admission_status(Student std)
{
    return std.status;
}

// provision for administrator to initialize number of seats in each program
Program program_seats(int8_t ml, int8_t bda, int8_t es)
{
    Program prg = {ml, bda, es, 0, 0, 0, 201051000, 201046000, 20215000};
    return prg;
}


// provision to allot seats based on entrance test rank
Student allot_seat(Student std)
{
    count_applications();
        if ( std.uggrade < 5.0 )
    {
        strcpy(std.status,"rejected");
    }
    else if ( std.uggrade >= 5.0 )
    {
        filled_seats(std.program[]);

        if (!strcmp(program, "ML"))
        {
            if pgm.ml_seats_filled < pgm.machine_learning_seats
            {
                pgm.emb_regnum += 1;
                pgm.ml_seats_filled +=1;
                std.regnumber = pgm.emb_regnum;
            }
            else
            {
             strcpy(std.status,"waiting");
            }
        }
        else if (!strcmp(program, "BDA"))
        {
            if pgm.bda_seats_filled < pgm.bigdata_seats
            {
                pgm.bda_regnum += 1;
                pgm.bda_seats_filled +=1;
                std.regnumber = pgm.bda_regnum;
            }
            else
            {
             strcpy(std.status,"waiting");
            }
        }
        else if (!strcmp(program, "ES"))
        {
            if pgm.es_seats_filled < pgm.embedded_seats
            {
                pgm.emb_regnum += 1;
                pgm.es_seats_filled +=1;
                std.regnumber = pgm.es_regnum;
            }
            else
            {
             strcpy(std.status,"waiting");
            }
        }
        else
        {
             strcpy(std.status,"nobranch");
        }

        strcpy(std.status,"admitted");
    }


    return std;
}


// provision to count number of total applications submitted
int8_t  count_applications()
{
    static int8_t total_applications;
    total_applications++;
    return total_applications;
}


// provision to see seats filled in each program
int8_t  filled_seats(Program pg, char program[])
{
    if (!strcmp(program, "ML"))
        return pg.ml_seats_filled;
    else if (!strcmp(program, "BDA"))
        return pg.bda_seats_filled;
    else if (!strcmp(program, "ES"))
        return pg.es_seats_filled;
    else return 0;
}

// provision to allot seats to waiting list students
Student allot_wait_list()
{

}
