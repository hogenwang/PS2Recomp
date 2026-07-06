#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F0A0
// Address: 0x15f0a0 - 0x15f340
void sub_0015F0A0_0x15f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F0A0_0x15f0a0");
#endif

    switch (ctx->pc) {
        case 0x15f0c8u: goto label_15f0c8;
        case 0x15f134u: goto label_15f134;
        case 0x15f1d8u: goto label_15f1d8;
        case 0x15f1e0u: goto label_15f1e0;
        case 0x15f22cu: goto label_15f22c;
        case 0x15f24cu: goto label_15f24c;
        case 0x15f254u: goto label_15f254;
        case 0x15f260u: goto label_15f260;
        case 0x15f2e8u: goto label_15f2e8;
        default: break;
    }

    ctx->pc = 0x15f0a0u;

    // 0x15f0a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15f0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15f0a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15f0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15f0a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15f0ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f0b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15f0b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f0b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15f0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0bc: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x15f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x15f0c0: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x15F0C0u;
    SET_GPR_U32(ctx, 31, 0x15F0C8u);
    ctx->pc = 0x15F0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0C0u;
            // 0x15f0c4: 0x26500268  addiu       $s0, $s2, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0C8u; }
        if (ctx->pc != 0x15F0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0C8u; }
        if (ctx->pc != 0x15F0C8u) { return; }
    }
    ctx->pc = 0x15F0C8u;
label_15f0c8:
    // 0x15f0c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15f0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15f0cc: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x15f0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x15f0d0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x15F0D0u;
    {
        const bool branch_taken_0x15f0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f0d0) {
            ctx->pc = 0x15F0D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0D0u;
            // 0x15f0d4: 0x8e430498  lw          $v1, 0x498($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F10Cu;
            goto label_15f10c;
        }
    }
    ctx->pc = 0x15F0D8u;
    // 0x15f0d8: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x15f0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x15f0dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F0DCu;
    {
        const bool branch_taken_0x15f0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f0dc) {
            ctx->pc = 0x15F0E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0DCu;
            // 0x15f0e0: 0x8e430498  lw          $v1, 0x498($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F0FCu;
            goto label_15f0fc;
        }
    }
    ctx->pc = 0x15F0E4u;
    // 0x15f0e4: 0x8e430498  lw          $v1, 0x498($s2)
    ctx->pc = 0x15f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x15f0e8: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x15f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x15f0ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15f0f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f0f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15F0F4u;
    {
        const bool branch_taken_0x15f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0F4u;
            // 0x15f0f8: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0f4) {
            ctx->pc = 0x15F11Cu;
            goto label_15f11c;
        }
    }
    ctx->pc = 0x15F0FCu;
label_15f0fc:
    // 0x15f0fc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x15f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x15f100: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15f100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15f104: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15F104u;
    {
        const bool branch_taken_0x15f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F104u;
            // 0x15f108: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f104) {
            ctx->pc = 0x15F11Cu;
            goto label_15f11c;
        }
    }
    ctx->pc = 0x15F10Cu;
label_15f10c:
    // 0x15f10c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x15f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x15f110: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15f110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15f114: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f118: 0xae420498  sw          $v0, 0x498($s2)
    ctx->pc = 0x15f118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
label_15f11c:
    // 0x15f11c: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x15f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x15f120: 0x30820300  andi        $v0, $a0, 0x300
    ctx->pc = 0x15f120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
    // 0x15f124: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x15F124u;
    {
        const bool branch_taken_0x15f124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f124) {
            ctx->pc = 0x15F128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F124u;
            // 0x15f128: 0x3c0201e5  lui         $v0, 0x1E5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)485 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F18Cu;
            goto label_15f18c;
        }
    }
    ctx->pc = 0x15F12Cu;
    // 0x15f12c: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x15F12Cu;
    SET_GPR_U32(ctx, 31, 0x15F134u);
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F134u; }
        if (ctx->pc != 0x15F134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F134u; }
        if (ctx->pc != 0x15F134u) { return; }
    }
    ctx->pc = 0x15F134u;
