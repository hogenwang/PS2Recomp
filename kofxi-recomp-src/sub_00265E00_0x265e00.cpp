#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00265E00
// Address: 0x265e00 - 0x266038
void sub_00265E00_0x265e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265E00_0x265e00");
#endif

    switch (ctx->pc) {
        case 0x265e40u: goto label_265e40;
        case 0x265e54u: goto label_265e54;
        case 0x265e58u: goto label_265e58;
        case 0x265e60u: goto label_265e60;
        case 0x265e84u: goto label_265e84;
        case 0x265e8cu: goto label_265e8c;
        case 0x265eb0u: goto label_265eb0;
        case 0x265ec8u: goto label_265ec8;
        case 0x265ee0u: goto label_265ee0;
        case 0x265ef8u: goto label_265ef8;
        case 0x265f0cu: goto label_265f0c;
        case 0x265f28u: goto label_265f28;
        case 0x265f3cu: goto label_265f3c;
        case 0x265f54u: goto label_265f54;
        case 0x265f68u: goto label_265f68;
        case 0x265f88u: goto label_265f88;
        case 0x265fbcu: goto label_265fbc;
        case 0x265fccu: goto label_265fcc;
        case 0x265fdcu: goto label_265fdc;
        case 0x265fecu: goto label_265fec;
        case 0x266008u: goto label_266008;
        default: break;
    }

    ctx->pc = 0x265e00u;

    // 0x265e00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x265e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x265e04: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x265e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x265e08: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x265e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x265e0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x265e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e10: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x265e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x265e14: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x265e14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e18: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x265e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x265e1c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x265e1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e20: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x265e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x265e24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x265e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e28: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x265e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x265e2c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x265e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e30: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x265e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x265e34: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x265e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x265e38: 0xc098552  jal         func_261548
    ctx->pc = 0x265E38u;
    SET_GPR_U32(ctx, 31, 0x265E40u);
    ctx->pc = 0x265E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265E38u;
            // 0x265e3c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E40u; }
        if (ctx->pc != 0x265E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E40u; }
        if (ctx->pc != 0x265E40u) { return; }
    }
    ctx->pc = 0x265E40u;
label_265e40:
    // 0x265e40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x265e40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e44: 0x5660000a  bnel        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x265E44u;
    {
        const bool branch_taken_0x265e44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x265e44) {
            ctx->pc = 0x265E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x265E44u;
            // 0x265e48: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x265E70u;
            goto label_265e70;
        }
    }
    ctx->pc = 0x265E4Cu;
    // 0x265e4c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x265E4Cu;
    SET_GPR_U32(ctx, 31, 0x265E54u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E54u; }
        if (ctx->pc != 0x265E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E54u; }
        if (ctx->pc != 0x265E54u) { return; }
    }
    ctx->pc = 0x265E54u;
label_265e54:
    // 0x265e54: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x265e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_265e58:
    // 0x265e58: 0xc097308  jal         func_25CC20
    ctx->pc = 0x265E58u;
    SET_GPR_U32(ctx, 31, 0x265E60u);
    ctx->pc = 0x265E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265E58u;
            // 0x265e5c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E60u; }
        if (ctx->pc != 0x265E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E60u; }
        if (ctx->pc != 0x265E60u) { return; }
    }
    ctx->pc = 0x265E60u;
label_265e60:
    // 0x265e60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265e64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x265e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x265e68: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x265E68u;
    {
        const bool branch_taken_0x265e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265E68u;
            // 0x265e6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e68) {
            ctx->pc = 0x26600Cu;
            goto label_26600c;
        }
    }
    ctx->pc = 0x265E70u;
label_265e70:
    // 0x265e70: 0x3c02f0ff  lui         $v0, 0xF0FF
    ctx->pc = 0x265e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61695 << 16));
    // 0x265e74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x265e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x265e78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x265e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x265e7c: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x265E7Cu;
    SET_GPR_U32(ctx, 31, 0x265E84u);
    ctx->pc = 0x265E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265E7Cu;
            // 0x265e80: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E84u; }
        if (ctx->pc != 0x265E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E84u; }
        if (ctx->pc != 0x265E84u) { return; }
    }
    ctx->pc = 0x265E84u;
label_265e84:
    // 0x265e84: 0xc097242  jal         func_25C908
    ctx->pc = 0x265E84u;
    SET_GPR_U32(ctx, 31, 0x265E8Cu);
    ctx->pc = 0x265E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265E84u;
            // 0x265e88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (runtime->hasFunction(0x25C908u)) {
        auto targetFn = runtime->lookupFunction(0x25C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E8Cu; }
        if (ctx->pc != 0x265E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C908_0x25c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E8Cu; }
        if (ctx->pc != 0x265E8Cu) { return; }
    }
    ctx->pc = 0x265E8Cu;
