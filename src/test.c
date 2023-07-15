#include "linalg.h"

success_t vs;

int main(int argc, char** argv) {
    vec2 v2 = {0, 0};

    vs = linalg_vec2(v2, 1.5, 2.3);
    if (vs == LINALG_FALSE) {
        fprintf(stderr, " : [%s: %d]\n", __FILE__, __LINE__ - 2);
        return -1;
    }

    vs = linalg_vec2_print(v2);
    if (vs == LINALG_FALSE) {
        fprintf(stderr, " : [%s: %d]", __FILE__, __LINE__ - 2);
        return -1;
    }

    vec3 v3 = {0, 0, 0};

    vs = linalg_vec3(v3, 1.2, 4.2, 6.7);
    if (vs == LINALG_FALSE) {
        fprintf(stderr, " : [%s: %d]\n", __FILE__, __LINE__ - 2);
        return -1;
    }

    vs = linalg_vec3_print(v3);
    if (vs == LINALG_FALSE) {
        fprintf(stderr, " : [%s: %d]\n", __FILE__, __LINE__ -2);
        return -1;
    }

    vec4 v4 = {0, 0, 0, 0};

    vs = linalg_vec4(v4, 1.0, 3.3, 5.4, 0.1);
    if (vs == LINALG_FALSE) {
        fprintf(stderr, " : [%s: %d]\n", __FILE__, __LINE__ - 2);
        return -1;
    }

    vs = linalg_vec4_print(v4);
    if (vs == LINALG_FALSE) {
        fprintf(stderr, " : [%s: %d]\n", __FILE__, __LINE__ - 2);
        return -1;
    }

    return 0;
}