#include "xassist.h"
#include "mlx.h"

void    xLoopHook(xIst *handle)
{
    mlx_loop(handle->xImlx->mlx);
}