label_15f134:
    // 0x15f134: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15f134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15f138: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x15f138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x15f13c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x15F13Cu;
    {
        const bool branch_taken_0x15f13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f13c) {
            ctx->pc = 0x15F140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F13Cu;
            // 0x15f140: 0x8e430498  lw          $v1, 0x498($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F178u;
            goto label_15f178;
        }
    }
    ctx->pc = 0x15F144u;
    // 0x15f144: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x15f144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x15f148: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F148u;
    {
        const bool branch_taken_0x15f148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f148) {
            ctx->pc = 0x15F14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F148u;
            // 0x15f14c: 0x8e430498  lw          $v1, 0x498($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F168u;
            goto label_15f168;
        }
    }
    ctx->pc = 0x15F150u;
    // 0x15f150: 0x8e430498  lw          $v1, 0x498($s2)
    ctx->pc = 0x15f150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x15f154: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x15f154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x15f158: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15f158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15f15c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f160: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x15F160u;
    {
        const bool branch_taken_0x15f160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F160u;
            // 0x15f164: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f160) {
            ctx->pc = 0x15F214u;
            goto label_15f214;
        }
    }
    ctx->pc = 0x15F168u;
label_15f168:
    // 0x15f168: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x15f168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x15f16c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15f16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15f170: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x15F170u;
    {
        const bool branch_taken_0x15f170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F170u;
            // 0x15f174: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f170) {
            ctx->pc = 0x15F214u;
            goto label_15f214;
        }
    }
    ctx->pc = 0x15F178u;
label_15f178:
    // 0x15f178: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x15f178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x15f17c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15f17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15f180: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f184: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15F184u;
    {
        const bool branch_taken_0x15f184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F184u;
            // 0x15f188: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f184) {
            ctx->pc = 0x15F214u;
            goto label_15f214;
        }
    }
    ctx->pc = 0x15F18Cu;
label_15f18c:
    // 0x15f18c: 0x3442bc00  ori         $v0, $v0, 0xBC00
    ctx->pc = 0x15f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48128);
    // 0x15f190: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x15f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15f194: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x15F194u;
    {
        const bool branch_taken_0x15f194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f194) {
            ctx->pc = 0x15F198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F194u;
            // 0x15f198: 0x8e430498  lw          $v1, 0x498($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F204u;
            goto label_15f204;
        }
    }
    ctx->pc = 0x15F19Cu;
    // 0x15f19c: 0x86220020  lh          $v0, 0x20($s1)
    ctx->pc = 0x15f19cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15f1a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F1A0u;
    {
        const bool branch_taken_0x15f1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f1a0) {
            ctx->pc = 0x15F1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1A0u;
            // 0x15f1a4: 0x8e430498  lw          $v1, 0x498($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F1C0u;
            goto label_15f1c0;
        }
    }
    ctx->pc = 0x15F1A8u;
    // 0x15f1a8: 0x8e430498  lw          $v1, 0x498($s2)
    ctx->pc = 0x15f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x15f1ac: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x15f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x15f1b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15f1b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f1b8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15F1B8u;
    {
        const bool branch_taken_0x15f1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1B8u;
            // 0x15f1bc: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1b8) {
            ctx->pc = 0x15F214u;
            goto label_15f214;
        }
    }
    ctx->pc = 0x15F1C0u;
label_15f1c0:
    // 0x15f1c0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x15f1c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f1c8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x15F1C8u;
    {
        const bool branch_taken_0x15f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f1c8) {
            ctx->pc = 0x15F1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1C8u;
            // 0x15f1cc: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F218u;
            goto label_15f218;
        }
    }
    ctx->pc = 0x15F1D0u;
    // 0x15f1d0: 0xc062804  jal         func_18A010
    ctx->pc = 0x15F1D0u;
    SET_GPR_U32(ctx, 31, 0x15F1D8u);
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1D8u; }
        if (ctx->pc != 0x15F1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1D8u; }
        if (ctx->pc != 0x15F1D8u) { return; }
    }
    ctx->pc = 0x15F1D8u;
