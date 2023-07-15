#include "vec4.h"

success_t linalg_vec4(vec4 dest, float x, float y, float z, float a) {
    if (dest == NULL) {
        fprintf(stderr, "NULL vec4 'dest' passed to linalg_vec4(...)! ");
        return -1;
    }

    *(dest + 0) = x;
    *(dest + 1) = y;
    *(dest + 2) = z;
    *(dest + 3) = a;

    return 0;
}

success_t linalg_vec4_copy(vec4 src, vec4 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec4 passed to linalg_vec4_copy(...)! ");
        return -1;
    }
    if (dest == NULL) {
        fprintf(stderr, "NULL vec4 passed to linalg_vec4_copy(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0);
    *(dest + 1) = *(src + 1);
    *(dest + 2) = *(src + 2);
    *(dest + 3) = *(src + 3);

    return 0;
}

success_t linalg_vec4_add(vec4 src, vec4 mod, vec4 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec4 passed to linalg_vec4_add(...)! ");
        return -1;
    }
    if (mod == NULL) {
        fprintf(stderr, "NULL vec4 'mod' passed to linalg_vec4_add(...)! ");
        return -1;
    }
    if (dest == NULL) {
        fprintf(stderr, "NULL vec4 'dest' passed to linalg_vec4_add(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0) + *(mod + 0);
    *(dest + 1) = *(src + 1) + *(mod + 1);
    *(dest + 2) = *(src + 2) + *(mod + 2);
    *(dest + 3) = *(src + 3) + *(mod + 3);

    return 0;
}

success_t linalg_vec4_sub(vec4 src, vec4 mod, vec4 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec4 'src' passed to linalg_vec4_sub(...)! ");
        return -1;
    }
    if (mod == NULL) {
        fprintf(stderr, "NULL vec4 'mod' passed to linalg_vec4_sub(...)! ");
        return -1;
    }
    if (dest == NULL) {
        fprintf(stderr, "NULL vec4 'dest' passed to linalg_vec4_sub(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0) - *(mod + 0);
    *(dest + 1) = *(src + 1) - *(mod + 1);
    *(dest + 2) = *(src + 2) - *(mod + 2);
    *(dest + 3) = *(src + 3) - *(mod + 3);

    return 0;
}

success_t linalg_vec4_mult(vec4 src, float mod, vec4 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec4 'src' passed to linalg_vec4_mult(...)! ");
        return -1;
    }
    if (dest == NULL) {
        fprintf(stderr, "NULL vec4 'dest' passed to linalg_vec4_mult(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0) + mod;
    *(dest + 1) = *(src + 1) + mod;
    *(dest + 2) = *(src + 2) + mod;
    *(dest + 3) = *(src + 3) + mod;

    return 0;
}

success_t linalg_vec4_dot(vec4 src, vec4 mod, float* dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec4 'src' passed to linalg_vec4_dot(...)! ");
        return -1;
    }
    if (mod == NULL) {
        fprintf(stderr, "NULL vec4 'dest' passed to linalg_vec4_dot(...)! ");
        return -1;
    }

    *(dest + 0) = (*(src + 0) * *(dest + 0)) + (*(src + 1) * *(dest + 1)) + (*(src + 2) * *(dest + 2)) + (*(src + 3) * *(dest + 3));

    return 0;
}

success_t linalg_vec4_print(vec4 src) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec4 'src' passed to linalg_vec4_print(...)! ");
        return -1;
    }

    fprintf(stdout, "Vec4 Contents: [%.2f, %.2f, %.2f, %.2f]\n", *(src + 0), *(src + 1), *(src + 2), *(src + 3));

    return 0;
}