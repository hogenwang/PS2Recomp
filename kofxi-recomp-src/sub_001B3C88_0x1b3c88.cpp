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

// Function: sub_001B3C88
// Address: 0x1b3c88 - 0x1b3d58
void sub_001B3C88_0x1b3c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3C88_0x1b3c88");
#endif

    switch (ctx->pc) {
        case 0x1b3cd8u: goto label_1b3cd8;
        case 0x1b3ce8u: goto label_1b3ce8;
        case 0x1b3cf0u: goto label_1b3cf0;
        case 0x1b3cf8u: goto label_1b3cf8;
        default: break;
    }

    ctx->pc = 0x1b3c88u;

    // 0x1b3c88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3c8c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b3c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b3c90: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b3c90u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1b3c94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3c98: 0x26c330c0  addiu       $v1, $s6, 0x30C0
    ctx->pc = 0x1b3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 12480));
    // 0x1b3c9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b3c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b3ca0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b3ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b3ca4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b3ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b3ca8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b3ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b3cac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b3cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b3cb0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b3cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b3cb4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1b3cb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3cb8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B3CB8u;
    {
        const bool branch_taken_0x1b3cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CB8u;
        // 0x1b3cbc: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3cb8) {
            ctx->pc = 0x1B3D10u;
            goto label_1b3d10;
        }
    }
    ctx->pc = 0x1B3CC0u;
    // 0x1b3cc0: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b3cc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b3cc4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1b3cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cc8: 0x26b230b8  addiu       $s2, $s5, 0x30B8
    ctx->pc = 0x1b3cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12472));
    // 0x1b3ccc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b3cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3cd0: 0x2690308c  addiu       $s0, $s4, 0x308C
    ctx->pc = 0x1b3cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 12428));
    // 0x1b3cd4: 0x0  nop
    ctx->pc = 0x1b3cd4u;
    // NOP
label_1b3cd8:
    // 0x1b3cd8: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x1b3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x1b3cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3ce0: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B3CE0u;
    SET_GPR_U32(ctx, 31, 0x1B3CE8u);
    ctx->pc = 0x1B3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3CE0u;
    // 0x1b3ce4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B3CE0u, 0x1B3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CE8u;
label_1b3ce8:
    // 0x1b3ce8: 0xc0432e4  jal         func_10CB90
    ctx->pc = 0x1B3CE8u;
    SET_GPR_U32(ctx, 31, 0x1B3CF0u);
    ctx->pc = 0x1B3CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3CE8u;
    // 0x1b3cec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB90u, 0x1B3CE8u, 0x1B3CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CF0u;
label_1b3cf0:
    // 0x1b3cf0: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B3CF0u;
    SET_GPR_U32(ctx, 31, 0x1B3CF8u);
    ctx->pc = 0x1B3CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3CF0u;
    // 0x1b3cf4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3198u, 0x1B3CF0u, 0x1B3CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CF8u;
label_1b3cf8:
    // 0x1b3cf8: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x1b3cf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b3cfc: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B3CFCu;
    {
        const bool branch_taken_0x1b3cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CFCu;
        // 0x1b3d00: 0x26c230c0  addiu       $v0, $s6, 0x30C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3cfc) {
            ctx->pc = 0x1B3CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3cd8;
        }
    }
    ctx->pc = 0x1B3D04u;
    // 0x1b3d04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3D04u;
    {
        const bool branch_taken_0x1b3d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D04u;
        // 0x1b3d08: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d04) {
            ctx->pc = 0x1B3D1Cu;
            goto label_1b3d1c;
        }
    }
    ctx->pc = 0x1B3D0Cu;
    // 0x1b3d0c: 0x0  nop
    ctx->pc = 0x1b3d0cu;
    // NOP
label_1b3d10:
    // 0x1b3d10: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b3d10u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b3d14: 0x26c230c0  addiu       $v0, $s6, 0x30C0
    ctx->pc = 0x1b3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12480));
    // 0x1b3d18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b3d18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3d1c:
    // 0x1b3d1c: 0x26a330b8  addiu       $v1, $s5, 0x30B8
    ctx->pc = 0x1b3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12472));
    // 0x1b3d20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b3d20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b3d24: 0x2684308c  addiu       $a0, $s4, 0x308C
    ctx->pc = 0x1b3d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12428));
    // 0x1b3d28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b3d28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3d38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b3d38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b3d3c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b3d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3d40: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1b3d40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1b3d44: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1b3d44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1b3d48: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b3d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D4Cu;
        // 0x1b3d50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3D54u;
    // 0x1b3d54: 0x0  nop
    ctx->pc = 0x1b3d54u;
    // NOP
    if (ctx->pc == 0x1b3d54u) { ctx->pc = 0x1b3d58u; }
}
