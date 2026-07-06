#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242FC0
// Address: 0x242fc0 - 0x243130
void sub_00242FC0_0x242fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242FC0_0x242fc0");
#endif

    switch (ctx->pc) {
        case 0x242fc0u: goto label_242fc0;
        case 0x242fc4u: goto label_242fc4;
        case 0x242fc8u: goto label_242fc8;
        case 0x242fccu: goto label_242fcc;
        case 0x242fd0u: goto label_242fd0;
        case 0x242fd4u: goto label_242fd4;
        case 0x242fd8u: goto label_242fd8;
        case 0x242fdcu: goto label_242fdc;
        case 0x242fe0u: goto label_242fe0;
        case 0x242fe4u: goto label_242fe4;
        case 0x242fe8u: goto label_242fe8;
        case 0x242fecu: goto label_242fec;
        case 0x242ff0u: goto label_242ff0;
        case 0x242ff4u: goto label_242ff4;
        case 0x242ff8u: goto label_242ff8;
        case 0x242ffcu: goto label_242ffc;
        case 0x243000u: goto label_243000;
        case 0x243004u: goto label_243004;
        case 0x243008u: goto label_243008;
        case 0x24300cu: goto label_24300c;
        case 0x243010u: goto label_243010;
        case 0x243014u: goto label_243014;
        case 0x243018u: goto label_243018;
        case 0x24301cu: goto label_24301c;
        case 0x243020u: goto label_243020;
        case 0x243024u: goto label_243024;
        case 0x243028u: goto label_243028;
        case 0x24302cu: goto label_24302c;
        case 0x243030u: goto label_243030;
        case 0x243034u: goto label_243034;
        case 0x243038u: goto label_243038;
        case 0x24303cu: goto label_24303c;
        case 0x243040u: goto label_243040;
        case 0x243044u: goto label_243044;
        case 0x243048u: goto label_243048;
        case 0x24304cu: goto label_24304c;
        case 0x243050u: goto label_243050;
        case 0x243054u: goto label_243054;
        case 0x243058u: goto label_243058;
        case 0x24305cu: goto label_24305c;
        case 0x243060u: goto label_243060;
        case 0x243064u: goto label_243064;
        case 0x243068u: goto label_243068;
        case 0x24306cu: goto label_24306c;
        case 0x243070u: goto label_243070;
        case 0x243074u: goto label_243074;
        case 0x243078u: goto label_243078;
        case 0x24307cu: goto label_24307c;
        case 0x243080u: goto label_243080;
        case 0x243084u: goto label_243084;
        case 0x243088u: goto label_243088;
        case 0x24308cu: goto label_24308c;
        case 0x243090u: goto label_243090;
        case 0x243094u: goto label_243094;
        case 0x243098u: goto label_243098;
        case 0x24309cu: goto label_24309c;
        case 0x2430a0u: goto label_2430a0;
        case 0x2430a4u: goto label_2430a4;
        case 0x2430a8u: goto label_2430a8;
        case 0x2430acu: goto label_2430ac;
        case 0x2430b0u: goto label_2430b0;
        case 0x2430b4u: goto label_2430b4;
        case 0x2430b8u: goto label_2430b8;
        case 0x2430bcu: goto label_2430bc;
        case 0x2430c0u: goto label_2430c0;
        case 0x2430c4u: goto label_2430c4;
        case 0x2430c8u: goto label_2430c8;
        case 0x2430ccu: goto label_2430cc;
        case 0x2430d0u: goto label_2430d0;
        case 0x2430d4u: goto label_2430d4;
        case 0x2430d8u: goto label_2430d8;
        case 0x2430dcu: goto label_2430dc;
        case 0x2430e0u: goto label_2430e0;
        case 0x2430e4u: goto label_2430e4;
        case 0x2430e8u: goto label_2430e8;
        case 0x2430ecu: goto label_2430ec;
        case 0x2430f0u: goto label_2430f0;
        case 0x2430f4u: goto label_2430f4;
        case 0x2430f8u: goto label_2430f8;
        case 0x2430fcu: goto label_2430fc;
        case 0x243100u: goto label_243100;
        case 0x243104u: goto label_243104;
        case 0x243108u: goto label_243108;
        case 0x24310cu: goto label_24310c;
        case 0x243110u: goto label_243110;
        case 0x243114u: goto label_243114;
        case 0x243118u: goto label_243118;
        case 0x24311cu: goto label_24311c;
        case 0x243120u: goto label_243120;
        case 0x243124u: goto label_243124;
        case 0x243128u: goto label_243128;
        case 0x24312cu: goto label_24312c;
        default: break;
    }

    ctx->pc = 0x242fc0u;

