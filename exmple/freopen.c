#include <stdio.h>
#include <stdlib.h>

int main() {
    char *filename = "electric_bus/sample_input.txt";
    FILE *fp = fopen("electric_bus/output.txt", "w");

    char buf[20];

    if (freopen("electric_bus/sample_input.txt", "r", stdin) == NULL) {
        perror("read error");
        exit(1);
    }

    scanf("%s", buf);

    fprintf(fp, "%s\n", buf);

    fclose(fp);

    return 0;
}