#include "vec3.h"

success_t linalg_vec3(vec3 dest, float x, float y, float z) {
    if (dest == NULL) {
        fprintf(stderr, "NULL vec3 'dest' passed to linalg_vec3(...)! ");
        return -1;
    }

    *(dest + 0) = x;
    *(dest + 1) = y;
    *(dest + 2) = z;

    return 0;
}

success_t linalg_vec3_copy(vec3 src, vec3 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec3 'src' passed to linalg_vec3_copy(...)! ");
        return -1;
    }
    if (dest == NULL) {
        fprintf(stderr, "NULL vec3 'dest' passed to linalg_vec3_copy(...)! ");
        return -1;
    }

    *(src + 0) = *(dest + 0);
    *(src + 1) = *(dest + 1);
    *(src + 2) = *(dest + 2);

    return 0;
}

success_t linalg_vec3_add(vec3 src, vec3 mod, vec3 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec3 'src' passed to linalg_vec3_add(...)! ");
        return -1;
    }
    if (mod == NULL) {
        fprintf(stderr, "NULL vec3 'mod' passed to linalg_vec3_add(...)! ");
        return -1;
    }
    if (dest == NULL) {
        fprintf(stderr, "NULL vec3 'dest' passed to linalg_vec3_add(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0) + *(mod + 0);
    *(dest + 1) = *(src + 1) + *(mod + 1);
    *(dest + 2) = *(src + 2) + *(mod + 2);

    return 0;
}

success_t linalg_vec3_sub(vec3 src, vec3 mod, vec3 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec3 'src' passed to linalg_vec3_sub(...)! ");
        return -1;
    }
    if (mod == NULL) {
        fprintf(stderr, "NULL vec3 'mod' passed to linalg_vec3_sub");
        return -1;
    }
    if (dest == NULL) {
        fprintf(stderr, "NULL vec3 'dest' passed to linalg_vec3_sub(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0) - *(dest + 0);
    *(dest + 1) = *(src + 1) - *(dest + 1);
    *(dest + 2) = *(src + 2) - *(dest + 2);

    return 0;
}

success_t linalg_vec3_mult(vec3 src, float mod, vec3 dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec3 'src' passed to linalg_vec3_mult(...)! ");
        return -1;
    }
    if (dest == NULL) {
        fprintf(stderr, "NULL vec3 'dest' passed to linalg_vec3_sub(...)! ");
        return -1;
    }

    *(dest + 0) = *(src + 0) * mod;
    *(dest + 1) = *(src + 1) * mod;
    *(dest + 2) = *(src + 2) * mod;

    return 0;
}

success_t linalg_vec3_dot(vec3 src, vec3 mod, float* dest) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec3 'src' passed to linalg_vec3_dot(...)! ");
        return -1;
    }
    if (mod == NULL) {
        fprintf(stderr, "NULL vec3 'mod' passed to linalg_vec3_dot(...)! ");
        return -1;
    }

    *(dest + 0) = (*(src + 0) * *(mod + 0)) + (*(src + 1) * *(mod + 1)) + (*(src + 2) * *(mod + 2));

    return 0;
}

success_t linalg_vec3_print(vec3 src) {
    if (src == NULL) {
        fprintf(stderr, "NULL vec3 'src' passed to linalg_vec3_print(...)! ");
        return -1;
    }

    fprintf(stdout, "Vec3 Contents: [%.2f, %.2f, %.2f]\n", *(src + 0), *(src + 1), *(src + 2));

    return 0;
}