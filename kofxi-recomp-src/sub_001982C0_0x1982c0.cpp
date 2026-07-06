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

// Function: sub_001982C0
// Address: 0x1982c0 - 0x198380
void sub_001982C0_0x1982c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001982C0_0x1982c0");
#endif

    switch (ctx->pc) {
        case 0x198304u: goto label_198304;
        case 0x198330u: goto label_198330;
        case 0x19833cu: goto label_19833c;
        default: break;
    }

    ctx->pc = 0x1982c0u;

    // 0x1982c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1982c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1982c4: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x1982c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1982c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1982c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1982cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1982ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1982d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1982d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1982d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1982d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1982d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1982dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1982e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1982e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1982e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982e8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1982e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1982ec: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1982ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1982f0: 0x2484cdd0  addiu       $a0, $a0, -0x3230
    ctx->pc = 0x1982f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954448));
    // 0x1982f4: 0x24a5e920  addiu       $a1, $a1, -0x16E0
    ctx->pc = 0x1982f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961440));
    // 0x1982f8: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1982f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1982fc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1982FCu;
    SET_GPR_U32(ctx, 31, 0x198304u);
    ctx->pc = 0x198300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982FCu;
    // 0x198300: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1982FCu, 0x198304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198304u;
label_198304:
    // 0x198304: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x198304u;
    {
        const bool branch_taken_0x198304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198304) {
            ctx->pc = 0x198308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198304u;
            // 0x198308: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198318u;
            goto label_198318;
        }
    }
    ctx->pc = 0x19830Cu;
    // 0x19830c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x19830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x198310: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x198310u;
    {
        const bool branch_taken_0x198310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198310u;
        // 0x198314: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198310) {
            ctx->pc = 0x198358u;
            goto label_198358;
        }
    }
    ctx->pc = 0x198318u;
label_198318:
    // 0x198318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19831c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19831cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x198320: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x198324: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x198324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x198328: 0xc067d64  jal         func_19F590
    ctx->pc = 0x198328u;
    SET_GPR_U32(ctx, 31, 0x198330u);
    ctx->pc = 0x19832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198328u;
    // 0x19832c: 0xa200002c  sb          $zero, 0x2C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x198328u, 0x198330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198330u;
label_198330:
    // 0x198330: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x198330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198334: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x198334u;
    SET_GPR_U32(ctx, 31, 0x19833Cu);
    ctx->pc = 0x198338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198334u;
    // 0x198338: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x198334u, 0x19833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19833Cu;
label_19833c:
    // 0x19833c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19833Cu;
    {
        const bool branch_taken_0x19833c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x198340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19833Cu;
        // 0x198340: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19833c) {
            ctx->pc = 0x198354u;
            goto label_198354;
        }
    }
    ctx->pc = 0x198344u;
    // 0x198344: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x198344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x198348: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x198348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19834c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19834Cu;
    {
        const bool branch_taken_0x19834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19834Cu;
        // 0x198350: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19834c) {
            ctx->pc = 0x198358u;
            goto label_198358;
        }
    }
    ctx->pc = 0x198354u;
label_198354:
    // 0x198354: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x198354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_198358:
    // 0x198358: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x198358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19835c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19835cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x198360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19836c: 0x3e00008  jr          $ra
    ctx->pc = 0x19836Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19836Cu;
        // 0x198370: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19836Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198374u;
    // 0x198374: 0x0  nop
    ctx->pc = 0x198374u;
    // NOP
    // 0x198378: 0x0  nop
    ctx->pc = 0x198378u;
    // NOP
    // 0x19837c: 0x0  nop
    ctx->pc = 0x19837cu;
    // NOP
    if (ctx->pc == 0x19837cu) { ctx->pc = 0x198380u; }
}
