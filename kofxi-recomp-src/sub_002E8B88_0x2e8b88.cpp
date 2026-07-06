#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8B88
// Address: 0x2e8b88 - 0x2e8cd8
void sub_002E8B88_0x2e8b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8B88_0x2e8b88");
#endif

    switch (ctx->pc) {
        case 0x2e8be8u: goto label_2e8be8;
        case 0x2e8bf8u: goto label_2e8bf8;
        case 0x2e8c08u: goto label_2e8c08;
        case 0x2e8c28u: goto label_2e8c28;
        case 0x2e8c48u: goto label_2e8c48;
        case 0x2e8c68u: goto label_2e8c68;
        case 0x2e8c7cu: goto label_2e8c7c;
        case 0x2e8ca0u: goto label_2e8ca0;
        case 0x2e8cc0u: goto label_2e8cc0;
        default: break;
    }

    ctx->pc = 0x2e8b88u;

    // 0x2e8b88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e8b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e8b8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e8b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e8b90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e8b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e8b94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e8b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e8b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b9c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e8b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e8ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8ba4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2e8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2e8ba8: 0xac40fda0  sw          $zero, -0x260($v0)
    ctx->pc = 0x2e8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966688), GPR_U32(ctx, 0));
    // 0x2e8bac: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2e8bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2e8bb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8bb4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2e8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2e8bb8: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2e8bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2e8bbc: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2e8bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2e8bc0: 0x2490fda8  addiu       $s0, $a0, -0x258
    ctx->pc = 0x2e8bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966696));
    // 0x2e8bc4: 0xac82fda8  sw          $v0, -0x258($a0)
    ctx->pc = 0x2e8bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966696), GPR_U32(ctx, 2));
    // 0x2e8bc8: 0x24639478  addiu       $v1, $v1, -0x6B88
    ctx->pc = 0x2e8bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939768));
    // 0x2e8bcc: 0x24a59758  addiu       $a1, $a1, -0x68A8
    ctx->pc = 0x2e8bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940504));
    // 0x2e8bd0: 0x24c69830  addiu       $a2, $a2, -0x67D0
    ctx->pc = 0x2e8bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940720));
    // 0x2e8bd4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2e8bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2e8bd8: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2e8bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x2e8bdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8be0: 0xc08c6a6  jal         func_231A98
    ctx->pc = 0x2E8BE0u;
    SET_GPR_U32(ctx, 31, 0x2E8BE8u);
    ctx->pc = 0x2E8BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8BE0u;
            // 0x2e8be4: 0xae06000c  sw          $a2, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A98u;
    if (runtime->hasFunction(0x231A98u)) {
        auto targetFn = runtime->lookupFunction(0x231A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BE8u; }
        if (ctx->pc != 0x2E8BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A98_0x231a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BE8u; }
        if (ctx->pc != 0x2E8BE8u) { return; }
    }
    ctx->pc = 0x2E8BE8u;
label_2e8be8:
    // 0x2e8be8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2e8be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2e8bec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e8becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8bf0: 0xc08c6a6  jal         func_231A98
    ctx->pc = 0x2E8BF0u;
    SET_GPR_U32(ctx, 31, 0x2E8BF8u);
    ctx->pc = 0x2E8BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8BF0u;
            // 0x2e8bf4: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A98u;
    if (runtime->hasFunction(0x231A98u)) {
        auto targetFn = runtime->lookupFunction(0x231A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BF8u; }
        if (ctx->pc != 0x2E8BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A98_0x231a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BF8u; }
        if (ctx->pc != 0x2E8BF8u) { return; }
    }
    ctx->pc = 0x2E8BF8u;
label_2e8bf8:
    // 0x2e8bf8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2e8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2e8bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c00: 0xc09896a  jal         func_2625A8
    ctx->pc = 0x2E8C00u;
    SET_GPR_U32(ctx, 31, 0x2E8C08u);
    ctx->pc = 0x2E8C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C00u;
            // 0x2e8c04: 0xae12001c  sw          $s2, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2625A8u;
    if (runtime->hasFunction(0x2625A8u)) {
        auto targetFn = runtime->lookupFunction(0x2625A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C08u; }
        if (ctx->pc != 0x2E8C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002625A8_0x2625a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C08u; }
        if (ctx->pc != 0x2E8C08u) { return; }
    }
    ctx->pc = 0x2E8C08u;
label_2e8c08:
    // 0x2e8c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c0c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8C0Cu;
    {
        const bool branch_taken_0x2e8c0c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2E8C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C0Cu;
            // 0x2e8c10: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c0c) {
            ctx->pc = 0x2E8C20u;
            goto label_2e8c20;
        }
    }
    ctx->pc = 0x2E8C14u;
    // 0x2e8c14: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8c18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8C18u;
    {
        const bool branch_taken_0x2e8c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C18u;
            // 0x2e8c1c: 0x24a5fcd0  addiu       $a1, $a1, -0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c18) {
            ctx->pc = 0x2E8C40u;
            goto label_2e8c40;
        }
    }
    ctx->pc = 0x2E8C20u;
