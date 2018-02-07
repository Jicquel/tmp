#ifndef _POINT_H_
#define _POINT_H_

#include <stdint.h>

struct point {
    uint32_t x;
    uint32_t y;
};

double distance_origine(struct point p);



#endif /* _POINT_H_ */