label_242fc0:
    // 0x242fc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x242fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_242fc4:
    // 0x242fc4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x242fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_242fc8:
    // 0x242fc8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x242fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_242fcc:
    // 0x242fcc: 0x2463ff10  addiu       $v1, $v1, -0xF0
    ctx->pc = 0x242fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967056));
label_242fd0:
    // 0x242fd0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x242fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_242fd4:
    // 0x242fd4: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x242fd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_242fd8:
    // 0x242fd8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x242fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_242fdc:
    // 0x242fdc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x242fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_242fe0:
    // 0x242fe0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x242fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242fe4:
    // 0x242fe4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x242fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_242fe8:
    // 0x242fe8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x242fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242fec:
    // 0x242fec: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x242fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_242ff0:
    // 0x242ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x242ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242ff4:
    // 0x242ff4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x242ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_242ff8:
    // 0x242ff8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x242ff8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_242ffc:
    // 0x242ffc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x242ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_243000:
    // 0x243000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_243004:
    // 0x243004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_243008:
    // 0x243008: 0xc08c682  jal         func_231A08
label_24300c:
    if (ctx->pc == 0x24300Cu) {
        ctx->pc = 0x24300Cu;
            // 0x24300c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x243010u;
        goto label_243010;
    }
    ctx->pc = 0x243008u;
    SET_GPR_U32(ctx, 31, 0x243010u);
    ctx->pc = 0x24300Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243008u;
            // 0x24300c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243010u; }
        if (ctx->pc != 0x243010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243010u; }
        if (ctx->pc != 0x243010u) { return; }
    }
    ctx->pc = 0x243010u;
label_243010:
    // 0x243010: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_243014:
    if (ctx->pc == 0x243014u) {
        ctx->pc = 0x243014u;
            // 0x243014: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243018u;
        goto label_243018;
    }
    ctx->pc = 0x243010u;
    {
        const bool branch_taken_0x243010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x243014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243010u;
            // 0x243014: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243010) {
            ctx->pc = 0x2430C4u;
            goto label_2430c4;
        }
    }
    ctx->pc = 0x243018u;
label_243018:
    // 0x243018: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x243018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_24301c:
    // 0x24301c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24301cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243020:
    // 0x243020: 0x40f809  jalr        $v0
label_243024:
    if (ctx->pc == 0x243024u) {
        ctx->pc = 0x243024u;
            // 0x243024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243028u;
        goto label_243028;
    }
    ctx->pc = 0x243020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243028u);
        ctx->pc = 0x243024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243020u;
            // 0x243024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243028u; }
            if (ctx->pc != 0x243028u) { return; }
        }
        }
    }
    ctx->pc = 0x243028u;
label_243028:
    // 0x243028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24302c:
    // 0x24302c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_243030:
    if (ctx->pc == 0x243030u) {
        ctx->pc = 0x243030u;
            // 0x243030: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x243034u;
        goto label_243034;
    }
    ctx->pc = 0x24302Cu;
    {
        const bool branch_taken_0x24302c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x243030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24302Cu;
            // 0x243030: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24302c) {
            ctx->pc = 0x2430C8u;
            goto label_2430c8;
        }
    }
    ctx->pc = 0x243034u;
label_243034:
    // 0x243034: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x243034u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_243038:
    // 0x243038: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x243038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24303c:
    // 0x24303c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_243040:
    if (ctx->pc == 0x243040u) {
        ctx->pc = 0x243040u;
            // 0x243040: 0x2463ff00  addiu       $v1, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->pc = 0x243044u;
        goto label_243044;
    }
    ctx->pc = 0x24303Cu;
    {
        const bool branch_taken_0x24303c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24303Cu;
            // 0x243040: 0x2463ff00  addiu       $v1, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24303c) {
            ctx->pc = 0x2430CCu;
            goto label_2430cc;
        }
    }
    ctx->pc = 0x243044u;
label_243044:
    // 0x243044: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
label_243048:
    if (ctx->pc == 0x243048u) {
        ctx->pc = 0x243048u;
            // 0x243048: 0xafb00030  sw          $s0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
        ctx->pc = 0x24304Cu;
        goto label_24304c;
    }
    ctx->pc = 0x243044u;
    {
        const bool branch_taken_0x243044 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x243048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243044u;
            // 0x243048: 0xafb00030  sw          $s0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243044) {
            ctx->pc = 0x2430B4u;
            goto label_2430b4;
        }
    }
    ctx->pc = 0x24304Cu;
