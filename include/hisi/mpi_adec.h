/******************************************************************************

  Copyright (C), 2016-2018, Hisilicon Tech. Co., Ltd.

 ******************************************************************************
  File Name     : mpi_adec.h
  Version         : Initial Draft
  Author          : Hisilicon multimedia software group
  Created        : 2016/6/15
  Last Modified :
  Description    :
  Function List  :
******************************************************************************/

#ifndef __MPI_ADEC_H__
#define __MPI_ADEC_H__

#include "hi_common.h"
#include "hi_comm_aio.h"
#include "hi_comm_adec.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"
{
#endif
#endif /* __cplusplus */

HI_S32 HI_MPI_ADEC_CreateChn(ADEC_CHN AdChn, ADEC_CHN_ATTR_S *pstAttr);
HI_S32 HI_MPI_ADEC_DestroyChn(ADEC_CHN AdChn);

HI_S32 HI_MPI_ADEC_SendStream(ADEC_CHN AdChn, const AUDIO_STREAM_S *pstStream, HI_BOOL bBlock);

HI_S32 HI_MPI_ADEC_ClearChnBuf(ADEC_CHN AdChn);

HI_S32 HI_MPI_ADEC_RegisterDecoder(HI_S32 *ps32Handle, ADEC_DECODER_S *pstDecoder);
HI_S32 HI_MPI_ADEC_UnRegisterDecoder(HI_S32 s32Handle);

HI_S32 HI_MPI_ADEC_GetFrame(ADEC_CHN AdChn, AUDIO_FRAME_INFO_S *pstFrmInfo, HI_BOOL bBlock);
HI_S32 HI_MPI_ADEC_ReleaseFrame(ADEC_CHN AdChn, AUDIO_FRAME_INFO_S *pstFrmInfo);
HI_S32 HI_MPI_ADEC_SendEndOfStream(ADEC_CHN AdChn, HI_BOOL bInstant);



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __MPI_ADEC_H__ */
