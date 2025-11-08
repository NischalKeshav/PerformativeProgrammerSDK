#ifndef GETALLFILESINDIR_H
#define GETALLFILESINDIR_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

typedef struct {
    char **paths;
    size_t count;
    size_t capacity;
} FilePaths;


FilePaths GetAllFilesinDir(char *direc);
void DisplayFilePaths(FilePaths *dict );
FilePaths fpexp;
#endif
