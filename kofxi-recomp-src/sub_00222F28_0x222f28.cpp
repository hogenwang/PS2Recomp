#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222F28
// Address: 0x222f28 - 0x223150
void sub_00222F28_0x222f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222F28_0x222f28");
#endif

    switch (ctx->pc) {
        case 0x222f40u: goto label_222f40;
        case 0x222f48u: goto label_222f48;
        case 0x222f58u: goto label_222f58;
        case 0x222f68u: goto label_222f68;
        case 0x222f94u: goto label_222f94;
        case 0x222fa0u: goto label_222fa0;
        case 0x222fc8u: goto label_222fc8;
        case 0x222fd0u: goto label_222fd0;
        case 0x222fe4u: goto label_222fe4;
        case 0x222ff4u: goto label_222ff4;
        case 0x223000u: goto label_223000;
        case 0x22302cu: goto label_22302c;
        case 0x223034u: goto label_223034;
        case 0x223044u: goto label_223044;
        case 0x223054u: goto label_223054;
        case 0x223064u: goto label_223064;
        case 0x223098u: goto label_223098;
        case 0x2230a0u: goto label_2230a0;
        case 0x2230b0u: goto label_2230b0;
        case 0x2230c0u: goto label_2230c0;
        case 0x2230f0u: goto label_2230f0;
        case 0x223104u: goto label_223104;
        case 0x223110u: goto label_223110;
        case 0x223138u: goto label_223138;
        case 0x223148u: goto label_223148;
        default: break;
    }

    ctx->pc = 0x222f28u;

    // 0x222f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222f30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x222f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222f38: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222F38u;
    SET_GPR_U32(ctx, 31, 0x222F40u);
    ctx->pc = 0x222F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F38u;
            // 0x222f3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F40u; }
        if (ctx->pc != 0x222F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F40u; }
        if (ctx->pc != 0x222F40u) { return; }
    }
    ctx->pc = 0x222F40u;
label_222f40:
    // 0x222f40: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x222F40u;
    SET_GPR_U32(ctx, 31, 0x222F48u);
    ctx->pc = 0x222F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F40u;
            // 0x222f44: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (runtime->hasFunction(0x21FE80u)) {
        auto targetFn = runtime->lookupFunction(0x21FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F48u; }
        if (ctx->pc != 0x222F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE80_0x21fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F48u; }
        if (ctx->pc != 0x222F48u) { return; }
    }
    ctx->pc = 0x222F48u;
label_222f48:
    // 0x222f48: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x222f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x222f4c: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x222f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x222f50: 0xc0974ee  jal         func_25D3B8
    ctx->pc = 0x222F50u;
    SET_GPR_U32(ctx, 31, 0x222F58u);
    ctx->pc = 0x222F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F50u;
            // 0x222f54: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D3B8u;
    if (runtime->hasFunction(0x25D3B8u)) {
        auto targetFn = runtime->lookupFunction(0x25D3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F58u; }
        if (ctx->pc != 0x222F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D3B8_0x25d3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F58u; }
        if (ctx->pc != 0x222F58u) { return; }
    }
    ctx->pc = 0x222F58u;
label_222f58:
    // 0x222f58: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x222F58u;
    {
        const bool branch_taken_0x222f58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x222f58) {
            ctx->pc = 0x222FC8u;
            goto label_222fc8;
        }
    }
    ctx->pc = 0x222F60u;
    // 0x222f60: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222F60u;
    SET_GPR_U32(ctx, 31, 0x222F68u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F68u; }
        if (ctx->pc != 0x222F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F68u; }
        if (ctx->pc != 0x222F68u) { return; }
    }
    ctx->pc = 0x222F68u;
