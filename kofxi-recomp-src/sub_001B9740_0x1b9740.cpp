#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9740
// Address: 0x1b9740 - 0x1b9a70
void sub_001B9740_0x1b9740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9740_0x1b9740");
#endif

    switch (ctx->pc) {
        case 0x1b9790u: goto label_1b9790;
        case 0x1b97acu: goto label_1b97ac;
        case 0x1b9820u: goto label_1b9820;
        case 0x1b98ccu: goto label_1b98cc;
        case 0x1b98d4u: goto label_1b98d4;
        case 0x1b996cu: goto label_1b996c;
        case 0x1b9978u: goto label_1b9978;
        case 0x1b9984u: goto label_1b9984;
        case 0x1b9a38u: goto label_1b9a38;
        case 0x1b9a4cu: goto label_1b9a4c;
        case 0x1b9a54u: goto label_1b9a54;
        case 0x1b9a5cu: goto label_1b9a5c;
        default: break;
    }

    ctx->pc = 0x1b9740u;

label_1b9740:
    // 0x1b9740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b9740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b9744: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b9744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b9748: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b9748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b974c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b974cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1b9750: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b9750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9754: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1b9754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1b9758: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b9758u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b975c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b9760: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b9760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b9764: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1b9764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1b9768: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1b9768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1b976c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B976Cu;
    {
        const bool branch_taken_0x1b976c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B976Cu;
            // 0x1b9770: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b976c) {
            ctx->pc = 0x1B9784u;
            goto label_1b9784;
        }
    }
    ctx->pc = 0x1B9774u;
    // 0x1b9774: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9774u;
    {
        const bool branch_taken_0x1b9774 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9774) {
            ctx->pc = 0x1B9778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9774u;
            // 0x1b9778: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9788u;
            goto label_1b9788;
        }
    }
    ctx->pc = 0x1B977Cu;
    // 0x1b977c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B977Cu;
    {
        const bool branch_taken_0x1b977c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B977Cu;
            // 0x1b9780: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b977c) {
            ctx->pc = 0x1B9798u;
            goto label_1b9798;
        }
    }
    ctx->pc = 0x1B9784u;
label_1b9784:
    // 0x1b9784: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b9784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1b9788:
    // 0x1b9788: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B9788u;
    SET_GPR_U32(ctx, 31, 0x1B9790u);
    ctx->pc = 0x1B978Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9788u;
            // 0x1b978c: 0x24848120  addiu       $a0, $a0, -0x7EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9790u; }
        if (ctx->pc != 0x1B9790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9790u; }
        if (ctx->pc != 0x1B9790u) { return; }
    }
    ctx->pc = 0x1B9790u;
label_1b9790:
    // 0x1b9790: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1B9790u;
    {
        const bool branch_taken_0x1b9790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9790u;
            // 0x1b9794: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9790) {
            ctx->pc = 0x1B9A10u;
            goto label_1b9a10;
        }
    }
    ctx->pc = 0x1B9798u;
label_1b9798:
    // 0x1b9798: 0x8e02c364  lw          $v0, -0x3C9C($s0)
    ctx->pc = 0x1b9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951780)));
    // 0x1b979c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B979Cu;
    {
        const bool branch_taken_0x1b979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B97A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B979Cu;
            // 0x1b97a0: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b979c) {
            ctx->pc = 0x1B97B8u;
            goto label_1b97b8;
        }
    }
    ctx->pc = 0x1B97A4u;
    // 0x1b97a4: 0xc06e56a  jal         func_1B95A8
    ctx->pc = 0x1B97A4u;
    SET_GPR_U32(ctx, 31, 0x1B97ACu);
    ctx->pc = 0x1B95A8u;
    if (runtime->hasFunction(0x1B95A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B95A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97ACu; }
        if (ctx->pc != 0x1B97ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B95A8_0x1b95a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97ACu; }
        if (ctx->pc != 0x1B97ACu) { return; }
    }
    ctx->pc = 0x1B97ACu;
label_1b97ac:
    // 0x1b97ac: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1B97ACu;
    {
        const bool branch_taken_0x1b97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97ACu;
            // 0x1b97b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97ac) {
            ctx->pc = 0x1B9A10u;
            goto label_1b9a10;
        }
    }
    ctx->pc = 0x1B97B4u;
    // 0x1b97b4: 0x0  nop
    ctx->pc = 0x1b97b4u;
    // NOP
