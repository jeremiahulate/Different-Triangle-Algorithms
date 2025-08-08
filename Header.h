//ascending Triangle
void ascendingTriangle() {
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            if((1<i<6) && (j <=i)) {
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
            if((1<i<6) && (j <=i)) {
                printf("%d", i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
