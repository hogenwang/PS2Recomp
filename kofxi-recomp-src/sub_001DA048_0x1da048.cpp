#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA048
// Address: 0x1da048 - 0x1da258
void sub_001DA048_0x1da048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA048_0x1da048");
#endif

    switch (ctx->pc) {
        case 0x1da048u: goto label_1da048;
        case 0x1da04cu: goto label_1da04c;
        case 0x1da050u: goto label_1da050;
        case 0x1da054u: goto label_1da054;
        case 0x1da058u: goto label_1da058;
        case 0x1da05cu: goto label_1da05c;
        case 0x1da060u: goto label_1da060;
        case 0x1da064u: goto label_1da064;
        case 0x1da068u: goto label_1da068;
        case 0x1da06cu: goto label_1da06c;
        case 0x1da070u: goto label_1da070;
        case 0x1da074u: goto label_1da074;
        case 0x1da078u: goto label_1da078;
        case 0x1da07cu: goto label_1da07c;
        case 0x1da080u: goto label_1da080;
        case 0x1da084u: goto label_1da084;
        case 0x1da088u: goto label_1da088;
        case 0x1da08cu: goto label_1da08c;
        case 0x1da090u: goto label_1da090;
        case 0x1da094u: goto label_1da094;
        case 0x1da098u: goto label_1da098;
        case 0x1da09cu: goto label_1da09c;
        case 0x1da0a0u: goto label_1da0a0;
        case 0x1da0a4u: goto label_1da0a4;
        case 0x1da0a8u: goto label_1da0a8;
        case 0x1da0acu: goto label_1da0ac;
        case 0x1da0b0u: goto label_1da0b0;
        case 0x1da0b4u: goto label_1da0b4;
        case 0x1da0b8u: goto label_1da0b8;
        case 0x1da0bcu: goto label_1da0bc;
        case 0x1da0c0u: goto label_1da0c0;
        case 0x1da0c4u: goto label_1da0c4;
        case 0x1da0c8u: goto label_1da0c8;
        case 0x1da0ccu: goto label_1da0cc;
        case 0x1da0d0u: goto label_1da0d0;
        case 0x1da0d4u: goto label_1da0d4;
        case 0x1da0d8u: goto label_1da0d8;
        case 0x1da0dcu: goto label_1da0dc;
        case 0x1da0e0u: goto label_1da0e0;
        case 0x1da0e4u: goto label_1da0e4;
        case 0x1da0e8u: goto label_1da0e8;
        case 0x1da0ecu: goto label_1da0ec;
        case 0x1da0f0u: goto label_1da0f0;
        case 0x1da0f4u: goto label_1da0f4;
        case 0x1da0f8u: goto label_1da0f8;
        case 0x1da0fcu: goto label_1da0fc;
        case 0x1da100u: goto label_1da100;
        case 0x1da104u: goto label_1da104;
        case 0x1da108u: goto label_1da108;
        case 0x1da10cu: goto label_1da10c;
        case 0x1da110u: goto label_1da110;
        case 0x1da114u: goto label_1da114;
        case 0x1da118u: goto label_1da118;
        case 0x1da11cu: goto label_1da11c;
        case 0x1da120u: goto label_1da120;
        case 0x1da124u: goto label_1da124;
        case 0x1da128u: goto label_1da128;
        case 0x1da12cu: goto label_1da12c;
        case 0x1da130u: goto label_1da130;
        case 0x1da134u: goto label_1da134;
        case 0x1da138u: goto label_1da138;
        case 0x1da13cu: goto label_1da13c;
        case 0x1da140u: goto label_1da140;
        case 0x1da144u: goto label_1da144;
        case 0x1da148u: goto label_1da148;
        case 0x1da14cu: goto label_1da14c;
        case 0x1da150u: goto label_1da150;
        case 0x1da154u: goto label_1da154;
        case 0x1da158u: goto label_1da158;
        case 0x1da15cu: goto label_1da15c;
        case 0x1da160u: goto label_1da160;
        case 0x1da164u: goto label_1da164;
        case 0x1da168u: goto label_1da168;
        case 0x1da16cu: goto label_1da16c;
        case 0x1da170u: goto label_1da170;
        case 0x1da174u: goto label_1da174;
        case 0x1da178u: goto label_1da178;
        case 0x1da17cu: goto label_1da17c;
        case 0x1da180u: goto label_1da180;
        case 0x1da184u: goto label_1da184;
        case 0x1da188u: goto label_1da188;
        case 0x1da18cu: goto label_1da18c;
        case 0x1da190u: goto label_1da190;
        case 0x1da194u: goto label_1da194;
        case 0x1da198u: goto label_1da198;
        case 0x1da19cu: goto label_1da19c;
        case 0x1da1a0u: goto label_1da1a0;
        case 0x1da1a4u: goto label_1da1a4;
        case 0x1da1a8u: goto label_1da1a8;
        case 0x1da1acu: goto label_1da1ac;
        case 0x1da1b0u: goto label_1da1b0;
        case 0x1da1b4u: goto label_1da1b4;
        case 0x1da1b8u: goto label_1da1b8;
        case 0x1da1bcu: goto label_1da1bc;
        case 0x1da1c0u: goto label_1da1c0;
        case 0x1da1c4u: goto label_1da1c4;
        case 0x1da1c8u: goto label_1da1c8;
        case 0x1da1ccu: goto label_1da1cc;
        case 0x1da1d0u: goto label_1da1d0;
        case 0x1da1d4u: goto label_1da1d4;
        case 0x1da1d8u: goto label_1da1d8;
        case 0x1da1dcu: goto label_1da1dc;
        case 0x1da1e0u: goto label_1da1e0;
        case 0x1da1e4u: goto label_1da1e4;
        case 0x1da1e8u: goto label_1da1e8;
        case 0x1da1ecu: goto label_1da1ec;
        case 0x1da1f0u: goto label_1da1f0;
        case 0x1da1f4u: goto label_1da1f4;
        case 0x1da1f8u: goto label_1da1f8;
        case 0x1da1fcu: goto label_1da1fc;
        case 0x1da200u: goto label_1da200;
        case 0x1da204u: goto label_1da204;
        case 0x1da208u: goto label_1da208;
        case 0x1da20cu: goto label_1da20c;
        case 0x1da210u: goto label_1da210;
        case 0x1da214u: goto label_1da214;
        case 0x1da218u: goto label_1da218;
        case 0x1da21cu: goto label_1da21c;
        case 0x1da220u: goto label_1da220;
        case 0x1da224u: goto label_1da224;
        case 0x1da228u: goto label_1da228;
        case 0x1da22cu: goto label_1da22c;
        case 0x1da230u: goto label_1da230;
        case 0x1da234u: goto label_1da234;
        case 0x1da238u: goto label_1da238;
        case 0x1da23cu: goto label_1da23c;
        case 0x1da240u: goto label_1da240;
        case 0x1da244u: goto label_1da244;
        case 0x1da248u: goto label_1da248;
        case 0x1da24cu: goto label_1da24c;
        case 0x1da250u: goto label_1da250;
        case 0x1da254u: goto label_1da254;
        default: break;
    }

    ctx->pc = 0x1da048u;