label_2e8c20:
    // 0x2e8c20: 0xc098b6c  jal         func_262DB0
    ctx->pc = 0x2E8C20u;
    SET_GPR_U32(ctx, 31, 0x2E8C28u);
    ctx->pc = 0x2E8C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C20u;
            // 0x2e8c24: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262DB0u;
    if (runtime->hasFunction(0x262DB0u)) {
        auto targetFn = runtime->lookupFunction(0x262DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C28u; }
        if (ctx->pc != 0x2E8C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262DB0_0x262db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C28u; }
        if (ctx->pc != 0x2E8C28u) { return; }
    }
    ctx->pc = 0x2E8C28u;
label_2e8c28:
    // 0x2e8c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c2c: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8C2Cu;
    {
        const bool branch_taken_0x2e8c2c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2E8C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C2Cu;
            // 0x2e8c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c2c) {
            ctx->pc = 0x2E8C4Cu;
            goto label_2e8c4c;
        }
    }
    ctx->pc = 0x2E8C34u;
    // 0x2e8c34: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e8c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e8c38: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e8c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8c3c: 0x24a5fcf8  addiu       $a1, $a1, -0x308
    ctx->pc = 0x2e8c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966520));
label_2e8c40:
    // 0x2e8c40: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E8C40u;
    SET_GPR_U32(ctx, 31, 0x2E8C48u);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C48u; }
        if (ctx->pc != 0x2E8C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C48u; }
        if (ctx->pc != 0x2E8C48u) { return; }
    }
    ctx->pc = 0x2E8C48u;
label_2e8c48:
    // 0x2e8c48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e8c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c4c:
    // 0x2e8c4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e8c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8c50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e8c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8c54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e8c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C5Cu;
            // 0x2e8c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8C64u;
    // 0x2e8c64: 0x0  nop
    ctx->pc = 0x2e8c64u;
    // NOP
label_2e8c68:
    // 0x2e8c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8c70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e8c74: 0xc098b8a  jal         func_262E28
    ctx->pc = 0x2E8C74u;
    SET_GPR_U32(ctx, 31, 0x2E8C7Cu);
    ctx->pc = 0x2E8C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C74u;
            // 0x2e8c78: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262E28u;
    if (runtime->hasFunction(0x262E28u)) {
        auto targetFn = runtime->lookupFunction(0x262E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C7Cu; }
        if (ctx->pc != 0x2E8C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262E28_0x262e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8C7Cu; }
        if (ctx->pc != 0x2E8C7Cu) { return; }
    }
    ctx->pc = 0x2E8C7Cu;
label_2e8c7c:
    // 0x2e8c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8c80: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8C80u;
    {
        const bool branch_taken_0x2e8c80 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2E8C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C80u;
            // 0x2e8c84: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c80) {
            ctx->pc = 0x2E8C98u;
            goto label_2e8c98;
        }
    }
    ctx->pc = 0x2E8C88u;
    // 0x2e8c88: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e8c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e8c8c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e8c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8c90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8C90u;
    {
        const bool branch_taken_0x2e8c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C90u;
            // 0x2e8c94: 0x24a5fd30  addiu       $a1, $a1, -0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c90) {
            ctx->pc = 0x2E8CB8u;
            goto label_2e8cb8;
        }
    }
    ctx->pc = 0x2E8C98u;
label_2e8c98:
    // 0x2e8c98: 0xc098974  jal         func_2625D0
    ctx->pc = 0x2E8C98u;
    SET_GPR_U32(ctx, 31, 0x2E8CA0u);
    ctx->pc = 0x2E8C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8C98u;
            // 0x2e8c9c: 0x2484fda8  addiu       $a0, $a0, -0x258 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2625D0u;
    if (runtime->hasFunction(0x2625D0u)) {
        auto targetFn = runtime->lookupFunction(0x2625D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8CA0u; }
        if (ctx->pc != 0x2E8CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002625D0_0x2625d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8CA0u; }
        if (ctx->pc != 0x2E8CA0u) { return; }
    }
    ctx->pc = 0x2E8CA0u;
label_2e8ca0:
    // 0x2e8ca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ca4: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8CA4u;
    {
        const bool branch_taken_0x2e8ca4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2E8CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8CA4u;
            // 0x2e8ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ca4) {
            ctx->pc = 0x2E8CC4u;
            goto label_2e8cc4;
        }
    }
    ctx->pc = 0x2E8CACu;
    // 0x2e8cac: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e8cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e8cb0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8cb4: 0x24a5fd68  addiu       $a1, $a1, -0x298
    ctx->pc = 0x2e8cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966632));
label_2e8cb8:
    // 0x2e8cb8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E8CB8u;
    SET_GPR_U32(ctx, 31, 0x2E8CC0u);
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8CC0u; }
        if (ctx->pc != 0x2E8CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8CC0u; }
        if (ctx->pc != 0x2E8CC0u) { return; }
    }
    ctx->pc = 0x2E8CC0u;
label_2e8cc0:
    // 0x2e8cc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e8cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8cc4:
    // 0x2e8cc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8CCCu;
            // 0x2e8cd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8CD4u;
    // 0x2e8cd4: 0x0  nop
    ctx->pc = 0x2e8cd4u;
    // NOP
    ctx->pc = 0x2e8cd8u;
}