label_24304c:
    // 0x24304c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x24304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_243050:
    // 0x243050: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x243050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_243054:
    // 0x243054: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_243058:
    if (ctx->pc == 0x243058u) {
        ctx->pc = 0x243058u;
            // 0x243058: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x24305Cu;
        goto label_24305c;
    }
    ctx->pc = 0x243054u;
    {
        const bool branch_taken_0x243054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243054u;
            // 0x243058: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243054) {
            ctx->pc = 0x2430B4u;
            goto label_2430b4;
        }
    }
    ctx->pc = 0x24305Cu;
label_24305c:
    // 0x24305c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24305cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243060:
    // 0x243060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243064:
    // 0x243064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x243064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243068:
    // 0x243068: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x243068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24306c:
    // 0x24306c: 0xc090d8e  jal         func_243638
label_243070:
    if (ctx->pc == 0x243070u) {
        ctx->pc = 0x243070u;
            // 0x243070: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x243074u;
        goto label_243074;
    }
    ctx->pc = 0x24306Cu;
    SET_GPR_U32(ctx, 31, 0x243074u);
    ctx->pc = 0x243070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24306Cu;
            // 0x243070: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (runtime->hasFunction(0x243638u)) {
        auto targetFn = runtime->lookupFunction(0x243638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243074u; }
        if (ctx->pc != 0x243074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243638_0x243638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243074u; }
        if (ctx->pc != 0x243074u) { return; }
    }
    ctx->pc = 0x243074u;
label_243074:
    // 0x243074: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x243074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243078:
    // 0x243078: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_24307c:
    if (ctx->pc == 0x24307Cu) {
        ctx->pc = 0x24307Cu;
            // 0x24307c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x243080u;
        goto label_243080;
    }
    ctx->pc = 0x243078u;
    {
        const bool branch_taken_0x243078 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243078u;
            // 0x24307c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243078) {
            ctx->pc = 0x243094u;
            goto label_243094;
        }
    }
    ctx->pc = 0x243080u;
label_243080:
    // 0x243080: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x243080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_243084:
    // 0x243084: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x243084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_243088:
    // 0x243088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24308c:
    // 0x24308c: 0x10000012  b           . + 4 + (0x12 << 2)
label_243090:
    if (ctx->pc == 0x243090u) {
        ctx->pc = 0x243090u;
            // 0x243090: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x243094u;
        goto label_243094;
    }
    ctx->pc = 0x24308Cu;
    {
        const bool branch_taken_0x24308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24308Cu;
            // 0x243090: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24308c) {
            ctx->pc = 0x2430D8u;
            goto label_2430d8;
        }
    }
    ctx->pc = 0x243094u;
label_243094:
    // 0x243094: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_243098:
    if (ctx->pc == 0x243098u) {
        ctx->pc = 0x24309Cu;
        goto label_24309c;
    }
    ctx->pc = 0x243094u;
    {
        const bool branch_taken_0x243094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243094) {
            ctx->pc = 0x243100u;
            goto label_243100;
        }
    }
    ctx->pc = 0x24309Cu;
label_24309c:
    // 0x24309c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x24309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2430a0:
    // 0x2430a0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2430a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2430a4:
    // 0x2430a4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2430a8:
    if (ctx->pc == 0x2430A8u) {
        ctx->pc = 0x2430A8u;
            // 0x2430a8: 0x2415000b  addiu       $s5, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2430ACu;
        goto label_2430ac;
    }
    ctx->pc = 0x2430A4u;
    {
        const bool branch_taken_0x2430a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2430A4u;
            // 0x2430a8: 0x2415000b  addiu       $s5, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430a4) {
            ctx->pc = 0x243100u;
            goto label_243100;
        }
    }
    ctx->pc = 0x2430ACu;
label_2430ac:
    // 0x2430ac: 0x1000000a  b           . + 4 + (0xA << 2)
label_2430b0:
    if (ctx->pc == 0x2430B0u) {
        ctx->pc = 0x2430B4u;
        goto label_2430b4;
    }
    ctx->pc = 0x2430ACu;
    {
        const bool branch_taken_0x2430ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2430ac) {
            ctx->pc = 0x2430D8u;
            goto label_2430d8;
        }
    }
    ctx->pc = 0x2430B4u;
