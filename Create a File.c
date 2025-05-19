#include <stdio.h>

int main()

{

    FILE *fptr;

    // Create a file

    // "w" Existing content is deleted and replaced with new content
    //fptr = fopen("C:\\Users\\Dell\\Desktop\\git-workflow-guide.txt", "w");

    //Just like with the w mode; if the file does not exist, the a mode will create a new file with the "appended" content.
    fptr = fopen("C:\\Users\\Dell\\Desktop\\git-workflow-guide.txt", "a");

    fprintf(fptr, "Test Text");

    // Append some text to the file
    fprintf(fptr, "\nAppendend text");

    //To read from a file, you can use the r mode:
    fptr = fopen("C:\\Users\\Dell\\Desktop\\git-workflow-guide.txt", "r");


    // Close the file
    fclose(fptr);

}