label_1da048:
    // 0x1da048: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1da048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1da04c:
    // 0x1da04c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1da04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1da050:
    // 0x1da050: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1da050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da054:
    // 0x1da054: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1da054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1da058:
    // 0x1da058: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1da058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1da05c:
    // 0x1da05c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1da05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1da060:
    // 0x1da060: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1da060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1da064:
    // 0x1da064: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1da064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1da068:
    // 0x1da068: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1da068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1da06c:
    // 0x1da06c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1da06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1da070:
    // 0x1da070: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1da070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1da074:
    // 0x1da074: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1da074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1da078:
    // 0x1da078: 0xc0770ee  jal         func_1DC3B8
label_1da07c:
    if (ctx->pc == 0x1DA07Cu) {
        ctx->pc = 0x1DA07Cu;
            // 0x1da07c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA080u;
        goto label_1da080;
    }
    ctx->pc = 0x1DA078u;
    SET_GPR_U32(ctx, 31, 0x1DA080u);
    ctx->pc = 0x1DA07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA078u;
            // 0x1da07c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3B8u;
    if (runtime->hasFunction(0x1DC3B8u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA080u; }
        if (ctx->pc != 0x1DA080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3B8_0x1dc3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA080u; }
        if (ctx->pc != 0x1DA080u) { return; }
    }
    ctx->pc = 0x1DA080u;
