//ascending Triangle
void ascendingTriangle() {
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i == 1 && j <= 1) || (i == 2 && j <= 2) || (i == 3 && j <= 3) || (i == 4 && j <= 4) || (i == 5 && j <= 5) || (i == 6 && j <= 6)) {
                printf("%d", i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

//descending Triangle
void descendingTriangle() {
    for (int i = 6; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if ((i == 1 && j <= 1) || (i == 2 && j <= 2) || (i == 3 && j <= 3) || (i == 4 && j <= 4) || (i == 5 && j <= 5) || (i == 6 && j <= 6)) {
                printf("%d", i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
