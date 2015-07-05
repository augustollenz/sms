#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *input, *output;
    char output_name[64];

    if (argc != 2) {
        printf("invalid parameters\n");
        return EXIT_SUCCESS;
    }

    strcpy(output_name, argv[1]);
    strcat(output_name, ".mif");

    if ((input = fopen(argv[1], "r")) == NULL) {
        perror("failed to open input file");
        return EXIT_FAILURE;
    }
    
    if ((output = fopen(output_name, "w")) == NULL) {
        perror("failed to open input file");
        fclose(input);
        return EXIT_FAILURE;
    }

    fprintf(output, "%s\n", "00000000");

    while (!feof(input)) {
        int i;
        unsigned int byte;
        char binary[9];
        
        fscanf(input, "%02X", &byte);

        for (i = 0; i < 8; i++) {
            char binary[9];

            if ((byte >> (7 - i)) & 0x01)
                binary[i] = '1';
            else
                binary[i] = '0';
        }
        binary[i] = '\0';

        fprintf(output, "%s\n", binary);
    }

    fclose(input);
    fclose(output);

    return EXIT_SUCCESS;
}
