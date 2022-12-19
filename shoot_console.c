#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

void tab(int value){
    for(int i = 0; i < value; i++){
        printf(" ");
    }
}

int main() {
    int e, f, m, n, nC, d, nG, nS, nT, j, k;

    tab(26);
    printf("SHOOT\n");
    tab(20);
    printf("CREATIVE COMPUTING\n");
    tab(18);
    printf("MORRISTOWN, NEW JERSEY\n");
    printf("\n\n\n");
    printf("DO YOU WANT INSTRUCTIONS ");
    char v[5];
    scanf("%s", v);
    if (v[0] != 89) goto n440;

    printf("\n IT IS THE FINAL HOUR OF MAN. YOU AND A WARRING NATION\n");
    printf("HAVE ENTERED INTO A LAST CONTEST. ALL THE LIFE NOW LEFT ON\n");
    printf("EARTH ARE YOU AND YOUR ENEMY. BOTH HE AND YOU HAVE FOUND THE\n");
    printf("LAST REMAINING ATOMIC MISSILE SILO MATRICES ESTABLISHED BY\n");
    printf("THE NOW-DEAD SUPERPOWERS. HE, LIKE YOU, WISHES NOT TO DIE\n");
    printf("BUT TO LIVE IN PEACE.\n");
    printf(" HOWEVER IT HAS BECOME APPARENT THAT HE FEELS HIS PEACE\n");
    printf("THREATENED AND IS PREPARING AN ATTACK. BOTH YOU AND HE HAVE\n");
    printf("SCANNERS THAT WILL WARN YOU OF HIS MOVEMENTS AND TRACK THE\n");
    printf("FLIGHT OF HIS ATOMIC MISSILES, THUS HE IS WORKING SLOWLY.\n");
    printf("THE ENEMY, LIKE YOURSELF, HAS A MISSILE GRID NEARLY\n");
    printf("IDENTICAL IN STRUCTURE AND OPERATION TO YOURS, BECAUSE YOU\n");
    printf("ARE THE ONLY ONE LEFT, IT WILL BE NECESSARY TO FIRE ALL YOUR\n");
    printf("MISSILES MANUALLY. ONCE THE FUSE IS SET, YOU MUST FLEE THE\n");
    printf("AREA AND GET TWO GRID UNITS AWAY. YOU MAY NEVER RETURN TO\n");
    printf("THIS SPOT, OR A SPOT WHERE A MISSILE HAS LANDED; THE\n");
    printf("RADIATION IS INTENSE AND WOULD MEAN AN INSTANT, PAINFUL\n");
    printf("DEATH.\n");
    printf(" SO THE STAGE HAS BEEN SET. THERE IS PEACE UNTIL THE\n");
    printf("SIGN THAT THE ENEMY HAS MOVED TO HIS MISSILE RANGE. HE WILL\n");
    printf("FIRE EVERY TIME YOU WILL, AND DO SO UNTIL ONE OF YOU IS\n");
    printf("DESTROYED.\n");
    printf(" EACH TIME A ROUND OF MISSILES HAS BEEN FIRED, THE\n");
    printf("SCANNERS WILL REPORT THE STATUS OF BOTH YOUR'S AND THE ENEMY'S\n");
    printf("GRID TERRITORY. IT WILL SHOW ALL AREAS THAT HAVE HAD EITHER\n");
    printf("A MISSILE HIT OR A MISSILE FIRED FROM IT. WITH THIS\n");
    printf("CONTINUALLY UPDATED MAP, YOU MAY BE ABLE TO INDUCTIVELY\n");
    printf("DISCOVER OR TRAP YOUR OPPONENT. BEWARE, HE WILL BE TRYING TO\n");
    printf("DO THE SAME TO YOU.\n");
    printf("\n");

n440: ;
    char g[] = "   0 1 2 3 4 5 6 7 8 9";
    char c[] = "SCANNER COMPUTER: ";
    char s[] = "              ";
    int i[10][10] = {0};
    int h[10][10] = {0};
    int t[8][2] = {{9,9}, {0,0}, {9,0}, {0,9}, {9,8}, {8,9}, {0,1}, {1,0}};
    int p[8][2] = {{-2,-2}, {0,-2}, {2,-2}, {2,0}, {2,2}, {0,2}, {-2,2}, {-2,0}};

    int r = rand()%8;
    int a = t[r][0];
    int b = t[r][1];

    printf("%s ENEMY ACTIVITY ON GRID AT %d %d\n",c,a,b);
    printf("\n");

    //t[8][2] = {0};
    
n760:
    printf("YOUR STARTING CO-ORDINATES ");
    scanf("%d %d", &e, &f);
    if (e<0 || e>9 || f<0 || f>9) goto n760;
    int z = 1;
    i[e][f] = 1;
    h[a][b] = 1;
    printf("\n");
    goto n1490;

n830:
    printf("MISSILE CO-ORDINATES ");
    scanf("%d %d", &m, &n);
    if (m<0 || m>9 || n<0 || n>9) goto n830;

n850:
    printf("WHERE TO MOVE TO ");
    scanf("%d %d", &nS, &nT);
    if (nS<0 || nS>9 || nT<0 || nT>9) goto n850;  
    if (i[nS][nT] == 1) goto n850;
    for(int x = 0; x < 8; x++) {
        if (p[x][0] + e == nS && p[x][1] + f == nT) goto n920;
    }
    goto n850;

n920:
    printf("\n");
    int l = 0;
    for(int x = 0; x < 8; x++) {
        if (p[x][0] + e > 9 || p[x][0] + e < 0 || p[x][1] + f > 9 || p[x][1] + f < 0) continue;
        if (i[p[x][0] + e][p[x][1] + f] == 1) continue;
        t[l][0] = p[x][0] + e;
        t[l][1] = p[x][1] + f;
        l += 1;
    }
    //l -= 1;
    
    if (l == 1) {
        nC = t[l][0];
        d = t[l][1];
    } else {
        nG = rand()%l;
        nC = t[nG][0];
        d = t[nG][1];
    }
    l = 0;
    for(int x = 0; x < 8; x++) {
        if (p[x][0] + a > 9 || p[x][0] + a < 0 || p[x][1] + b > 9 || p[x][1] + b < 0) continue;
        if (h[p[x][0] + a][p[x][1] + b] == 1) continue;
        t[l][0] = p[x][0] + a;
        t[l][1] = p[x][1] + b;
        l += 1;
    }
    //l += 1;
    if (l != 0) {
        if (l != 1) {
            nG = rand()%l;
            j = t[nG][0];
            k = t[nG][1];
        } else {
            j = t[0][0];
            k = t[0][1];
        }
    } else {
        printf("%s THE ENEMY HAS CORNERED HIMSELF IN!!\n", c);
        z = 0;
        nC = e;
        d = f;
    }
    i[nS][nT] = 1;
    h[a][b] = 1;
    i[nC][d] = 1;
    h[m][n] = 1;

    if (m == j && d == nT) {
        printf("%s HEY! YOU GOT HIM!!\n", c);
        z = 0;
    }
    if (nC == nS && d == nT) {
        printf("%s YOU MOVED RIGHT UNDER HIS MISSILE!!\n", c);
        z =0;
    } 
        e = nS;
        f = nT;
        a = j;
        b = k;
    for (int x = 0; x < 8; x++) {
        if (p[x][0] + e > 9 || p[x][0] + e < 0 || p[x][1] + f > 9 || p[x][1] + f < 0) continue;
        if (i[p[x][0] + e][p[x][1] + f] == 0) goto n1490;
    }
    printf("%s FOOL! YOU HAVE BOXED YOURSELF INTO A CORNER!!\n", c);
    z = 0;
    goto n1490;

n1490:
    printf("       YOUR TERRITORY   %s ENEMY TERRITORY\n",s);
    printf("\n");
    printf("%s%s%s\n",g,s,g);
    for(int x = 0; x < 10; x++) {
       printf(" %d",x); 
       for(int y = 0; y < 10; y++) {
            if(i[x][y] == 1) printf(" *");
            else printf(" -");
       }
       printf("%s",s);
       printf(" %d",x);
       for(int y = 0; y < 10; y++) {
            if(h[x][y] == 1) printf(" *");
            else printf(" -");
       }  
       printf("\n");
    }
    printf("\n");
    if (z == 1) goto n830;
    return 0;
}