label_15f1d8:
    // 0x15f1d8: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x15F1D8u;
    SET_GPR_U32(ctx, 31, 0x15F1E0u);
    ctx->pc = 0x15F1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1D8u;
            // 0x15f1dc: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1E0u; }
        if (ctx->pc != 0x15F1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1E0u; }
        if (ctx->pc != 0x15F1E0u) { return; }
    }
    ctx->pc = 0x15F1E0u;
label_15f1e0:
    // 0x15f1e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15f1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15f1e4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15f1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15f1e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15F1E8u;
    {
        const bool branch_taken_0x15f1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f1e8) {
            ctx->pc = 0x15F214u;
            goto label_15f214;
        }
    }
    ctx->pc = 0x15F1F0u;
    // 0x15f1f0: 0x8e430498  lw          $v1, 0x498($s2)
    ctx->pc = 0x15f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x15f1f4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x15f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x15f1f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15f1fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15F1FCu;
    {
        const bool branch_taken_0x15f1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1FCu;
            // 0x15f200: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1fc) {
            ctx->pc = 0x15F214u;
            goto label_15f214;
        }
    }
    ctx->pc = 0x15F204u;
label_15f204:
    // 0x15f204: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x15f204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x15f208: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15f20c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f210: 0xae420498  sw          $v0, 0x498($s2)
    ctx->pc = 0x15f210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
label_15f214:
    // 0x15f214: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x15f214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_15f218:
    // 0x15f218: 0x30820300  andi        $v0, $a0, 0x300
    ctx->pc = 0x15f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
    // 0x15f21c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F21Cu;
    {
        const bool branch_taken_0x15f21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f21c) {
            ctx->pc = 0x15F220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F21Cu;
            // 0x15f220: 0x3c0201e5  lui         $v0, 0x1E5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)485 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F234u;
            goto label_15f234;
        }
    }
    ctx->pc = 0x15F224u;
    // 0x15f224: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x15F224u;
    SET_GPR_U32(ctx, 31, 0x15F22Cu);
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F22Cu; }
        if (ctx->pc != 0x15F22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F22Cu; }
        if (ctx->pc != 0x15F22Cu) { return; }
    }
    ctx->pc = 0x15F22Cu;
label_15f22c:
    // 0x15f22c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15F22Cu;
    {
        const bool branch_taken_0x15f22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F22Cu;
            // 0x15f230: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f22c) {
            ctx->pc = 0x15F268u;
            goto label_15f268;
        }
    }
    ctx->pc = 0x15F234u;
label_15f234:
    // 0x15f234: 0x3442bc00  ori         $v0, $v0, 0xBC00
    ctx->pc = 0x15f234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48128);
    // 0x15f238: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x15f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15f23c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x15F23Cu;
    {
        const bool branch_taken_0x15f23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f23c) {
            ctx->pc = 0x15F240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F23Cu;
            // 0x15f240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F268u;
            goto label_15f268;
        }
    }
    ctx->pc = 0x15F244u;
    // 0x15f244: 0xc062804  jal         func_18A010
    ctx->pc = 0x15F244u;
    SET_GPR_U32(ctx, 31, 0x15F24Cu);
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F24Cu; }
        if (ctx->pc != 0x15F24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F24Cu; }
        if (ctx->pc != 0x15F24Cu) { return; }
    }
    ctx->pc = 0x15F24Cu;
label_15f24c:
    // 0x15f24c: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x15F24Cu;
    SET_GPR_U32(ctx, 31, 0x15F254u);
    ctx->pc = 0x15F250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F24Cu;
            // 0x15f250: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F254u; }
        if (ctx->pc != 0x15F254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F254u; }
        if (ctx->pc != 0x15F254u) { return; }
    }
    ctx->pc = 0x15F254u;
label_15f254:
    // 0x15f254: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x15f254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x15f258: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x15F258u;
    SET_GPR_U32(ctx, 31, 0x15F260u);
    ctx->pc = 0x15F25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F258u;
            // 0x15f25c: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F260u; }
        if (ctx->pc != 0x15F260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F260u; }
        if (ctx->pc != 0x15F260u) { return; }
    }
    ctx->pc = 0x15F260u;
