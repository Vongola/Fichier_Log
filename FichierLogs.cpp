#include <stdio.h>  
#include <string.h>
#include <iostream>
#include <windows.h>

using namespace std;
      
    int main() {  
      
        system("del /q log.txt");
        FILE *f = fopen("log.txt", "a");

        fprintf(f, "Creation du repertoire Backup sur le poste TSECLI01.\n");
        BOOL isDirCreated = CreateDirectoryA("C:\\Documents\\Backup", NULL);

        if (isDirCreated)
        {
            fprintf(f, "Le repertoire a bien ete creer sur le poste TSECLI01.\n");
            fprintf(f, "......................................................\n");
        }
        else
        {
            fprintf(f, "Error\n");
            fprintf(f, "......................................................\n");
        }
        fprintf(f, "Mise a jour des icones termine.");
        return 0;  
      
    }  