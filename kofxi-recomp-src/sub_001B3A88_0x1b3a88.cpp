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

// Function: sub_001B3A88
// Address: 0x1b3a88 - 0x1b3b58
void sub_001B3A88_0x1b3a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3A88_0x1b3a88");
#endif

    switch (ctx->pc) {
        case 0x1b3ad8u: goto label_1b3ad8;
        case 0x1b3ae8u: goto label_1b3ae8;
        case 0x1b3af0u: goto label_1b3af0;
        case 0x1b3af8u: goto label_1b3af8;
        default: break;
    }

    ctx->pc = 0x1b3a88u;

    // 0x1b3a88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3a8c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b3a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b3a90: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b3a90u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1b3a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3a98: 0x26c330d0  addiu       $v1, $s6, 0x30D0
    ctx->pc = 0x1b3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 12496));
    // 0x1b3a9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b3a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b3aa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b3aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b3aa4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b3aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b3aa8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b3aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b3aac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b3aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b3ab0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b3ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b3ab4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1b3ab4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3ab8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B3AB8u;
    {
        const bool branch_taken_0x1b3ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AB8u;
        // 0x1b3abc: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ab8) {
            ctx->pc = 0x1B3B10u;
            goto label_1b3b10;
        }
    }
    ctx->pc = 0x1B3AC0u;
    // 0x1b3ac0: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b3ac0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b3ac4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1b3ac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ac8: 0x26b230c8  addiu       $s2, $s5, 0x30C8
    ctx->pc = 0x1b3ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12488));
    // 0x1b3acc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b3accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3ad0: 0x26903090  addiu       $s0, $s4, 0x3090
    ctx->pc = 0x1b3ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 12432));
    // 0x1b3ad4: 0x0  nop
    ctx->pc = 0x1b3ad4u;
    // NOP
label_1b3ad8:
    // 0x1b3ad8: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x1b3ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x1b3adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3ae0: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B3AE0u;
    SET_GPR_U32(ctx, 31, 0x1B3AE8u);
    ctx->pc = 0x1B3AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AE0u;
    // 0x1b3ae4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B3AE0u, 0x1B3AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AE8u;
label_1b3ae8:
    // 0x1b3ae8: 0xc0432e4  jal         func_10CB90
    ctx->pc = 0x1B3AE8u;
    SET_GPR_U32(ctx, 31, 0x1B3AF0u);
    ctx->pc = 0x1B3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AE8u;
    // 0x1b3aec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB90u, 0x1B3AE8u, 0x1B3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AF0u;
label_1b3af0:
    // 0x1b3af0: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B3AF0u;
    SET_GPR_U32(ctx, 31, 0x1B3AF8u);
    ctx->pc = 0x1B3AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AF0u;
    // 0x1b3af4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3198u, 0x1B3AF0u, 0x1B3AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AF8u;
label_1b3af8:
    // 0x1b3af8: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x1b3af8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b3afc: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B3AFCu;
    {
        const bool branch_taken_0x1b3afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AFCu;
        // 0x1b3b00: 0x26c230d0  addiu       $v0, $s6, 0x30D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3afc) {
            ctx->pc = 0x1B3AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3ad8;
        }
    }
    ctx->pc = 0x1B3B04u;
    // 0x1b3b04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3B04u;
    {
        const bool branch_taken_0x1b3b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B04u;
        // 0x1b3b08: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b04) {
            ctx->pc = 0x1B3B1Cu;
            goto label_1b3b1c;
        }
    }
    ctx->pc = 0x1B3B0Cu;
    // 0x1b3b0c: 0x0  nop
    ctx->pc = 0x1b3b0cu;
    // NOP
label_1b3b10:
    // 0x1b3b10: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b3b10u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b3b14: 0x26c230d0  addiu       $v0, $s6, 0x30D0
    ctx->pc = 0x1b3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12496));
    // 0x1b3b18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b3b18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3b1c:
    // 0x1b3b1c: 0x26a330c8  addiu       $v1, $s5, 0x30C8
    ctx->pc = 0x1b3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12488));
    // 0x1b3b20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b3b20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b3b24: 0x26843090  addiu       $a0, $s4, 0x3090
    ctx->pc = 0x1b3b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12432));
    // 0x1b3b28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b3b28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3b30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3b34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3b34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3b38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b3b38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b3b3c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b3b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3b40: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1b3b40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1b3b44: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1b3b44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1b3b48: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b3b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B4Cu;
        // 0x1b3b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3B54u;
    // 0x1b3b54: 0x0  nop
    ctx->pc = 0x1b3b54u;
    // NOP
}
