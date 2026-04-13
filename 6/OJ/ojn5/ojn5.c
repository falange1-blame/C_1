int main(void)
{
    int input;

    int s1 = 14000000;
    int s2 = 50000000;
    int s3 = 88000000;

    int t1 = s1 * 6 / 100;
    int t2 = t1 + (s2 - s1) * 15 / 100;
    int t3 = t2 + (s3 - s2) * 24 / 100;

    scanf("%d", &input);

    if (input <= s1) {

        printf("Tax: %d won\n", (input * 6 + 50) / 100);
    }

    else if (input <= s2) {
        printf("Tax: %d won\n", t1 + (((input - s1) * 15) + 50) / 100);
    }

    else if (input <= s3) {
        printf("Tax: %d won\n", t2 + (((input - s2) * 24) + 50) / 100);
    }

    else if (input > s3) {
        printf("Tax: %d won\n", t3 + (((input - s3) * 35) + 50) / 100);
    }

    return 0;
}