label_1b97b8:
    // 0x1b97b8: 0xae20c3b4  sw          $zero, -0x3C4C($s1)
    ctx->pc = 0x1b97b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951860), GPR_U32(ctx, 0));
    // 0x1b97bc: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1b97bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1b97c0: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x1b97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1b97c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b97c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b97c8: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1B97C8u;
    {
        const bool branch_taken_0x1b97c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97C8u;
            // 0x1b97cc: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97c8) {
            ctx->pc = 0x1B9950u;
            goto label_1b9950;
        }
    }
    ctx->pc = 0x1B97D0u;
    // 0x1b97d0: 0x82420072  lb          $v0, 0x72($s2)
    ctx->pc = 0x1b97d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x1b97d4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B97D4u;
    {
        const bool branch_taken_0x1b97d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b97d4) {
            ctx->pc = 0x1B97D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97D4u;
            // 0x1b97d8: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9808u;
            goto label_1b9808;
        }
    }
    ctx->pc = 0x1B97DCu;
    // 0x1b97dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b97e0: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1b97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b97e4: 0x8c432360  lw          $v1, 0x2360($v0)
    ctx->pc = 0x1b97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9056)));
    // 0x1b97e8: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x1b97e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b97ec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b97f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b97f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b97f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b97fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9804: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b9804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b9808:
    // 0x1b9808: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1b9808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1b980c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b980cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9810: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1b9810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b9814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9818: 0xc06e56a  jal         func_1B95A8
    ctx->pc = 0x1B9818u;
    SET_GPR_U32(ctx, 31, 0x1B9820u);
    ctx->pc = 0x1B981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9818u;
            // 0x1b981c: 0x3c160038  lui         $s6, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95A8u;
    if (runtime->hasFunction(0x1B95A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B95A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9820u; }
        if (ctx->pc != 0x1B9820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B95A8_0x1b95a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9820u; }
        if (ctx->pc != 0x1B9820u) { return; }
    }
    ctx->pc = 0x1B9820u;
label_1b9820:
    // 0x1b9820: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1b9820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9824: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b9824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b9828: 0x26d4c3b0  addiu       $s4, $s6, -0x3C50
    ctx->pc = 0x1b9828u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951856));
    // 0x1b982c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b982cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9830: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1b9830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b9834: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1b9834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b9838: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b9838u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b983c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b983cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9840: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1b9840u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9844: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9848: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1b9848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1b984c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b984cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b9850: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1b9850u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9854: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9858: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1b9858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1b985c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b985cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b9860: 0x0  nop
    ctx->pc = 0x1b9860u;
    // NOP
    // 0x1b9864: 0x0  nop
    ctx->pc = 0x1b9864u;
    // NOP
    // 0x1b9868: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1b9868u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1b986c: 0x0  nop
    ctx->pc = 0x1b986cu;
    // NOP
    // 0x1b9870: 0x0  nop
    ctx->pc = 0x1b9870u;
    // NOP
    // 0x1b9874: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1b9874u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1b9878: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b987c: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x1b987cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1b9880: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1b9880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9884: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9884u;
    {
        const bool branch_taken_0x1b9884 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9884u;
            // 0x1b9888: 0xe621c3b4  swc1        $f1, -0x3C4C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294951860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9884) {
            ctx->pc = 0x1B98A0u;
            goto label_1b98a0;
        }
    }
    ctx->pc = 0x1B988Cu;
    // 0x1b988c: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x1b988cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x1b9890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9898: 0x45020057  bc1fl       . + 4 + (0x57 << 2)
    ctx->pc = 0x1B9898u;
    {
        const bool branch_taken_0x1b9898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9898) {
            ctx->pc = 0x1B989Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9898u;
            // 0x1b989c: 0x8e420088  lw          $v0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B99F8u;
            goto label_1b99f8;
        }
    }
    ctx->pc = 0x1B98A0u;
label_1b98a0:
    // 0x1b98a0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b98a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b98a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b98a8: 0x8c43c388  lw          $v1, -0x3C78($v0)
    ctx->pc = 0x1b98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951816)));
    // 0x1b98ac: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B98ACu;
    {
        const bool branch_taken_0x1b98ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B98B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98ACu;
            // 0x1b98b0: 0x2610c364  addiu       $s0, $s0, -0x3C9C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951780));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98ac) {
            ctx->pc = 0x1B98E0u;
            goto label_1b98e0;
        }
    }
    ctx->pc = 0x1B98B4u;
    // 0x1b98b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b98b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98b8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1b98b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b98bc: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1b98bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b98c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b98c4: 0xc06e5d0  jal         func_1B9740
    ctx->pc = 0x1B98C4u;
    SET_GPR_U32(ctx, 31, 0x1B98CCu);
    ctx->pc = 0x1B98C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98C4u;
            // 0x1b98c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9740u;
    goto label_1b9740;
    ctx->pc = 0x1B98CCu;
