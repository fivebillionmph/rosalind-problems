#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

int main(int argc, char* argv[]) {
    uint8_t nmonths = atoi(argv[1]);
    uint8_t offspring = atoi(argv[2]);    // the number of mating pairs after each successive mating

    uint64_t adults = 0;
    uint64_t children = 1;
    uint64_t adolescents = 0;
    for(size_t i = 0; i < nmonths; i++) {
        adolescents = children;
        children = adults * offspring;
        adults += adolescents;
    }
    uint64_t total = adults;
    printf("%d\n", total);
}
