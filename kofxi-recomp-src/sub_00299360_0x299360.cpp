#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00299360
// Address: 0x299360 - 0x2993b0
void sub_00299360_0x299360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299360_0x299360");
#endif

    ctx->pc = 0x299360u;

    // 0x299360: 0x3c05efcd  lui         $a1, 0xEFCD
    ctx->pc = 0x299360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61389 << 16));
    // 0x299364: 0x3c0698ba  lui         $a2, 0x98BA
    ctx->pc = 0x299364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39098 << 16));
    // 0x299368: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x299368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29936c: 0x34a5ab89  ori         $a1, $a1, 0xAB89
    ctx->pc = 0x29936cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43913);
    // 0x299370: 0x34c6dcfe  ori         $a2, $a2, 0xDCFE
    ctx->pc = 0x299370u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)56574);
    // 0x299374: 0x3c036745  lui         $v1, 0x6745
    ctx->pc = 0x299374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26437 << 16));
    // 0x299378: 0x3c071032  lui         $a3, 0x1032
    ctx->pc = 0x299378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4146 << 16));
    // 0x29937c: 0x34632301  ori         $v1, $v1, 0x2301
    ctx->pc = 0x29937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8961);
    // 0x299380: 0x34e75476  ori         $a3, $a3, 0x5476
    ctx->pc = 0x299380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21622);
    // 0x299384: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x299384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x299388: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x299388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x29938c: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x29938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x299390: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x299390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x299394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299398: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x299398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x29939c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x29939cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2993a0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2993a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2993a4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2993a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2993a8: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x2993A8u;
    ctx->pc = 0x2993ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2993A8u;
            // 0x2993ac: 0xac400058  sw          $zero, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2993B0u;
    ctx->pc = 0x2993b0u;
}
