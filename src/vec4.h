#ifndef __LINALG_VEC4_H__
#define __LINALG_VEC4_H__

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include <string.h>

#include <unistd.h>

typedef float vec4[4];

typedef int32_t success_t;

success_t linalg_vec4(vec4 dest, float x, float y, float z, float a);

success_t linalg_vec4_copy(vec4 src, vec4 dest);

success_t linalg_vec4_add(vec4 src, vec4 mod, vec4 dest);

success_t linalg_vec4_sub(vec4 src, vec4 mod, vec4 dest);

success_t linalg_vec4_mult(vec4 src, float mod, vec4 dest);

success_t linalg_vec4_dot(vec4 src, vec4 mod, float* dest);

success_t linalg_vec4_print(vec4 src);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif //__LINALG_VEC4_H__