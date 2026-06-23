#pragma once

#include "ps2_syscalls.h"

namespace ps2_syscalls
{
    void SifStopModule(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void SifLoadModule(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void SifInitRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void SifBindRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void SifCallRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void SifRegisterRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void SifCheckStatRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void SifSetRpcQueue(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void SifRemoveRpcQueue(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void SifRemoveRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    uint32_t registerDtxSifTransfer(uint8_t *rdram, uint32_t dtxId, uint32_t eeWorkAddr, uint32_t iopWorkAddr, uint32_t wkSize, uint32_t preferredRemoteHandle = 0u);
    void registerDtxSjrmtObject(uint32_t handle, uint32_t mode, uint32_t wkAddr, uint32_t wkSize);
    void eraseDtxSjrmtObject(uint32_t handle);
    void resetDtxSjrmtObject(uint32_t handle);
    void registerDtxSjxObject(uint32_t handle, uint32_t srcSjHandle, uint32_t dstSjHandle, uint32_t line, uint32_t eeObjAddr);
    void eraseDtxSjxObject(uint32_t handle);
    void resetDtxSjxObject(uint32_t handle, uint32_t xid);
    void registerDtxPs2RnaObject(uint32_t handle, uint32_t maxChannels, uint32_t sjHandle0, uint32_t sjHandle1);
    void eraseDtxPs2RnaObject(uint32_t handle);
    void noteDtxSifDmaTransfer(uint8_t *rdram, uint32_t srcAddr, uint32_t dstAddr, uint32_t sizeBytes);
    bool handleSoundDriverRpcService(uint8_t *rdram, PS2Runtime *runtime,
                                     uint32_t sid, uint32_t rpcNum,
                                     uint32_t sendBuf, uint32_t sendSize,
                                     uint32_t recvBuf, uint32_t recvSize,
                                     uint32_t &resultPtr,
                                     bool &signalNowaitCompletion);
    void prepareSoundDriverStatusTransfer(uint8_t *rdram, uint32_t srcAddr, uint32_t size);
    void finalizeSoundDriverStatusTransfer(uint8_t *rdram, uint32_t srcAddr, uint32_t dstAddr, uint32_t size);
    void sceSifCallRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void sceSifSendCmd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void sceRpcGetPacket(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
}
