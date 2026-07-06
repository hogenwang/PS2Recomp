#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CFB8
// Address: 0x25cfb8 - 0x25d078
void sub_0025CFB8_0x25cfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CFB8_0x25cfb8");
#endif

    switch (ctx->pc) {
        case 0x25cfe0u: goto label_25cfe0;
        case 0x25cff4u: goto label_25cff4;
        case 0x25d010u: goto label_25d010;
        case 0x25d024u: goto label_25d024;
        case 0x25d038u: goto label_25d038;
        case 0x25d044u: goto label_25d044;
        case 0x25d04cu: goto label_25d04c;
        case 0x25d058u: goto label_25d058;
        default: break;
    }

    ctx->pc = 0x25cfb8u;

    // 0x25cfb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25cfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25cfbc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25cfc0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25cfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25cfc4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25cfc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25cfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25cfcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25cfccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfd0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25cfd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25cfd8: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25CFD8u;
    SET_GPR_U32(ctx, 31, 0x25CFE0u);
    ctx->pc = 0x25CFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CFD8u;
            // 0x25cfdc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (runtime->hasFunction(0x25CA38u)) {
        auto targetFn = runtime->lookupFunction(0x25CA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFE0u; }
        if (ctx->pc != 0x25CFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CA38_0x25ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFE0u; }
        if (ctx->pc != 0x25CFE0u) { return; }
    }
    ctx->pc = 0x25CFE0u;
label_25cfe0:
    // 0x25cfe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25cfe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfe4: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x25CFE4u;
    {
        const bool branch_taken_0x25cfe4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CFE4u;
            // 0x25cfe8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cfe4) {
            ctx->pc = 0x25D058u;
            goto label_25d058;
        }
    }
    ctx->pc = 0x25CFECu;
    // 0x25cfec: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25CFECu;
    SET_GPR_U32(ctx, 31, 0x25CFF4u);
    ctx->pc = 0x25CFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CFECu;
            // 0x25cff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (runtime->hasFunction(0x230328u)) {
        auto targetFn = runtime->lookupFunction(0x230328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFF4u; }
        if (ctx->pc != 0x25CFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230328_0x230328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFF4u; }
        if (ctx->pc != 0x25CFF4u) { return; }
    }
    ctx->pc = 0x25CFF4u;
label_25cff4:
    // 0x25cff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cff8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CFF8u;
    {
        const bool branch_taken_0x25cff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CFF8u;
            // 0x25cffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cff8) {
            ctx->pc = 0x25D008u;
            goto label_25d008;
        }
    }
    ctx->pc = 0x25D000u;
    // 0x25d000: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25D000u;
    {
        const bool branch_taken_0x25d000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D000u;
            // 0x25d004: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d000) {
            ctx->pc = 0x25D044u;
            goto label_25d044;
        }
    }
    ctx->pc = 0x25D008u;
label_25d008:
    // 0x25d008: 0xc0973a6  jal         func_25CE98
    ctx->pc = 0x25D008u;
    SET_GPR_U32(ctx, 31, 0x25D010u);
    ctx->pc = 0x25D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D008u;
            // 0x25d00c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (runtime->hasFunction(0x25CE98u)) {
        auto targetFn = runtime->lookupFunction(0x25CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D010u; }
        if (ctx->pc != 0x25D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CE98_0x25ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D010u; }
        if (ctx->pc != 0x25D010u) { return; }
    }
    ctx->pc = 0x25D010u;
label_25d010:
    // 0x25d010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25d010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d014: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25d014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d018: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d01c: 0xc097928  jal         func_25E4A0
    ctx->pc = 0x25D01Cu;
    SET_GPR_U32(ctx, 31, 0x25D024u);
    ctx->pc = 0x25D020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D01Cu;
            // 0x25d020: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E4A0u;
    if (runtime->hasFunction(0x25E4A0u)) {
        auto targetFn = runtime->lookupFunction(0x25E4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D024u; }
        if (ctx->pc != 0x25D024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025E4A0_0x25e4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D024u; }
        if (ctx->pc != 0x25D024u) { return; }
    }
    ctx->pc = 0x25D024u;
label_25d024:
    // 0x25d024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25d024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d028: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D028u;
    {
        const bool branch_taken_0x25d028 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D028u;
            // 0x25d02c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d028) {
            ctx->pc = 0x25D044u;
            goto label_25d044;
        }
    }
    ctx->pc = 0x25D030u;
    // 0x25d030: 0xc08b7d6  jal         func_22DF58
    ctx->pc = 0x25D030u;
    SET_GPR_U32(ctx, 31, 0x25D038u);
    ctx->pc = 0x25D034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D030u;
            // 0x25d034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DF58u;
    if (runtime->hasFunction(0x22DF58u)) {
        auto targetFn = runtime->lookupFunction(0x22DF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D038u; }
        if (ctx->pc != 0x25D038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DF58_0x22df58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D038u; }
        if (ctx->pc != 0x25D038u) { return; }
    }
    ctx->pc = 0x25D038u;
label_25d038:
    // 0x25d038: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x25d038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d03c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25D03Cu;
    SET_GPR_U32(ctx, 31, 0x25D044u);
    ctx->pc = 0x25D040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D03Cu;
            // 0x25d040: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D044u; }
        if (ctx->pc != 0x25D044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D044u; }
        if (ctx->pc != 0x25D044u) { return; }
    }
    ctx->pc = 0x25D044u;
label_25d044:
    // 0x25d044: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25D044u;
    SET_GPR_U32(ctx, 31, 0x25D04Cu);
    ctx->pc = 0x25D048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D044u;
            // 0x25d048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (runtime->hasFunction(0x25CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x25CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D04Cu; }
        if (ctx->pc != 0x25D04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEB0_0x25ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D04Cu; }
        if (ctx->pc != 0x25D04Cu) { return; }
    }
    ctx->pc = 0x25D04Cu;
label_25d04c:
    // 0x25d04c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d050: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25D050u;
    SET_GPR_U32(ctx, 31, 0x25D058u);
    ctx->pc = 0x25D054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D050u;
            // 0x25d054: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (runtime->hasFunction(0x25CB68u)) {
        auto targetFn = runtime->lookupFunction(0x25CB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D058u; }
        if (ctx->pc != 0x25D058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CB68_0x25cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D058u; }
        if (ctx->pc != 0x25D058u) { return; }
    }
    ctx->pc = 0x25D058u;
label_25d058:
    // 0x25d058: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25d058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d05c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25d05cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d060: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25d060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d064: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25d064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d068: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25d068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d06c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D06Cu;
            // 0x25d070: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D074u;
    // 0x25d074: 0x0  nop
    ctx->pc = 0x25d074u;
    // NOP
    ctx->pc = 0x25d078u;
}
