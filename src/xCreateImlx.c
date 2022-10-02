#include "xassist.h"
#include "mlx.h"

xImlx   *xCreateImlx(int tick_speed)
{
    xImlx   *Imlx;

    if (tick_speed > 240 || tick_speed < 60)
        return (NULL);
    Imlx = (xImlx *) malloc(sizeof(xImlx));
    Imlx->mlx = mlx_init();
    Imlx->tick_speed = tick_speed;
    return (Imlx);
}