label_1b98cc:
    // 0x1b98cc: 0xc06e5b6  jal         func_1B96D8
    ctx->pc = 0x1B98CCu;
    SET_GPR_U32(ctx, 31, 0x1B98D4u);
    ctx->pc = 0x1B98D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98CCu;
            // 0x1b98d0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96D8u;
    if (runtime->hasFunction(0x1B96D8u)) {
        auto targetFn = runtime->lookupFunction(0x1B96D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98D4u; }
        if (ctx->pc != 0x1B98D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B96D8_0x1b96d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98D4u; }
        if (ctx->pc != 0x1B98D4u) { return; }
    }
    ctx->pc = 0x1B98D4u;
label_1b98d4:
    // 0x1b98d4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1b98d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b98d8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b98d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b98dc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1b98dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b98e0:
    // 0x1b98e0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1b98e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b98e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b98e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b98e8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1b98e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1b98ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b98ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b98f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b98f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b98f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b98f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b98f8: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1b98f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b98fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b98fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9900: 0x0  nop
    ctx->pc = 0x1b9900u;
    // NOP
    // 0x1b9904: 0x0  nop
    ctx->pc = 0x1b9904u;
    // NOP
    // 0x1b9908: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b9908u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1b990c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b990cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b9910: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1b9910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9914: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b9918: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b9918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b991c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1B991Cu;
    {
        const bool branch_taken_0x1b991c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b991c) {
            ctx->pc = 0x1B9920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B991Cu;
            // 0x1b9920: 0xae43009c  sw          $v1, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B993Cu;
            goto label_1b993c;
        }
    }
    ctx->pc = 0x1B9924u;
    // 0x1b9924: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b9924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b9928: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b9928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b992c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b992cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b9930: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b9930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b9934: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b9934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b9938: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x1b9938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_1b993c:
    // 0x1b993c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b993cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b9940: 0x8c622360  lw          $v0, 0x2360($v1)
    ctx->pc = 0x1b9940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9056)));
    // 0x1b9944: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1B9944u;
    {
        const bool branch_taken_0x1b9944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9944u;
            // 0x1b9948: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9944) {
            ctx->pc = 0x1B99F4u;
            goto label_1b99f4;
        }
    }
    ctx->pc = 0x1B994Cu;
    // 0x1b994c: 0x0  nop
    ctx->pc = 0x1b994cu;
    // NOP
label_1b9950:
    // 0x1b9950: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b9950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b9954: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1b9954u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1b9958: 0x54430025  bnel        $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B9958u;
    {
        const bool branch_taken_0x1b9958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9958) {
            ctx->pc = 0x1B995Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9958u;
            // 0x1b995c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B99F0u;
            goto label_1b99f0;
        }
    }
    ctx->pc = 0x1B9960u;
    // 0x1b9960: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1b9960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b9964: 0xc06d8b4  jal         func_1B62D0
    ctx->pc = 0x1B9964u;
    SET_GPR_U32(ctx, 31, 0x1B996Cu);
    ctx->pc = 0x1B9968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9964u;
            // 0x1b9968: 0x3c160038  lui         $s6, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B62D0u;
    if (runtime->hasFunction(0x1B62D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B62D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B996Cu; }
        if (ctx->pc != 0x1B996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B62D0_0x1b62d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B996Cu; }
        if (ctx->pc != 0x1B996Cu) { return; }
    }
    ctx->pc = 0x1B996Cu;
label_1b996c:
    // 0x1b996c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1b996cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b9970: 0xc06d896  jal         func_1B6258
    ctx->pc = 0x1B9970u;
    SET_GPR_U32(ctx, 31, 0x1B9978u);
    ctx->pc = 0x1B9974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9970u;
            // 0x1b9974: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6258u;
    if (runtime->hasFunction(0x1B6258u)) {
        auto targetFn = runtime->lookupFunction(0x1B6258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9978u; }
        if (ctx->pc != 0x1B9978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6258_0x1b6258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9978u; }
        if (ctx->pc != 0x1B9978u) { return; }
    }
    ctx->pc = 0x1B9978u;
