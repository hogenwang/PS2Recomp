#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1E68
// Address: 0x1e1e68 - 0x1e1fc0
void sub_001E1E68_0x1e1e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1E68_0x1e1e68");
#endif

    switch (ctx->pc) {
        case 0x1e1e80u: goto label_1e1e80;
        case 0x1e1e98u: goto label_1e1e98;
        case 0x1e1ec0u: goto label_1e1ec0;
        case 0x1e1ed4u: goto label_1e1ed4;
        case 0x1e1edcu: goto label_1e1edc;
        case 0x1e1ef0u: goto label_1e1ef0;
        case 0x1e1ef8u: goto label_1e1ef8;
        case 0x1e1f10u: goto label_1e1f10;
        case 0x1e1f24u: goto label_1e1f24;
        case 0x1e1f48u: goto label_1e1f48;
        case 0x1e1f5cu: goto label_1e1f5c;
        case 0x1e1f64u: goto label_1e1f64;
        case 0x1e1f78u: goto label_1e1f78;
        case 0x1e1f80u: goto label_1e1f80;
        case 0x1e1f98u: goto label_1e1f98;
        case 0x1e1fb0u: goto label_1e1fb0;
        default: break;
    }

    ctx->pc = 0x1e1e68u;

    // 0x1e1e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1e74: 0x8078808  j           func_1E2020
    ctx->pc = 0x1E1E74u;
    ctx->pc = 0x1E1E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E74u;
            // 0x1e1e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2020u;
    {
        auto targetFn = runtime->lookupFunction(0x1E2020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E1E7Cu;
    // 0x1e1e7c: 0x0  nop
    ctx->pc = 0x1e1e7cu;
    // NOP
label_1e1e80:
    // 0x1e1e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1e88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1e8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1e90: 0xc0787f0  jal         func_1E1FC0
    ctx->pc = 0x1E1E90u;
    SET_GPR_U32(ctx, 31, 0x1E1E98u);
    ctx->pc = 0x1E1FC0u;
    if (runtime->hasFunction(0x1E1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E98u; }
        if (ctx->pc != 0x1E1E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1FC0_0x1e1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E98u; }
        if (ctx->pc != 0x1E1E98u) { return; }
    }
    ctx->pc = 0x1E1E98u;
label_1e1e98:
    // 0x1e1e98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e9c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e1ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1ea4: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E1EA4u;
    {
        const bool branch_taken_0x1e1ea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E1EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1EA4u;
            // 0x1e1ea8: 0x245114f8  addiu       $s1, $v0, 0x14F8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ea4) {
            ctx->pc = 0x1E1EFCu;
            goto label_1e1efc;
        }
    }
    ctx->pc = 0x1E1EACu;
    // 0x1e1eac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e1eb0: 0x50500013  beql        $v0, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E1EB0u;
    {
        const bool branch_taken_0x1e1eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1e1eb0) {
            ctx->pc = 0x1E1EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1EB0u;
            // 0x1e1eb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F00u;
            goto label_1e1f00;
        }
    }
    ctx->pc = 0x1E1EB8u;
    // 0x1e1eb8: 0xc078810  jal         func_1E2040
    ctx->pc = 0x1E1EB8u;
    SET_GPR_U32(ctx, 31, 0x1E1EC0u);
    ctx->pc = 0x1E2040u;
    if (runtime->hasFunction(0x1E2040u)) {
        auto targetFn = runtime->lookupFunction(0x1E2040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EC0u; }
        if (ctx->pc != 0x1E1EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2040_0x1e2040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EC0u; }
        if (ctx->pc != 0x1E1EC0u) { return; }
    }
    ctx->pc = 0x1E1EC0u;
label_1e1ec0:
    // 0x1e1ec0: 0x3c0601c0  lui         $a2, 0x1C0
    ctx->pc = 0x1e1ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)448 << 16));
    // 0x1e1ec4: 0x24c6bb80  addiu       $a2, $a2, -0x4480
    ctx->pc = 0x1e1ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949760));
    // 0x1e1ec8: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1e1ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1e1ecc: 0xc078818  jal         func_1E2060
    ctx->pc = 0x1E1ECCu;
    SET_GPR_U32(ctx, 31, 0x1E1ED4u);
    ctx->pc = 0x1E1ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1ECCu;
            // 0x1e1ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2060u;
    if (runtime->hasFunction(0x1E2060u)) {
        auto targetFn = runtime->lookupFunction(0x1E2060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1ED4u; }
        if (ctx->pc != 0x1E1ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2060_0x1e2060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1ED4u; }
        if (ctx->pc != 0x1E1ED4u) { return; }
    }
    ctx->pc = 0x1E1ED4u;
