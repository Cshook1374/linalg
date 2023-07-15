#ifndef __LINALG_VEC2_H__
#define __LINALG_VEC2_H__

#ifdef __cplusplus
extern "C" { 
#endif //__cplusplus

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include <string.h>

#include <unistd.h>

typedef float vec2[2];

typedef int32_t success_t;

success_t linalg_vec2(vec2 dest, float x, float y);

success_t linalg_vec2_copy(vec2 src, vec2 dest);

success_t linalg_vec2_add(vec2 src, vec2 mod, vec2 dest);

success_t linalg_vec2_sub(vec2 src, vec2 mod, vec2 dest);

success_t linalg_vec2_mult(vec2 src, float mod, vec2 dest);

success_t linalg_vec2_dot(vec2 src, vec2 mod, float* dest);

success_t linalg_vec2_print(vec2 src);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif //__LINALG_VEC2_H__