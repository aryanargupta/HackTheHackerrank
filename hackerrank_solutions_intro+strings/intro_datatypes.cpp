#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i;
    long l;
    char cr;
    char spa;
    float ft;
     double db;
     scanf("%d",&i);
     scanf("%ld\n",&l);
     //scanf("%c",&spa);
     scanf("%c",&cr);
     
     scanf("%f",&ft);
     scanf("%lf",&db);
     printf("%d\n",i);
     printf("%ld\n",l);
     printf("%c\n",cr);
     printf("%.3f\n",ft);
     printf("%.9lf\n",db);
     
    return 0;
}
