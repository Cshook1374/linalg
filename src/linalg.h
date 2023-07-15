#ifndef __LINALG_H__
#define __LINALG_H__

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#include "vec2.h"
#include "vec3.h"
#include "vec4.h"

extern success_t vs; // 'vs' stands for 'vector state', and this is the same return type as most of the linalg_vec* functions.

#define LINALG_TRUE (success_t)( 0)
#define LINALG_FALSE (success_t)(-1)

#ifdef __cplusplus
}
#endif //__cplusplus

#endif //__LINALG_H__