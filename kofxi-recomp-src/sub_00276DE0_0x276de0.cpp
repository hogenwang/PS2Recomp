#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276DE0
// Address: 0x276de0 - 0x276ed0
void sub_00276DE0_0x276de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276DE0_0x276de0");
#endif

    switch (ctx->pc) {
        case 0x276dfcu: goto label_276dfc;
        case 0x276e08u: goto label_276e08;
        case 0x276e24u: goto label_276e24;
        case 0x276e30u: goto label_276e30;
        case 0x276e54u: goto label_276e54;
        case 0x276e68u: goto label_276e68;
        case 0x276e94u: goto label_276e94;
        case 0x276ea8u: goto label_276ea8;
        default: break;
    }

    ctx->pc = 0x276de0u;

    // 0x276de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276de4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x276de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x276de8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x276de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x276dec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x276decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x276df0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x276df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x276df4: 0xc09d0ee  jal         func_2743B8
    ctx->pc = 0x276DF4u;
    SET_GPR_U32(ctx, 31, 0x276DFCu);
    ctx->pc = 0x276DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276DF4u;
            // 0x276df8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2743B8u;
    if (runtime->hasFunction(0x2743B8u)) {
        auto targetFn = runtime->lookupFunction(0x2743B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DFCu; }
        if (ctx->pc != 0x276DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002743B8_0x2743b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DFCu; }
        if (ctx->pc != 0x276DFCu) { return; }
    }
    ctx->pc = 0x276DFCu;
label_276dfc:
    // 0x276dfc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x276dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x276e00: 0xc09d13e  jal         func_2744F8
    ctx->pc = 0x276E00u;
    SET_GPR_U32(ctx, 31, 0x276E08u);
    ctx->pc = 0x276E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E00u;
            // 0x276e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2744F8u;
    if (runtime->hasFunction(0x2744F8u)) {
        auto targetFn = runtime->lookupFunction(0x2744F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E08u; }
        if (ctx->pc != 0x276E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002744F8_0x2744f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E08u; }
        if (ctx->pc != 0x276E08u) { return; }
    }
    ctx->pc = 0x276E08u;
label_276e08:
    // 0x276e08: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x276e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x276e0c: 0x248431ac  addiu       $a0, $a0, 0x31AC
    ctx->pc = 0x276e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12716));
    // 0x276e10: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x276e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x276e14: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x276e14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x276e18: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x276e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x276e1c: 0xc0b690c  jal         func_2DA430
    ctx->pc = 0x276E1Cu;
    SET_GPR_U32(ctx, 31, 0x276E24u);
    ctx->pc = 0x276E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E1Cu;
            // 0x276e20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DA430u;
    if (runtime->hasFunction(0x2DA430u)) {
        auto targetFn = runtime->lookupFunction(0x2DA430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E24u; }
        if (ctx->pc != 0x276E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DA430_0x2da430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E24u; }
        if (ctx->pc != 0x276E24u) { return; }
    }
    ctx->pc = 0x276E24u;
label_276e24:
    // 0x276e24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x276e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e28: 0x4c00023  bltz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x276E28u;
    {
        const bool branch_taken_0x276e28 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x276E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E28u;
            // 0x276e2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e28) {
            ctx->pc = 0x276EB8u;
            goto label_276eb8;
        }
    }
    ctx->pc = 0x276E30u;
label_276e30:
    // 0x276e30: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x276e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x276e34: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x276e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x276e38: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x276e38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276e3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x276e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x276e40: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x276e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x276e44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x276E44u;
    {
        const bool branch_taken_0x276e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E44u;
            // 0x276e48: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e44) {
            ctx->pc = 0x276E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e30;
        }
    }
    ctx->pc = 0x276E4Cu;
    // 0x276e4c: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x276E4Cu;
    SET_GPR_U32(ctx, 31, 0x276E54u);
    ctx->pc = 0x276E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E4Cu;
            // 0x276e50: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB0C8u;
    if (runtime->hasFunction(0x2DB0C8u)) {
        auto targetFn = runtime->lookupFunction(0x2DB0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E54u; }
        if (ctx->pc != 0x276E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB0C8_0x2db0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E54u; }
        if (ctx->pc != 0x276E54u) { return; }
    }
    ctx->pc = 0x276E54u;
