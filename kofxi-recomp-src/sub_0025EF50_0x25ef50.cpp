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

// Function: sub_0025EF50
// Address: 0x25ef50 - 0x25efc8
void sub_0025EF50_0x25ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EF50_0x25ef50");
#endif

    switch (ctx->pc) {
        case 0x25ef78u: goto label_25ef78;
        case 0x25ef80u: goto label_25ef80;
        case 0x25efa0u: goto label_25efa0;
        default: break;
    }

    ctx->pc = 0x25ef50u;

    // 0x25ef50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25ef54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25ef58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25ef58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25ef5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25ef5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25ef60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25ef64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25ef64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef68: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x25EF68u;
    {
        const bool branch_taken_0x25ef68 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x25EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF68u;
        // 0x25ef6c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef68) {
            ctx->pc = 0x25EFACu;
            goto label_25efac;
        }
    }
    ctx->pc = 0x25EF70u;
    // 0x25ef70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25ef70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef74: 0x0  nop
    ctx->pc = 0x25ef74u;
    // NOP
label_25ef78:
    // 0x25ef78: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25EF78u;
    SET_GPR_U32(ctx, 31, 0x25EF80u);
    ctx->pc = 0x25EF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF78u;
    // 0x25ef7c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25EF78u, 0x25EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF80u;
label_25ef80:
    // 0x25ef80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25ef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef84: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25EF84u;
    {
        const bool branch_taken_0x25ef84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef84) {
            ctx->pc = 0x25EF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EF84u;
            // 0x25ef88: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EFA4u;
            goto label_25efa4;
        }
    }
    ctx->pc = 0x25EF8Cu;
    // 0x25ef8c: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x25ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x25ef90: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EF90u;
    {
        const bool branch_taken_0x25ef90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ef90) {
            ctx->pc = 0x25EF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EF90u;
            // 0x25ef94: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EFA4u;
            goto label_25efa4;
        }
    }
    ctx->pc = 0x25EF98u;
    // 0x25ef98: 0xc0973a6  jal         func_25CE98
    ctx->pc = 0x25EF98u;
    SET_GPR_U32(ctx, 31, 0x25EFA0u);
    ctx->pc = 0x25EF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF98u;
    // 0x25ef9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE98u, 0x25EF98u, 0x25EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFA0u;
label_25efa0:
    // 0x25efa0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25efa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_25efa4:
    // 0x25efa4: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25EFA4u;
    {
        const bool branch_taken_0x25efa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFA4u;
        // 0x25efa8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efa4) {
            ctx->pc = 0x25EF78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ef78;
        }
    }
    ctx->pc = 0x25EFACu;
label_25efac:
    // 0x25efac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25efacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25efb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25efb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25efb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25efb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25efb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25efb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25efbc: 0x3e00008  jr          $ra
    ctx->pc = 0x25EFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFBCu;
        // 0x25efc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EFC4u;
    // 0x25efc4: 0x0  nop
    ctx->pc = 0x25efc4u;
    // NOP
}
