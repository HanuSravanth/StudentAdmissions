#include <stdio.h>
#include <stdlib.h>
#include "students.h"
#include <assert.h>


void test_new_student()
{
    Student std = new_student("hanu","ML","hanu111@gmail.com",659,68);
    printf(std.name);
    printf(std.program);
    //printf(std.uggrade);
    //assert (std.name == "hanu");
    //assert (std.program == "ML");
}

void test_admission_status()
{

}

void test_program_seats()
{
    Program pg = program_seats(40, 40, 40);
    assert (pg.machine_learning_seats == 40);
    assert (pg.bda_seats_filled == 0);
    assert(filled_seats(pg, "ML") == 0);
}

void test_allot_seat()
{

}

void test_count_applications()
{

}

void test_filled_seats()
{

}


int main()
{
    //printf("Student admissions!\n");
    test_new_student();
    //test_admission_status();
    //test_program_seats();
    //test_allot_seat();
    //test_count_applications();
    //test_filled_seats();
    //test_allot_wait_list();
    //printf("All test cases executed!");
    return 0;
}
