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

// Function: sub_0010E6F8
// Address: 0x10e6f8 - 0x10e7a8
void sub_0010E6F8_0x10e6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E6F8_0x10e6f8");
#endif

    switch (ctx->pc) {
        case 0x10e738u: goto label_10e738;
        default: break;
    }

    ctx->pc = 0x10e6f8u;

    // 0x10e6f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e6fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e700: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x10e700u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x10e704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e708: 0x8e2586a0  lw          $a1, -0x7960($s1)
    ctx->pc = 0x10e708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936224)));
    // 0x10e70c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10e70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e710: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10e710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10e714: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x10e714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x10e718: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E718u;
    {
        const bool branch_taken_0x10e718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E718u;
        // 0x10e71c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e718) {
            ctx->pc = 0x10E740u;
            goto label_10e740;
        }
    }
    ctx->pc = 0x10E720u;
    // 0x10e720: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x10e720u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x10e724: 0xae2086a0  sw          $zero, -0x7960($s1)
    ctx->pc = 0x10e724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936224), GPR_U32(ctx, 0));
    // 0x10e728: 0x26426680  addiu       $v0, $s2, 0x6680
    ctx->pc = 0x10e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 26240));
    // 0x10e72c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e730: 0xc043854  jal         func_10E150
    ctx->pc = 0x10E730u;
    SET_GPR_U32(ctx, 31, 0x10E738u);
    ctx->pc = 0x10E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E730u;
    // 0x10e734: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E150u, 0x10E730u, 0x10E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E738u;
label_10e738:
    // 0x10e738: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10E738u;
    {
        const bool branch_taken_0x10e738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E738u;
        // 0x10e73c: 0x8e2586a0  lw          $a1, -0x7960($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e738) {
            ctx->pc = 0x10E744u;
            goto label_10e744;
        }
    }
    ctx->pc = 0x10E740u;
label_10e740:
    // 0x10e740: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x10e740u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_10e744:
    // 0x10e744: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10e748: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10E748u;
    {
        const bool branch_taken_0x10e748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E748u;
        // 0x10e74c: 0x26426680  addiu       $v0, $s2, 0x6680 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 26240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e748) {
            ctx->pc = 0x10E780u;
            goto label_10e780;
        }
    }
    ctx->pc = 0x10E750u;
    // 0x10e750: 0x26446680  addiu       $a0, $s2, 0x6680
    ctx->pc = 0x10e750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26240));
    // 0x10e754: 0xae2086a0  sw          $zero, -0x7960($s1)
    ctx->pc = 0x10e754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936224), GPR_U32(ctx, 0));
    // 0x10e758: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x10e758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10e75c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10e75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e760: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x10e760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x10e764: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10e764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e76c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e774: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x10e774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x10e778: 0x8043854  j           func_10E150
    ctx->pc = 0x10E778u;
    ctx->pc = 0x10E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E778u;
    // 0x10e77c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E150u;
    sub_0010E150_0x10e150(rdram, ctx, runtime); return;
    ctx->pc = 0x10E780u;
label_10e780:
    // 0x10e780: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x10e780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10e784: 0xae2386a0  sw          $v1, -0x7960($s1)
    ctx->pc = 0x10e784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936224), GPR_U32(ctx, 3));
    // 0x10e788: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10e78c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x10e78cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x10e790: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10e790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e794: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e798: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7A0u;
        // 0x10e7a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E7A8u;
}
