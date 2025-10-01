#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch, text[100];

    // Create (write)
    fp = fopen("demo.txt", "w");
    if(!fp){ printf("File not created!\n"); return 0; }
    printf("Enter text to write in file: ");
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("File created and written successfully.\n");

    // Edit (append)
    fp = fopen("demo.txt", "a");
    printf("\nEnter text to append: ");
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("File updated successfully.\n");

    // Read file
    fp = fopen("demo.txt", "r");
    printf("\nFile contents:\n");
    while((ch=fgetc(fp))!=EOF) putchar(ch);
    fclose(fp);

    // Delete file
    if(remove("demo.txt")==0)
        printf("\nFile deleted successfully.\n");
    else
        printf("\nError deleting file.\n");

    return 0;
}