label_1da080:
    // 0x1da080: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1da084:
    if (ctx->pc == 0x1DA084u) {
        ctx->pc = 0x1DA084u;
            // 0x1da084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA088u;
        goto label_1da088;
    }
    ctx->pc = 0x1DA080u;
    {
        const bool branch_taken_0x1da080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA080u;
            // 0x1da084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da080) {
            ctx->pc = 0x1DA0A0u;
            goto label_1da0a0;
        }
    }
    ctx->pc = 0x1DA088u;
label_1da088:
    // 0x1da088: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1da088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_1da08c:
    // 0x1da08c: 0xc076688  jal         func_1D9A20
label_1da090:
    if (ctx->pc == 0x1DA090u) {
        ctx->pc = 0x1DA090u;
            // 0x1da090: 0x34a5020c  ori         $a1, $a1, 0x20C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
        ctx->pc = 0x1DA094u;
        goto label_1da094;
    }
    ctx->pc = 0x1DA08Cu;
    SET_GPR_U32(ctx, 31, 0x1DA094u);
    ctx->pc = 0x1DA090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA08Cu;
            // 0x1da090: 0x34a5020c  ori         $a1, $a1, 0x20C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (runtime->hasFunction(0x1D9A20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA094u; }
        if (ctx->pc != 0x1DA094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9A20_0x1d9a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA094u; }
        if (ctx->pc != 0x1DA094u) { return; }
    }
    ctx->pc = 0x1DA094u;
label_1da094:
    // 0x1da094: 0x10000064  b           . + 4 + (0x64 << 2)
label_1da098:
    if (ctx->pc == 0x1DA098u) {
        ctx->pc = 0x1DA098u;
            // 0x1da098: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1DA09Cu;
        goto label_1da09c;
    }
    ctx->pc = 0x1DA094u;
    {
        const bool branch_taken_0x1da094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA094u;
            // 0x1da098: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da094) {
            ctx->pc = 0x1DA228u;
            goto label_1da228;
        }
    }
    ctx->pc = 0x1DA09Cu;
label_1da09c:
    // 0x1da09c: 0x0  nop
    ctx->pc = 0x1da09cu;
    // NOP
label_1da0a0:
    // 0x1da0a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1da0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1da0a4:
    // 0x1da0a4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1da0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1da0a8:
    // 0x1da0a8: 0xae400410  sw          $zero, 0x410($s2)
    ctx->pc = 0x1da0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1040), GPR_U32(ctx, 0));
label_1da0ac:
    // 0x1da0ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1da0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1da0b0:
    // 0x1da0b0: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x1da0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1da0b4:
    // 0x1da0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da0b8:
    // 0x1da0b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1da0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da0bc:
    // 0x1da0bc: 0x100f809  jalr        $t0
