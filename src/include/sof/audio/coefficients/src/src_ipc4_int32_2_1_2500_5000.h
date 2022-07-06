/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2022 Intel Corporation. All rights reserved.
 *
 */

/** \cond GENERATED_BY_TOOLS_TUNE_SRC */
#include <sof/audio/src/src.h>
#include <stdint.h>

const int32_t src_int32_2_1_2500_5000_fir[48] = {
	240350,
	362018,
	-4020996,
	10036155,
	-10638759,
	-6441346,
	44752406,
	-83083662,
	73154958,
	40791868,
	-302963980,
	882576099,
	1516859045,
	102973904,
	-225097676,
	161818361,
	-58668551,
	-13214026,
	35250293,
	-24870236,
	7872921,
	1398740,
	-2579787,
	975548,
	975548,
	-2579787,
	1398740,
	7872921,
	-24870236,
	35250293,
	-13214026,
	-58668551,
	161818361,
	-225097676,
	102973904,
	1516859045,
	882576099,
	-302963980,
	40791868,
	73154958,
	-83083662,
	44752406,
	-6441346,
	-10638759,
	10036155,
	-4020996,
	362018,
	240350

};

struct src_stage src_int32_2_1_2500_5000 = {
	0, 1, 2, 24, 48, 1, 2, 0, 0,
	src_int32_2_1_2500_5000_fir};
/** \endcond */
