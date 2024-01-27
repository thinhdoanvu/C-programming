#include <stdio.h>
#include <stdlib.h>
#define MAX_BUFFER_SIZE 1000
#define INPUT "numtrans.inp"

FILE *fp;
int n;

char* readfile2string() {
    fp = fopen(INPUT, "r");
    if (fp == NULL) {
        fprintf(stderr, "File not found %s\n", INPUT);
        exit(EXIT_FAILURE);
    }
    // Doc dong dau tien
    fscanf(fp,"%d",&n);
    //cap phat bo nho dong cho cac dong tiep theo
    char* buffer = (char*)malloc(MAX_BUFFER_SIZE * sizeof(char));
    //doc cac dong tiep theo
    int bytesRead = 0;
    int ch;
    while ((ch = fgetc(fp)) != EOF && bytesRead < MAX_BUFFER_SIZE - 1) {
        buffer[bytesRead++] = ch;
        if (ch == '\n') {
            if (--n <= 0) {
                break;
            }
        }
    }
    // Null-terminate the buffer
    buffer[bytesRead] = '\0';
    // Close the file
    fclose(fp);
    return buffer;
}

int main() {
    // Call the function to read the specified number of lines from the file
    char* fileContent = readfile2string();
    // Print the content of the string
    printf("File Content:\n%s\n", fileContent);
    // Don't forget to free the allocated memory
    free(fileContent);
    return 0;
}
