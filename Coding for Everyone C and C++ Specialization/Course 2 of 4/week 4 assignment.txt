#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    int size, i, max;
    double sum = 0.0, average;

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return EXIT_FAILURE;
    }

    // Read the size of the array
    fscanf(inputFile, "%d", &size);

    // Dynamically allocate memory for the array
    int *data = (int *)malloc(size * sizeof(int));
    if (data == NULL) {
        perror("Error allocating memory");
        fclose(inputFile);
        return EXIT_FAILURE;
    }

    // Read the integers into the array
    for (i = 0; i < size; i++) {
        fscanf(inputFile, "%d", &data[i]);
    }

    // Close the input file
    fclose(inputFile);

    // Compute the sum and find the maximum value
    max = data[0];
    for (i = 0; i < size; i++) {
        sum += data[i];
        if (data[i] > max) {
            max = data[i];
        }
    }

    // Compute the average
    average = sum / size;

    // Print results to the screen
    printf("Number of elements: %d\n", size);
    printf("Elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\nAverage: %.2f\n", average);
    printf("Max: %d\n", max);

    // Open the output file for writing
    outputFile = fopen("answer-hw3.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        free(data);
        return EXIT_FAILURE;
    }

    // Write results to the output file
    fprintf(outputFile, "Number of elements: %d\n", size);
    fprintf(outputFile, "Elements: ");
    for (i = 0; i < size; i++) {
        fprintf(outputFile, "%d ", data[i]);
    }
    fprintf(outputFile, "\nAverage: %.2f\n", average);
    fprintf(outputFile, "Max: %d\n", max);

    // Close the output file
    fclose(outputFile);

    // Free the dynamically allocated memory
    free(data);

    return 0;
}
