#ifndef __LINALG_VEC3_H__
#define __LINALG_VEC3_H__

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include <string.h>

#include <unistd.h>

typedef float vec3[3];

typedef int32_t success_t;

success_t linalg_vec3(vec3 dest, float x, float y, float z);

success_t linalg_vec3_copy(vec3 src, vec3 dest);

success_t linalg_vec3_add(vec3 src, vec3 mod, vec3 dest);

success_t linalg_vec3_sub(vec3 src, vec3 mod, vec3 dest);

success_t linalg_vec3_mult(vec3 src, float mod, vec3 dest);

success_t linalg_vec3_dot(vec3 src, vec3 mod, float* dest);

success_t linalg_vec3_print(vec3 src);

#ifdef __cplusplus
}
#endif

#endif //__LINALG_VEC3_H__