label_265e8c:
    // 0x265e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x265e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e90: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x265E90u;
    {
        const bool branch_taken_0x265e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x265e90) {
            ctx->pc = 0x265E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x265E90u;
            // 0x265e94: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x265EA0u;
            goto label_265ea0;
        }
    }
    ctx->pc = 0x265E98u;
    // 0x265e98: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x265E98u;
    {
        const bool branch_taken_0x265e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265E98u;
            // 0x265e9c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e98) {
            ctx->pc = 0x265FF8u;
            goto label_265ff8;
        }
    }
    ctx->pc = 0x265EA0u;
label_265ea0:
    // 0x265ea0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x265EA0u;
    {
        const bool branch_taken_0x265ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265EA0u;
            // 0x265ea4: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ea0) {
            ctx->pc = 0x265ED0u;
            goto label_265ed0;
        }
    }
    ctx->pc = 0x265EA8u;
    // 0x265ea8: 0xc099642  jal         func_265908
    ctx->pc = 0x265EA8u;
    SET_GPR_U32(ctx, 31, 0x265EB0u);
    ctx->pc = 0x265908u;
    if (runtime->hasFunction(0x265908u)) {
        auto targetFn = runtime->lookupFunction(0x265908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EB0u; }
        if (ctx->pc != 0x265EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265908_0x265908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EB0u; }
        if (ctx->pc != 0x265EB0u) { return; }
    }
    ctx->pc = 0x265EB0u;
label_265eb0:
    // 0x265eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265eb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x265eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265eb8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265EB8u;
    {
        const bool branch_taken_0x265eb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265EB8u;
            // 0x265ebc: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265eb8) {
            ctx->pc = 0x265ED0u;
            goto label_265ed0;
        }
    }
    ctx->pc = 0x265EC0u;
    // 0x265ec0: 0xc097308  jal         func_25CC20
    ctx->pc = 0x265EC0u;
    SET_GPR_U32(ctx, 31, 0x265EC8u);
    ctx->pc = 0x265EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265EC0u;
            // 0x265ec4: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EC8u; }
        if (ctx->pc != 0x265EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EC8u; }
        if (ctx->pc != 0x265EC8u) { return; }
    }
    ctx->pc = 0x265EC8u;
label_265ec8:
    // 0x265ec8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x265EC8u;
    {
        const bool branch_taken_0x265ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265EC8u;
            // 0x265ecc: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ec8) {
            ctx->pc = 0x265FF8u;
            goto label_265ff8;
        }
    }
    ctx->pc = 0x265ED0u;
label_265ed0:
    // 0x265ed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ed4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x265ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x265ed8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x265ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265edc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x265edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_265ee0:
    // 0x265ee0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x265ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x265ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ee8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x265ee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265eec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x265eecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ef0: 0xc0996c0  jal         func_265B00
    ctx->pc = 0x265EF0u;
    SET_GPR_U32(ctx, 31, 0x265EF8u);
    ctx->pc = 0x265EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265EF0u;
            // 0x265ef4: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265B00u;
    if (runtime->hasFunction(0x265B00u)) {
        auto targetFn = runtime->lookupFunction(0x265B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EF8u; }
        if (ctx->pc != 0x265EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265B00_0x265b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EF8u; }
        if (ctx->pc != 0x265EF8u) { return; }
    }
    ctx->pc = 0x265EF8u;
label_265ef8:
    // 0x265ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265efc: 0x1e000006  bgtz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265EFCu;
    {
        const bool branch_taken_0x265efc = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x265F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265EFCu;
            // 0x265f00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265efc) {
            ctx->pc = 0x265F18u;
            goto label_265f18;
        }
    }
    ctx->pc = 0x265F04u;
    // 0x265f04: 0xc097308  jal         func_25CC20
    ctx->pc = 0x265F04u;
    SET_GPR_U32(ctx, 31, 0x265F0Cu);
    ctx->pc = 0x265F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265F04u;
            // 0x265f08: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F0Cu; }
        if (ctx->pc != 0x265F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F0Cu; }
        if (ctx->pc != 0x265F0Cu) { return; }
    }
    ctx->pc = 0x265F0Cu;
label_265f0c:
    // 0x265f0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x265f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265f10: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x265F10u;
    {
        const bool branch_taken_0x265f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265F10u;
            // 0x265f14: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f10) {
            ctx->pc = 0x265FF8u;
            goto label_265ff8;
        }
    }
    ctx->pc = 0x265F18u;
