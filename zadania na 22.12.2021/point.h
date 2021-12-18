#ifndef _POINT_H
#define _POINT_H
struct POINT {
    int x;
    int y;
};
float area(struct POINT A, struct POINT B, struct POINT C);
float perimeter(struct POINT A, struct POINT B, struct POINT C);
#endif