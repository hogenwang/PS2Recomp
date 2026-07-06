#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295C90
// Address: 0x295c90 - 0x295d88
void sub_00295C90_0x295c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295C90_0x295c90");
#endif

    switch (ctx->pc) {
        case 0x295cacu: goto label_295cac;
        case 0x295cccu: goto label_295ccc;
        case 0x295cf0u: goto label_295cf0;
        case 0x295cfcu: goto label_295cfc;
        case 0x295d18u: goto label_295d18;
        case 0x295d30u: goto label_295d30;
        case 0x295d40u: goto label_295d40;
        case 0x295d58u: goto label_295d58;
        case 0x295d70u: goto label_295d70;
        default: break;
    }

    ctx->pc = 0x295c90u;

    // 0x295c90: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x295c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x295c94: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x295c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x295c98: 0xffb101a0  sd          $s1, 0x1A0($sp)
    ctx->pc = 0x295c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 17));
    // 0x295c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ca0: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x295ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x295ca4: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x295CA4u;
    SET_GPR_U32(ctx, 31, 0x295CACu);
    ctx->pc = 0x295CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295CA4u;
            // 0x295ca8: 0xffb201b0  sd          $s2, 0x1B0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CACu; }
        if (ctx->pc != 0x295CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CACu; }
        if (ctx->pc != 0x295CACu) { return; }
    }
    ctx->pc = 0x295CACu;
label_295cac:
    // 0x295cac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x295cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295cb0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x295cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x295cb4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x295CB4u;
    {
        const bool branch_taken_0x295cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295CB4u;
            // 0x295cb8: 0xdfbf01c0  ld          $ra, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cb4) {
            ctx->pc = 0x295D44u;
            goto label_295d44;
        }
    }
    ctx->pc = 0x295CBCu;
    // 0x295cbc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295CBCu;
    {
        const bool branch_taken_0x295cbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x295CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295CBCu;
            // 0x295cc0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cbc) {
            ctx->pc = 0x295CD4u;
            goto label_295cd4;
        }
    }
    ctx->pc = 0x295CC4u;
    // 0x295cc4: 0xc0a8b7c  jal         func_2A2DF0
    ctx->pc = 0x295CC4u;
    SET_GPR_U32(ctx, 31, 0x295CCCu);
    ctx->pc = 0x2A2DF0u;
    if (runtime->hasFunction(0x2A2DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2A2DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CCCu; }
        if (ctx->pc != 0x295CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2DF0_0x2a2df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CCCu; }
        if (ctx->pc != 0x295CCCu) { return; }
    }
    ctx->pc = 0x295CCCu;
label_295ccc:
    // 0x295ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295cd0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x295cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_295cd4:
    // 0x295cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295cd8: 0x2452b4a0  addiu       $s2, $v0, -0x4B60
    ctx->pc = 0x295cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948000));
    // 0x295cdc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x295cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x295ce0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295ce4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x295ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ce8: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x295CE8u;
    SET_GPR_U32(ctx, 31, 0x295CF0u);
    ctx->pc = 0x295CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295CE8u;
            // 0x295cec: 0x2407027c  addiu       $a3, $zero, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CF0u; }
        if (ctx->pc != 0x295CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CF0u; }
        if (ctx->pc != 0x295CF0u) { return; }
    }
    ctx->pc = 0x295CF0u;
label_295cf0:
    // 0x295cf0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x295cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x295cf4: 0xc0a6218  jal         func_298860
    ctx->pc = 0x295CF4u;
    SET_GPR_U32(ctx, 31, 0x295CFCu);
    ctx->pc = 0x295CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295CF4u;
            // 0x295cf8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298860u;
    if (runtime->hasFunction(0x298860u)) {
        auto targetFn = runtime->lookupFunction(0x298860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CFCu; }
        if (ctx->pc != 0x295CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298860_0x298860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CFCu; }
        if (ctx->pc != 0x295CFCu) { return; }
    }
    ctx->pc = 0x295CFCu;
label_295cfc:
    // 0x295cfc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x295cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x295d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d04: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x295d04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x295d08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295D08u;
    {
        const bool branch_taken_0x295d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D08u;
            // 0x295d0c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d08) {
            ctx->pc = 0x295D20u;
            goto label_295d20;
        }
    }
    ctx->pc = 0x295D10u;
    // 0x295d10: 0xc0a61ba  jal         func_2986E8
    ctx->pc = 0x295D10u;
    SET_GPR_U32(ctx, 31, 0x295D18u);
    ctx->pc = 0x2986E8u;
    if (runtime->hasFunction(0x2986E8u)) {
        auto targetFn = runtime->lookupFunction(0x2986E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D18u; }
        if (ctx->pc != 0x295D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002986E8_0x2986e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D18u; }
        if (ctx->pc != 0x295D18u) { return; }
    }
    ctx->pc = 0x295D18u;
label_295d18:
    // 0x295d18: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x295d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x295d1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x295d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295d20:
    // 0x295d20: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x295d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295d24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295d28: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x295D28u;
    SET_GPR_U32(ctx, 31, 0x295D30u);
    ctx->pc = 0x295D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295D28u;
            // 0x295d2c: 0x2407028e  addiu       $a3, $zero, 0x28E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D30u; }
        if (ctx->pc != 0x295D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D30u; }
        if (ctx->pc != 0x295D30u) { return; }
    }
    ctx->pc = 0x295D30u;
label_295d30:
    // 0x295d30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295D30u;
    {
        const bool branch_taken_0x295d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D30u;
            // 0x295d34: 0xdfbf01c0  ld          $ra, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d30) {
            ctx->pc = 0x295D44u;
            goto label_295d44;
        }
    }
    ctx->pc = 0x295D38u;
    // 0x295d38: 0xc0a5608  jal         func_295820
    ctx->pc = 0x295D38u;
    SET_GPR_U32(ctx, 31, 0x295D40u);
    ctx->pc = 0x295D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295D38u;
            // 0x295d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295820u;
    if (runtime->hasFunction(0x295820u)) {
        auto targetFn = runtime->lookupFunction(0x295820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D40u; }
        if (ctx->pc != 0x295D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295820_0x295820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D40u; }
        if (ctx->pc != 0x295D40u) { return; }
    }
    ctx->pc = 0x295D40u;
label_295d40:
    // 0x295d40: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x295d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_295d44:
    // 0x295d44: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x295d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x295d48: 0xdfb101a0  ld          $s1, 0x1A0($sp)
    ctx->pc = 0x295d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x295d4c: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x295d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x295d50: 0x3e00008  jr          $ra
    ctx->pc = 0x295D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D50u;
            // 0x295d54: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295D58u;
label_295d58:
    // 0x295d58: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x295d58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x295d5c: 0x31078  dsll        $v0, $v1, 1
    ctx->pc = 0x295d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 1);
    // 0x295d60: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x295d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x295d64: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x295d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x295d68: 0x3e00008  jr          $ra
    ctx->pc = 0x295D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D68u;
            // 0x295d6c: 0x43102d  daddu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295D70u;
label_295d70:
    // 0x295d70: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x295d70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x295d74: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x295d74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x295d78: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x295d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x295d7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x295d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295d80: 0x3e00008  jr          $ra
    ctx->pc = 0x295D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D80u;
            // 0x295d84: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295D88u;
    ctx->pc = 0x295d88u;
}
