#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/**********************************************************************************************************************
 * A fully functional Grading Scale Program.
 * Prompts user for name, course, and user input for homework/test/assignments
 * Asks the user for multiple sections of the class to be weighted and graded.
 * Corrects the percentage if (user input is 35 for 35% or .35 for 35%) It assumes the user does not know any better.
 * Provides up to 5 different sections to be graded and averaged to find your final grade.
 * Program then takes your grade to see if you passed the class on an A-F Grading Scale.
***********************************************************************************************************************/



struct student_Information
        {
    char name_First[0x32];
    char name_Last[0x32];
    char course[0x1E];
    double grade;
        }s;


float Final_Class_Grade()
{

    int homework_grades[0x64], i, n, Total_Homework_Grade_sum = 0x0;
    double User_Input_Homework_Average;
    float homework_weight = 0x1;
    int *ptr;
    ptr = &Total_Homework_Grade_sum;

    printf("Enter your first name: \n");
    scanf("%s", s.name_First);

    printf("Enter your last name: \n");
    scanf("%s", s.name_Last);

    printf("Enter your subject: \n");
    scanf("%s", s.course);

    printf("Enter The Decimal Weight of homework Assignments: \n");
    scanf("%f", &homework_weight);

    if (homework_weight > 0x1)
    {
        homework_weight = homework_weight / 0x64;
    }


    printf("Enter The Number of Homework Assignments: \n");
    scanf("%d", &n);
    printf("Enter The Homework Grades: \n");

    for (i = 0x0; i < n; ++i)
    {
        scanf("%d", &homework_grades[i]);
        *ptr += homework_grades[i];
    }

    User_Input_Homework_Average = (double) *ptr / n;

    double Final_Homework_Avg = User_Input_Homework_Average * homework_weight;


    

    int test_grade[0x64], a, b, Total_Test_Grade_Sum = 0x0;
    double User_Input_Test_Average;
    float Test_Weight = 0x0;

    printf("Enter the Decimal Weight of Tests: \n");
    scanf("%f", &Test_Weight);


    if (Test_Weight > 0x1)
    {
        Test_Weight = Test_Weight / 0x64;
    }


    printf("Enter The Number Of Tests: \n");
    scanf("%d", &b);
    printf("Enter Your Test Grades: \n");

    for (a = 0x0; a < b; ++a)
    {
        scanf("%d", &test_grade[a]);
        Total_Test_Grade_Sum += test_grade[a];
    }

    User_Input_Test_Average = (double) Total_Test_Grade_Sum / b;
    double Final_Test_Avg = User_Input_Test_Average * Test_Weight;

    double Complete_Weighted_2_Sections = Final_Homework_Avg + Final_Test_Avg;


    // This adds a third section to be weighted.
    int Misc_Grade_Array[0x64], c, d, Total_Misc_Grade_Sum = 0x0;
    double User_Input_Misc_Average;
    float Misc_Weight = 0x0;
    int f, g, h = 0x0;
    bool temp = true;
    printf("Do you need to add another section to be weighed?\n");
    printf("1.) Yes     2.) No      (Type 1 OR 2): \n");
    scanf("%d", &f);
    if (f == temp)
    {
        printf("Enter the Decimal Weight of Misc Section: \n");
        scanf("%f", &Misc_Weight);



        if (Misc_Weight > 0x1)
        {
            Misc_Weight = Misc_Weight / 0x64;
        }



        printf("Enter The Number Of Misc Items: \n");
        scanf("%d", &d);
        printf("Enter Your Misc Grades: \n");

        for (c = 0x0; c < d; ++c)
        {
            scanf("%d", &Misc_Grade_Array[c]);
            Total_Misc_Grade_Sum += Misc_Grade_Array[c];
        }

        User_Input_Misc_Average = (double) Total_Misc_Grade_Sum / d;
        double Final_Misc_Avg = User_Input_Misc_Average * Misc_Weight;
        double Complete_Weighted_3_Sections = (Final_Homework_Avg + Final_Test_Avg + Final_Misc_Avg);

        s.grade = Complete_Weighted_3_Sections;


        // This adds on a fourth section to be weighted.
        printf("Add one more section?\n");
        printf("1.) Yes    2.) No    (Type 1 OR 2): \n");
        scanf("%d", &g);
        if (g == temp)
        {
            int Misc_Grade_Array_2[0x64], j, k, Total_Misc_Grade_Sum_2 = 0x0;
            double User_Input_Misc_Average_2;
            float Misc_Weight_2 = 0x0;
            printf("Enter the Decimal Weight of Misc Section: \n");
            scanf("%f", &Misc_Weight_2);


            if (Misc_Weight_2 > 0x1)
            {
                Misc_Weight_2 = Misc_Weight_2 / 0x64;
            }


            printf("Enter The Number Of Misc Items: \n");
            scanf("%d", &k);
            printf("Enter Your Misc Grades: \n");

            for (j = 0x0; j < k; ++j)
            {
                scanf("%d", &Misc_Grade_Array_2[j]);
                Total_Misc_Grade_Sum_2 += Misc_Grade_Array_2[j];
            }

            User_Input_Misc_Average_2 = (double) Total_Misc_Grade_Sum_2 / k;
            double Final_Misc_Avg_2 = User_Input_Misc_Average_2 * Misc_Weight_2;
            double Complete_Weighted_4_Sections = (Final_Homework_Avg + Final_Test_Avg +
                                                    Final_Misc_Avg + Final_Misc_Avg_2);

            s.grade = Complete_Weighted_4_Sections;


            //This adds a 5 section to be weighted.
            printf("Add one more section?\n");
            printf("1.) Yes    2.) No    (Type 1 OR 2): \n");
            scanf("%d", &h);
            if (h == temp)
            {
                int Misc_Grade_Array_3[0x64], l, m, Total_Misc_Grade_Sum_3 = 0x0;
                double User_Input_Misc_Average_3;
                float Misc_Weight_3 = 0x0;
                printf("Enter the Decimal Weight of Misc Section: \n");
                scanf("%f", &Misc_Weight_3);


                if (Misc_Weight_3 > 0x1)
                {
                    Misc_Weight_3 = Misc_Weight_3 / 0x64;
                }


                printf("Enter The Number Of Misc Items: \n");
                scanf("%d", &m);
                printf("Enter Your Misc Grades: \n");

                for (l = 0x0; l < m; ++l)
                {
                    scanf("%d", &Misc_Grade_Array_3[j]);
                    Total_Misc_Grade_Sum_3 += Misc_Grade_Array_3[j];
                }

                User_Input_Misc_Average_3 = (double) Total_Misc_Grade_Sum_3 / k;
                double Final_Misc_Avg_3 = User_Input_Misc_Average_3 * Misc_Weight_3;
                double Complete_Weighted_5_Sections = (Final_Homework_Avg + Final_Test_Avg +
                                                        Final_Misc_Avg +Final_Misc_Avg_2 + Final_Misc_Avg_3);

                //Five Weights.
                s.grade = Complete_Weighted_5_Sections;
                printf("Grade Weighed in 5 Sections:"
                       "%s %s\n%s\n%f\n", s.name_First, s.name_Last, s.course, s.grade);
            }

            else
            {
                //Four Weights.
                s.grade = Complete_Weighted_4_Sections;
                printf("Grade Weighed in 4 sections:\n"
                       "%s %s\n%s\n%f\n", s.name_First, s.name_Last, s.course, s.grade);
            }
        }

        else
        {
            //Three Weights.
            s.grade = Complete_Weighted_3_Sections;
            printf("Grade Weighed in 3 sections:\n"
                   "%s %s\n%s\n%f\n", s.name_First, s.name_Last, s.course, s.grade);
        }

    }

    else
    {
        //Two Weights.
        s.grade = Complete_Weighted_2_Sections;
        printf("Grade Weighed in 2 sections:\n"
               "%s %s\n%s\n%f\n", s.name_First, s.name_Last, s.course, s.grade);
    }
    return 0;
}


float Grade_Scale()
{
    if (s.grade >= 90)
    {
        printf("You got an A for the class!\n");
    }
    else if (s.grade <= 89.99 && s.grade >= 80)
    {
        printf("You got a B for the class!\n");
    }
    else if (s.grade <= 79.99 && s.grade >= 70)
    {
        printf("You got a C for the class!\n");
    }
    else if (s.grade <= 69.99 && s.grade >= 60)
    {
        printf("You got a D for the class!\n");
    }
    else if (s.grade < 60)
    {
        printf("You got an F for the class!\n");
    }
    return 0x0;
}



void Start_And_End_Program()
{
    int answer = 0x0;
    printf("Would you like to run the grade average program?\n"
           "Type 1 for Yes or 2 for No:\n");
    scanf("%d", &answer);
    switch (answer)
    {
        case 0x1:
            Final_Class_Grade();
            Grade_Scale();
            Start_And_End_Program();

        case 0x2:
            printf("\nExiting The Program...\n"
                   "Have a nice day!");
            exit(0x0);

        default:
            printf("\nExiting The Program...\n"
                   "Have a nice day!");
            exit(0x0);
    }
}



int main()
{
    Start_And_End_Program();
    return 0;
}