#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001521D0
// Address: 0x1521d0 - 0x152220
void sub_001521D0_0x1521d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001521D0_0x1521d0");
#endif

    ctx->pc = 0x1521d0u;

    // 0x1521d0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1521d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1521d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1521d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1521d8: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x1521d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1521dc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1521dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1521e0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1521e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1521e4: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x1521e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1521e8: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x1521e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1521ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1521ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521f0: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x1521f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1521f4: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x1521f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1521f8: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x1521f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1521fc: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x1521fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x152200: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x152200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x152204: 0xa0800016  sb          $zero, 0x16($a0)
    ctx->pc = 0x152204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x152208: 0xa0800017  sb          $zero, 0x17($a0)
    ctx->pc = 0x152208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x15220c: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x15220cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x152210: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x152210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x152214: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x152214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x152218: 0x3e00008  jr          $ra
    ctx->pc = 0x152218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15221Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152218u;
            // 0x15221c: 0xa4800024  sh          $zero, 0x24($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152220u;
    ctx->pc = 0x152220u;
}