label_222f68:
    // 0x222f68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x222f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222f6c: 0x2a0f0079  slti        $t7, $s0, 0x79
    ctx->pc = 0x222f6cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x222f70: 0x11e0005f  beqz        $t7, . + 4 + (0x5F << 2)
    ctx->pc = 0x222F70u;
    {
        const bool branch_taken_0x222f70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F70u;
            // 0x222f74: 0x2a0f0077  slti        $t7, $s0, 0x77 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)119) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f70) {
            ctx->pc = 0x2230F0u;
            goto label_2230f0;
        }
    }
    ctx->pc = 0x222F78u;
    // 0x222f78: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x222F78u;
    {
        const bool branch_taken_0x222f78 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F78u;
            // 0x222f7c: 0x240f0016  addiu       $t7, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f78) {
            ctx->pc = 0x222FC8u;
            goto label_222fc8;
        }
    }
    ctx->pc = 0x222F80u;
    // 0x222f80: 0x120f0026  beq         $s0, $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x222F80u;
    {
        const bool branch_taken_0x222f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x222F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F80u;
            // 0x222f84: 0x240f0074  addiu       $t7, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f80) {
            ctx->pc = 0x22301Cu;
            goto label_22301c;
        }
    }
    ctx->pc = 0x222F88u;
    // 0x222f88: 0x520f0016  beql        $s0, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x222F88u;
    {
        const bool branch_taken_0x222f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x222f88) {
            ctx->pc = 0x222F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222F88u;
            // 0x222f8c: 0x8e2f104c  lw          $t7, 0x104C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222FE4u;
            goto label_222fe4;
        }
    }
    ctx->pc = 0x222F90u;
    // 0x222f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_222f94:
    // 0x222f94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222f98: 0xc089144  jal         func_224510
    ctx->pc = 0x222F98u;
    SET_GPR_U32(ctx, 31, 0x222FA0u);
    ctx->pc = 0x222F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F98u;
            // 0x222f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FA0u; }
        if (ctx->pc != 0x222FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FA0u; }
        if (ctx->pc != 0x222FA0u) { return; }
    }
    ctx->pc = 0x222FA0u;
label_222fa0:
    // 0x222fa0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222fa4: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x222fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x222fa8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222fac: 0x24843078  addiu       $a0, $a0, 0x3078
    ctx->pc = 0x222facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12408));
    // 0x222fb0: 0x25083088  addiu       $t0, $t0, 0x3088
    ctx->pc = 0x222fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12424));
    // 0x222fb4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x222fb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fb8: 0x2405017c  addiu       $a1, $zero, 0x17C
    ctx->pc = 0x222fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x222fbc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x222fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222fc0: 0xc089794  jal         func_225E50
    ctx->pc = 0x222FC0u;
    SET_GPR_U32(ctx, 31, 0x222FC8u);
    ctx->pc = 0x222FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222FC0u;
            // 0x222fc4: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FC8u; }
        if (ctx->pc != 0x222FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FC8u; }
        if (ctx->pc != 0x222FC8u) { return; }
    }
    ctx->pc = 0x222FC8u;
label_222fc8:
    // 0x222fc8: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x222FC8u;
    SET_GPR_U32(ctx, 31, 0x222FD0u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FD0u; }
        if (ctx->pc != 0x222FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FD0u; }
        if (ctx->pc != 0x222FD0u) { return; }
    }
    ctx->pc = 0x222FD0u;
label_222fd0:
    // 0x222fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222fd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222fd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x222FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222FDCu;
            // 0x222fe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222FE4u;
label_222fe4:
    // 0x222fe4: 0x55e00008  bnel        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x222FE4u;
    {
        const bool branch_taken_0x222fe4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x222fe4) {
            ctx->pc = 0x222FE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222FE4u;
            // 0x222fe8: 0x8e2f1048  lw          $t7, 0x1048($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223008u;
            goto label_223008;
        }
    }
    ctx->pc = 0x222FECu;
    // 0x222fec: 0xae201048  sw          $zero, 0x1048($s1)
    ctx->pc = 0x222fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
    // 0x222ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_222ff4:
    // 0x222ff4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x222ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222ff8: 0xc089144  jal         func_224510
    ctx->pc = 0x222FF8u;
    SET_GPR_U32(ctx, 31, 0x223000u);
    ctx->pc = 0x222FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222FF8u;
            // 0x222ffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223000u; }
        if (ctx->pc != 0x223000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223000u; }
        if (ctx->pc != 0x223000u) { return; }
    }
    ctx->pc = 0x223000u;
label_223000:
    // 0x223000: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x223000u;
    {
        const bool branch_taken_0x223000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223000) {
            ctx->pc = 0x222FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222fc8;
        }
    }
    ctx->pc = 0x223008u;
label_223008:
    // 0x223008: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x223008u;
    {
        const bool branch_taken_0x223008 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x22300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223008u;
            // 0x22300c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223008) {
            ctx->pc = 0x222FF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222ff4;
        }
    }
    ctx->pc = 0x223010u;
    // 0x223010: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x223010u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223014: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x223014u;
    {
        const bool branch_taken_0x223014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223014u;
            // 0x223018: 0xae2f1048  sw          $t7, 0x1048($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223014) {
            ctx->pc = 0x222FF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222ff4;
        }
    }
    ctx->pc = 0x22301Cu;
