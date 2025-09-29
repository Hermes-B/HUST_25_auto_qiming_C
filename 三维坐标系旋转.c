#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
float* chengfa(float* a,float b[3][3]){
    float res[3];
    for(int i=0;i<3;i++)
        res[i]=b[i][0]*a[0]+b[i][1]*a[1]+b[i][2]*a[2];
    for(int i=0;i<3;i++)
        a[i]=res[i];
    return a;
}

void rotate(float* obj,float x,float y,float z){
    x = x * M_PI / 180.0;
    y = y * M_PI / 180.0;
    z = z * M_PI / 180.0;
    float rz[3][3]={{cos(z),-sin(z),0},{sin(z),cos(z),0},{0,0,1}};
    float rx[3][3]={{1,0,0},{0,cos(x),-sin(x)},{0,sin(x),cos(x)}};
    float ry[3][3]={{cos(y),0,sin(y)},{0,1,0},{-sin(y),0,cos(y)}};
    obj=chengfa(obj, rx);
    obj=chengfa(obj, ry);
    obj=chengfa(obj, rz);
    printf("Rotated vector: %f, %f, %f\n", obj[0], obj[1], obj[2]);
}

int main(){
    printf("vector:");
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float point[3] = {a,b,c};
    printf("rotate angle:");
    float d,e,f;
    while(getchar() != '\n');
    scanf("%f %f %f",&d,&e,&f);
    rotate(point,d,e,f);
    return 0;
}