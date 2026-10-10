#include "logo.h"
#include "logo_builtin.h"
#include "common/color.h"

const FFlogo ffLogoUnknown = {
    .names = { "unknown_arch" },
    .lines = FASTFETCH_DATATEXT_LOGO_UNKNOWN_ARCH,
    .colors = {
        FF_COLOR_FG_DEFAULT,
    },
};

#include "./ascii/a.inc"

const FFlogo* ffLogoBuiltins[] = {
    A
};
