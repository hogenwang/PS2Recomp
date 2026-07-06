#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F090
// Address: 0x21f090 - 0x21f1c8
void sub_0021F090_0x21f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F090_0x21f090");
#endif

    switch (ctx->pc) {
        case 0x21f0f0u: goto label_21f0f0;
        case 0x21f114u: goto label_21f114;
        case 0x21f128u: goto label_21f128;
        case 0x21f13cu: goto label_21f13c;
        case 0x21f150u: goto label_21f150;
        case 0x21f164u: goto label_21f164;
        case 0x21f190u: goto label_21f190;
        case 0x21f1a4u: goto label_21f1a4;
        case 0x21f1b8u: goto label_21f1b8;
        default: break;
    }

    ctx->pc = 0x21f090u;

    // 0x21f090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21f090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21f094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f098: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21f098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21f09c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21f09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21f0a0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x21f0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x21f0a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21f0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21f0a8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x21f0a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21f0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21f0b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21f0b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21f0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21f0b8: 0x26101ff8  addiu       $s0, $s0, 0x1FF8
    ctx->pc = 0x21f0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8184));
    // 0x21f0bc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x21f0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x21f0c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21f0c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f0c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21f0c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0cc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x21f0ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0d0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21f0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21f0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0d8: 0x24e72008  addiu       $a3, $a3, 0x2008
    ctx->pc = 0x21f0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8200));
    // 0x21f0dc: 0x2405036d  addiu       $a1, $zero, 0x36D
    ctx->pc = 0x21f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 877));
    // 0x21f0e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21f0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f0e4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21f0e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0e8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21F0E8u;
    SET_GPR_U32(ctx, 31, 0x21F0F0u);
    ctx->pc = 0x21F0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F0E8u;
            // 0x21f0ec: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F0F0u; }
        if (ctx->pc != 0x21F0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F0F0u; }
        if (ctx->pc != 0x21F0F0u) { return; }
    }
    ctx->pc = 0x21F0F0u;
label_21f0f0:
    // 0x21f0f0: 0x2631bafd  addiu       $s1, $s1, -0x4503
    ctx->pc = 0x21f0f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949629));
    // 0x21f0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0f8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21f0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21f0fc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x21f0fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f100: 0x24e72018  addiu       $a3, $a3, 0x2018
    ctx->pc = 0x21f100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8216));
    // 0x21f104: 0x2405036e  addiu       $a1, $zero, 0x36E
    ctx->pc = 0x21f104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 878));
    // 0x21f108: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21f108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f10c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21F10Cu;
    SET_GPR_U32(ctx, 31, 0x21F114u);
    ctx->pc = 0x21F110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F10Cu;
            // 0x21f110: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F114u; }
        if (ctx->pc != 0x21F114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F114u; }
        if (ctx->pc != 0x21F114u) { return; }
    }
    ctx->pc = 0x21F114u;
label_21f114:
    // 0x21f114: 0x26101c08  addiu       $s0, $s0, 0x1C08
    ctx->pc = 0x21f114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7176));
    // 0x21f118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f11c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21f11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f120: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21F120u;
    SET_GPR_U32(ctx, 31, 0x21F128u);
    ctx->pc = 0x21F124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F120u;
            // 0x21f124: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F128u; }
        if (ctx->pc != 0x21F128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F128u; }
        if (ctx->pc != 0x21F128u) { return; }
    }
    ctx->pc = 0x21F128u;
label_21f128:
    // 0x21f128: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x21f128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x21f12c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21f12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f134: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21F134u;
    SET_GPR_U32(ctx, 31, 0x21F13Cu);
    ctx->pc = 0x21F138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F134u;
            // 0x21f138: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F13Cu; }
        if (ctx->pc != 0x21F13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F13Cu; }
        if (ctx->pc != 0x21F13Cu) { return; }
    }
    ctx->pc = 0x21F13Cu;
label_21f13c:
    // 0x21f13c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21f13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f140: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f144: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21f144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f148: 0xc089b60  jal         func_226D80
    ctx->pc = 0x21F148u;
    SET_GPR_U32(ctx, 31, 0x21F150u);
    ctx->pc = 0x21F14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F148u;
            // 0x21f14c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226D80u;
    if (runtime->hasFunction(0x226D80u)) {
        auto targetFn = runtime->lookupFunction(0x226D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F150u; }
        if (ctx->pc != 0x21F150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226D80_0x226d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F150u; }
        if (ctx->pc != 0x21F150u) { return; }
    }
    ctx->pc = 0x21F150u;
label_21f150:
    // 0x21f150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21f150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f154: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F154u;
    {
        const bool branch_taken_0x21f154 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21F158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F154u;
            // 0x21f158: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f154) {
            ctx->pc = 0x21F164u;
            goto label_21f164;
        }
    }
    ctx->pc = 0x21F15Cu;
    // 0x21f15c: 0xc089fc0  jal         func_227F00
    ctx->pc = 0x21F15Cu;
    SET_GPR_U32(ctx, 31, 0x21F164u);
    ctx->pc = 0x227F00u;
    if (runtime->hasFunction(0x227F00u)) {
        auto targetFn = runtime->lookupFunction(0x227F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F164u; }
        if (ctx->pc != 0x21F164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227F00_0x227f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F164u; }
        if (ctx->pc != 0x21F164u) { return; }
    }
    ctx->pc = 0x21F164u;
label_21f164:
    // 0x21f164: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21f164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f170: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f174: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21f174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f178: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21f178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f17c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21f17cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f180: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21f180u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f184: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x21f184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21f188: 0x3e00008  jr          $ra
    ctx->pc = 0x21F188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F188u;
            // 0x21f18c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F190u;
label_21f190:
    // 0x21f190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21f198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f19c: 0xc089dda  jal         func_227768
    ctx->pc = 0x21F19Cu;
    SET_GPR_U32(ctx, 31, 0x21F1A4u);
    ctx->pc = 0x21F1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F19Cu;
            // 0x21f1a0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227768u;
    if (runtime->hasFunction(0x227768u)) {
        auto targetFn = runtime->lookupFunction(0x227768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1A4u; }
        if (ctx->pc != 0x21F1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227768_0x227768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1A4u; }
        if (ctx->pc != 0x21F1A4u) { return; }
    }
    ctx->pc = 0x21F1A4u;
label_21f1a4:
    // 0x21f1a4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f1a8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21f1ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21f1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1b0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21F1B0u;
    SET_GPR_U32(ctx, 31, 0x21F1B8u);
    ctx->pc = 0x21F1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1B0u;
            // 0x21f1b4: 0x24842028  addiu       $a0, $a0, 0x2028 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1B8u; }
        if (ctx->pc != 0x21F1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1B8u; }
        if (ctx->pc != 0x21F1B8u) { return; }
    }
    ctx->pc = 0x21F1B8u;
label_21f1b8:
    // 0x21f1b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x21F1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1BCu;
            // 0x21f1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F1C4u;
    // 0x21f1c4: 0x0  nop
    ctx->pc = 0x21f1c4u;
    // NOP
    ctx->pc = 0x21f1c8u;
}
