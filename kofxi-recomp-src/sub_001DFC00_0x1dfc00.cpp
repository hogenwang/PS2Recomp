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

// Function: sub_001DFC00
// Address: 0x1dfc00 - 0x1dfd50
void sub_001DFC00_0x1dfc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFC00_0x1dfc00");
#endif

    switch (ctx->pc) {
        case 0x1dfc14u: goto label_1dfc14;
        case 0x1dfc2cu: goto label_1dfc2c;
        case 0x1dfc40u: goto label_1dfc40;
        case 0x1dfc9cu: goto label_1dfc9c;
        case 0x1dfcd0u: goto label_1dfcd0;
        case 0x1dfce8u: goto label_1dfce8;
        default: break;
    }

    ctx->pc = 0x1dfc00u;

    // 0x1dfc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dfc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dfc04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfc08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dfc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dfc0c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1DFC0Cu;
    SET_GPR_U32(ctx, 31, 0x1DFC14u);
    ctx->pc = 0x1DFC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC0Cu;
    // 0x1dfc10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1DFC0Cu, 0x1DFC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC14u;
label_1dfc14:
    // 0x1dfc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dfc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfc18: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DFC18u;
    {
        const bool branch_taken_0x1dfc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC18u;
        // 0x1dfc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc18) {
            ctx->pc = 0x1DFC38u;
            goto label_1dfc38;
        }
    }
    ctx->pc = 0x1DFC20u;
    // 0x1dfc20: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dfc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dfc24: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DFC24u;
    SET_GPR_U32(ctx, 31, 0x1DFC2Cu);
    ctx->pc = 0x1DFC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC24u;
    // 0x1dfc28: 0x2484cbb8  addiu       $a0, $a0, -0x3448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DFC24u, 0x1DFC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC2Cu;
label_1dfc2c:
    // 0x1dfc2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DFC2Cu;
    {
        const bool branch_taken_0x1dfc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC2Cu;
        // 0x1dfc30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc2c) {
            ctx->pc = 0x1DFC60u;
            goto label_1dfc60;
        }
    }
    ctx->pc = 0x1DFC34u;
    // 0x1dfc34: 0x0  nop
    ctx->pc = 0x1dfc34u;
    // NOP
label_1dfc38:
    // 0x1dfc38: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1DFC38u;
    SET_GPR_U32(ctx, 31, 0x1DFC40u);
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1DFC38u, 0x1DFC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC40u;
label_1dfc40:
    // 0x1dfc40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dfc40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFC44u;
    {
        const bool branch_taken_0x1dfc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC44u;
        // 0x1dfc48: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc44) {
            ctx->pc = 0x1DFC60u;
            goto label_1dfc60;
        }
    }
    ctx->pc = 0x1DFC4Cu;
    // 0x1dfc4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfc4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dfc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfc54: 0x807d5b6  j           func_1F56D8
    ctx->pc = 0x1DFC54u;
    ctx->pc = 0x1DFC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC54u;
    // 0x1dfc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F56D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F56D8u, 0x1DFC54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DFC5Cu;
    // 0x1dfc5c: 0x0  nop
    ctx->pc = 0x1dfc5cu;
    // NOP
label_1dfc60:
    // 0x1dfc60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfc60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dfc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfc68: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC68u;
        // 0x1dfc6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC70u;
    // 0x1dfc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfc74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dfc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dfc78: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1dfc78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dfc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dfc80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dfc80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfc88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc8c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dfc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dfc90: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1dfc90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1dfc94: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1DFC94u;
    SET_GPR_U32(ctx, 31, 0x1DFC9Cu);
    ctx->pc = 0x1DFC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC94u;
    // 0x1dfc98: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1DFC94u, 0x1DFC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC9Cu;
label_1dfc9c:
    // 0x1dfc9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dfc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfca0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFCA0u;
    {
        const bool branch_taken_0x1dfca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCA0u;
        // 0x1dfca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfca0) {
            ctx->pc = 0x1DFCC8u;
            goto label_1dfcc8;
        }
    }
    ctx->pc = 0x1DFCA8u;
    // 0x1dfca8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dfca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dfcac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfcb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfcb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfcb4: 0x2484cbf0  addiu       $a0, $a0, -0x3410
    ctx->pc = 0x1dfcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953968));
    // 0x1dfcb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dfcb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfcbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dfcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfcc0: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1DFCC0u;
    ctx->pc = 0x1DFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCC0u;
    // 0x1dfcc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DFCC8u;
label_1dfcc8:
    // 0x1dfcc8: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1DFCC8u;
    SET_GPR_U32(ctx, 31, 0x1DFCD0u);
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1DFCC8u, 0x1DFCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCD0u;
label_1dfcd0:
    // 0x1dfcd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dfcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dfcd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcd8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DFCD8u;
    {
        const bool branch_taken_0x1dfcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCD8u;
        // 0x1dfcdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcd8) {
            ctx->pc = 0x1DFD0Cu;
            goto label_1dfd0c;
        }
    }
    ctx->pc = 0x1DFCE0u;
    // 0x1dfce0: 0xc07d548  jal         func_1F5520
    ctx->pc = 0x1DFCE0u;
    SET_GPR_U32(ctx, 31, 0x1DFCE8u);
    ctx->pc = 0x1F5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5520u, 0x1DFCE0u, 0x1DFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCE8u;
label_1dfce8:
    // 0x1dfce8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1dfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dfcec: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x1dfcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1dfcf0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1dfcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dfcf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFCF4u;
    {
        const bool branch_taken_0x1dfcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCF4u;
        // 0x1dfcf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcf4) {
            ctx->pc = 0x1DFD10u;
            goto label_1dfd10;
        }
    }
    ctx->pc = 0x1DFCFCu;
    // 0x1dfcfc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1dfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dfd00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1dfd00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1dfd04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1dfd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1dfd08: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1dfd08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1dfd0c:
    // 0x1dfd0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfd10:
    // 0x1dfd10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfd10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfd14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dfd14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfd18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dfd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD1Cu;
        // 0x1dfd20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFD24u;
    // 0x1dfd24: 0x0  nop
    ctx->pc = 0x1dfd24u;
    // NOP
    // 0x1dfd28: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x1dfd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1dfd2c: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x1dfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1dfd30: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1dfd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1dfd34: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x1dfd34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1dfd38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFD38u;
    {
        const bool branch_taken_0x1dfd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD38u;
        // 0x1dfd3c: 0x451026  xor         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd38) {
            ctx->pc = 0x1DFD48u;
            goto label_1dfd48;
        }
    }
    ctx->pc = 0x1DFD40u;
    // 0x1dfd40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dfd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd44: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x1dfd44u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_1dfd48:
    // 0x1dfd48: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD48u;
        // 0x1dfd4c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFD50u;
}
