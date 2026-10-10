#include <stdio.h>


int main(int argc, char *argv[])
{
    const char *path = (argc > 1) ? argv[1] : "data.txt";
    char buf[100];

    FILE *fp = fopen(path, "r");          /* 과제 A */
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    size_t n = fread(buf, 1, sizeof(buf), fp);   /* 과제 B: 첫 번째 fread */
    size_t m = fread(buf, 1, sizeof(buf), fp);   /* 과제 B: 두 번째 fread */
    printf("read %zu + %zu bytes\n", n, m);

    fclose(fp);
    return 0;
}