label_265f18:
    // 0x265f18: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x265f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x265f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f20: 0xc0999ba  jal         func_2666E8
    ctx->pc = 0x265F20u;
    SET_GPR_U32(ctx, 31, 0x265F28u);
    ctx->pc = 0x265F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265F20u;
            // 0x265f24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2666E8u;
    if (runtime->hasFunction(0x2666E8u)) {
        auto targetFn = runtime->lookupFunction(0x2666E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F28u; }
        if (ctx->pc != 0x265F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002666E8_0x2666e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F28u; }
        if (ctx->pc != 0x265F28u) { return; }
    }
    ctx->pc = 0x265F28u;
label_265f28:
    // 0x265f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f2c: 0x6030011  bgezl       $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x265F2Cu;
    {
        const bool branch_taken_0x265f2c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x265f2c) {
            ctx->pc = 0x265F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x265F2Cu;
            // 0x265f30: 0x92420003  lbu         $v0, 0x3($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x265F74u;
            goto label_265f74;
        }
    }
    ctx->pc = 0x265F34u;
    // 0x265f34: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x265F34u;
    SET_GPR_U32(ctx, 31, 0x265F3Cu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F3Cu; }
        if (ctx->pc != 0x265F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F3Cu; }
        if (ctx->pc != 0x265F3Cu) { return; }
    }
    ctx->pc = 0x265F3Cu;
label_265f3c:
    // 0x265f3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x265f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265f40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x265f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x265f44: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265F44u;
    {
        const bool branch_taken_0x265f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x265f44) {
            ctx->pc = 0x265F60u;
            goto label_265f60;
        }
    }
    ctx->pc = 0x265F4Cu;
    // 0x265f4c: 0xc097308  jal         func_25CC20
    ctx->pc = 0x265F4Cu;
    SET_GPR_U32(ctx, 31, 0x265F54u);
    ctx->pc = 0x265F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265F4Cu;
            // 0x265f50: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F54u; }
        if (ctx->pc != 0x265F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F54u; }
        if (ctx->pc != 0x265F54u) { return; }
    }
    ctx->pc = 0x265F54u;
label_265f54:
    // 0x265f54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265f58: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x265F58u;
    {
        const bool branch_taken_0x265f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265F58u;
            // 0x265f5c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f58) {
            ctx->pc = 0x265FF8u;
            goto label_265ff8;
        }
    }
    ctx->pc = 0x265F60u;
label_265f60:
    // 0x265f60: 0xc097308  jal         func_25CC20
    ctx->pc = 0x265F60u;
    SET_GPR_U32(ctx, 31, 0x265F68u);
    ctx->pc = 0x265F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265F60u;
            // 0x265f64: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F68u; }
        if (ctx->pc != 0x265F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F68u; }
        if (ctx->pc != 0x265F68u) { return; }
    }
    ctx->pc = 0x265F68u;
label_265f68:
    // 0x265f68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x265f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265f6c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x265F6Cu;
    {
        const bool branch_taken_0x265f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265F6Cu;
            // 0x265f70: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f6c) {
            ctx->pc = 0x265FF8u;
            goto label_265ff8;
        }
    }
    ctx->pc = 0x265F74u;
label_265f74:
    // 0x265f74: 0x3051000f  andi        $s1, $v0, 0xF
    ctx->pc = 0x265f74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x265f78: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265F78u;
    {
        const bool branch_taken_0x265f78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x265F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265F78u;
            // 0x265f7c: 0x2e220006  sltiu       $v0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f78) {
            ctx->pc = 0x265F94u;
            goto label_265f94;
        }
    }
    ctx->pc = 0x265F80u;
    // 0x265f80: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x265F80u;
    SET_GPR_U32(ctx, 31, 0x265F88u);
    ctx->pc = 0x265F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265F80u;
            // 0x265f84: 0x96440006  lhu         $a0, 0x6($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F88u; }
        if (ctx->pc != 0x265F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F88u; }
        if (ctx->pc != 0x265F88u) { return; }
    }
    ctx->pc = 0x265F88u;
