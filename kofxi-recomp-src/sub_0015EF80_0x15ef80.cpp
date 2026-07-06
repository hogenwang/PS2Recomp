#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EF80
// Address: 0x15ef80 - 0x15eff0
void sub_0015EF80_0x15ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EF80_0x15ef80");
#endif

    switch (ctx->pc) {
        case 0x15efb4u: goto label_15efb4;
        case 0x15efc0u: goto label_15efc0;
        case 0x15efccu: goto label_15efcc;
        default: break;
    }

    ctx->pc = 0x15ef80u;

    // 0x15ef80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15ef84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15ef88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ef8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ef90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15ef90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ef94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ef98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15ef98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef9c: 0x8c820270  lw          $v0, 0x270($a0)
    ctx->pc = 0x15ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x15efa0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x15efa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x15efa4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15EFA4u;
    {
        const bool branch_taken_0x15efa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFA4u;
            // 0x15efa8: 0x26500268  addiu       $s0, $s2, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15efa4) {
            ctx->pc = 0x15EFC0u;
            goto label_15efc0;
        }
    }
    ctx->pc = 0x15EFACu;
    // 0x15efac: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x15EFACu;
    SET_GPR_U32(ctx, 31, 0x15EFB4u);
    ctx->pc = 0x15EFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFACu;
            // 0x15efb0: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFB4u; }
        if (ctx->pc != 0x15EFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D7C0_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFB4u; }
        if (ctx->pc != 0x15EFB4u) { return; }
    }
    ctx->pc = 0x15EFB4u;
label_15efb4:
    // 0x15efb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15efb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efb8: 0xc057bfc  jal         func_15EFF0
    ctx->pc = 0x15EFB8u;
    SET_GPR_U32(ctx, 31, 0x15EFC0u);
    ctx->pc = 0x15EFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFB8u;
            // 0x15efbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EFF0u;
    if (runtime->hasFunction(0x15EFF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFC0u; }
        if (ctx->pc != 0x15EFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EFF0_0x15eff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFC0u; }
        if (ctx->pc != 0x15EFC0u) { return; }
    }
    ctx->pc = 0x15EFC0u;
label_15efc0:
    // 0x15efc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15efc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efc4: 0xc057cd0  jal         func_15F340
    ctx->pc = 0x15EFC4u;
    SET_GPR_U32(ctx, 31, 0x15EFCCu);
    ctx->pc = 0x15EFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFC4u;
            // 0x15efc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F340u;
    if (runtime->hasFunction(0x15F340u)) {
        auto targetFn = runtime->lookupFunction(0x15F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFCCu; }
        if (ctx->pc != 0x15EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F340_0x15f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFCCu; }
        if (ctx->pc != 0x15EFCCu) { return; }
    }
    ctx->pc = 0x15EFCCu;
label_15efcc:
    // 0x15efcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15efccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15efd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15efd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15efd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15efd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15efd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15efdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15efdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15efe0: 0x3e00008  jr          $ra
    ctx->pc = 0x15EFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFE0u;
            // 0x15efe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EFE8u;
    // 0x15efe8: 0x0  nop
    ctx->pc = 0x15efe8u;
    // NOP
    // 0x15efec: 0x0  nop
    ctx->pc = 0x15efecu;
    // NOP
    ctx->pc = 0x15eff0u;
}
