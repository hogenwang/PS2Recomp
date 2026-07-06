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

// Function: sub_0020E6F0
// Address: 0x20e6f0 - 0x20e790
void sub_0020E6F0_0x20e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E6F0_0x20e6f0");
#endif

    switch (ctx->pc) {
        case 0x20e730u: goto label_20e730;
        case 0x20e774u: goto label_20e774;
        default: break;
    }

    ctx->pc = 0x20e6f0u;

    // 0x20e6f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20e6f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20e6f8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x20e6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x20e6fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e700: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x20e700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x20e704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e708: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20e708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20e710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e714: 0x94a4000a  lhu         $a0, 0xA($a1)
    ctx->pc = 0x20e714u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x20e718: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20e718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e71c: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x20e71cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x20e720: 0x27a9004c  addiu       $t1, $sp, 0x4C
    ctx->pc = 0x20e720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x20e724: 0x94a6000e  lhu         $a2, 0xE($a1)
    ctx->pc = 0x20e724u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x20e728: 0xc082944  jal         func_20A510
    ctx->pc = 0x20E728u;
    SET_GPR_U32(ctx, 31, 0x20E730u);
    ctx->pc = 0x20E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E728u;
    // 0x20e72c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A510u, 0x20E728u, 0x20E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E730u;
label_20e730:
    // 0x20e730: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x20e730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20e734: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E734u;
    {
        const bool branch_taken_0x20e734 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e734) {
            ctx->pc = 0x20E738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E734u;
            // 0x20e738: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E778u;
            goto label_20e778;
        }
    }
    ctx->pc = 0x20E73Cu;
    // 0x20e73c: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x20e73cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x20e740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20e740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e744: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20e748: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x20e748u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e74c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x20e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x20e750: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20e750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20e754: 0x96080008  lhu         $t0, 0x8($s0)
    ctx->pc = 0x20e754u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20e758: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x20e758u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20e75c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x20e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20e760: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20e760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20e764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e76c: 0xc082ee0  jal         func_20BB80
    ctx->pc = 0x20E76Cu;
    SET_GPR_U32(ctx, 31, 0x20E774u);
    ctx->pc = 0x20E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E76Cu;
    // 0x20e770: 0x2224821  addu        $t1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BB80u, 0x20E76Cu, 0x20E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E774u;
label_20e774:
    // 0x20e774: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20e774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20e778:
    // 0x20e778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e784: 0x3e00008  jr          $ra
    ctx->pc = 0x20E784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E784u;
        // 0x20e788: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E78Cu;
    // 0x20e78c: 0x0  nop
    ctx->pc = 0x20e78cu;
    // NOP
    if (ctx->pc == 0x20e78cu) { ctx->pc = 0x20e790u; }
}
