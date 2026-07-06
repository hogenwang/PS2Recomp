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

// Function: sub_00296F88
// Address: 0x296f88 - 0x297070
void sub_00296F88_0x296f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296F88_0x296f88");
#endif

    switch (ctx->pc) {
        case 0x296fa8u: goto label_296fa8;
        case 0x296fb4u: goto label_296fb4;
        case 0x296fc8u: goto label_296fc8;
        case 0x296fd8u: goto label_296fd8;
        case 0x296fe8u: goto label_296fe8;
        case 0x296ffcu: goto label_296ffc;
        case 0x297018u: goto label_297018;
        case 0x297028u: goto label_297028;
        case 0x297038u: goto label_297038;
        case 0x297048u: goto label_297048;
        default: break;
    }

    ctx->pc = 0x296f88u;

    // 0x296f88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x296f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f94: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x296f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x296f98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x296f9c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x296f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x296fa0: 0xc0a5af2  jal         func_296BC8
    ctx->pc = 0x296FA0u;
    SET_GPR_U32(ctx, 31, 0x296FA8u);
    ctx->pc = 0x296FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FA0u;
    // 0x296fa4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BC8u, 0x296FA0u, 0x296FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FA8u;
label_296fa8:
    // 0x296fa8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x296fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fac: 0xc0a69f0  jal         func_29A7C0
    ctx->pc = 0x296FACu;
    SET_GPR_U32(ctx, 31, 0x296FB4u);
    ctx->pc = 0x296FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FACu;
    // 0x296fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A7C0u, 0x296FACu, 0x296FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FB4u;
label_296fb4:
    // 0x296fb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x296fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296fbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x296fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fc0: 0xc0a67f0  jal         func_299FC0
    ctx->pc = 0x296FC0u;
    SET_GPR_U32(ctx, 31, 0x296FC8u);
    ctx->pc = 0x296FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FC0u;
    // 0x296fc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299FC0u, 0x296FC0u, 0x296FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FC8u;
label_296fc8:
    // 0x296fc8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x296FC8u;
    {
        const bool branch_taken_0x296fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FC8u;
        // 0x296fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296fc8) {
            ctx->pc = 0x297050u;
            goto label_297050;
        }
    }
    ctx->pc = 0x296FD0u;
    // 0x296fd0: 0xc0a6a1e  jal         func_29A878
    ctx->pc = 0x296FD0u;
    SET_GPR_U32(ctx, 31, 0x296FD8u);
    ctx->pc = 0x296FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FD0u;
    // 0x296fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A878u, 0x296FD0u, 0x296FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FD8u;
label_296fd8:
    // 0x296fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296fe0: 0xc0a67f0  jal         func_299FC0
    ctx->pc = 0x296FE0u;
    SET_GPR_U32(ctx, 31, 0x296FE8u);
    ctx->pc = 0x296FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FE0u;
    // 0x296fe4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299FC0u, 0x296FE0u, 0x296FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FE8u;
label_296fe8:
    // 0x296fe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fec: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x296FECu;
    {
        const bool branch_taken_0x296fec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x296FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FECu;
        // 0x296ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296fec) {
            ctx->pc = 0x297050u;
            goto label_297050;
        }
    }
    ctx->pc = 0x296FF4u;
    // 0x296ff4: 0xc0a5af4  jal         func_296BD0
    ctx->pc = 0x296FF4u;
    SET_GPR_U32(ctx, 31, 0x296FFCu);
    ctx->pc = 0x296FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FF4u;
    // 0x296ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BD0u, 0x296FF4u, 0x296FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FFCu;
label_296ffc:
    // 0x296ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297000: 0x12500013  beq         $s2, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x297000u;
    {
        const bool branch_taken_0x297000 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x297004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297000u;
        // 0x297004: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297000) {
            ctx->pc = 0x297050u;
            goto label_297050;
        }
    }
    ctx->pc = 0x297008u;
    // 0x297008: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x297008u;
    {
        const bool branch_taken_0x297008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297008u;
        // 0x29700c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297008) {
            ctx->pc = 0x297054u;
            goto label_297054;
        }
    }
    ctx->pc = 0x297010u;
    // 0x297010: 0xc0a69f0  jal         func_29A7C0
    ctx->pc = 0x297010u;
    SET_GPR_U32(ctx, 31, 0x297018u);
    ctx->pc = 0x297014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297010u;
    // 0x297014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A7C0u, 0x297010u, 0x297018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297018u;
label_297018:
    // 0x297018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29701c: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x29701cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x297020: 0xc0a67f0  jal         func_299FC0
    ctx->pc = 0x297020u;
    SET_GPR_U32(ctx, 31, 0x297028u);
    ctx->pc = 0x297024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297020u;
    // 0x297024: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299FC0u, 0x297020u, 0x297028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297028u;
label_297028:
    // 0x297028: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x297028u;
    {
        const bool branch_taken_0x297028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297028u;
        // 0x29702c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297028) {
            ctx->pc = 0x297050u;
            goto label_297050;
        }
    }
    ctx->pc = 0x297030u;
    // 0x297030: 0xc0a6a1e  jal         func_29A878
    ctx->pc = 0x297030u;
    SET_GPR_U32(ctx, 31, 0x297038u);
    ctx->pc = 0x297034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297030u;
    // 0x297034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A878u, 0x297030u, 0x297038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297038u;
label_297038:
    // 0x297038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29703c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29703cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297040: 0xc0a67f0  jal         func_299FC0
    ctx->pc = 0x297040u;
    SET_GPR_U32(ctx, 31, 0x297048u);
    ctx->pc = 0x297044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297040u;
    // 0x297044: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    ctx->in_delay_slot = false;
    ctx->pc = 0x299FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299FC0u, 0x297040u, 0x297048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297048u;
label_297048:
    // 0x297048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x297048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29704c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29704cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297050:
    // 0x297050: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x297050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_297054:
    // 0x297054: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x297054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297058: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29705c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29705cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297064: 0x3e00008  jr          $ra
    ctx->pc = 0x297064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297064u;
        // 0x297068: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29706Cu;
    // 0x29706c: 0x0  nop
    ctx->pc = 0x29706cu;
    // NOP
    if (ctx->pc == 0x29706cu) { ctx->pc = 0x297070u; }
}
