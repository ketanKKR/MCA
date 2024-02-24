#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LINE_LENGTH 1000

int main() {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    int total_lines = 0;
    int random_line_num;
    
    // Open the file in read mode
    file = fopen("words.txt", "r");
    
    // Check if file exists
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }
    
    // Count the total number of lines in the file
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        total_lines++;
    }
    
    // Reset file pointer to beginning
    rewind(file);
    
    // Generate a random line number
    srand(time(NULL)); // Seed the random number generator
    random_line_num = rand() % total_lines + 1;
    
    // Read lines until reaching the randomly chosen line
    int current_line = 1;
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (current_line == random_line_num) {
            printf("Random Line %d: %s", random_line_num, line);
            break;
        }
        current_line++;
    }
    
    // Close the file
    fclose(file);
    
    return 0;
}
