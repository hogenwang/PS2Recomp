#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002416B0
// Address: 0x2416b0 - 0x2416f8
void sub_002416B0_0x2416b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002416B0_0x2416b0");
#endif

    ctx->pc = 0x2416b0u;

    // 0x2416b0: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x2416b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2416b4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2416b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2416b8: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x2416b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2416bc: 0x538c3  sra         $a3, $a1, 3
    ctx->pc = 0x2416bcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 3));
    // 0x2416c0: 0x24c30018  addiu       $v1, $a2, 0x18
    ctx->pc = 0x2416c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2416c4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2416c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2416c8: 0xa062000a  sb          $v0, 0xA($v1)
    ctx->pc = 0x2416c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x2416cc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2416ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2416d0: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x2416d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x2416d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2416d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416d8: 0xa4650008  sh          $a1, 0x8($v1)
    ctx->pc = 0x2416d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x2416dc: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x2416dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x2416e0: 0xa4c90008  sh          $t1, 0x8($a2)
    ctx->pc = 0x2416e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 9));
    // 0x2416e4: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x2416e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x2416e8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2416e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2416ec: 0xa068000b  sb          $t0, 0xB($v1)
    ctx->pc = 0x2416ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 8));
    // 0x2416f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2416F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2416F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416F0u;
        // 0x2416f4: 0xa0c8000b  sb          $t0, 0xB($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2416F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2416F8u;
}