label_1da0c0:
    if (ctx->pc == 0x1DA0C0u) {
        ctx->pc = 0x1DA0C0u;
            // 0x1da0c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1DA0C4u;
        goto label_1da0c4;
    }
    ctx->pc = 0x1DA0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1DA0C4u);
        ctx->pc = 0x1DA0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0BCu;
            // 0x1da0c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA0C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0C4u; }
            if (ctx->pc != 0x1DA0C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA0C4u;
label_1da0c4:
    // 0x1da0c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1da0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1da0c8:
    // 0x1da0c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da0cc:
    // 0x1da0cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1da0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da0d0:
    // 0x1da0d0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1da0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1da0d4:
    // 0x1da0d4: 0x40f809  jalr        $v0
label_1da0d8:
    if (ctx->pc == 0x1DA0D8u) {
        ctx->pc = 0x1DA0D8u;
            // 0x1da0d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0DCu;
        goto label_1da0dc;
    }
    ctx->pc = 0x1DA0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA0DCu);
        ctx->pc = 0x1DA0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0D4u;
            // 0x1da0d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA0DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0DCu; }
            if (ctx->pc != 0x1DA0DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1DA0DCu;
label_1da0dc:
    // 0x1da0dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1da0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da0e0:
    // 0x1da0e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1da0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1da0e4:
    // 0x1da0e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1da0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1da0e8:
    // 0x1da0e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1da0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1da0ec:
    // 0x1da0ec: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1da0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1da0f0:
    // 0x1da0f0: 0xc0768da  jal         func_1DA368
label_1da0f4:
    if (ctx->pc == 0x1DA0F4u) {
        ctx->pc = 0x1DA0F4u;
            // 0x1da0f4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x1DA0F8u;
        goto label_1da0f8;
    }
    ctx->pc = 0x1DA0F0u;
    SET_GPR_U32(ctx, 31, 0x1DA0F8u);
    ctx->pc = 0x1DA0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0F0u;
            // 0x1da0f4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA368u;
    if (runtime->hasFunction(0x1DA368u)) {
        auto targetFn = runtime->lookupFunction(0x1DA368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0F8u; }
        if (ctx->pc != 0x1DA0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA368_0x1da368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0F8u; }
        if (ctx->pc != 0x1DA0F8u) { return; }
    }
    ctx->pc = 0x1DA0F8u;
label_1da0f8:
    // 0x1da0f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1da0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da0fc:
    // 0x1da0fc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_1da100:
    if (ctx->pc == 0x1DA100u) {
        ctx->pc = 0x1DA100u;
            // 0x1da100: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA104u;
        goto label_1da104;
    }
    ctx->pc = 0x1DA0FCu;
    {
        const bool branch_taken_0x1da0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DA100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0FCu;
            // 0x1da100: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0fc) {
            ctx->pc = 0x1DA128u;
            goto label_1da128;
        }
    }
    ctx->pc = 0x1DA104u;
label_1da104:
    // 0x1da104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1da104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da108:
    // 0x1da108: 0xc07712c  jal         func_1DC4B0
label_1da10c:
    if (ctx->pc == 0x1DA10Cu) {
        ctx->pc = 0x1DA10Cu;
            // 0x1da10c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA110u;
        goto label_1da110;
    }
    ctx->pc = 0x1DA108u;
    SET_GPR_U32(ctx, 31, 0x1DA110u);
    ctx->pc = 0x1DA10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA108u;
            // 0x1da10c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4B0u;
    if (runtime->hasFunction(0x1DC4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA110u; }
        if (ctx->pc != 0x1DA110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC4B0_0x1dc4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA110u; }
        if (ctx->pc != 0x1DA110u) { return; }
    }
    ctx->pc = 0x1DA110u;
label_1da110:
    // 0x1da110: 0x10000045  b           . + 4 + (0x45 << 2)
label_1da114:
    if (ctx->pc == 0x1DA114u) {
        ctx->pc = 0x1DA114u;
            // 0x1da114: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1DA118u;
        goto label_1da118;
    }
    ctx->pc = 0x1DA110u;
    {
        const bool branch_taken_0x1da110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA110u;
            // 0x1da114: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da110) {
            ctx->pc = 0x1DA228u;
            goto label_1da228;
        }
    }
    ctx->pc = 0x1DA118u;
label_1da118:
    // 0x1da118: 0xc076688  jal         func_1D9A20
label_1da11c:
    if (ctx->pc == 0x1DA11Cu) {
        ctx->pc = 0x1DA11Cu;
            // 0x1da11c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA120u;
        goto label_1da120;
    }
    ctx->pc = 0x1DA118u;
    SET_GPR_U32(ctx, 31, 0x1DA120u);
    ctx->pc = 0x1DA11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA118u;
            // 0x1da11c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (runtime->hasFunction(0x1D9A20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA120u; }
        if (ctx->pc != 0x1DA120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9A20_0x1d9a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA120u; }
        if (ctx->pc != 0x1DA120u) { return; }
    }
    ctx->pc = 0x1DA120u;
label_1da120:
    // 0x1da120: 0x10000041  b           . + 4 + (0x41 << 2)
label_1da124:
    if (ctx->pc == 0x1DA124u) {
        ctx->pc = 0x1DA124u;
            // 0x1da124: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1DA128u;
        goto label_1da128;
    }
    ctx->pc = 0x1DA120u;
    {
        const bool branch_taken_0x1da120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA120u;
            // 0x1da124: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da120) {
            ctx->pc = 0x1DA228u;
            goto label_1da228;
        }
    }
    ctx->pc = 0x1DA128u;
