#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223EF8
// Address: 0x223ef8 - 0x224050
void sub_00223EF8_0x223ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223EF8_0x223ef8");
#endif

    switch (ctx->pc) {
        case 0x223ef8u: goto label_223ef8;
        case 0x223efcu: goto label_223efc;
        case 0x223f00u: goto label_223f00;
        case 0x223f04u: goto label_223f04;
        case 0x223f08u: goto label_223f08;
        case 0x223f0cu: goto label_223f0c;
        case 0x223f10u: goto label_223f10;
        case 0x223f14u: goto label_223f14;
        case 0x223f18u: goto label_223f18;
        case 0x223f1cu: goto label_223f1c;
        case 0x223f20u: goto label_223f20;
        case 0x223f24u: goto label_223f24;
        case 0x223f28u: goto label_223f28;
        case 0x223f2cu: goto label_223f2c;
        case 0x223f30u: goto label_223f30;
        case 0x223f34u: goto label_223f34;
        case 0x223f38u: goto label_223f38;
        case 0x223f3cu: goto label_223f3c;
        case 0x223f40u: goto label_223f40;
        case 0x223f44u: goto label_223f44;
        case 0x223f48u: goto label_223f48;
        case 0x223f4cu: goto label_223f4c;
        case 0x223f50u: goto label_223f50;
        case 0x223f54u: goto label_223f54;
        case 0x223f58u: goto label_223f58;
        case 0x223f5cu: goto label_223f5c;
        case 0x223f60u: goto label_223f60;
        case 0x223f64u: goto label_223f64;
        case 0x223f68u: goto label_223f68;
        case 0x223f6cu: goto label_223f6c;
        case 0x223f70u: goto label_223f70;
        case 0x223f74u: goto label_223f74;
        case 0x223f78u: goto label_223f78;
        case 0x223f7cu: goto label_223f7c;
        case 0x223f80u: goto label_223f80;
        case 0x223f84u: goto label_223f84;
        case 0x223f88u: goto label_223f88;
        case 0x223f8cu: goto label_223f8c;
        case 0x223f90u: goto label_223f90;
        case 0x223f94u: goto label_223f94;
        case 0x223f98u: goto label_223f98;
        case 0x223f9cu: goto label_223f9c;
        case 0x223fa0u: goto label_223fa0;
        case 0x223fa4u: goto label_223fa4;
        case 0x223fa8u: goto label_223fa8;
        case 0x223facu: goto label_223fac;
        case 0x223fb0u: goto label_223fb0;
        case 0x223fb4u: goto label_223fb4;
        case 0x223fb8u: goto label_223fb8;
        case 0x223fbcu: goto label_223fbc;
        case 0x223fc0u: goto label_223fc0;
        case 0x223fc4u: goto label_223fc4;
        case 0x223fc8u: goto label_223fc8;
        case 0x223fccu: goto label_223fcc;
        case 0x223fd0u: goto label_223fd0;
        case 0x223fd4u: goto label_223fd4;
        case 0x223fd8u: goto label_223fd8;
        case 0x223fdcu: goto label_223fdc;
        case 0x223fe0u: goto label_223fe0;
        case 0x223fe4u: goto label_223fe4;
        case 0x223fe8u: goto label_223fe8;
        case 0x223fecu: goto label_223fec;
        case 0x223ff0u: goto label_223ff0;
        case 0x223ff4u: goto label_223ff4;
        case 0x223ff8u: goto label_223ff8;
        case 0x223ffcu: goto label_223ffc;
        case 0x224000u: goto label_224000;
        case 0x224004u: goto label_224004;
        case 0x224008u: goto label_224008;
        case 0x22400cu: goto label_22400c;
        case 0x224010u: goto label_224010;
        case 0x224014u: goto label_224014;
        case 0x224018u: goto label_224018;
        case 0x22401cu: goto label_22401c;
        case 0x224020u: goto label_224020;
        case 0x224024u: goto label_224024;
        case 0x224028u: goto label_224028;
        case 0x22402cu: goto label_22402c;
        case 0x224030u: goto label_224030;
        case 0x224034u: goto label_224034;
        case 0x224038u: goto label_224038;
        case 0x22403cu: goto label_22403c;
        case 0x224040u: goto label_224040;
        case 0x224044u: goto label_224044;
        case 0x224048u: goto label_224048;
        case 0x22404cu: goto label_22404c;
        default: break;
    }

    ctx->pc = 0x223ef8u;

