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

// Function: sub_0033E0B0
// Address: 0x33e0b0 - 0x33e170
void sub_0033E0B0_0x33e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E0B0_0x33e0b0");
#endif

    switch (ctx->pc) {
        case 0x33e0fcu: goto label_33e0fc;
        case 0x33e104u: goto label_33e104;
        case 0x33e10cu: goto label_33e10c;
        case 0x33e11cu: goto label_33e11c;
        case 0x33e13cu: goto label_33e13c;
        default: break;
    }

    ctx->pc = 0x33e0b0u;

    // 0x33e0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33e0b4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x33e0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33e0b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33e0bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33e0c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33e0c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33e0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33e0c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33e0cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33E0CCu;
    {
        const bool branch_taken_0x33e0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0CCu;
        // 0x33e0d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e0cc) {
            ctx->pc = 0x33E0E0u;
            goto label_33e0e0;
        }
    }
    ctx->pc = 0x33E0D4u;
    // 0x33e0d4: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x33e0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x33e0d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33E0D8u;
    {
        const bool branch_taken_0x33e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0D8u;
        // 0x33e0dc: 0x2610dd98  addiu       $s0, $s0, -0x2268 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e0d8) {
            ctx->pc = 0x33E0E8u;
            goto label_33e0e8;
        }
    }
    ctx->pc = 0x33E0E0u;
label_33e0e0:
    // 0x33e0e0: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x33e0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x33e0e4: 0x2610db50  addiu       $s0, $s0, -0x24B0
    ctx->pc = 0x33e0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957904));
label_33e0e8:
    // 0x33e0e8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x33E0E8u;
    {
        const bool branch_taken_0x33e0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e0e8) {
            ctx->pc = 0x33E0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E0E8u;
            // 0x33e0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E0F4u;
            goto label_33e0f4;
        }
    }
    ctx->pc = 0x33E0F0u;
    // 0x33e0f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33e0f4:
    // 0x33e0f4: 0xc0cf768  jal         func_33DDA0
    ctx->pc = 0x33E0F4u;
    SET_GPR_U32(ctx, 31, 0x33E0FCu);
    ctx->pc = 0x33E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0F4u;
    // 0x33e0f8: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DDA0u, 0x33E0F4u, 0x33E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0FCu;
label_33e0fc:
    // 0x33e0fc: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x33e0fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x33e100: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33e100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e104:
    // 0x33e104: 0xc0cf7a4  jal         func_33DE90
    ctx->pc = 0x33E104u;
    SET_GPR_U32(ctx, 31, 0x33E10Cu);
    ctx->pc = 0x33DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DE90u, 0x33E104u, 0x33E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E10Cu;
label_33e10c:
    // 0x33e10c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x33e10cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e110: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x33e110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x33e114: 0xc04ec04  jal         func_13B010
    ctx->pc = 0x33E114u;
    SET_GPR_U32(ctx, 31, 0x33E11Cu);
    ctx->pc = 0x33E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E114u;
    // 0x33e118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B010u, 0x33E114u, 0x33E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E11Cu;
label_33e11c:
    // 0x33e11c: 0xa2110150  sb          $s1, 0x150($s0)
    ctx->pc = 0x33e11cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 336), (uint8_t)GPR_U32(ctx, 17));
    // 0x33e120: 0x2604014c  addiu       $a0, $s0, 0x14C
    ctx->pc = 0x33e120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
    // 0x33e124: 0xa211014d  sb          $s1, 0x14D($s0)
    ctx->pc = 0x33e124u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 333), (uint8_t)GPR_U32(ctx, 17));
    // 0x33e128: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33e128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e12c: 0xa2020151  sb          $v0, 0x151($s0)
    ctx->pc = 0x33e12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 337), (uint8_t)GPR_U32(ctx, 2));
    // 0x33e130: 0xa202014e  sb          $v0, 0x14E($s0)
    ctx->pc = 0x33e130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 334), (uint8_t)GPR_U32(ctx, 2));
    // 0x33e134: 0xc0c8504  jal         func_321410
    ctx->pc = 0x33E134u;
    SET_GPR_U32(ctx, 31, 0x33E13Cu);
    ctx->pc = 0x33E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E134u;
    // 0x33e138: 0xa2020152  sb          $v0, 0x152($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 338), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x33E134u, 0x33E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E13Cu;
label_33e13c:
    // 0x33e13c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33e13cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33e140: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x33e140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33e144: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x33e144u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33e148: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33E148u;
    {
        const bool branch_taken_0x33e148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E148u;
        // 0x33e14c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e148) {
            ctx->pc = 0x33E104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33e104;
        }
    }
    ctx->pc = 0x33E150u;
    // 0x33e150: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33e150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e154: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33e154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33e158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e15c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33e15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33e160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e164: 0x3e00008  jr          $ra
    ctx->pc = 0x33E164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E164u;
        // 0x33e168: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E16Cu;
    // 0x33e16c: 0x0  nop
    ctx->pc = 0x33e16cu;
    // NOP
}