label_1da128:
    // 0x1da128: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1da128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1da12c:
    // 0x1da12c: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x1da12cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1da130:
    // 0x1da130: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1da134:
    // 0x1da134: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x1da134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1da138:
    // 0x1da138: 0x10000028  b           . + 4 + (0x28 << 2)
label_1da13c:
    if (ctx->pc == 0x1DA13Cu) {
        ctx->pc = 0x1DA13Cu;
            // 0x1da13c: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1DA140u;
        goto label_1da140;
    }
    ctx->pc = 0x1DA138u;
    {
        const bool branch_taken_0x1da138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA138u;
            // 0x1da13c: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da138) {
            ctx->pc = 0x1DA1DCu;
            goto label_1da1dc;
        }
    }
    ctx->pc = 0x1DA140u;
label_1da140:
    // 0x1da140: 0x1074001d  beq         $v1, $s4, . + 4 + (0x1D << 2)
label_1da144:
    if (ctx->pc == 0x1DA144u) {
        ctx->pc = 0x1DA144u;
            // 0x1da144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA148u;
        goto label_1da148;
    }
    ctx->pc = 0x1DA140u;
    {
        const bool branch_taken_0x1da140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1DA144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA140u;
            // 0x1da144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da140) {
            ctx->pc = 0x1DA1B8u;
            goto label_1da1b8;
        }
    }
    ctx->pc = 0x1DA148u;
label_1da148:
    // 0x1da148: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x1da148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_1da14c:
    // 0x1da14c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1da150:
    if (ctx->pc == 0x1DA150u) {
        ctx->pc = 0x1DA154u;
        goto label_1da154;
    }
    ctx->pc = 0x1DA14Cu;
    {
        const bool branch_taken_0x1da14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da14c) {
            ctx->pc = 0x1DA170u;
            goto label_1da170;
        }
    }
    ctx->pc = 0x1DA154u;
label_1da154:
    // 0x1da154: 0x10760014  beq         $v1, $s6, . + 4 + (0x14 << 2)
label_1da158:
    if (ctx->pc == 0x1DA158u) {
        ctx->pc = 0x1DA158u;
            // 0x1da158: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA15Cu;
        goto label_1da15c;
    }
    ctx->pc = 0x1DA154u;
    {
        const bool branch_taken_0x1da154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x1DA158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA154u;
            // 0x1da158: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da154) {
            ctx->pc = 0x1DA1A8u;
            goto label_1da1a8;
        }
    }
    ctx->pc = 0x1DA15Cu;
label_1da15c:
    // 0x1da15c: 0x107e000e  beq         $v1, $fp, . + 4 + (0xE << 2)
label_1da160:
    if (ctx->pc == 0x1DA160u) {
        ctx->pc = 0x1DA164u;
        goto label_1da164;
    }
    ctx->pc = 0x1DA15Cu;
    {
        const bool branch_taken_0x1da15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x1da15c) {
            ctx->pc = 0x1DA198u;
            goto label_1da198;
        }
    }
    ctx->pc = 0x1DA164u;
label_1da164:
    // 0x1da164: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1da168:
    if (ctx->pc == 0x1DA168u) {
        ctx->pc = 0x1DA168u;
            // 0x1da168: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DA16Cu;
        goto label_1da16c;
    }
    ctx->pc = 0x1DA164u;
    {
        const bool branch_taken_0x1da164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA164u;
            // 0x1da168: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da164) {
            ctx->pc = 0x1DA1E4u;
            goto label_1da1e4;
        }
    }
    ctx->pc = 0x1DA16Cu;
label_1da16c:
    // 0x1da16c: 0x0  nop
    ctx->pc = 0x1da16cu;
    // NOP
label_1da170:
    // 0x1da170: 0x10750017  beq         $v1, $s5, . + 4 + (0x17 << 2)
label_1da174:
    if (ctx->pc == 0x1DA174u) {
        ctx->pc = 0x1DA174u;
            // 0x1da174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA178u;
        goto label_1da178;
    }
    ctx->pc = 0x1DA170u;
    {
        const bool branch_taken_0x1da170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1DA174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA170u;
            // 0x1da174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da170) {
            ctx->pc = 0x1DA1D0u;
            goto label_1da1d0;
        }
    }
    ctx->pc = 0x1DA178u;