label_22301c:
    // 0x22301c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x223020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223024: 0xc089144  jal         func_224510
    ctx->pc = 0x223024u;
    SET_GPR_U32(ctx, 31, 0x22302Cu);
    ctx->pc = 0x223028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223024u;
            // 0x223028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22302Cu; }
        if (ctx->pc != 0x22302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22302Cu; }
        if (ctx->pc != 0x22302Cu) { return; }
    }
    ctx->pc = 0x22302Cu;
label_22302c:
    // 0x22302c: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x22302Cu;
    SET_GPR_U32(ctx, 31, 0x223034u);
    ctx->pc = 0x223030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22302Cu;
            // 0x223030: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223034u; }
        if (ctx->pc != 0x223034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223034u; }
        if (ctx->pc != 0x223034u) { return; }
    }
    ctx->pc = 0x223034u;
label_223034:
    // 0x223034: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x223034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x223038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22303c: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x22303Cu;
    SET_GPR_U32(ctx, 31, 0x223044u);
    ctx->pc = 0x223040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22303Cu;
            // 0x223040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223044u; }
        if (ctx->pc != 0x223044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223044u; }
        if (ctx->pc != 0x223044u) { return; }
    }
    ctx->pc = 0x223044u;
label_223044:
    // 0x223044: 0x4410014  bgez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x223044u;
    {
        const bool branch_taken_0x223044 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x223048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223044u;
            // 0x223048: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223044) {
            ctx->pc = 0x223098u;
            goto label_223098;
        }
    }
    ctx->pc = 0x22304Cu;
    // 0x22304c: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x22304Cu;
    SET_GPR_U32(ctx, 31, 0x223054u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223054u; }
        if (ctx->pc != 0x223054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223054u; }
        if (ctx->pc != 0x223054u) { return; }
    }
    ctx->pc = 0x223054u;
label_223054:
    // 0x223054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223058: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x223058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22305c: 0xc089144  jal         func_224510
    ctx->pc = 0x22305Cu;
    SET_GPR_U32(ctx, 31, 0x223064u);
    ctx->pc = 0x223060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22305Cu;
            // 0x223060: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223064u; }
        if (ctx->pc != 0x223064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223064u; }
        if (ctx->pc != 0x223064u) { return; }
    }
    ctx->pc = 0x223064u;
label_223064:
    // 0x223064: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x223064u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x223068: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22306c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x22306cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x223070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223078: 0x24843078  addiu       $a0, $a0, 0x3078
    ctx->pc = 0x223078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12408));
    // 0x22307c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22307cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223080: 0x250830a0  addiu       $t0, $t0, 0x30A0
    ctx->pc = 0x223080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12448));
    // 0x223084: 0x24050164  addiu       $a1, $zero, 0x164
    ctx->pc = 0x223084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x223088: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x223088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22308c: 0x2407d8e6  addiu       $a3, $zero, -0x271A
    ctx->pc = 0x22308cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    // 0x223090: 0x8089794  j           func_225E50
    ctx->pc = 0x223090u;
    ctx->pc = 0x223094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223090u;
            // 0x223094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x223098u;
label_223098:
    // 0x223098: 0xc088a5c  jal         func_222970
    ctx->pc = 0x223098u;
    SET_GPR_U32(ctx, 31, 0x2230A0u);
    ctx->pc = 0x22309Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223098u;
            // 0x22309c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222970u;
    if (runtime->hasFunction(0x222970u)) {
        auto targetFn = runtime->lookupFunction(0x222970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230A0u; }
        if (ctx->pc != 0x2230A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222970_0x222970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230A0u; }
        if (ctx->pc != 0x2230A0u) { return; }
    }
    ctx->pc = 0x2230A0u;
label_2230a0:
    // 0x2230a0: 0x441ffc9  bgez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2230A0u;
    {
        const bool branch_taken_0x2230a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2230A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2230A0u;
            // 0x2230a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230a0) {
            ctx->pc = 0x222FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222fc8;
        }
    }
    ctx->pc = 0x2230A8u;
    // 0x2230a8: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2230A8u;
    SET_GPR_U32(ctx, 31, 0x2230B0u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230B0u; }
        if (ctx->pc != 0x2230B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230B0u; }
        if (ctx->pc != 0x2230B0u) { return; }
    }
    ctx->pc = 0x2230B0u;
