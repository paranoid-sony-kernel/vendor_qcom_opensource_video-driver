/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2020-2021, The Linux Foundation. All rights reserved.
 * Copyright (c) 2021 Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _MSM_VIDC_IRIS3_H_
#define _MSM_VIDC_IRIS3_H_

#include "msm_vidc_core.h"

#if defined(CONFIG_MSM_VIDC_IRIS3)
int msm_vidc_init_iris3(struct msm_vidc_core *core);
int msm_vidc_deinit_iris3(struct msm_vidc_core *core);
#else
static inline int msm_vidc_init_iris3(struct msm_vidc_core *core)
{
	return -EINVAL;
}
static inline int msm_vidc_deinit_iris3(struct msm_vidc_core *core)
{
	return -EINVAL;
}
#endif

#endif // _MSM_VIDC_IRIS3_H_