#include "utils.h"

#include <stdio.h>
#include <stdlib.h>

char* readFile(const char* filename, size_t* outSize) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    size_t size = ftell(file);
    rewind(file);

    char* buffer = (char*)malloc(size);
    if (buffer == NULL) {
        fclose(file);
        return NULL;
    }

    fread(buffer, size, 1, file);
    fclose(file);

    *outSize = size;
    return buffer;
}