label_1e1ed4:
    // 0x1e1ed4: 0xc07888e  jal         func_1E2238
    ctx->pc = 0x1E1ED4u;
    SET_GPR_U32(ctx, 31, 0x1E1EDCu);
    ctx->pc = 0x1E1ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1ED4u;
            // 0x1e1ed8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2238u;
    if (runtime->hasFunction(0x1E2238u)) {
        auto targetFn = runtime->lookupFunction(0x1E2238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EDCu; }
        if (ctx->pc != 0x1E1EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2238_0x1e2238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EDCu; }
        if (ctx->pc != 0x1E1EDCu) { return; }
    }
    ctx->pc = 0x1E1EDCu;
label_1e1edc:
    // 0x1e1edc: 0x3c0401c0  lui         $a0, 0x1C0
    ctx->pc = 0x1e1edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
    // 0x1e1ee0: 0x2484fb80  addiu       $a0, $a0, -0x480
    ctx->pc = 0x1e1ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966144));
    // 0x1e1ee4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1e1ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1e1ee8: 0xc078850  jal         func_1E2140
    ctx->pc = 0x1E1EE8u;
    SET_GPR_U32(ctx, 31, 0x1E1EF0u);
    ctx->pc = 0x1E1EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1EE8u;
            // 0x1e1eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2140u;
    if (runtime->hasFunction(0x1E2140u)) {
        auto targetFn = runtime->lookupFunction(0x1E2140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EF0u; }
        if (ctx->pc != 0x1E1EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2140_0x1e2140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EF0u; }
        if (ctx->pc != 0x1E1EF0u) { return; }
    }
    ctx->pc = 0x1E1EF0u;
label_1e1ef0:
    // 0x1e1ef0: 0xc07888e  jal         func_1E2238
    ctx->pc = 0x1E1EF0u;
    SET_GPR_U32(ctx, 31, 0x1E1EF8u);
    ctx->pc = 0x1E1EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1EF0u;
            // 0x1e1ef4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2238u;
    if (runtime->hasFunction(0x1E2238u)) {
        auto targetFn = runtime->lookupFunction(0x1E2238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EF8u; }
        if (ctx->pc != 0x1E1EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2238_0x1e2238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EF8u; }
        if (ctx->pc != 0x1E1EF8u) { return; }
    }
    ctx->pc = 0x1E1EF8u;
label_1e1ef8:
    // 0x1e1ef8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1e1ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1e1efc:
    // 0x1e1efc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1f00:
    // 0x1e1f00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1f08: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F08u;
            // 0x1e1f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1F10u;
label_1e1f10:
    // 0x1e1f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1f14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1f18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e1f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e1f1c: 0xc0787f0  jal         func_1E1FC0
    ctx->pc = 0x1E1F1Cu;
    SET_GPR_U32(ctx, 31, 0x1E1F24u);
    ctx->pc = 0x1E1FC0u;
    if (runtime->hasFunction(0x1E1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F24u; }
        if (ctx->pc != 0x1E1F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1FC0_0x1e1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F24u; }
        if (ctx->pc != 0x1E1F24u) { return; }
    }
    ctx->pc = 0x1E1F24u;
label_1e1f24:
    // 0x1e1f24: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e1f28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e1f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1f2c: 0x14440015  bne         $v0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E1F2Cu;
    {
        const bool branch_taken_0x1e1f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1E1F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F2Cu;
            // 0x1e1f30: 0x247014f8  addiu       $s0, $v1, 0x14F8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f2c) {
            ctx->pc = 0x1E1F84u;
            goto label_1e1f84;
        }
    }
    ctx->pc = 0x1E1F34u;
    // 0x1e1f34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1f38: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E1F38u;
    {
        const bool branch_taken_0x1e1f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f38) {
            ctx->pc = 0x1E1F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F38u;
            // 0x1e1f3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F88u;
            goto label_1e1f88;
        }
    }
    ctx->pc = 0x1E1F40u;
    // 0x1e1f40: 0xc078810  jal         func_1E2040
    ctx->pc = 0x1E1F40u;
    SET_GPR_U32(ctx, 31, 0x1E1F48u);
    ctx->pc = 0x1E2040u;
    if (runtime->hasFunction(0x1E2040u)) {
        auto targetFn = runtime->lookupFunction(0x1E2040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F48u; }
        if (ctx->pc != 0x1E1F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2040_0x1e2040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F48u; }
        if (ctx->pc != 0x1E1F48u) { return; }
    }
    ctx->pc = 0x1E1F48u;
