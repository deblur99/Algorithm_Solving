#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
    // variables
    int map_count;
    int K, N, M;
    int *map;

    if (freopen("electric_bus/sample_input.txt", "r", stdin) == NULL) {
        perror("file open failed");
        exit(1);
    }
    
    scanf("%d", &map_count);

    for (int i = 0; i < map_count; i++) {
        scanf("%d", &K);
        scanf("%d", &N);
        scanf("%d", &M);

        map = (int *)malloc(sizeof(int) * (N + 1));

        
    }
}