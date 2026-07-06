#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E6F0
// Address: 0x13e6f0 - 0x13e750
void sub_0013E6F0_0x13e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E6F0_0x13e6f0");
#endif

    switch (ctx->pc) {
        case 0x13e710u: goto label_13e710;
        default: break;
    }

    ctx->pc = 0x13e6f0u;

    // 0x13e6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e6f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13e6f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e6fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e704: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13e704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e708: 0xc063748  jal         func_18DD20
    ctx->pc = 0x13E708u;
    SET_GPR_U32(ctx, 31, 0x13E710u);
    ctx->pc = 0x13E70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E708u;
            // 0x13e70c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DD20u;
    if (runtime->hasFunction(0x18DD20u)) {
        auto targetFn = runtime->lookupFunction(0x18DD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E710u; }
        if (ctx->pc != 0x13E710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD20_0x18dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E710u; }
        if (ctx->pc != 0x13E710u) { return; }
    }
    ctx->pc = 0x13E710u;
label_13e710:
    // 0x13e710: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E710u;
    {
        const bool branch_taken_0x13e710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e710) {
            ctx->pc = 0x13E714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E710u;
            // 0x13e714: 0x962500ea  lhu         $a1, 0xEA($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E720u;
            goto label_13e720;
        }
    }
    ctx->pc = 0x13E718u;
    // 0x13e718: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13E718u;
    {
        const bool branch_taken_0x13e718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E718u;
            // 0x13e71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e718) {
            ctx->pc = 0x13E73Cu;
            goto label_13e73c;
        }
    }
    ctx->pc = 0x13E720u;
label_13e720:
    // 0x13e720: 0x960300ea  lhu         $v1, 0xEA($s0)
    ctx->pc = 0x13e720u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x13e724: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x13e724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13e728: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13e728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13e72c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x13e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13e730: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13e734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e738: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13e738u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_13e73c:
    // 0x13e73c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e748: 0x3e00008  jr          $ra
    ctx->pc = 0x13E748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E748u;
            // 0x13e74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E750u;
    ctx->pc = 0x13e750u;
}