label_1e1f48:
    // 0x1e1f48: 0x3c0601c0  lui         $a2, 0x1C0
    ctx->pc = 0x1e1f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)448 << 16));
    // 0x1e1f4c: 0x24c6fb80  addiu       $a2, $a2, -0x480
    ctx->pc = 0x1e1f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966144));
    // 0x1e1f50: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1e1f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1e1f54: 0xc078818  jal         func_1E2060
    ctx->pc = 0x1E1F54u;
    SET_GPR_U32(ctx, 31, 0x1E1F5Cu);
    ctx->pc = 0x1E1F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F54u;
            // 0x1e1f58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2060u;
    if (runtime->hasFunction(0x1E2060u)) {
        auto targetFn = runtime->lookupFunction(0x1E2060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F5Cu; }
        if (ctx->pc != 0x1E1F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2060_0x1e2060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F5Cu; }
        if (ctx->pc != 0x1E1F5Cu) { return; }
    }
    ctx->pc = 0x1E1F5Cu;
label_1e1f5c:
    // 0x1e1f5c: 0xc07888e  jal         func_1E2238
    ctx->pc = 0x1E1F5Cu;
    SET_GPR_U32(ctx, 31, 0x1E1F64u);
    ctx->pc = 0x1E1F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F5Cu;
            // 0x1e1f60: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2238u;
    if (runtime->hasFunction(0x1E2238u)) {
        auto targetFn = runtime->lookupFunction(0x1E2238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F64u; }
        if (ctx->pc != 0x1E1F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2238_0x1e2238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F64u; }
        if (ctx->pc != 0x1E1F64u) { return; }
    }
    ctx->pc = 0x1E1F64u;
label_1e1f64:
    // 0x1e1f64: 0x3c0401c0  lui         $a0, 0x1C0
    ctx->pc = 0x1e1f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
    // 0x1e1f68: 0x2484bb80  addiu       $a0, $a0, -0x4480
    ctx->pc = 0x1e1f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949760));
    // 0x1e1f6c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1e1f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1e1f70: 0xc078850  jal         func_1E2140
    ctx->pc = 0x1E1F70u;
    SET_GPR_U32(ctx, 31, 0x1E1F78u);
    ctx->pc = 0x1E1F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F70u;
            // 0x1e1f74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2140u;
    if (runtime->hasFunction(0x1E2140u)) {
        auto targetFn = runtime->lookupFunction(0x1E2140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F78u; }
        if (ctx->pc != 0x1E1F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2140_0x1e2140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F78u; }
        if (ctx->pc != 0x1E1F78u) { return; }
    }
    ctx->pc = 0x1E1F78u;
label_1e1f78:
    // 0x1e1f78: 0xc07888e  jal         func_1E2238
    ctx->pc = 0x1E1F78u;
    SET_GPR_U32(ctx, 31, 0x1E1F80u);
    ctx->pc = 0x1E1F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F78u;
            // 0x1e1f7c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2238u;
    if (runtime->hasFunction(0x1E2238u)) {
        auto targetFn = runtime->lookupFunction(0x1E2238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F80u; }
        if (ctx->pc != 0x1E1F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2238_0x1e2238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F80u; }
        if (ctx->pc != 0x1E1F80u) { return; }
    }
    ctx->pc = 0x1E1F80u;
label_1e1f80:
    // 0x1e1f80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1e1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1e1f84:
    // 0x1e1f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1f88:
    // 0x1e1f88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F8Cu;
            // 0x1e1f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1F94u;
    // 0x1e1f94: 0x0  nop
    ctx->pc = 0x1e1f94u;
    // NOP
label_1e1f98:
    // 0x1e1f98: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1F98u;
    {
        const bool branch_taken_0x1e1f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F98u;
            // 0x1e1f9c: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f98) {
            ctx->pc = 0x1E1FB0u;
            goto label_1e1fb0;
        }
    }
    ctx->pc = 0x1E1FA0u;
    // 0x1e1fa0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e1fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FA4u;
            // 0x1e1fa8: 0xac4014f0  sw          $zero, 0x14F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1FACu;
    // 0x1e1fac: 0x0  nop
    ctx->pc = 0x1e1facu;
    // NOP
label_1e1fb0:
    // 0x1e1fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FB4u;
            // 0x1e1fb8: 0xac6214f0  sw          $v0, 0x14F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1FBCu;
    // 0x1e1fbc: 0x0  nop
    ctx->pc = 0x1e1fbcu;
    // NOP
    ctx->pc = 0x1e1fc0u;
}
