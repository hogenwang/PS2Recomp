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

// Function: sub_001FFD88
// Address: 0x1ffd88 - 0x1ffee0
void sub_001FFD88_0x1ffd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFD88_0x1ffd88");
#endif

    switch (ctx->pc) {
        case 0x1ffdb0u: goto label_1ffdb0;
        case 0x1ffdc4u: goto label_1ffdc4;
        case 0x1ffe24u: goto label_1ffe24;
        case 0x1ffe38u: goto label_1ffe38;
        case 0x1ffe90u: goto label_1ffe90;
        case 0x1ffea4u: goto label_1ffea4;
        default: break;
    }

    ctx->pc = 0x1ffd88u;

    // 0x1ffd88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffd8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ffd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ffd90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ffd90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffd98: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1ffd98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffd9c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ffd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1ffda0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffda4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ffda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ffda8: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFDA8u;
    SET_GPR_U32(ctx, 31, 0x1FFDB0u);
    ctx->pc = 0x1FFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFDA8u;
    // 0x1ffdac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFDA8u, 0x1FFDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDB0u;
label_1ffdb0:
    // 0x1ffdb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffdb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffdb4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFDB4u;
    {
        const bool branch_taken_0x1ffdb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDB4u;
        // 0x1ffdb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdb4) {
            ctx->pc = 0x1FFDDCu;
            goto label_1ffddc;
        }
    }
    ctx->pc = 0x1FFDBCu;
    // 0x1ffdbc: 0xc080132  jal         func_2004C8
    ctx->pc = 0x1FFDBCu;
    SET_GPR_U32(ctx, 31, 0x1FFDC4u);
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x1FFDBCu, 0x1FFDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDC4u;
label_1ffdc4:
    // 0x1ffdc4: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1ffdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ffdc8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFDC8u;
    {
        const bool branch_taken_0x1ffdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDC8u;
        // 0x1ffdcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdc8) {
            ctx->pc = 0x1FFDDCu;
            goto label_1ffddc;
        }
    }
    ctx->pc = 0x1FFDD0u;
    // 0x1ffdd0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1ffdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ffdd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffdd8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1ffdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1ffddc:
    // 0x1ffddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffde0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffde0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffde4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ffde4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffde8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ffde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ffdec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDECu;
        // 0x1ffdf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFDF4u;
    // 0x1ffdf4: 0x0  nop
    ctx->pc = 0x1ffdf4u;
    // NOP
    // 0x1ffdf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffdfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ffdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ffe00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ffe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ffe04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ffe04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffe0c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1ffe0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffe10: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ffe10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1ffe14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffe18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ffe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ffe1c: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFE1Cu;
    SET_GPR_U32(ctx, 31, 0x1FFE24u);
    ctx->pc = 0x1FFE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE1Cu;
    // 0x1ffe20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFE1Cu, 0x1FFE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE24u;
label_1ffe24:
    // 0x1ffe24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffe24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe28: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFE28u;
    {
        const bool branch_taken_0x1ffe28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE28u;
        // 0x1ffe2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe28) {
            ctx->pc = 0x1FFE50u;
            goto label_1ffe50;
        }
    }
    ctx->pc = 0x1FFE30u;
    // 0x1ffe30: 0xc080132  jal         func_2004C8
    ctx->pc = 0x1FFE30u;
    SET_GPR_U32(ctx, 31, 0x1FFE38u);
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x1FFE30u, 0x1FFE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE38u;
label_1ffe38:
    // 0x1ffe38: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1ffe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ffe3c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFE3Cu;
    {
        const bool branch_taken_0x1ffe3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE3Cu;
        // 0x1ffe40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe3c) {
            ctx->pc = 0x1FFE50u;
            goto label_1ffe50;
        }
    }
    ctx->pc = 0x1FFE44u;
    // 0x1ffe44: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x1ffe44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x1ffe48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffe4c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1ffe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1ffe50:
    // 0x1ffe50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffe50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffe54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffe54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffe58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ffe58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffe5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ffe5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ffe60: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE60u;
        // 0x1ffe64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFE68u;
    // 0x1ffe68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffe6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ffe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ffe70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ffe70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffe78: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1ffe78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffe7c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ffe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1ffe80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffe84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ffe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ffe88: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFE88u;
    SET_GPR_U32(ctx, 31, 0x1FFE90u);
    ctx->pc = 0x1FFE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE88u;
    // 0x1ffe8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFE88u, 0x1FFE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE90u;
label_1ffe90:
    // 0x1ffe90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffe90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe94: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FFE94u;
    {
        const bool branch_taken_0x1ffe94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE94u;
        // 0x1ffe98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe94) {
            ctx->pc = 0x1FFEC4u;
            goto label_1ffec4;
        }
    }
    ctx->pc = 0x1FFE9Cu;
    // 0x1ffe9c: 0xc080132  jal         func_2004C8
    ctx->pc = 0x1FFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFEA4u);
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x1FFE9Cu, 0x1FFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFEA4u;
label_1ffea4:
    // 0x1ffea4: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ffea8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFEA8u;
    {
        const bool branch_taken_0x1ffea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEA8u;
        // 0x1ffeac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffea8) {
            ctx->pc = 0x1FFEC4u;
            goto label_1ffec4;
        }
    }
    ctx->pc = 0x1FFEB0u;
    // 0x1ffeb0: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x1ffeb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x1ffeb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffeb8: 0x3864ffff  xori        $a0, $v1, 0xFFFF
    ctx->pc = 0x1ffeb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x1ffebc: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x1ffebcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ffec0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1ffec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1ffec4:
    // 0x1ffec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffecc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ffeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffed0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ffed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ffed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFED4u;
        // 0x1ffed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFEDCu;
    // 0x1ffedc: 0x0  nop
    ctx->pc = 0x1ffedcu;
    // NOP
    if (ctx->pc == 0x1ffedcu) { ctx->pc = 0x1ffee0u; }
}