label_1b9978:
    // 0x1b9978: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1b9978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b997c: 0xc06d8a2  jal         func_1B6288
    ctx->pc = 0x1B997Cu;
    SET_GPR_U32(ctx, 31, 0x1B9984u);
    ctx->pc = 0x1B9980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B997Cu;
            // 0x1b9980: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6288u;
    if (runtime->hasFunction(0x1B6288u)) {
        auto targetFn = runtime->lookupFunction(0x1B6288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9984u; }
        if (ctx->pc != 0x1B9984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6288_0x1b6288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9984u; }
        if (ctx->pc != 0x1B9984u) { return; }
    }
    ctx->pc = 0x1B9984u;
label_1b9984:
    // 0x1b9984: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1b9984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b9988: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b9988u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b998c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B998Cu;
    {
        const bool branch_taken_0x1b998c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b998c) {
            ctx->pc = 0x1B9990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B998Cu;
            // 0x1b9990: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9994u;
            goto label_1b9994;
        }
    }
    ctx->pc = 0x1B9994u;
label_1b9994:
    // 0x1b9994: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9998: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1b9998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b999c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b999cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b99a0: 0xc6c1c3b0  lwc1        $f1, -0x3C50($s6)
    ctx->pc = 0x1b99a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294951856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b99a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b99a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b99a8: 0x1812  mflo        $v1
    ctx->pc = 0x1b99a8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1b99ac: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1b99acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b99b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b99b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b99b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b99b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b99b8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1b99b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1b99bc: 0x0  nop
    ctx->pc = 0x1b99bcu;
    // NOP
    // 0x1b99c0: 0x0  nop
    ctx->pc = 0x1b99c0u;
    // NOP
    // 0x1b99c4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b99c4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1b99c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b99c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b99cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b99ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b99d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b99d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b99d4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b99d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1b99d8: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1b99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b99dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b99e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b99e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B99E4u;
    {
        const bool branch_taken_0x1b99e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B99E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99E4u;
            // 0x1b99e8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99e4) {
            ctx->pc = 0x1B99F4u;
            goto label_1b99f4;
        }
    }
    ctx->pc = 0x1B99ECu;
    // 0x1b99ec: 0x0  nop
    ctx->pc = 0x1b99ecu;
    // NOP
label_1b99f0:
    // 0x1b99f0: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x1b99f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
label_1b99f4:
    // 0x1b99f4: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1b99f8:
    // 0x1b99f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b99fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b9a00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1b9a00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1b9a04: 0x8ec2c3b0  lw          $v0, -0x3C50($s6)
    ctx->pc = 0x1b9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951856)));
    // 0x1b9a08: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1b9a08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1b9a0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b9a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9a10:
    // 0x1b9a10: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b9a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9a14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b9a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9a18: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b9a18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9a1c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1b9a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9a20: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1b9a20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b9a24: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1b9a24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9a28: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b9a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b9a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A2Cu;
            // 0x1b9a30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9A34u;
    // 0x1b9a34: 0x0  nop
    ctx->pc = 0x1b9a34u;
    // NOP
label_1b9a38:
    // 0x1b9a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9a40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b9a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b9a44: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B9A44u;
    SET_GPR_U32(ctx, 31, 0x1B9A4Cu);
    ctx->pc = 0x1B9A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A44u;
            // 0x1b9a48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A4Cu; }
        if (ctx->pc != 0x1B9A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A4Cu; }
        if (ctx->pc != 0x1B9A4Cu) { return; }
    }
    ctx->pc = 0x1B9A4Cu;
label_1b9a4c:
    // 0x1b9a4c: 0xc06e69c  jal         func_1B9A70
    ctx->pc = 0x1B9A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B9A54u);
    ctx->pc = 0x1B9A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A4Cu;
            // 0x1b9a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9A70u;
    if (runtime->hasFunction(0x1B9A70u)) {
        auto targetFn = runtime->lookupFunction(0x1B9A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A54u; }
        if (ctx->pc != 0x1B9A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9A70_0x1b9a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A54u; }
        if (ctx->pc != 0x1B9A54u) { return; }
    }
    ctx->pc = 0x1B9A54u;
label_1b9a54:
    // 0x1b9a54: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B9A54u;
    SET_GPR_U32(ctx, 31, 0x1B9A5Cu);
    ctx->pc = 0x1B9A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A54u;
            // 0x1b9a58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A5Cu; }
        if (ctx->pc != 0x1B9A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A5Cu; }
        if (ctx->pc != 0x1B9A5Cu) { return; }
    }
    ctx->pc = 0x1B9A5Cu;
label_1b9a5c:
    // 0x1b9a5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b9a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9a60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A68u;
            // 0x1b9a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9A70u;
    ctx->pc = 0x1b9a70u;
}
