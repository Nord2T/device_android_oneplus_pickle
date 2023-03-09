/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t global_info = {
    .prjname_value = "20831",

    .model = "CPH2411",
    .name = "CPH2411EEA",
    .build_fingerprint = "OnePlus/CPH2411EEA/OP5566L1:12/RP1A.200720.011/1629889893415:user/release-keys",
    .hw = "20831",
};

static const variant_info_t india_info = {
    .prjname_value = "20827",

    .model = "CPH2423",
    .name = "CPH2423IND",
    .build_fingerprint = "OnePlus/CPH2423IND/OP515BL1:12/RP1A.220905.001/1676518158691:user/release-keys",
    .hw = "20827",
};

static const std::vector<variant_info_t> variants = {
    global_info,
    india_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