label_223ef8:
    // 0x223ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_223efc:
    // 0x223efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_223f00:
    // 0x223f00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x223f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_223f04:
    // 0x223f04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x223f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_223f08:
    // 0x223f08: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x223f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_223f0c:
    // 0x223f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_223f10:
    // 0x223f10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x223f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_223f14:
    // 0x223f14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x223f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_223f18:
    // 0x223f18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x223f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_223f1c:
    // 0x223f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223f20:
    // 0x223f20: 0x2407d8f0  addiu       $a3, $zero, -0x2710
    ctx->pc = 0x223f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_223f24:
    // 0x223f24: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x223f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_223f28:
    // 0x223f28: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_223f2c:
    if (ctx->pc == 0x223F2Cu) {
        ctx->pc = 0x223F2Cu;
            // 0x223f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223F30u;
        goto label_223f30;
    }
    ctx->pc = 0x223F28u;
    {
        const bool branch_taken_0x223f28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x223F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223F28u;
            // 0x223f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f28) {
            ctx->pc = 0x223F5Cu;
            goto label_223f5c;
        }
    }
    ctx->pc = 0x223F30u;
label_223f30:
    // 0x223f30: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_223f34:
    // 0x223f34: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223f34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_223f38:
    // 0x223f38: 0x24843410  addiu       $a0, $a0, 0x3410
    ctx->pc = 0x223f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13328));
label_223f3c:
    // 0x223f3c: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x223f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
label_223f40:
    // 0x223f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223f44:
    // 0x223f44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_223f48:
    // 0x223f48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_223f4c:
    // 0x223f4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x223f4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_223f50:
    // 0x223f50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_223f54:
    // 0x223f54: 0x8089794  j           func_225E50
label_223f58:
    if (ctx->pc == 0x223F58u) {
        ctx->pc = 0x223F58u;
            // 0x223f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x223F5Cu;
        goto label_223f5c;
    }
    ctx->pc = 0x223F54u;
    ctx->pc = 0x223F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223F54u;
            // 0x223f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x223F5Cu;
label_223f5c:
    // 0x223f5c: 0xc088696  jal         func_221A58
label_223f60:
    if (ctx->pc == 0x223F60u) {
        ctx->pc = 0x223F60u;
            // 0x223f60: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x223F64u;
        goto label_223f64;
    }
    ctx->pc = 0x223F5Cu;
    SET_GPR_U32(ctx, 31, 0x223F64u);
    ctx->pc = 0x223F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223F5Cu;
            // 0x223f60: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F64u; }
        if (ctx->pc != 0x223F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F64u; }
        if (ctx->pc != 0x223F64u) { return; }
    }
    ctx->pc = 0x223F64u;
label_223f64:
    // 0x223f64: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_223f68:
    // 0x223f68: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223f68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_223f6c:
    // 0x223f6c: 0x24843410  addiu       $a0, $a0, 0x3410
    ctx->pc = 0x223f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13328));
label_223f70:
    // 0x223f70: 0x250833d8  addiu       $t0, $t0, 0x33D8
    ctx->pc = 0x223f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13272));
label_223f74:
    // 0x223f74: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x223f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_223f78:
    // 0x223f78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223f7c:
    // 0x223f7c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x223f7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_223f80:
    // 0x223f80: 0x144fffef  bne         $v0, $t7, . + 4 + (-0x11 << 2)
label_223f84:
    if (ctx->pc == 0x223F84u) {
        ctx->pc = 0x223F84u;
            // 0x223f84: 0x2407d8f0  addiu       $a3, $zero, -0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
        ctx->pc = 0x223F88u;
        goto label_223f88;
    }
    ctx->pc = 0x223F80u;
    {
        const bool branch_taken_0x223f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x223F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223F80u;
            // 0x223f84: 0x2407d8f0  addiu       $a3, $zero, -0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f80) {
            ctx->pc = 0x223F40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223f40;
        }
    }
    ctx->pc = 0x223F88u;
label_223f88:
    // 0x223f88: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x223f88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_223f8c:
    // 0x223f8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x223f8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223f90:
    // 0x223f90: 0x11cf0008  beq         $t6, $t7, . + 4 + (0x8 << 2)
