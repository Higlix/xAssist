#ifndef XASSIST_H
# define XASSIST_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <fcntl.h>

# include "xist_window.h"
# include "xist_mlx.h"

typedef struct  sIst    xIst;

struct sIst
{
    xImlx   *xImlx;
    xWindow *window;
};

xWindow     *xCreateWindow(int x, int y, char *title, xImlx *xImlx);

xImlx       *xCreateImlx(int tick_speed);

xIst        *xCreateInstance(int x, int y, char *title, int tick_speed);

void        xLoopHook(xIst *handle);

#endif