label_1da178:
    // 0x1da178: 0x1477001a  bne         $v1, $s7, . + 4 + (0x1A << 2)
label_1da17c:
    if (ctx->pc == 0x1DA17Cu) {
        ctx->pc = 0x1DA17Cu;
            // 0x1da17c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DA180u;
        goto label_1da180;
    }
    ctx->pc = 0x1DA178u;
    {
        const bool branch_taken_0x1da178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x1DA17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA178u;
            // 0x1da17c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da178) {
            ctx->pc = 0x1DA1E4u;
            goto label_1da1e4;
        }
    }
    ctx->pc = 0x1DA180u;
label_1da180:
    // 0x1da180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1da180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da184:
    // 0x1da184: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da188:
    // 0x1da188: 0xc076904  jal         func_1DA410
label_1da18c:
    if (ctx->pc == 0x1DA18Cu) {
        ctx->pc = 0x1DA18Cu;
            // 0x1da18c: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1DA190u;
        goto label_1da190;
    }
    ctx->pc = 0x1DA188u;
    SET_GPR_U32(ctx, 31, 0x1DA190u);
    ctx->pc = 0x1DA18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA188u;
            // 0x1da18c: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA410u;
    if (runtime->hasFunction(0x1DA410u)) {
        auto targetFn = runtime->lookupFunction(0x1DA410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA190u; }
        if (ctx->pc != 0x1DA190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA410_0x1da410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA190u; }
        if (ctx->pc != 0x1DA190u) { return; }
    }
    ctx->pc = 0x1DA190u;
label_1da190:
    // 0x1da190: 0x10000013  b           . + 4 + (0x13 << 2)
label_1da194:
    if (ctx->pc == 0x1DA194u) {
        ctx->pc = 0x1DA194u;
            // 0x1da194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA198u;
        goto label_1da198;
    }
    ctx->pc = 0x1DA190u;
    {
        const bool branch_taken_0x1da190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA190u;
            // 0x1da194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da190) {
            ctx->pc = 0x1DA1E0u;
            goto label_1da1e0;
        }
    }
    ctx->pc = 0x1DA198u;
label_1da198:
    // 0x1da198: 0xc076ab4  jal         func_1DAAD0
label_1da19c:
    if (ctx->pc == 0x1DA19Cu) {
        ctx->pc = 0x1DA19Cu;
            // 0x1da19c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1DA1A0u;
        goto label_1da1a0;
    }
    ctx->pc = 0x1DA198u;
    SET_GPR_U32(ctx, 31, 0x1DA1A0u);
    ctx->pc = 0x1DA19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA198u;
            // 0x1da19c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAAD0u;
    if (runtime->hasFunction(0x1DAAD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DAAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1A0u; }
        if (ctx->pc != 0x1DA1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAAD0_0x1daad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1A0u; }
        if (ctx->pc != 0x1DA1A0u) { return; }
    }
    ctx->pc = 0x1DA1A0u;
label_1da1a0:
    // 0x1da1a0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1da1a4:
    if (ctx->pc == 0x1DA1A4u) {
        ctx->pc = 0x1DA1A4u;
            // 0x1da1a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1A8u;
        goto label_1da1a8;
    }
    ctx->pc = 0x1DA1A0u;
    {
        const bool branch_taken_0x1da1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1A0u;
            // 0x1da1a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1a0) {
            ctx->pc = 0x1DA1E0u;
            goto label_1da1e0;
        }
    }
    ctx->pc = 0x1DA1A8u;
label_1da1a8:
    // 0x1da1a8: 0xc076b54  jal         func_1DAD50
label_1da1ac:
    if (ctx->pc == 0x1DA1ACu) {
        ctx->pc = 0x1DA1ACu;
            // 0x1da1ac: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DA1B0u;
        goto label_1da1b0;
    }
    ctx->pc = 0x1DA1A8u;
    SET_GPR_U32(ctx, 31, 0x1DA1B0u);
    ctx->pc = 0x1DA1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1A8u;
            // 0x1da1ac: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAD50u;
    if (runtime->hasFunction(0x1DAD50u)) {
        auto targetFn = runtime->lookupFunction(0x1DAD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1B0u; }
        if (ctx->pc != 0x1DA1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAD50_0x1dad50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1B0u; }
        if (ctx->pc != 0x1DA1B0u) { return; }
    }
    ctx->pc = 0x1DA1B0u;