label_223f94:
    if (ctx->pc == 0x223F94u) {
        ctx->pc = 0x223F94u;
            // 0x223f94: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x223F98u;
        goto label_223f98;
    }
    ctx->pc = 0x223F90u;
    {
        const bool branch_taken_0x223f90 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x223F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223F90u;
            // 0x223f94: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f90) {
            ctx->pc = 0x223FB4u;
            goto label_223fb4;
        }
    }
    ctx->pc = 0x223F98u;
label_223f98:
    // 0x223f98: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223f98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_223f9c:
    // 0x223f9c: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x223f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_223fa0:
    // 0x223fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223fa4:
    // 0x223fa4: 0x2407d8f0  addiu       $a3, $zero, -0x2710
    ctx->pc = 0x223fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_223fa8:
    // 0x223fa8: 0x24843410  addiu       $a0, $a0, 0x3410
    ctx->pc = 0x223fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13328));
label_223fac:
    // 0x223fac: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_223fb0:
    if (ctx->pc == 0x223FB0u) {
        ctx->pc = 0x223FB0u;
            // 0x223fb0: 0x250833f0  addiu       $t0, $t0, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13296));
        ctx->pc = 0x223FB4u;
        goto label_223fb4;
    }
    ctx->pc = 0x223FACu;
    {
        const bool branch_taken_0x223fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223FACu;
            // 0x223fb0: 0x250833f0  addiu       $t0, $t0, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fac) {
            ctx->pc = 0x223F40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223f40;
        }
    }
    ctx->pc = 0x223FB4u;
label_223fb4:
    // 0x223fb4: 0x8e0f1064  lw          $t7, 0x1064($s0)
    ctx->pc = 0x223fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4196)));
label_223fb8:
    // 0x223fb8: 0x55e00009  bnel        $t7, $zero, . + 4 + (0x9 << 2)
label_223fbc:
    if (ctx->pc == 0x223FBCu) {
        ctx->pc = 0x223FBCu;
            // 0x223fbc: 0xae001044  sw          $zero, 0x1044($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4164), GPR_U32(ctx, 0));
        ctx->pc = 0x223FC0u;
        goto label_223fc0;
    }
    ctx->pc = 0x223FB8u;
    {
        const bool branch_taken_0x223fb8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x223fb8) {
            ctx->pc = 0x223FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223FB8u;
            // 0x223fbc: 0xae001044  sw          $zero, 0x1044($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223FE0u;
            goto label_223fe0;
        }
    }
    ctx->pc = 0x223FC0u;
label_223fc0:
    // 0x223fc0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_223fc4:
    // 0x223fc4: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_223fc8:
    // 0x223fc8: 0x2405007a  addiu       $a1, $zero, 0x7A
    ctx->pc = 0x223fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_223fcc:
    // 0x223fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223fd0:
    // 0x223fd0: 0x2407d8f0  addiu       $a3, $zero, -0x2710
    ctx->pc = 0x223fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_223fd4:
    // 0x223fd4: 0x24843410  addiu       $a0, $a0, 0x3410
    ctx->pc = 0x223fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13328));
label_223fd8:
    // 0x223fd8: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_223fdc:
    if (ctx->pc == 0x223FDCu) {
        ctx->pc = 0x223FDCu;
            // 0x223fdc: 0x25083378  addiu       $t0, $t0, 0x3378 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13176));
        ctx->pc = 0x223FE0u;
        goto label_223fe0;
    }
    ctx->pc = 0x223FD8u;
    {
        const bool branch_taken_0x223fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223FD8u;
            // 0x223fdc: 0x25083378  addiu       $t0, $t0, 0x3378 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fd8) {
            ctx->pc = 0x223F40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223f40;
        }
    }
    ctx->pc = 0x223FE0u;
label_223fe0:
    // 0x223fe0: 0x2604083c  addiu       $a0, $s0, 0x83C
    ctx->pc = 0x223fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2108));
label_223fe4:
    // 0x223fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223fe8:
    // 0x223fe8: 0xc049cb6  jal         func_1272D8