label_276e54:
    // 0x276e54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x276e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e58: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x276E58u;
    {
        const bool branch_taken_0x276e58 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x276E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E58u;
            // 0x276e5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e58) {
            ctx->pc = 0x276E70u;
            goto label_276e70;
        }
    }
    ctx->pc = 0x276E60u;
    // 0x276e60: 0xc09d284  jal         func_274A10
    ctx->pc = 0x276E60u;
    SET_GPR_U32(ctx, 31, 0x276E68u);
    ctx->pc = 0x276E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E60u;
            // 0x276e64: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274A10u;
    if (runtime->hasFunction(0x274A10u)) {
        auto targetFn = runtime->lookupFunction(0x274A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E68u; }
        if (ctx->pc != 0x276E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274A10_0x274a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E68u; }
        if (ctx->pc != 0x276E68u) { return; }
    }
    ctx->pc = 0x276E68u;
label_276e68:
    // 0x276e68: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x276E68u;
    {
        const bool branch_taken_0x276e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E68u;
            // 0x276e6c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e68) {
            ctx->pc = 0x276EBCu;
            goto label_276ebc;
        }
    }
    ctx->pc = 0x276E70u;
label_276e70:
    // 0x276e70: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x276E70u;
    {
        const bool branch_taken_0x276e70 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x276E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E70u;
            // 0x276e74: 0x2121023  subu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e70) {
            ctx->pc = 0x276EB8u;
            goto label_276eb8;
        }
    }
    ctx->pc = 0x276E78u;
    // 0x276e78: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x276e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x276e7c: 0x8c623430  lw          $v0, 0x3430($v1)
    ctx->pc = 0x276e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13360)));
    // 0x276e80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x276e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x276e84: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x276E84u;
    {
        const bool branch_taken_0x276e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276e84) {
            ctx->pc = 0x276E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276E84u;
            // 0x276e88: 0x2121023  subu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276EB8u;
            goto label_276eb8;
        }
    }
    ctx->pc = 0x276E8Cu;
    // 0x276e8c: 0xc0b6b6c  jal         func_2DADB0
    ctx->pc = 0x276E8Cu;
    SET_GPR_U32(ctx, 31, 0x276E94u);
    ctx->pc = 0x276E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E8Cu;
            // 0x276e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DADB0u;
    if (runtime->hasFunction(0x2DADB0u)) {
        auto targetFn = runtime->lookupFunction(0x2DADB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E94u; }
        if (ctx->pc != 0x276E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DADB0_0x2dadb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E94u; }
        if (ctx->pc != 0x276E94u) { return; }
    }
    ctx->pc = 0x276E94u;
label_276e94:
    // 0x276e94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x276e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e98: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x276E98u;
    {
        const bool branch_taken_0x276e98 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x276E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E98u;
            // 0x276e9c: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e98) {
            ctx->pc = 0x276EB8u;
            goto label_276eb8;
        }
    }
    ctx->pc = 0x276EA0u;
    // 0x276ea0: 0xc0b6bb2  jal         func_2DAEC8
    ctx->pc = 0x276EA0u;
    SET_GPR_U32(ctx, 31, 0x276EA8u);
    ctx->pc = 0x276EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276EA0u;
            // 0x276ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEC8u;
    if (runtime->hasFunction(0x2DAEC8u)) {
        auto targetFn = runtime->lookupFunction(0x2DAEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276EA8u; }
        if (ctx->pc != 0x276EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DAEC8_0x2daec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276EA8u; }
        if (ctx->pc != 0x276EA8u) { return; }
    }
    ctx->pc = 0x276EA8u;
label_276ea8:
    // 0x276ea8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x276ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276eac: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x276EACu;
    {
        const bool branch_taken_0x276eac = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x276EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276EACu;
            // 0x276eb0: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276eac) {
            ctx->pc = 0x276EB8u;
            goto label_276eb8;
        }
    }
    ctx->pc = 0x276EB4u;
    // 0x276eb4: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x276eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_276eb8:
    // 0x276eb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x276eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_276ebc:
    // 0x276ebc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x276ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276ec0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x276ec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276ec4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x276ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x276ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x276EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276EC8u;
            // 0x276ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276ED0u;
    ctx->pc = 0x276ed0u;
}
