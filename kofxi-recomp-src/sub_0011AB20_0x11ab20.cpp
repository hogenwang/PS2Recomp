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

// Function: sub_0011AB20
// Address: 0x11ab20 - 0x11abd0
void sub_0011AB20_0x11ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AB20_0x11ab20");
#endif

    switch (ctx->pc) {
        case 0x11ab54u: goto label_11ab54;
        case 0x11ab74u: goto label_11ab74;
        case 0x11ab80u: goto label_11ab80;
        case 0x11ab84u: goto label_11ab84;
        case 0x11ab98u: goto label_11ab98;
        case 0x11abb0u: goto label_11abb0;
        case 0x11abc8u: goto label_11abc8;
        default: break;
    }

    ctx->pc = 0x11ab20u;

    // 0x11ab20: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11ab20u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11ab24: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11ab24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ab28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ab2c: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11ab2cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11ab30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ab34: 0x3c0e3f49  lui         $t6, 0x3F49
    ctx->pc = 0x11ab34u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16201 << 16));
    // 0x11ab38: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11ab38u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11ab3c: 0x35ce0fd8  ori         $t6, $t6, 0xFD8
    ctx->pc = 0x11ab3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4056);
    // 0x11ab40: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x11ab40u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11ab44: 0x11c00012  beqz        $t6, . + 4 + (0x12 << 2)
    ctx->pc = 0x11AB44u;
    {
        const bool branch_taken_0x11ab44 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB44u;
        // 0x11ab48: 0x44806800  mtc1        $zero, $f13 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab44) {
            ctx->pc = 0x11AB90u;
            goto label_11ab90;
        }
    }
    ctx->pc = 0x11AB4Cu;
    // 0x11ab4c: 0xc046632  jal         func_1198C8
    ctx->pc = 0x11AB4Cu;
    SET_GPR_U32(ctx, 31, 0x11AB54u);
    ctx->pc = 0x11AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB4Cu;
    // 0x11ab50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1198C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1198C8u, 0x11AB4Cu, 0x11AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB54u;
label_11ab54:
    // 0x11ab54: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11ab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11ab58: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11ab58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ab5c: 0x104f0016  beq         $v0, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x11AB5Cu;
    {
        const bool branch_taken_0x11ab5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x11AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB5Cu;
        // 0x11ab60: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab5c) {
            ctx->pc = 0x11ABB8u;
            goto label_11abb8;
        }
    }
    ctx->pc = 0x11AB64u;
    // 0x11ab64: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11AB64u;
    {
        const bool branch_taken_0x11ab64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB64u;
        // 0x11ab68: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab64) {
            ctx->pc = 0x11ABA0u;
            goto label_11aba0;
        }
    }
    ctx->pc = 0x11AB6Cu;
    // 0x11ab6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AB6Cu;
    {
        const bool branch_taken_0x11ab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB6Cu;
        // 0x11ab70: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab6c) {
            ctx->pc = 0x11AB8Cu;
            goto label_11ab8c;
        }
    }
    ctx->pc = 0x11AB74u;
label_11ab74:
    // 0x11ab74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ab78: 0xc0469ac  jal         func_11A6B0
    ctx->pc = 0x11AB78u;
    SET_GPR_U32(ctx, 31, 0x11AB80u);
    ctx->pc = 0x11AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB78u;
    // 0x11ab7c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A6B0u, 0x11AB78u, 0x11AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB80u;
label_11ab80:
    // 0x11ab80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ab80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11ab84:
    // 0x11ab84: 0x3e00008  jr          $ra
    ctx->pc = 0x11AB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB84u;
        // 0x11ab88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AB8Cu;
label_11ab8c:
    // 0x11ab8c: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x11ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_11ab90:
    // 0x11ab90: 0xc046750  jal         func_119D40
    ctx->pc = 0x11AB90u;
    SET_GPR_U32(ctx, 31, 0x11AB98u);
    ctx->pc = 0x119D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D40u, 0x11AB90u, 0x11AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB98u;
label_11ab98:
    // 0x11ab98: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11AB98u;
    {
        const bool branch_taken_0x11ab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB98u;
        // 0x11ab9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab98) {
            ctx->pc = 0x11AB84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ab84;
        }
    }
    ctx->pc = 0x11ABA0u;
label_11aba0:
    // 0x11aba0: 0x144ffff4  bne         $v0, $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x11ABA0u;
    {
        const bool branch_taken_0x11aba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x11ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABA0u;
        // 0x11aba4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aba0) {
            ctx->pc = 0x11AB74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ab74;
        }
    }
    ctx->pc = 0x11ABA8u;
    // 0x11aba8: 0xc046750  jal         func_119D40
    ctx->pc = 0x11ABA8u;
    SET_GPR_U32(ctx, 31, 0x11ABB0u);
    ctx->pc = 0x11ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABA8u;
    // 0x11abac: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D40u, 0x11ABA8u, 0x11ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABB0u;
label_11abb0:
    // 0x11abb0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x11ABB0u;
    {
        const bool branch_taken_0x11abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABB0u;
        // 0x11abb4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abb0) {
            ctx->pc = 0x11AB80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ab80;
        }
    }
    ctx->pc = 0x11ABB8u;
label_11abb8:
    // 0x11abb8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11abbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11abc0: 0xc0469ac  jal         func_11A6B0
    ctx->pc = 0x11ABC0u;
    SET_GPR_U32(ctx, 31, 0x11ABC8u);
    ctx->pc = 0x11ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABC0u;
    // 0x11abc4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A6B0u, 0x11ABC0u, 0x11ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABC8u;
label_11abc8:
    // 0x11abc8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x11ABC8u;
    {
        const bool branch_taken_0x11abc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABC8u;
        // 0x11abcc: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abc8) {
            ctx->pc = 0x11AB80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ab80;
        }
    }
    ctx->pc = 0x11ABD0u;
}
