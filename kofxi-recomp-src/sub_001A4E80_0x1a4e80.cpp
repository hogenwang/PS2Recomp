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

// Function: sub_001A4E80
// Address: 0x1a4e80 - 0x1a4f20
void sub_001A4E80_0x1a4e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4E80_0x1a4e80");
#endif

    switch (ctx->pc) {
        case 0x1a4eacu: goto label_1a4eac;
        case 0x1a4ed0u: goto label_1a4ed0;
        case 0x1a4ee8u: goto label_1a4ee8;
        case 0x1a4efcu: goto label_1a4efc;
        default: break;
    }

    ctx->pc = 0x1a4e80u;

    // 0x1a4e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a4e84: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a4e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a4e88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a4e8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a4e90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4e94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a4e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4e9c: 0x8c43b8f0  lw          $v1, -0x4710($v0)
    ctx->pc = 0x1a4e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949104)));
    // 0x1a4ea0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4EA0u;
    {
        const bool branch_taken_0x1a4ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EA0u;
        // 0x1a4ea4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ea0) {
            ctx->pc = 0x1A4EC8u;
            goto label_1a4ec8;
        }
    }
    ctx->pc = 0x1A4EA8u;
    // 0x1a4ea8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a4eac:
    // 0x1a4eac: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4EACu;
    {
        const bool branch_taken_0x1a4eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1a4eac) {
            ctx->pc = 0x1A4EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4EACu;
            // 0x1a4eb0: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4EBCu;
            goto label_1a4ebc;
        }
    }
    ctx->pc = 0x1A4EB4u;
    // 0x1a4eb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4EB4u;
    {
        const bool branch_taken_0x1a4eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EB4u;
        // 0x1a4eb8: 0x8c710010  lw          $s1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4eb4) {
            ctx->pc = 0x1A4EC8u;
            goto label_1a4ec8;
        }
    }
    ctx->pc = 0x1A4EBCu;
label_1a4ebc:
    // 0x1a4ebc: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A4EBCu;
    {
        const bool branch_taken_0x1a4ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ebc) {
            ctx->pc = 0x1A4EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4EBCu;
            // 0x1a4ec0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4eac;
        }
    }
    ctx->pc = 0x1A4EC4u;
    // 0x1a4ec4: 0x0  nop
    ctx->pc = 0x1a4ec4u;
    // NOP
label_1a4ec8:
    // 0x1a4ec8: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x1A4EC8u;
    SET_GPR_U32(ctx, 31, 0x1A4ED0u);
    ctx->pc = 0x1A4ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EC8u;
    // 0x1a4ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x1A4EC8u, 0x1A4ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4ED0u;
label_1a4ed0:
    // 0x1a4ed0: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4ED0u;
    {
        const bool branch_taken_0x1a4ed0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ed0) {
            ctx->pc = 0x1A4ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4ED0u;
            // 0x1a4ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4EE0u;
            goto label_1a4ee0;
        }
    }
    ctx->pc = 0x1A4ED8u;
    // 0x1a4ed8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4ED8u;
    {
        const bool branch_taken_0x1a4ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ED8u;
        // 0x1a4edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ed8) {
            ctx->pc = 0x1A4F00u;
            goto label_1a4f00;
        }
    }
    ctx->pc = 0x1A4EE0u;
label_1a4ee0:
    // 0x1a4ee0: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x1A4EE0u;
    SET_GPR_U32(ctx, 31, 0x1A4EE8u);
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x1A4EE0u, 0x1A4EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EE8u;
label_1a4ee8:
    // 0x1a4ee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4eec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a4eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ef0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a4ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ef4: 0xc069284  jal         func_1A4A10
    ctx->pc = 0x1A4EF4u;
    SET_GPR_U32(ctx, 31, 0x1A4EFCu);
    ctx->pc = 0x1A4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EF4u;
    // 0x1a4ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A10u, 0x1A4EF4u, 0x1A4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EFCu;
label_1a4efc:
    // 0x1a4efc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a4efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f00:
    // 0x1a4f00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4f04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4f0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4f10: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F10u;
        // 0x1a4f14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4F18u;
    // 0x1a4f18: 0x0  nop
    ctx->pc = 0x1a4f18u;
    // NOP
    // 0x1a4f1c: 0x0  nop
    ctx->pc = 0x1a4f1cu;
    // NOP
    if (ctx->pc == 0x1a4f1cu) { ctx->pc = 0x1a4f20u; }
}
