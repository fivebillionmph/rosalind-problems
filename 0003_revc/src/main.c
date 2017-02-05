#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    /* get the dna */
    char* dna = argv[1];
    size_t length = strlen(dna);
    size_t size = sizeof(dna);

    /* create rna string */
    char* rna = malloc(sizeof(size));
    memset(rna, 0, size);

    /* copy dna to rna */
    for(int i = 0; i < length; i++) {
        int dna_index = length - i - 1;
        switch(dna[dna_index]) {
            case 'A':
                rna[i] = 'T';
                break;
            case 'C':
                rna[i] = 'G';
                break;
            case 'G':
                rna[i] = 'C';
                break;
            case 'T':
                rna[i] = 'A';
                break;
        }
    }

    printf("%s\n", rna);
}
