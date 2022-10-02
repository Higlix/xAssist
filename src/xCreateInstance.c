#include "xassist.h"

xIst    *xCreateInstance(int x, int y, char *title, int tick_speed)
{
    xIst    *new;

    new = (xIst *) malloc(sizeof(xIst));
    new->xImlx = xCreateImlx(tick_speed);
    new->window = xCreateWindow(x, y, title, new->xImlx);
    return (new);
}