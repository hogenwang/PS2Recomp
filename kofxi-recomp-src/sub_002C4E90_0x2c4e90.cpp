#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4E90
// Address: 0x2c4e90 - 0x2c5048
void sub_002C4E90_0x2c4e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4E90_0x2c4e90");
#endif

    switch (ctx->pc) {
        case 0x2c4edcu: goto label_2c4edc;
        case 0x2c4f24u: goto label_2c4f24;
        case 0x2c4f4cu: goto label_2c4f4c;
        case 0x2c4f88u: goto label_2c4f88;
        case 0x2c4facu: goto label_2c4fac;
        case 0x2c4fb8u: goto label_2c4fb8;
        case 0x2c4ff4u: goto label_2c4ff4;
        case 0x2c4ff8u: goto label_2c4ff8;
        case 0x2c5008u: goto label_2c5008;
        case 0x2c502cu: goto label_2c502c;
        default: break;
    }

    ctx->pc = 0x2c4e90u;

    // 0x2c4e90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c4e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c4e94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c4e98: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2c4e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2c4e9c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2c4e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2c4ea0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c4ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ea4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c4ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c4ea8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c4ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4eac: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c4eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c4eb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c4eb4: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2c4eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2c4eb8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c4ebc: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x2c4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x2c4ec0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4EC0u;
    {
        const bool branch_taken_0x2c4ec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4EC0u;
            // 0x2c4ec4: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ec0) {
            ctx->pc = 0x2C4ED4u;
            goto label_2c4ed4;
        }
    }
    ctx->pc = 0x2C4EC8u;
    // 0x2c4ec8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4ecc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4ECCu;
    {
        const bool branch_taken_0x2c4ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4ECCu;
            // 0x2c4ed0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ecc) {
            ctx->pc = 0x2C4EF4u;
            goto label_2c4ef4;
        }
    }
    ctx->pc = 0x2C4ED4u;
label_2c4ed4:
    // 0x2c4ed4: 0xc0b1412  jal         func_2C5048
    ctx->pc = 0x2C4ED4u;
    SET_GPR_U32(ctx, 31, 0x2C4EDCu);
    ctx->pc = 0x2C5048u;
    if (runtime->hasFunction(0x2C5048u)) {
        auto targetFn = runtime->lookupFunction(0x2C5048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4EDCu; }
        if (ctx->pc != 0x2C4EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5048_0x2c5048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4EDCu; }
        if (ctx->pc != 0x2C4EDCu) { return; }
    }
    ctx->pc = 0x2C4EDCu;
label_2c4edc:
    // 0x2c4edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ee0: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4EE0u;
    {
        const bool branch_taken_0x2c4ee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ee0) {
            ctx->pc = 0x2C4EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4EE0u;
            // 0x2c4ee4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4EF4u;
            goto label_2c4ef4;
        }
    }
    ctx->pc = 0x2C4EE8u;
    // 0x2c4ee8: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x2c4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2c4eec: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2C4EECu;
    {
        const bool branch_taken_0x2c4eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4EECu;
            // 0x2c4ef0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4eec) {
            ctx->pc = 0x2C4FE0u;
            goto label_2c4fe0;
        }
    }
    ctx->pc = 0x2C4EF4u;
label_2c4ef4:
    // 0x2c4ef4: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2c4ef4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4EF8u;
    {
        const bool branch_taken_0x2c4ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4EF8u;
            // 0x2c4efc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ef8) {
            ctx->pc = 0x2C4F10u;
            goto label_2c4f10;
        }
    }
    ctx->pc = 0x2C4F00u;
    // 0x2c4f00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c4f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c4f04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c4f04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2c4f08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4F08u;
    {
        const bool branch_taken_0x2c4f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F08u;
            // 0x2c4f0c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f08) {
            ctx->pc = 0x2C4F14u;
            goto label_2c4f14;
        }
    }
    ctx->pc = 0x2C4F10u;
label_2c4f10:
    // 0x2c4f10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4f14:
    // 0x2c4f14: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c4f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c4f18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c4f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f1c: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x2C4F1Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F24u);
    ctx->pc = 0x2C4F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F1Cu;
            // 0x2c4f20: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (runtime->hasFunction(0x2819F0u)) {
        auto targetFn = runtime->lookupFunction(0x2819F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F24u; }
        if (ctx->pc != 0x2C4F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002819F0_0x2819f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F24u; }
        if (ctx->pc != 0x2C4F24u) { return; }
    }
    ctx->pc = 0x2C4F24u;
