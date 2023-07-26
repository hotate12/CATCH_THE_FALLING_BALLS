#ifndef FILE_IO_H
#define FILE_IO_H

typedef struct
{
    char date[24];
    int score;
    char name[32];
} database;

void read_file(char *[], const int);
void read_csv(database *, const int, const int);
void write_csv(database *, database *);

#endif