label_265f88:
    // 0x265f88: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x265F88u;
    {
        const bool branch_taken_0x265f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265f88) {
            ctx->pc = 0x265F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x265F88u;
            // 0x265f8c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x265FF8u;
            goto label_265ff8;
        }
    }
    ctx->pc = 0x265F90u;
    // 0x265f90: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x265f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_265f94:
    // 0x265f94: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x265F94u;
    {
        const bool branch_taken_0x265f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265F94u;
            // 0x265f98: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f94) {
            ctx->pc = 0x265FE4u;
            goto label_265fe4;
        }
    }
    ctx->pc = 0x265F9Cu;
    // 0x265f9c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x265f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x265fa0: 0x244277f0  addiu       $v0, $v0, 0x77F0
    ctx->pc = 0x265fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30704));
    // 0x265fa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x265fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265fa8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x265fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265fac: 0x800008  jr          $a0
    ctx->pc = 0x265FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265FB4u: goto label_265fb4;
            case 0x265FC4u: goto label_265fc4;
            case 0x265FD4u: goto label_265fd4;
            case 0x265FE4u: goto label_265fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x265FB4u;
label_265fb4:
    // 0x265fb4: 0xc097308  jal         func_25CC20
    ctx->pc = 0x265FB4u;
    SET_GPR_U32(ctx, 31, 0x265FBCu);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FBCu; }
        if (ctx->pc != 0x265FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FBCu; }
        if (ctx->pc != 0x265FBCu) { return; }
    }
    ctx->pc = 0x265FBCu;
label_265fbc:
    // 0x265fbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x265FBCu;
    {
        const bool branch_taken_0x265fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265FBCu;
            // 0x265fc0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265fbc) {
            ctx->pc = 0x265FF0u;
            goto label_265ff0;
        }
    }
    ctx->pc = 0x265FC4u;
label_265fc4:
    // 0x265fc4: 0xc097308  jal         func_25CC20
    ctx->pc = 0x265FC4u;
    SET_GPR_U32(ctx, 31, 0x265FCCu);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FCCu; }
        if (ctx->pc != 0x265FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FCCu; }
        if (ctx->pc != 0x265FCCu) { return; }
    }
    ctx->pc = 0x265FCCu;
label_265fcc:
    // 0x265fcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x265FCCu;
    {
        const bool branch_taken_0x265fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265FCCu;
            // 0x265fd0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265fcc) {
            ctx->pc = 0x265FF0u;
            goto label_265ff0;
        }
    }
    ctx->pc = 0x265FD4u;
label_265fd4:
    // 0x265fd4: 0xc097308  jal         func_25CC20
    ctx->pc = 0x265FD4u;
    SET_GPR_U32(ctx, 31, 0x265FDCu);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FDCu; }
        if (ctx->pc != 0x265FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FDCu; }
        if (ctx->pc != 0x265FDCu) { return; }
    }
    ctx->pc = 0x265FDCu;
label_265fdc:
    // 0x265fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x265FDCu;
    {
        const bool branch_taken_0x265fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265FDCu;
            // 0x265fe0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265fdc) {
            ctx->pc = 0x265FF0u;
            goto label_265ff0;
        }
    }
    ctx->pc = 0x265FE4u;
label_265fe4:
    // 0x265fe4: 0xc097308  jal         func_25CC20
    ctx->pc = 0x265FE4u;
    SET_GPR_U32(ctx, 31, 0x265FECu);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FECu; }
        if (ctx->pc != 0x265FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265FECu; }
        if (ctx->pc != 0x265FECu) { return; }
    }
    ctx->pc = 0x265FECu;
label_265fec:
    // 0x265fec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x265fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_265ff0:
    // 0x265ff0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x265ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x265ff4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x265ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_265ff8:
    // 0x265ff8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x265FF8u;
    {
        const bool branch_taken_0x265ff8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x265FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265FF8u;
            // 0x265ffc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ff8) {
            ctx->pc = 0x26600Cu;
            goto label_26600c;
        }
    }
    ctx->pc = 0x266000u;
    // 0x266000: 0xc098560  jal         func_261580
    ctx->pc = 0x266000u;
    SET_GPR_U32(ctx, 31, 0x266008u);
    ctx->pc = 0x266004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266000u;
            // 0x266004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266008u; }
        if (ctx->pc != 0x266008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266008u; }
        if (ctx->pc != 0x266008u) { return; }
    }
    ctx->pc = 0x266008u;
label_266008:
    // 0x266008: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x266008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26600c:
    // 0x26600c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26600cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x266010: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x266010u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x266014: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x266014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266018: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x266018u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26601c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x26601cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266020: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x266020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266024: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x266024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266028: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x266028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26602c: 0x3e00008  jr          $ra
    ctx->pc = 0x26602Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26602Cu;
            // 0x266030: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266034u;
    // 0x266034: 0x0  nop
    ctx->pc = 0x266034u;
    // NOP
    ctx->pc = 0x266038u;
}
