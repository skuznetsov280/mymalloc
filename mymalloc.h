#ifndef MYMALLOC_H
#define MYMALLOC_H

#define malloc(x) mymalloc(x,__FILE__, __LINE___)
#define free(x) myfree(x, __FILE__, __LINE__)

void *mymalloc(size_t size, char* file, int line);
void myfree(void *ptr, char *file, int line);

#endif