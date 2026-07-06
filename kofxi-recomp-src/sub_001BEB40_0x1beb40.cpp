#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEB40
// Address: 0x1beb40 - 0x1beba8
void sub_001BEB40_0x1beb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEB40_0x1beb40");
#endif

    switch (ctx->pc) {
        case 0x1beb40u: goto label_1beb40;
        case 0x1beb44u: goto label_1beb44;
        case 0x1beb48u: goto label_1beb48;
        case 0x1beb4cu: goto label_1beb4c;
        case 0x1beb50u: goto label_1beb50;
        case 0x1beb54u: goto label_1beb54;
        case 0x1beb58u: goto label_1beb58;
        case 0x1beb5cu: goto label_1beb5c;
        case 0x1beb60u: goto label_1beb60;
        case 0x1beb64u: goto label_1beb64;
        case 0x1beb68u: goto label_1beb68;
        case 0x1beb6cu: goto label_1beb6c;
        case 0x1beb70u: goto label_1beb70;
        case 0x1beb74u: goto label_1beb74;
        case 0x1beb78u: goto label_1beb78;
        case 0x1beb7cu: goto label_1beb7c;
        case 0x1beb80u: goto label_1beb80;
        case 0x1beb84u: goto label_1beb84;
        case 0x1beb88u: goto label_1beb88;
        case 0x1beb8cu: goto label_1beb8c;
        case 0x1beb90u: goto label_1beb90;
        case 0x1beb94u: goto label_1beb94;
        case 0x1beb98u: goto label_1beb98;
        case 0x1beb9cu: goto label_1beb9c;
        case 0x1beba0u: goto label_1beba0;
        case 0x1beba4u: goto label_1beba4;
        default: break;
    }

    ctx->pc = 0x1beb40u;

label_1beb40:
    // 0x1beb40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1beb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1beb44:
    // 0x1beb44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1beb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1beb48:
    // 0x1beb48: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1beb4c:
    if (ctx->pc == 0x1BEB4Cu) {
        ctx->pc = 0x1BEB4Cu;
            // 0x1beb4c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1BEB50u;
        goto label_1beb50;
    }
    ctx->pc = 0x1BEB48u;
    {
        const bool branch_taken_0x1beb48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB48u;
            // 0x1beb4c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb48) {
            ctx->pc = 0x1BEB68u;
            goto label_1beb68;
        }
    }
    ctx->pc = 0x1BEB50u;
label_1beb50:
    // 0x1beb50: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1beb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1beb54:
    // 0x1beb54: 0xc06f838  jal         func_1BE0E0
label_1beb58:
    if (ctx->pc == 0x1BEB58u) {
        ctx->pc = 0x1BEB58u;
            // 0x1beb58: 0x24848bf0  addiu       $a0, $a0, -0x7410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937584));
        ctx->pc = 0x1BEB5Cu;
        goto label_1beb5c;
    }
    ctx->pc = 0x1BEB54u;
    SET_GPR_U32(ctx, 31, 0x1BEB5Cu);
    ctx->pc = 0x1BEB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB54u;
            // 0x1beb58: 0x24848bf0  addiu       $a0, $a0, -0x7410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB5Cu; }
        if (ctx->pc != 0x1BEB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB5Cu; }
        if (ctx->pc != 0x1BEB5Cu) { return; }
    }
    ctx->pc = 0x1BEB5Cu;
label_1beb5c:
    // 0x1beb5c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1beb60:
    if (ctx->pc == 0x1BEB60u) {
        ctx->pc = 0x1BEB60u;
            // 0x1beb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB64u;
        goto label_1beb64;
    }
    ctx->pc = 0x1BEB5Cu;
    {
        const bool branch_taken_0x1beb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB5Cu;
            // 0x1beb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb5c) {
            ctx->pc = 0x1BEB98u;
            goto label_1beb98;
        }
    }
    ctx->pc = 0x1BEB64u;
label_1beb64:
    // 0x1beb64: 0x0  nop
    ctx->pc = 0x1beb64u;
    // NOP
label_1beb68:
    // 0x1beb68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1beb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1beb6c:
    // 0x1beb6c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1beb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1beb70:
    // 0x1beb70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1beb74:
    if (ctx->pc == 0x1BEB74u) {
        ctx->pc = 0x1BEB74u;
            // 0x1beb74: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x1BEB78u;
        goto label_1beb78;
    }
    ctx->pc = 0x1BEB70u;
    {
        const bool branch_taken_0x1beb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beb70) {
            ctx->pc = 0x1BEB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB70u;
            // 0x1beb74: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEB88u;
            goto label_1beb88;
        }
    }
    ctx->pc = 0x1BEB78u;
label_1beb78:
    // 0x1beb78: 0x40f809  jalr        $v0
label_1beb7c:
    if (ctx->pc == 0x1BEB7Cu) {
        ctx->pc = 0x1BEB7Cu;
            // 0x1beb7c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x1BEB80u;
        goto label_1beb80;
    }
    ctx->pc = 0x1BEB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BEB80u);
        ctx->pc = 0x1BEB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB78u;
            // 0x1beb7c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BEB80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB80u; }
            if (ctx->pc != 0x1BEB80u) { return; }
        }
        }
    }
    ctx->pc = 0x1BEB80u;
label_1beb80:
    // 0x1beb80: 0x10000004  b           . + 4 + (0x4 << 2)
label_1beb84:
    if (ctx->pc == 0x1BEB84u) {
        ctx->pc = 0x1BEB84u;
            // 0x1beb84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB88u;
        goto label_1beb88;
    }
    ctx->pc = 0x1BEB80u;
    {
        const bool branch_taken_0x1beb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB80u;
            // 0x1beb84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb80) {
            ctx->pc = 0x1BEB94u;
            goto label_1beb94;
        }
    }
    ctx->pc = 0x1BEB88u;
label_1beb88:
    // 0x1beb88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1beb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1beb8c:
    // 0x1beb8c: 0xc06f838  jal         func_1BE0E0
label_1beb90:
    if (ctx->pc == 0x1BEB90u) {
        ctx->pc = 0x1BEB90u;
            // 0x1beb90: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
        ctx->pc = 0x1BEB94u;
        goto label_1beb94;
    }
    ctx->pc = 0x1BEB8Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB94u);
    ctx->pc = 0x1BEB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB8Cu;
            // 0x1beb90: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB94u; }
        if (ctx->pc != 0x1BEB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB94u; }
        if (ctx->pc != 0x1BEB94u) { return; }
    }
    ctx->pc = 0x1BEB94u;
label_1beb94:
    // 0x1beb94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1beb94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1beb98:
    // 0x1beb98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1beb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1beb9c:
    // 0x1beb9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1beb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1beba0:
    // 0x1beba0: 0x3e00008  jr          $ra
label_1beba4:
    if (ctx->pc == 0x1BEBA4u) {
        ctx->pc = 0x1BEBA4u;
            // 0x1beba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BEBA8u;
        goto label_fallthrough_0x1beba0;
    }
    ctx->pc = 0x1BEBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEBA0u;
            // 0x1beba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1beba0:
    ctx->pc = 0x1BEBA8u;
    ctx->pc = 0x1beba8u;
}