label_2c4f24:
    // 0x2c4f24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4F24u;
    {
        const bool branch_taken_0x2c4f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F24u;
            // 0x2c4f28: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f24) {
            ctx->pc = 0x2C4F38u;
            goto label_2c4f38;
        }
    }
    ctx->pc = 0x2C4F2Cu;
    // 0x2c4f2c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2c4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2c4f30: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C4F30u;
    {
        const bool branch_taken_0x2c4f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F30u;
            // 0x2c4f34: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f30) {
            ctx->pc = 0x2C4FE0u;
            goto label_2c4fe0;
        }
    }
    ctx->pc = 0x2C4F38u;
label_2c4f38:
    // 0x2c4f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f3c: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c4f3cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c4f40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f44: 0xc0b0970  jal         func_2C25C0
    ctx->pc = 0x2C4F44u;
    SET_GPR_U32(ctx, 31, 0x2C4F4Cu);
    ctx->pc = 0x2C4F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F44u;
            // 0x2c4f48: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C25C0u;
    if (runtime->hasFunction(0x2C25C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C25C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F4Cu; }
        if (ctx->pc != 0x2C4F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C25C0_0x2c25c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F4Cu; }
        if (ctx->pc != 0x2C4F4Cu) { return; }
    }
    ctx->pc = 0x2C4F4Cu;
label_2c4f4c:
    // 0x2c4f4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4F4Cu;
    {
        const bool branch_taken_0x2c4f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F4Cu;
            // 0x2c4f50: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f4c) {
            ctx->pc = 0x2C4F60u;
            goto label_2c4f60;
        }
    }
    ctx->pc = 0x2C4F54u;
    // 0x2c4f54: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2c4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2c4f58: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C4F58u;
    {
        const bool branch_taken_0x2c4f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F58u;
            // 0x2c4f5c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f58) {
            ctx->pc = 0x2C4FE0u;
            goto label_2c4fe0;
        }
    }
    ctx->pc = 0x2C4F60u;
label_2c4f60:
    // 0x2c4f60: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c4f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c4f64: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c4f68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f6c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c4f6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c4f70: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c4f74: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c4f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c4f78: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c4f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c4f7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c4f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f80: 0xc0a09a6  jal         func_282698
    ctx->pc = 0x2C4F80u;
    SET_GPR_U32(ctx, 31, 0x2C4F88u);
    ctx->pc = 0x2C4F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F80u;
            // 0x2c4f84: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282698u;
    if (runtime->hasFunction(0x282698u)) {
        auto targetFn = runtime->lookupFunction(0x282698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F88u; }
        if (ctx->pc != 0x2C4F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282698_0x282698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4F88u; }
        if (ctx->pc != 0x2C4F88u) { return; }
    }
    ctx->pc = 0x2C4F88u;
label_2c4f88:
    // 0x2c4f88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4F88u;
    {
        const bool branch_taken_0x2c4f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F88u;
            // 0x2c4f8c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f88) {
            ctx->pc = 0x2C4F9Cu;
            goto label_2c4f9c;
        }
    }
    ctx->pc = 0x2C4F90u;
    // 0x2c4f90: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2c4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2c4f94: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C4F94u;
    {
        const bool branch_taken_0x2c4f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F94u;
            // 0x2c4f98: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f94) {
            ctx->pc = 0x2C4FE0u;
            goto label_2c4fe0;
        }
    }
    ctx->pc = 0x2C4F9Cu;
label_2c4f9c:
    // 0x2c4f9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c4f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fa0: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c4fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c4fa4: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c4fa4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c4fa8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2c4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c4fac:
    // 0x2c4fac: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c4facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c4fb0: 0xc0a065c  jal         func_281970
    ctx->pc = 0x2C4FB0u;
    SET_GPR_U32(ctx, 31, 0x2C4FB8u);
    ctx->pc = 0x2C4FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4FB0u;
            // 0x2c4fb4: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (runtime->hasFunction(0x281970u)) {
        auto targetFn = runtime->lookupFunction(0x281970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4FB8u; }
        if (ctx->pc != 0x2C4FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281970_0x281970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4FB8u; }
        if (ctx->pc != 0x2C4FB8u) { return; }
    }
    ctx->pc = 0x2C4FB8u;