label_223fec:
    if (ctx->pc == 0x223FECu) {
        ctx->pc = 0x223FECu;
            // 0x223fec: 0x24060801  addiu       $a2, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->pc = 0x223FF0u;
        goto label_223ff0;
    }
    ctx->pc = 0x223FE8u;
    SET_GPR_U32(ctx, 31, 0x223FF0u);
    ctx->pc = 0x223FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223FE8u;
            // 0x223fec: 0x24060801  addiu       $a2, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223FF0u; }
        if (ctx->pc != 0x223FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223FF0u; }
        if (ctx->pc != 0x223FF0u) { return; }
    }
    ctx->pc = 0x223FF0u;
label_223ff0:
    // 0x223ff0: 0xae000838  sw          $zero, 0x838($s0)
    ctx->pc = 0x223ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 0));
label_223ff4:
    // 0x223ff4: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x223ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_223ff8:
    // 0x223ff8: 0x24060801  addiu       $a2, $zero, 0x801
    ctx->pc = 0x223ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
label_223ffc:
    // 0x223ffc: 0xc049cb6  jal         func_1272D8
label_224000:
    if (ctx->pc == 0x224000u) {
        ctx->pc = 0x224000u;
            // 0x224000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224004u;
        goto label_224004;
    }
    ctx->pc = 0x223FFCu;
    SET_GPR_U32(ctx, 31, 0x224004u);
    ctx->pc = 0x224000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223FFCu;
            // 0x224000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224004u; }
        if (ctx->pc != 0x224004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224004u; }
        if (ctx->pc != 0x224004u) { return; }
    }
    ctx->pc = 0x224004u;
label_224004:
    // 0x224004: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x224004u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_224008:
    // 0x224008: 0xae11104c  sw          $s1, 0x104C($s0)
    ctx->pc = 0x224008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4172), GPR_U32(ctx, 17));
label_22400c:
    // 0x22400c: 0x8de4ca2c  lw          $a0, -0x35D4($t7)
    ctx->pc = 0x22400cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953516)));
label_224010:
    // 0x224010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x224010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224014:
    // 0x224014: 0xae001048  sw          $zero, 0x1048($s0)
    ctx->pc = 0x224014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 0));
label_224018:
    // 0x224018: 0xc08984a  jal         func_226128
label_22401c:
    if (ctx->pc == 0x22401Cu) {
        ctx->pc = 0x22401Cu;
            // 0x22401c: 0xae001050  sw          $zero, 0x1050($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4176), GPR_U32(ctx, 0));
        ctx->pc = 0x224020u;
        goto label_224020;
    }
    ctx->pc = 0x224018u;
    SET_GPR_U32(ctx, 31, 0x224020u);
    ctx->pc = 0x22401Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224018u;
            // 0x22401c: 0xae001050  sw          $zero, 0x1050($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226128u;
    if (runtime->hasFunction(0x226128u)) {
        auto targetFn = runtime->lookupFunction(0x226128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224020u; }
        if (ctx->pc != 0x224020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226128_0x226128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224020u; }
        if (ctx->pc != 0x224020u) { return; }
    }
    ctx->pc = 0x224020u;
label_224020:
    // 0x224020: 0x8e021064  lw          $v0, 0x1064($s0)
    ctx->pc = 0x224020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4196)));
label_224024:
    // 0x224024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224028:
    // 0x224028: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x224028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22402c:
    // 0x22402c: 0x40f809  jalr        $v0
label_224030:
    if (ctx->pc == 0x224030u) {
        ctx->pc = 0x224030u;
            // 0x224030: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224034u;
        goto label_224034;
    }
    ctx->pc = 0x22402Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224034u);
        ctx->pc = 0x224030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22402Cu;
            // 0x224030: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224034u; }
            if (ctx->pc != 0x224034u) { return; }
        }
        }
    }
    ctx->pc = 0x224034u;
label_224034:
    // 0x224034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224038:
    // 0x224038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22403c:
    // 0x22403c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22403cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_224040:
    // 0x224040: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x224040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_224044:
    // 0x224044: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_224048:
    // 0x224048: 0x3e00008  jr          $ra
label_22404c:
    if (ctx->pc == 0x22404Cu) {
        ctx->pc = 0x22404Cu;
            // 0x22404c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x224050u;
        goto label_fallthrough_0x224048;
    }
    ctx->pc = 0x224048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224048u;
            // 0x22404c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x224048:
    ctx->pc = 0x224050u;
    ctx->pc = 0x224050u;
}