label_1da1b0:
    // 0x1da1b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1da1b4:
    if (ctx->pc == 0x1DA1B4u) {
        ctx->pc = 0x1DA1B4u;
            // 0x1da1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1B8u;
        goto label_1da1b8;
    }
    ctx->pc = 0x1DA1B0u;
    {
        const bool branch_taken_0x1da1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1B0u;
            // 0x1da1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1b0) {
            ctx->pc = 0x1DA1E0u;
            goto label_1da1e0;
        }
    }
    ctx->pc = 0x1DA1B8u;
label_1da1b8:
    // 0x1da1b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da1bc:
    // 0x1da1bc: 0xc076cce  jal         func_1DB338
label_1da1c0:
    if (ctx->pc == 0x1DA1C0u) {
        ctx->pc = 0x1DA1C0u;
            // 0x1da1c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1C4u;
        goto label_1da1c4;
    }
    ctx->pc = 0x1DA1BCu;
    SET_GPR_U32(ctx, 31, 0x1DA1C4u);
    ctx->pc = 0x1DA1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1BCu;
            // 0x1da1c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB338u;
    if (runtime->hasFunction(0x1DB338u)) {
        auto targetFn = runtime->lookupFunction(0x1DB338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1C4u; }
        if (ctx->pc != 0x1DA1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB338_0x1db338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1C4u; }
        if (ctx->pc != 0x1DA1C4u) { return; }
    }
    ctx->pc = 0x1DA1C4u;
label_1da1c4:
    // 0x1da1c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1da1c8:
    if (ctx->pc == 0x1DA1C8u) {
        ctx->pc = 0x1DA1C8u;
            // 0x1da1c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1CCu;
        goto label_1da1cc;
    }
    ctx->pc = 0x1DA1C4u;
    {
        const bool branch_taken_0x1da1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1C4u;
            // 0x1da1c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1c4) {
            ctx->pc = 0x1DA1E0u;
            goto label_1da1e0;
        }
    }
    ctx->pc = 0x1DA1CCu;
label_1da1cc:
    // 0x1da1cc: 0x0  nop
    ctx->pc = 0x1da1ccu;
    // NOP
label_1da1d0:
    // 0x1da1d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da1d4:
    // 0x1da1d4: 0xc076cfe  jal         func_1DB3F8
label_1da1d8:
    if (ctx->pc == 0x1DA1D8u) {
        ctx->pc = 0x1DA1D8u;
            // 0x1da1d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1DCu;
        goto label_1da1dc;
    }
    ctx->pc = 0x1DA1D4u;
    SET_GPR_U32(ctx, 31, 0x1DA1DCu);
    ctx->pc = 0x1DA1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1D4u;
            // 0x1da1d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB3F8u;
    if (runtime->hasFunction(0x1DB3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1DB3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1DCu; }
        if (ctx->pc != 0x1DA1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB3F8_0x1db3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1DCu; }
        if (ctx->pc != 0x1DA1DCu) { return; }
    }
    ctx->pc = 0x1DA1DCu;
label_1da1dc:
    // 0x1da1dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1da1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da1e0:
    // 0x1da1e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1da1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1da1e4:
    // 0x1da1e4: 0xc076e74  jal         func_1DB9D0
label_1da1e8:
    if (ctx->pc == 0x1DA1E8u) {
        ctx->pc = 0x1DA1E8u;
            // 0x1da1e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1ECu;
        goto label_1da1ec;
    }
    ctx->pc = 0x1DA1E4u;
    SET_GPR_U32(ctx, 31, 0x1DA1ECu);
    ctx->pc = 0x1DA1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1E4u;
            // 0x1da1e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB9D0u;
    if (runtime->hasFunction(0x1DB9D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1ECu; }
        if (ctx->pc != 0x1DA1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB9D0_0x1db9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1ECu; }
        if (ctx->pc != 0x1DA1ECu) { return; }
    }
    ctx->pc = 0x1DA1ECu;
