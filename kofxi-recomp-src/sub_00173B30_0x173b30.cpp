#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173B30
// Address: 0x173b30 - 0x173b90
void sub_00173B30_0x173b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173B30_0x173b30");
#endif

    ctx->pc = 0x173b30u;

    // 0x173b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173b34: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x173b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x173b38: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x173b38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x173b3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x173b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x173b40: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x173b40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x173b44: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x173b44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x173b48: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x173b48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x173b4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b50: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x173b50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x173b54: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x173b54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x173b58: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x173b58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x173b5c: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x173b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x173b60: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x173b60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x173b64: 0xa0800015  sb          $zero, 0x15($a0)
    ctx->pc = 0x173b64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x173b68: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x173b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x173b6c: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x173b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x173b70: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x173b70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x173b74: 0xa080001a  sb          $zero, 0x1A($a0)
    ctx->pc = 0x173b74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x173b78: 0xa080001b  sb          $zero, 0x1B($a0)
    ctx->pc = 0x173b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x173b7c: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x173b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x173b80: 0x3e00008  jr          $ra
    ctx->pc = 0x173B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B80u;
            // 0x173b84: 0xa4800026  sh          $zero, 0x26($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173B88u;
    // 0x173b88: 0x0  nop
    ctx->pc = 0x173b88u;
    // NOP
    // 0x173b8c: 0x0  nop
    ctx->pc = 0x173b8cu;
    // NOP
    ctx->pc = 0x173b90u;
}
