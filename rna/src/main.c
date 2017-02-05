#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char* dna_seq = argv[1];
    int length = strlen(dna_seq);
    char* rna_seq = (char*) malloc(sizeof(char) * (length + 1));
    strcpy(rna_seq, dna_seq);
    for(int i = 0; i < length; i++) {
        if(rna_seq[i] == 'T') rna_seq[i] = 'U';
    }
    printf("%s\n", rna_seq);
    free(rna_seq);
}
