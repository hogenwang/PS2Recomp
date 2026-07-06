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

// Function: sub_00234E70
// Address: 0x234e70 - 0x234f40
void sub_00234E70_0x234e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234E70_0x234e70");
#endif

    switch (ctx->pc) {
        case 0x234ea0u: goto label_234ea0;
        case 0x234ed0u: goto label_234ed0;
        case 0x234ef8u: goto label_234ef8;
        default: break;
    }

    ctx->pc = 0x234e70u;

    // 0x234e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x234e74: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x234e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x234e78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x234e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x234e7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x234e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x234e80: 0x8c51fcd0  lw          $s1, -0x330($v0)
    ctx->pc = 0x234e80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
    // 0x234e84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x234e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x234e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x234e8c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x234e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x234e90: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x234E90u;
    {
        const bool branch_taken_0x234e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E90u;
        // 0x234e94: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e90) {
            ctx->pc = 0x234F1Cu;
            goto label_234f1c;
        }
    }
    ctx->pc = 0x234E98u;
    // 0x234e98: 0x3c130023  lui         $s3, 0x23
    ctx->pc = 0x234e98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)35 << 16));
    // 0x234e9c: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x234e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_234ea0:
    // 0x234ea0: 0x266243b0  addiu       $v0, $s3, 0x43B0
    ctx->pc = 0x234ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 17328));
    // 0x234ea4: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x234EA4u;
    {
        const bool branch_taken_0x234ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x234ea4) {
            ctx->pc = 0x234EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234EA4u;
            // 0x234ea8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234F14u;
            goto label_234f14;
        }
    }
    ctx->pc = 0x234EACu;
    // 0x234eac: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x234eacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x234eb0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x234eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x234eb4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x234EB4u;
    {
        const bool branch_taken_0x234eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234eb4) {
            ctx->pc = 0x234EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234EB4u;
            // 0x234eb8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234F14u;
            goto label_234f14;
        }
    }
    ctx->pc = 0x234EBCu;
    // 0x234ebc: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x234ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x234ec0: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x234EC0u;
    {
        const bool branch_taken_0x234ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ec0) {
            ctx->pc = 0x234EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234EC0u;
            // 0x234ec4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234F14u;
            goto label_234f14;
        }
    }
    ctx->pc = 0x234EC8u;
    // 0x234ec8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x234ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234ecc: 0x0  nop
    ctx->pc = 0x234eccu;
    // NOP
label_234ed0:
    // 0x234ed0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x234ed0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x234ed4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x234ed4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x234ed8: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x234ED8u;
    {
        const bool branch_taken_0x234ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x234ed8) {
            ctx->pc = 0x234EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234ED8u;
            // 0x234edc: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234F08u;
            goto label_234f08;
        }
    }
    ctx->pc = 0x234EE0u;
    // 0x234ee0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x234ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234ee4: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x234EE4u;
    {
        const bool branch_taken_0x234ee4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ee4) {
            ctx->pc = 0x234EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234EE4u;
            // 0x234ee8: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234F08u;
            goto label_234f08;
        }
    }
    ctx->pc = 0x234EECu;
    // 0x234eec: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x234eecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x234ef0: 0xc048c5e  jal         func_123178
    ctx->pc = 0x234EF0u;
    SET_GPR_U32(ctx, 31, 0x234EF8u);
    ctx->pc = 0x234EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EF0u;
    // 0x234ef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x234EF0u, 0x234EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EF8u;
label_234ef8:
    // 0x234ef8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x234EF8u;
    {
        const bool branch_taken_0x234ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234ef8) {
            ctx->pc = 0x234EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234EF8u;
            // 0x234efc: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234F08u;
            goto label_234f08;
        }
    }
    ctx->pc = 0x234F00u;
    // 0x234f00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x234F00u;
    {
        const bool branch_taken_0x234f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F00u;
        // 0x234f04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f00) {
            ctx->pc = 0x234F20u;
            goto label_234f20;
        }
    }
    ctx->pc = 0x234F08u;
label_234f08:
    // 0x234f08: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x234F08u;
    {
        const bool branch_taken_0x234f08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x234f08) {
            ctx->pc = 0x234F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234F08u;
            // 0x234f0c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234ed0;
        }
    }
    ctx->pc = 0x234F10u;
    // 0x234f10: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x234f10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_234f14:
    // 0x234f14: 0x5620ffe2  bnel        $s1, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x234F14u;
    {
        const bool branch_taken_0x234f14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x234f14) {
            ctx->pc = 0x234F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234F14u;
            // 0x234f18: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234ea0;
        }
    }
    ctx->pc = 0x234F1Cu;
label_234f1c:
    // 0x234f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234f20:
    // 0x234f20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x234f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234f24: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x234f24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234f28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x234f28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234f2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x234f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234f34: 0x3e00008  jr          $ra
    ctx->pc = 0x234F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F34u;
        // 0x234f38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234F3Cu;
    // 0x234f3c: 0x0  nop
    ctx->pc = 0x234f3cu;
    // NOP
    if (ctx->pc == 0x234f3cu) { ctx->pc = 0x234f40u; }
}
