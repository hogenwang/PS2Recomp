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

// Function: sub_001FFEE0
// Address: 0x1ffee0 - 0x200000
void sub_001FFEE0_0x1ffee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFEE0_0x1ffee0");
#endif

    switch (ctx->pc) {
        case 0x1fff14u: goto label_1fff14;
        case 0x1fff28u: goto label_1fff28;
        case 0x1fffb8u: goto label_1fffb8;
        case 0x1fffccu: goto label_1fffcc;
        case 0x1fffe0u: goto label_1fffe0;
        default: break;
    }

    ctx->pc = 0x1ffee0u;

    // 0x1ffee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ffee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ffee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ffee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ffee8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ffee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffeec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ffeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ffef0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ffef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffef8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1ffef8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffefc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ffefcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1fff00: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1fff00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1fff04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fff08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fff08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fff0c: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFF0Cu;
    SET_GPR_U32(ctx, 31, 0x1FFF14u);
    ctx->pc = 0x1FFF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF0Cu;
    // 0x1fff10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFF0Cu, 0x1FFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF14u;
label_1fff14:
    // 0x1fff14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fff14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff18: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FFF18u;
    {
        const bool branch_taken_0x1fff18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF18u;
        // 0x1fff1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff18) {
            ctx->pc = 0x1FFF74u;
            goto label_1fff74;
        }
    }
    ctx->pc = 0x1FFF20u;
    // 0x1fff20: 0xc080132  jal         func_2004C8
    ctx->pc = 0x1FFF20u;
    SET_GPR_U32(ctx, 31, 0x1FFF28u);
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x1FFF20u, 0x1FFF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF28u;
label_1fff28:
    // 0x1fff28: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1fff28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1fff2c: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FFF2Cu;
    {
        const bool branch_taken_0x1fff2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF2Cu;
        // 0x1fff30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff2c) {
            ctx->pc = 0x1FFF74u;
            goto label_1fff74;
        }
    }
    ctx->pc = 0x1FFF34u;
    // 0x1fff34: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1fff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1fff38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fff3c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1fff3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fff40: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1fff40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1fff44: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1fff44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fff48: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1fff48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1fff4c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1fff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1fff50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fff50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fff54: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1fff54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1fff58: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1fff58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1fff5c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1fff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1fff60: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1fff60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1fff64: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1fff64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1fff68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fff68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fff6c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1fff6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1fff70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1fff70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1fff74:
    // 0x1fff74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fff74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fff78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fff78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fff7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fff7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fff80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fff80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fff84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fff84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fff88: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF88u;
        // 0x1fff8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFF90u;
    // 0x1fff90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fff94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fff98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fff98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fffa0: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1fffa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fffa4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1fffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1fffa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fffac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fffacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fffb0: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFFB0u;
    SET_GPR_U32(ctx, 31, 0x1FFFB8u);
    ctx->pc = 0x1FFFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFFB0u;
    // 0x1fffb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFFB0u, 0x1FFFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFFB8u;
label_1fffb8:
    // 0x1fffb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fffb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fffbc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FFFBCu;
    {
        const bool branch_taken_0x1fffbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFBCu;
        // 0x1fffc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffbc) {
            ctx->pc = 0x1FFFE8u;
            goto label_1fffe8;
        }
    }
    ctx->pc = 0x1FFFC4u;
    // 0x1fffc4: 0xc080132  jal         func_2004C8
    ctx->pc = 0x1FFFC4u;
    SET_GPR_U32(ctx, 31, 0x1FFFCCu);
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x1FFFC4u, 0x1FFFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFFCCu;
label_1fffcc:
    // 0x1fffcc: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1fffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1fffd0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFFD0u;
    {
        const bool branch_taken_0x1fffd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFD0u;
        // 0x1fffd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffd0) {
            ctx->pc = 0x1FFFE8u;
            goto label_1fffe8;
        }
    }
    ctx->pc = 0x1FFFD8u;
    // 0x1fffd8: 0xc0800f6  jal         func_2003D8
    ctx->pc = 0x1FFFD8u;
    SET_GPR_U32(ctx, 31, 0x1FFFE0u);
    ctx->pc = 0x1FFFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFFD8u;
    // 0x1fffdc: 0x9224001f  lbu         $a0, 0x1F($s1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003D8u, 0x1FFFD8u, 0x1FFFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFFE0u;
label_1fffe0:
    // 0x1fffe0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1fffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1fffe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fffe8:
    // 0x1fffe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fffe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fffec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fffecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffff0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ffff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffff4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ffff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ffff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFF8u;
        // 0x1ffffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200000u;
}