label_2c4fb8:
    // 0x2c4fb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4FB8u;
    {
        const bool branch_taken_0x2c4fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4FB8u;
            // 0x2c4fbc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fb8) {
            ctx->pc = 0x2C4FCCu;
            goto label_2c4fcc;
        }
    }
    ctx->pc = 0x2C4FC0u;
    // 0x2c4fc0: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2c4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2c4fc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4FC4u;
    {
        const bool branch_taken_0x2c4fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4FC4u;
            // 0x2c4fc8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fc4) {
            ctx->pc = 0x2C4FE0u;
            goto label_2c4fe0;
        }
    }
    ctx->pc = 0x2C4FCCu;
label_2c4fcc:
    // 0x2c4fcc: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4FCCu;
    {
        const bool branch_taken_0x2c4fcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4FCCu;
            // 0x2c4fd0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fcc) {
            ctx->pc = 0x2C4FD8u;
            goto label_2c4fd8;
        }
    }
    ctx->pc = 0x2C4FD4u;
    // 0x2c4fd4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2c4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2c4fd8:
    // 0x2c4fd8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C4FD8u;
    {
        const bool branch_taken_0x2c4fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4FD8u;
            // 0x2c4fdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fd8) {
            ctx->pc = 0x2C5030u;
            goto label_2c5030;
        }
    }
    ctx->pc = 0x2C4FE0u;
label_2c4fe0:
    // 0x2c4fe0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c4fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c4fe4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c4fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c4fe8: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x2c4fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x2c4fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ff0: 0xc0a5648  jal         func_295920
label_2c4ff4:
    if (ctx->pc == 0x2C4FF4u) {
        ctx->pc = 0x2C4FF4u;
            // 0x2c4ff4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4FF8u;
        goto label_2c4ff8;
    }
    ctx->pc = 0x2C4FF0u;
    SET_GPR_U32(ctx, 31, 0x2C4FF8u);
    ctx->pc = 0x2C4FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4FF0u;
            // 0x2c4ff4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4FF8u; }
        if (ctx->pc != 0x2C4FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4FF8u; }
        if (ctx->pc != 0x2C4FF8u) { return; }
    }
    ctx->pc = 0x2C4FF8u;
label_2c4ff8:
    // 0x2c4ff8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c4ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c4ffc: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c4ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c5000: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x2C5000u;
    SET_GPR_U32(ctx, 31, 0x2C5008u);
    ctx->pc = 0x2C5004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5000u;
            // 0x2c5004: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5008u; }
        if (ctx->pc != 0x2C5008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281CE0_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5008u; }
        if (ctx->pc != 0x2C5008u) { return; }
    }
    ctx->pc = 0x2C5008u;
label_2c5008:
    // 0x2c5008: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5008u;
    {
        const bool branch_taken_0x2c5008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C500Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5008u;
            // 0x2c500c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5008) {
            ctx->pc = 0x2C5030u;
            goto label_2c5030;
        }
    }
    ctx->pc = 0x2C5010u;
    // 0x2c5010: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5010u;
    {
        const bool branch_taken_0x2c5010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5010) {
            ctx->pc = 0x2C5024u;
            goto label_2c5024;
        }
    }
    ctx->pc = 0x2C5018u;
    // 0x2c5018: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c5018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c501c: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C501Cu;
    {
        const bool branch_taken_0x2c501c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C5020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C501Cu;
            // 0x2c5020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c501c) {
            ctx->pc = 0x2C5030u;
            goto label_2c5030;
        }
    }
    ctx->pc = 0x2C5024u;
label_2c5024:
    // 0x2c5024: 0xc0b1432  jal         func_2C50C8
    ctx->pc = 0x2C5024u;
    SET_GPR_U32(ctx, 31, 0x2C502Cu);
    ctx->pc = 0x2C5028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5024u;
            // 0x2c5028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C50C8u;
    if (runtime->hasFunction(0x2C50C8u)) {
        auto targetFn = runtime->lookupFunction(0x2C50C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C502Cu; }
        if (ctx->pc != 0x2C502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C50C8_0x2c50c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C502Cu; }
        if (ctx->pc != 0x2C502Cu) { return; }
    }
    ctx->pc = 0x2C502Cu;
label_2c502c:
    // 0x2c502c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c502cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5030:
    // 0x2c5030: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c5030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c5034: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2c5034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5038: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2c5038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c503c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c503cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5040: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5040u;
            // 0x2c5044: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5048u;
    ctx->pc = 0x2c5048u;
}
