/* Copyright (C) 2016 RDA Technologies Limited and/or its affiliates("RDA").
* All rights reserved.
*
* This software is supplied "AS IS" without any warranties.
* RDA assumes no responsibility or liability for the use of the software,
* conveys no license or title under any patent, copyright, or mask work
* right to the product. RDA reserves the right to make changes in the
* software without notification.  RDA also make no representation or
* warranty that such application will be suitable for the specified use
* without further testing or modification.
*/



#ifndef RV30BACKEND_H__
#define RV30BACKEND_H__

#include "helix_types.h"
#include "helix_result.h"

#ifdef __cplusplus
extern "C" {
#endif  /* #ifdef __cplusplus */

HX_RESULT _RV40toYUV420CustomMessage(UINT32 *msg_id, void *global);

HX_RESULT _RV40toYUV420HiveMessage(UINT32 *msg_id, void *global);

HX_RESULT _RV40toYUV420Transform    (
    UCHAR     *pRV20Packets,
    UCHAR     *pDecodedFrameBuffer,
    void      *pInputParams,
    void      *pOutputParams,
    void      *global
);

HX_RESULT _RV40toYUV420Free(void *global);

HX_RESULT _RV40toYUV420Init(void *prv10Init, void **decoderState);

#ifdef __cplusplus
}
#endif

#endif /* RV30BACKEND_H__ */