label_2230b0:
    // 0x2230b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2230b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2230b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2230b8: 0xc089144  jal         func_224510
    ctx->pc = 0x2230B8u;
    SET_GPR_U32(ctx, 31, 0x2230C0u);
    ctx->pc = 0x2230BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2230B8u;
            // 0x2230bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230C0u; }
        if (ctx->pc != 0x2230C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230C0u; }
        if (ctx->pc != 0x2230C0u) { return; }
    }
    ctx->pc = 0x2230C0u;
label_2230c0:
    // 0x2230c0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2230c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2230c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2230c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2230c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2230cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2230ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2230d0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2230d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2230d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2230d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2230d8: 0x24843078  addiu       $a0, $a0, 0x3078
    ctx->pc = 0x2230d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12408));
    // 0x2230dc: 0x24e730b8  addiu       $a3, $a3, 0x30B8
    ctx->pc = 0x2230dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12472));
    // 0x2230e0: 0x2405016e  addiu       $a1, $zero, 0x16E
    ctx->pc = 0x2230e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
    // 0x2230e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2230e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2230e8: 0x80897d6  j           func_225F58
    ctx->pc = 0x2230E8u;
    ctx->pc = 0x2230ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2230E8u;
            // 0x2230ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225F58_0x225f58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2230F0u;
label_2230f0:
    // 0x2230f0: 0x240f007f  addiu       $t7, $zero, 0x7F
    ctx->pc = 0x2230f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2230f4: 0x560fffa7  bnel        $s0, $t7, . + 4 + (-0x59 << 2)
    ctx->pc = 0x2230F4u;
    {
        const bool branch_taken_0x2230f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x2230f4) {
            ctx->pc = 0x2230F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2230F4u;
            // 0x2230f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222F94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222f94;
        }
    }
    ctx->pc = 0x2230FCu;
    // 0x2230fc: 0xc0990d8  jal         func_264360
    ctx->pc = 0x2230FCu;
    SET_GPR_U32(ctx, 31, 0x223104u);
    ctx->pc = 0x223100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2230FCu;
            // 0x223100: 0x9e240018  lwu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223104u; }
        if (ctx->pc != 0x223104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223104u; }
        if (ctx->pc != 0x223104u) { return; }
    }
    ctx->pc = 0x223104u;
label_223104:
    // 0x223104: 0x96240016  lhu         $a0, 0x16($s1)
    ctx->pc = 0x223104u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x223108: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x223108u;
    SET_GPR_U32(ctx, 31, 0x223110u);
    ctx->pc = 0x22310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223108u;
            // 0x22310c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223110u; }
        if (ctx->pc != 0x223110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223110u; }
        if (ctx->pc != 0x223110u) { return; }
    }
    ctx->pc = 0x223110u;
label_223110:
    // 0x223110: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x223110u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x223114: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x223114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x223118: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22311c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x22311cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223120: 0x24e730d0  addiu       $a3, $a3, 0x30D0
    ctx->pc = 0x223120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12496));
    // 0x223124: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x223124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223128: 0x24843078  addiu       $a0, $a0, 0x3078
    ctx->pc = 0x223128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12408));
    // 0x22312c: 0x24050175  addiu       $a1, $zero, 0x175
    ctx->pc = 0x22312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 373));
    // 0x223130: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x223130u;
    SET_GPR_U32(ctx, 31, 0x223138u);
    ctx->pc = 0x223134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223130u;
            // 0x223134: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223138u; }
        if (ctx->pc != 0x223138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223138u; }
        if (ctx->pc != 0x223138u) { return; }
    }
    ctx->pc = 0x223138u;
label_223138:
    // 0x223138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22313c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22313cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223140: 0xc089144  jal         func_224510
    ctx->pc = 0x223140u;
    SET_GPR_U32(ctx, 31, 0x223148u);
    ctx->pc = 0x223144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223140u;
            // 0x223144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223148u; }
        if (ctx->pc != 0x223148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223148u; }
        if (ctx->pc != 0x223148u) { return; }
    }
    ctx->pc = 0x223148u;
label_223148:
    // 0x223148: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
    ctx->pc = 0x223148u;
    {
        const bool branch_taken_0x223148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223148u;
            // 0x22314c: 0xae201048  sw          $zero, 0x1048($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223148) {
            ctx->pc = 0x222FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222fc8;
        }
    }
    ctx->pc = 0x223150u;
    ctx->pc = 0x223150u;
}
