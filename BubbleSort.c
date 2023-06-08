#include <stdio.h>

typedef struct {

    char title[100];

    int plays;

} Song;

void bubbleSort(Song arr[], int n) {

    int i, j;

    Song temp;

    for (i = 0; i < n - 1; i++) {

        for (j = 0; j < n - i - 1; j++) {

            if (arr[j].plays < arr[j + 1].plays) {

                // Swap songs if they are out of order

                temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;

            }

        }

    }

}

int main() {

    // Example usage

    Song playlist[] = {

        {"Song A", 1000},

        {"Song B", 500},

        {"Song C", 1500},

        {"Song D", 200},

        {"Song E", 3000}

    };

    int size = sizeof(playlist) / sizeof(playlist[0]);

    bubbleSort(playlist, size);

    printf("Sorted Playlist:\n");

    for (int i = 0; i < size; i++) {

        printf("%s - %d plays\n", playlist[i].title, playlist[i].plays);

    }

    return 0;

}

