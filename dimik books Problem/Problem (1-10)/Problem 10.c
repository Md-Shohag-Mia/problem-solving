#include <stdio.h>
int main() {
    int T,i, r1, r2, B, ball_played; double current_rr, asking_rr;
    scanf("%d", &T);
    for (i= 1; i<= T; i++) {
        scanf("%d %d %d", &r1, &r2, &B);
        ball_played=300-B;
        current_rr =(r2*1.0/ball_played)*6;
        asking_rr=(r1*1.0-r2*1.0+1)/B*6;
        printf("%0.2lf %0.2lf", current_rr, asking_rr);
    }
    return 0;
}