label_1da1ec:
    // 0x1da1ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da1f0:
    // 0x1da1f0: 0x5600ffc9  bnel        $s0, $zero, . + 4 + (-0x37 << 2)
label_1da1f4:
    if (ctx->pc == 0x1DA1F4u) {
        ctx->pc = 0x1DA1F4u;
            // 0x1da1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1F8u;
        goto label_1da1f8;
    }
    ctx->pc = 0x1DA1F0u;
    {
        const bool branch_taken_0x1da1f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da1f0) {
            ctx->pc = 0x1DA1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1F0u;
            // 0x1da1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da118;
        }
    }
    ctx->pc = 0x1DA1F8u;
label_1da1f8:
    // 0x1da1f8: 0xc076896  jal         func_1DA258
label_1da1fc:
    if (ctx->pc == 0x1DA1FCu) {
        ctx->pc = 0x1DA1FCu;
            // 0x1da1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA200u;
        goto label_1da200;
    }
    ctx->pc = 0x1DA1F8u;
    SET_GPR_U32(ctx, 31, 0x1DA200u);
    ctx->pc = 0x1DA1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1F8u;
            // 0x1da1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA258u;
    if (runtime->hasFunction(0x1DA258u)) {
        auto targetFn = runtime->lookupFunction(0x1DA258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA200u; }
        if (ctx->pc != 0x1DA200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA258_0x1da258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA200u; }
        if (ctx->pc != 0x1DA200u) { return; }
    }
    ctx->pc = 0x1DA200u;
label_1da200:
    // 0x1da200: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1da200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da204:
    // 0x1da204: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1da208:
    if (ctx->pc == 0x1DA208u) {
        ctx->pc = 0x1DA208u;
            // 0x1da208: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x1DA20Cu;
        goto label_1da20c;
    }
    ctx->pc = 0x1DA204u;
    {
        const bool branch_taken_0x1da204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA204u;
            // 0x1da208: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da204) {
            ctx->pc = 0x1DA220u;
            goto label_1da220;
        }
    }
    ctx->pc = 0x1DA20Cu;
label_1da20c:
    // 0x1da20c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1da210:
    if (ctx->pc == 0x1DA210u) {
        ctx->pc = 0x1DA210u;
            // 0x1da210: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA214u;
        goto label_1da214;
    }
    ctx->pc = 0x1DA20Cu;
    {
        const bool branch_taken_0x1da20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA20Cu;
            // 0x1da210: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da20c) {
            ctx->pc = 0x1DA224u;
            goto label_1da224;
        }
    }
    ctx->pc = 0x1DA214u;
label_1da214:
    // 0x1da214: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1da214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1da218:
    // 0x1da218: 0x1040ffc9  beqz        $v0, . + 4 + (-0x37 << 2)
label_1da21c:
    if (ctx->pc == 0x1DA21Cu) {
        ctx->pc = 0x1DA21Cu;
            // 0x1da21c: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1DA220u;
        goto label_1da220;
    }
    ctx->pc = 0x1DA218u;
    {
        const bool branch_taken_0x1da218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA218u;
            // 0x1da21c: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da218) {
            ctx->pc = 0x1DA140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da140;
        }
    }
    ctx->pc = 0x1DA220u;
label_1da220:
    // 0x1da220: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1da220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da224:
    // 0x1da224: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1da224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1da228:
    // 0x1da228: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1da228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1da22c:
    // 0x1da22c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1da22cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1da230:
    // 0x1da230: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1da230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1da234:
    // 0x1da234: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1da234u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1da238:
    // 0x1da238: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1da238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1da23c:
    // 0x1da23c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1da23cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1da240:
    // 0x1da240: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1da240u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1da244:
    // 0x1da244: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1da244u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1da248:
    // 0x1da248: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1da248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1da24c:
    // 0x1da24c: 0x3e00008  jr          $ra
label_1da250:
    if (ctx->pc == 0x1DA250u) {
        ctx->pc = 0x1DA250u;
            // 0x1da250: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1DA254u;
        goto label_1da254;
    }
    ctx->pc = 0x1DA24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA24Cu;
            // 0x1da250: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DA254u;
label_1da254:
    // 0x1da254: 0x0  nop
    ctx->pc = 0x1da254u;
    // NOP
    ctx->pc = 0x1da258u;
}
