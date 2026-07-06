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

// Function: sub_00124C68
// Address: 0x124c68 - 0x124d80
void sub_00124C68_0x124c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124C68_0x124c68");
#endif

    switch (ctx->pc) {
        case 0x124c8cu: goto label_124c8c;
        case 0x124c90u: goto label_124c90;
        case 0x124ca0u: goto label_124ca0;
        case 0x124cccu: goto label_124ccc;
        case 0x124ce8u: goto label_124ce8;
        case 0x124d40u: goto label_124d40;
        default: break;
    }

    ctx->pc = 0x124c68u;

    // 0x124c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124c6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124c78: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x124c78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x124c7c: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x124C7Cu;
    {
        const bool branch_taken_0x124c7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C7Cu;
        // 0x124c80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c7c) {
            ctx->pc = 0x124C8Cu;
            goto label_124c8c;
        }
    }
    ctx->pc = 0x124C84u;
    // 0x124c84: 0xc049360  jal         func_124D80
    ctx->pc = 0x124C84u;
    SET_GPR_U32(ctx, 31, 0x124C8Cu);
    ctx->pc = 0x124D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D80u, 0x124C84u, 0x124C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C8Cu;
label_124c8c:
    // 0x124c8c: 0x263001d8  addiu       $s0, $s1, 0x1D8
    ctx->pc = 0x124c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
label_124c90:
    // 0x124c90: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x124c90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x124c94: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x124c94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x124c98: 0x5c00006  bltz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x124C98u;
    {
        const bool branch_taken_0x124c98 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x124C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C98u;
        // 0x124c9c: 0x8e0d0008  lw          $t5, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c98) {
            ctx->pc = 0x124CB4u;
            goto label_124cb4;
        }
    }
    ctx->pc = 0x124CA0u;
label_124ca0:
    // 0x124ca0: 0x85af000c  lh          $t7, 0xC($t5)
    ctx->pc = 0x124ca0u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x124ca4: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x124CA4u;
    {
        const bool branch_taken_0x124ca4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CA4u;
        // 0x124ca8: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ca4) {
            ctx->pc = 0x124CFCu;
            goto label_124cfc;
        }
    }
    ctx->pc = 0x124CACu;
    // 0x124cac: 0x5c1fffc  bgez        $t6, . + 4 + (-0x4 << 2)
    ctx->pc = 0x124CACu;
    {
        const bool branch_taken_0x124cac = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x124CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CACu;
        // 0x124cb0: 0x25ad0058  addiu       $t5, $t5, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cac) {
            ctx->pc = 0x124CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ca0;
        }
    }
    ctx->pc = 0x124CB4u;
label_124cb4:
    // 0x124cb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x124cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124cb8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x124CB8u;
    {
        const bool branch_taken_0x124cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124cb8) {
            ctx->pc = 0x124CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124CB8u;
            // 0x124cbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124c90;
        }
    }
    ctx->pc = 0x124CC0u;
    // 0x124cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cc4: 0xc0492fe  jal         func_124BF8
    ctx->pc = 0x124CC4u;
    SET_GPR_U32(ctx, 31, 0x124CCCu);
    ctx->pc = 0x124CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CC4u;
    // 0x124cc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124BF8u, 0x124CC4u, 0x124CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CCCu;
label_124ccc:
    // 0x124ccc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124CCCu;
    {
        const bool branch_taken_0x124ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CCCu;
        // 0x124cd0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ccc) {
            ctx->pc = 0x124CDCu;
            goto label_124cdc;
        }
    }
    ctx->pc = 0x124CD4u;
    // 0x124cd4: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x124CD4u;
    {
        const bool branch_taken_0x124cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CD4u;
        // 0x124cd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cd4) {
            ctx->pc = 0x124C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124c90;
        }
    }
    ctx->pc = 0x124CDCu;
label_124cdc:
    // 0x124cdc: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x124cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x124ce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ce4: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x124ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_124ce8:
    // 0x124ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124cec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x124CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CF4u;
        // 0x124cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124CFCu;
label_124cfc:
    // 0x124cfc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x124cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124d00: 0xadb10054  sw          $s1, 0x54($t5)
    ctx->pc = 0x124d00u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 17));
    // 0x124d04: 0xa5af000c  sh          $t7, 0xC($t5)
    ctx->pc = 0x124d04u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x124d08: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x124d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d0c: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x124d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
    // 0x124d10: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x124d10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124d14: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x124d14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x124d18: 0xa5af000e  sh          $t7, 0xE($t5)
    ctx->pc = 0x124d18u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 14), (uint16_t)GPR_U32(ctx, 15));
    // 0x124d1c: 0xada00004  sw          $zero, 0x4($t5)
    ctx->pc = 0x124d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 0));
    // 0x124d20: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x124d20u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x124d24: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x124d24u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x124d28: 0xada00018  sw          $zero, 0x18($t5)
    ctx->pc = 0x124d28u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 0));
    // 0x124d2c: 0xada00030  sw          $zero, 0x30($t5)
    ctx->pc = 0x124d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 0));
    // 0x124d30: 0xada00034  sw          $zero, 0x34($t5)
    ctx->pc = 0x124d30u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 0));
    // 0x124d34: 0xada00044  sw          $zero, 0x44($t5)
    ctx->pc = 0x124d34u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 0));
    // 0x124d38: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x124D38u;
    {
        const bool branch_taken_0x124d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D38u;
        // 0x124d3c: 0xada00048  sw          $zero, 0x48($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d38) {
            ctx->pc = 0x124CE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ce8;
        }
    }
    ctx->pc = 0x124D40u;
label_124d40:
    // 0x124d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124d44: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x124d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x124d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x124d4c: 0x24a54960  addiu       $a1, $a1, 0x4960
    ctx->pc = 0x124d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18784));
    // 0x124d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124d54: 0x80497b2  j           func_125EC8
    ctx->pc = 0x124D54u;
    ctx->pc = 0x124D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D54u;
    // 0x124d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125EC8u;
    sub_00125EC8_0x125ec8(rdram, ctx, runtime); return;
    ctx->pc = 0x124D5Cu;
    // 0x124d5c: 0x0  nop
    ctx->pc = 0x124d5cu;
    // NOP
    // 0x124d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124d64: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x124d64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x124d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x124d6c: 0x8de4bde8  lw          $a0, -0x4218($t7)
    ctx->pc = 0x124d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x124d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124d74: 0x8049350  j           func_124D40
    ctx->pc = 0x124D74u;
    ctx->pc = 0x124D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D74u;
    // 0x124d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124D40u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_124d40;
    ctx->pc = 0x124D7Cu;
    // 0x124d7c: 0x0  nop
    ctx->pc = 0x124d7cu;
    // NOP
}
