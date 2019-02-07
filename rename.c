
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *base_name = "<Your base name>";
    char *practice_name;
    int c;
    char* file_extension;
    char final_name[strlen(base_name)];
    char* old_name;
    char *non_formated_command;
    char command[100];
    non_formated_command = "cp %s %s";
    if (argc >= 2)
    {
        while ((c = getopt(argc, argv, "p:f:h")) != -1)
        {
            switch (c)
            {
            case 'p':
                practice_name = optarg;
                break;
            case 'f':
                old_name = optarg;
                file_extension = strrchr(optarg, '.');
                break;

            case 'h':
                printf("This program allows you to change the name of the files for the subject ASLEPI.\n");
                printf("OPTIONS:\n");
                printf("-f <filename>: Specifies the file to change the name to.\n");
                printf("-p <practice>: Changes the name to the file to  match the criteria.\n");
                printf("-h: Prints this help menu.\n");
                
                
                break;
            }
        }
                strcat(final_name, base_name);
                strcat(final_name, practice_name);
                strcat(final_name, file_extension);
                sprintf(command, non_formated_command, old_name, final_name);
                system(command);
                printf("You file is ready!\n");
                
    } else 
    {
        printf("Wrong number of arguments\n");
    }
}