label_2430b4:
    // 0x2430b4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2430b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2430b8:
    // 0x2430b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2430b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2430bc:
    // 0x2430bc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2430c0:
    if (ctx->pc == 0x2430C0u) {
        ctx->pc = 0x2430C0u;
            // 0x2430c0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x2430C4u;
        goto label_2430c4;
    }
    ctx->pc = 0x2430BCu;
    {
        const bool branch_taken_0x2430bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2430BCu;
            // 0x2430c0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430bc) {
            ctx->pc = 0x243100u;
            goto label_243100;
        }
    }
    ctx->pc = 0x2430C4u;
label_2430c4:
    // 0x2430c4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2430c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2430c8:
    // 0x2430c8: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x2430c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
label_2430cc:
    // 0x2430cc: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2430ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_2430d0:
    // 0x2430d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2430d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2430d4:
    // 0x2430d4: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2430d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_2430d8:
    // 0x2430d8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_2430dc:
    if (ctx->pc == 0x2430DCu) {
        ctx->pc = 0x2430DCu;
            // 0x2430dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2430E0u;
        goto label_2430e0;
    }
    ctx->pc = 0x2430D8u;
    {
        const bool branch_taken_0x2430d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2430D8u;
            // 0x2430dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430d8) {
            ctx->pc = 0x243100u;
            goto label_243100;
        }
    }
    ctx->pc = 0x2430E0u;
label_2430e0:
    // 0x2430e0: 0xc048c96  jal         func_123258
label_2430e4:
    if (ctx->pc == 0x2430E4u) {
        ctx->pc = 0x2430E4u;
            // 0x2430e4: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x2430E8u;
        goto label_2430e8;
    }
    ctx->pc = 0x2430E0u;
    SET_GPR_U32(ctx, 31, 0x2430E8u);
    ctx->pc = 0x2430E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2430E0u;
            // 0x2430e4: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2430E8u; }
        if (ctx->pc != 0x2430E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2430E8u; }
        if (ctx->pc != 0x2430E8u) { return; }
    }
    ctx->pc = 0x2430E8u;
label_2430e8:
    // 0x2430e8: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x2430e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_2430ec:
    // 0x2430ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2430ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2430f0:
    // 0x2430f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2430f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2430f4:
    // 0x2430f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2430f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2430f8:
    // 0x2430f8: 0xc091502  jal         func_245408
label_2430fc:
    if (ctx->pc == 0x2430FCu) {
        ctx->pc = 0x2430FCu;
            // 0x2430fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243100u;
        goto label_243100;
    }
    ctx->pc = 0x2430F8u;
    SET_GPR_U32(ctx, 31, 0x243100u);
    ctx->pc = 0x2430FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2430F8u;
            // 0x2430fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245408u;
    if (runtime->hasFunction(0x245408u)) {
        auto targetFn = runtime->lookupFunction(0x245408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243100u; }
        if (ctx->pc != 0x243100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245408_0x245408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243100u; }
        if (ctx->pc != 0x243100u) { return; }
    }
    ctx->pc = 0x243100u;
label_243100:
    // 0x243100: 0xc08c698  jal         func_231A60
label_243104:
    if (ctx->pc == 0x243104u) {
        ctx->pc = 0x243104u;
            // 0x243104: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243108u;
        goto label_243108;
    }
    ctx->pc = 0x243100u;
    SET_GPR_U32(ctx, 31, 0x243108u);
    ctx->pc = 0x243104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243100u;
            // 0x243104: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243108u; }
        if (ctx->pc != 0x243108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243108u; }
        if (ctx->pc != 0x243108u) { return; }
    }
    ctx->pc = 0x243108u;
label_243108:
    // 0x243108: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x243108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_24310c:
    // 0x24310c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24310cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_243110:
    // 0x243110: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x243110u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_243114:
    // 0x243114: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x243114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_243118:
    // 0x243118: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x243118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24311c:
    // 0x24311c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x24311cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_243120:
    // 0x243120: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x243120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_243124:
    // 0x243124: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x243124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_243128:
    // 0x243128: 0x3e00008  jr          $ra
label_24312c:
    if (ctx->pc == 0x24312Cu) {
        ctx->pc = 0x24312Cu;
            // 0x24312c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x243130u;
        goto label_fallthrough_0x243128;
    }
    ctx->pc = 0x243128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243128u;
            // 0x24312c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x243128:
    ctx->pc = 0x243130u;
    ctx->pc = 0x243130u;
}
