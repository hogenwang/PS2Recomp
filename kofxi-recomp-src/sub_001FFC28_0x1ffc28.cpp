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

// Function: sub_001FFC28
// Address: 0x1ffc28 - 0x1ffd18
void sub_001FFC28_0x1ffc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFC28_0x1ffc28");
#endif

    switch (ctx->pc) {
        case 0x1ffc54u: goto label_1ffc54;
        case 0x1ffc68u: goto label_1ffc68;
        case 0x1ffcc0u: goto label_1ffcc0;
        case 0x1ffcd4u: goto label_1ffcd4;
        default: break;
    }

    ctx->pc = 0x1ffc28u;

    // 0x1ffc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffc2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ffc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ffc30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ffc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ffc34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ffc34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffc3c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1ffc3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffc40: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ffc40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1ffc44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffc48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ffc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ffc4c: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFC4Cu;
    SET_GPR_U32(ctx, 31, 0x1FFC54u);
    ctx->pc = 0x1FFC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC4Cu;
    // 0x1ffc50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFC4Cu, 0x1FFC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC54u;
label_1ffc54:
    // 0x1ffc54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc58: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFC58u;
    {
        const bool branch_taken_0x1ffc58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC58u;
        // 0x1ffc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc58) {
            ctx->pc = 0x1FFC80u;
            goto label_1ffc80;
        }
    }
    ctx->pc = 0x1FFC60u;
    // 0x1ffc60: 0xc080132  jal         func_2004C8
    ctx->pc = 0x1FFC60u;
    SET_GPR_U32(ctx, 31, 0x1FFC68u);
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x1FFC60u, 0x1FFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC68u;
label_1ffc68:
    // 0x1ffc68: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1ffc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ffc6c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFC6Cu;
    {
        const bool branch_taken_0x1ffc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC6Cu;
        // 0x1ffc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc6c) {
            ctx->pc = 0x1FFC80u;
            goto label_1ffc80;
        }
    }
    ctx->pc = 0x1FFC74u;
    // 0x1ffc74: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x1ffc74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x1ffc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffc7c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1ffc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1ffc80:
    // 0x1ffc80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffc84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffc88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ffc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffc8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ffc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ffc90: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC90u;
        // 0x1ffc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFC98u;
    // 0x1ffc98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffc9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ffc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ffca0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ffca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffca8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1ffca8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffcac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ffcacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1ffcb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffcb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ffcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ffcb8: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFCB8u;
    SET_GPR_U32(ctx, 31, 0x1FFCC0u);
    ctx->pc = 0x1FFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFCB8u;
    // 0x1ffcbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFCB8u, 0x1FFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCC0u;
label_1ffcc0:
    // 0x1ffcc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffcc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcc4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FFCC4u;
    {
        const bool branch_taken_0x1ffcc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCC4u;
        // 0x1ffcc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcc4) {
            ctx->pc = 0x1FFD00u;
            goto label_1ffd00;
        }
    }
    ctx->pc = 0x1FFCCCu;
    // 0x1ffccc: 0xc080132  jal         func_2004C8
    ctx->pc = 0x1FFCCCu;
    SET_GPR_U32(ctx, 31, 0x1FFCD4u);
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x1FFCCCu, 0x1FFCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCD4u;
label_1ffcd4:
    // 0x1ffcd4: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1ffcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ffcd8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFCD8u;
    {
        const bool branch_taken_0x1ffcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCD8u;
        // 0x1ffcdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcd8) {
            ctx->pc = 0x1FFCE8u;
            goto label_1ffce8;
        }
    }
    ctx->pc = 0x1FFCE0u;
    // 0x1ffce0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFCE0u;
    {
        const bool branch_taken_0x1ffce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCE0u;
        // 0x1ffce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffce0) {
            ctx->pc = 0x1FFD00u;
            goto label_1ffd00;
        }
    }
    ctx->pc = 0x1FFCE8u;
label_1ffce8:
    // 0x1ffce8: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x1ffce8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x1ffcec: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFCECu;
    {
        const bool branch_taken_0x1ffcec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCECu;
        // 0x1ffcf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcec) {
            ctx->pc = 0x1FFD00u;
            goto label_1ffd00;
        }
    }
    ctx->pc = 0x1FFCF4u;
    // 0x1ffcf4: 0x9223001a  lbu         $v1, 0x1A($s1)
    ctx->pc = 0x1ffcf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x1ffcf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffcfc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1ffcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1ffd00:
    // 0x1ffd00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffd00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffd04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffd04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffd08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ffd08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffd0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ffd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ffd10: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD10u;
        // 0x1ffd14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFD18u;
}
