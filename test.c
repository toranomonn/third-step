#include <stdio.h>
#include <math.h>

#define class 20

int main()
{
    double sceience[class] = {65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70};
    double english[class] = {44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};

    double goukei1 = 0.0;
    double goukei2 = 0.0; 
    double heikinn = 0.0;
    double avg1 = 0.0,avg2 = 0.0;
    double deviation1[class];
    double deviation2[class];
    double variance1 = 0.0;
    double variance2 = 0.0;
    double stddev1 = 0.0;
    double stddev2 = 0.0;

    for(int i=0;i<class;i++)
    {
       goukei1 += sceience[i];
       goukei2 += english[i];
    }
    avg1 = goukei1/class;
    avg2 = goukei2/class;

    for(int i=0;i<class;i++)
    {
       deviation1[i] = sceience[i] - avg1;
       deviation2[i] = english[i] - avg2;
    }

    for(int i=0;i<class;i++)
    {
       variance1 += deviation1[i] * deviation1[i];
       variance2 += deviation2[i] * deviation2[i];
    }
    variance1 /= class;
    variance2 /= class;
    stddev1 = sqrt(variance1);
    stddev2 = sqrt(variance2);

    printf("理科の平均は%d,英語の平均は%d\n",avg1,avg2);
    printf("理科の標準偏差は%d,英語の平均は%d\n",stddev1,stddev2);




    return 0;
}