label_15f260:
    // 0x15f260: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x15f260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x15f264: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x15f264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15f268:
    // 0x15f268: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15f268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15f26c: 0x2403cfff  addiu       $v1, $zero, -0x3001
    ctx->pc = 0x15f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x15f270: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x15f270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x15f274: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15f274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15f278: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15f278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x15f27c: 0x8e430498  lw          $v1, 0x498($s2)
    ctx->pc = 0x15f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x15f280: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f284: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x15F284u;
    {
        const bool branch_taken_0x15f284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f284) {
            ctx->pc = 0x15F288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F284u;
            // 0x15f288: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F2B0u;
            goto label_15f2b0;
        }
    }
    ctx->pc = 0x15F28Cu;
    // 0x15f28c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x15f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x15f290: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x15f290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x15f294: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F294u;
    {
        const bool branch_taken_0x15f294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f294) {
            ctx->pc = 0x15F2ACu;
            goto label_15f2ac;
        }
    }
    ctx->pc = 0x15F29Cu;
    // 0x15f29c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15f2a0: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x15f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x15f2a4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x15F2A4u;
    {
        const bool branch_taken_0x15f2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2A4u;
            // 0x15f2a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2a4) {
            ctx->pc = 0x15F318u;
            goto label_15f318;
        }
    }
    ctx->pc = 0x15F2ACu;
label_15f2ac:
    // 0x15f2ac: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x15f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_15f2b0:
    // 0x15f2b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f2b4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x15F2B4u;
    {
        const bool branch_taken_0x15f2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2b4) {
            ctx->pc = 0x15F2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2B4u;
            // 0x15f2b8: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F2E0u;
            goto label_15f2e0;
        }
    }
    ctx->pc = 0x15F2BCu;
    // 0x15f2bc: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x15f2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x15f2c0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15f2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15f2c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F2C4u;
    {
        const bool branch_taken_0x15f2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2c4) {
            ctx->pc = 0x15F2DCu;
            goto label_15f2dc;
        }
    }
    ctx->pc = 0x15F2CCu;
    // 0x15f2cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15f2d0: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x15f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x15f2d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15F2D4u;
    {
        const bool branch_taken_0x15f2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2D4u;
            // 0x15f2d8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2d4) {
            ctx->pc = 0x15F318u;
            goto label_15f318;
        }
    }
    ctx->pc = 0x15F2DCu;
label_15f2dc:
    // 0x15f2dc: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x15f2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_15f2e0:
    // 0x15f2e0: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x15F2E0u;
    SET_GPR_U32(ctx, 31, 0x15F2E8u);
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2E8u; }
        if (ctx->pc != 0x15F2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2E8u; }
        if (ctx->pc != 0x15F2E8u) { return; }
    }
    ctx->pc = 0x15F2E8u;
label_15f2e8:
    // 0x15f2e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15f2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15f2ec: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15f2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x15f2f0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x15F2F0u;
    {
        const bool branch_taken_0x15f2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2f0) {
            ctx->pc = 0x15F2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2F0u;
            // 0x15f2f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F31Cu;
            goto label_15f31c;
        }
    }
    ctx->pc = 0x15F2F8u;
    // 0x15f2f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15f2fc: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x15f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x15f300: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x15f300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15f304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F304u;
    {
        const bool branch_taken_0x15f304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f304) {
            ctx->pc = 0x15F318u;
            goto label_15f318;
        }
    }
    ctx->pc = 0x15F30Cu;
    // 0x15f30c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15f310: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x15f310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x15f314: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x15f314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_15f318:
    // 0x15f318: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15f318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15f31c:
    // 0x15f31c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f32c: 0x3e00008  jr          $ra
    ctx->pc = 0x15F32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F32Cu;
            // 0x15f330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F334u;
    // 0x15f334: 0x0  nop
    ctx->pc = 0x15f334u;
    // NOP
    // 0x15f338: 0x0  nop
    ctx->pc = 0x15f338u;
    // NOP
    // 0x15f33c: 0x0  nop
    ctx->pc = 0x15f33cu;
    // NOP
    ctx->pc = 0x15f340u;
}
