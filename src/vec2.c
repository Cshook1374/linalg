#include "vec2.h"

success_t linalg_vec2(vec2 dest, float x, float y) {
    if (dest == NULL) {
        fprintf(stderr, "NULL vec2 'src' passed to linalg_vec2(...)! ");
        return -1;
    }

    *(dest + 0) = x;
    *(dest + 1) = y;

    return 0;
}

success_t linalg_vec2_copy(vec2 src, vec2 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec2 'src' passed to linalg_vec2_copy(...)! ");
        return -1;
    }
    if (src == NULL) {
        fprintf(stderr, "NULL vec2 'dest' passed to linalg_vec2_copy(...)! ");
        return -1;
    }

    memmove(dest, src, sizeof(*src) * 2);

    return 0;
}

success_t linalg_vec2_add(vec2 src, vec2 mod, vec2 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec2 'src' passed to linalg_vec2_add(...)! ");
        return -1;
    }
    if (mod == NULL) {
        fprintf(stderr, "NULL vec2 'mod' passed to linalg_vec2_add(...)! ");
        return -1;
    }
    if (dest == NULL) {
        fprintf(stderr, "NULL vec2 'dest' passed to linalg_vec2_add(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0) + *(mod + 0);
    *(dest + 1) = *(src + 1) + *(mod + 1);

    return 0;
}

success_t linalg_vec2_sub(vec2 src, vec2 mod, vec2 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec2 'src' passed to linalg_vec2_sub(...)! ");
        return -1;
    }
    if (mod == NULL) {
        fprintf(stderr, "NULL vec2 passed to linalg_vec2_sub(...)! ");
        return -1;
    }
    if (src == NULL) {
        fprintf(stderr, "NULL vec2 'dest' passed to linalg_vec2_sub(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0) - *(mod + 0);
    *(dest + 1) = *(src + 1) - *(mod + 1);

    return 0;
}

success_t linalg_vec2_mult(vec2 src, float mod, vec2 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec2 'src' passed to linalg_vec2_mult(...)! ");
        return -1;
    }
    if (dest == NULL) {
        fprintf(stderr, "NULL vec2 'dest' passed to linalg_vec2_mult(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0) * mod;
    *(dest + 1) = *(src + 0) * mod;

    return 0;
}

success_t linalg_vec2_dot(vec2 src, vec2 mod, float* dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec2 'src' passed to linalg_vec2_dot(...)! ");
        return -1;
    }
    if (mod == NULL) {
        fprintf(stderr, "NULL vec2 'mod' passed to linalg_vec2_dot(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0) * *(mod + 0) + *(src + 1) * *(mod + 1);

    return 0;
}

success_t linalg_vec2_print(vec2 src) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec2 'src' passed to linalg_vec2_print(...)! ");
        return -1;
    }

    fprintf(stdout, "Vec2 Contents: [%.2f, %.2f]\n", *(src + 0), *(src + 1));

    return 0;
}