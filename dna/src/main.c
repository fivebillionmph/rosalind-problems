#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
    char* dna_seq = argv[1];
    int i = 0;
    int a_count = 0;
    int c_count = 0;
    int g_count = 0;
    int t_count = 0;
    while(true) {
        if(dna_seq[i] == 0) break;
        switch(dna_seq[i]) {
            case 'A':
                a_count += 1;
                break;
            case 'C':
                c_count += 1;
                break;
            case 'G':
                g_count += 1;
                break;
            case 'T':
                t_count += 1;
                break;
        }
        i++;
    }

    printf("%d %d %d %d\n", a_count, c_count, g_count, t_count);
}
