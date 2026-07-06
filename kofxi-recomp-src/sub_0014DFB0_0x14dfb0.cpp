#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014DFB0
// Address: 0x14dfb0 - 0x14e0e0
void sub_0014DFB0_0x14dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DFB0_0x14dfb0");
#endif

    switch (ctx->pc) {
        case 0x14e004u: goto label_14e004;
        case 0x14e014u: goto label_14e014;
        case 0x14e024u: goto label_14e024;
        case 0x14e080u: goto label_14e080;
        case 0x14e094u: goto label_14e094;
        case 0x14e0acu: goto label_14e0ac;
        case 0x14e0c8u: goto label_14e0c8;
        default: break;
    }

    ctx->pc = 0x14dfb0u;

    // 0x14dfb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14dfb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14dfb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14dfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14dfbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14dfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14dfc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14dfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14dfc4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14dfc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dfc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14dfc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dfcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14dfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14dfd0: 0x112202  srl         $a0, $s1, 8
    ctx->pc = 0x14dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x14dfd4: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x14dfd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x14dfd8: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14DFD8u;
    {
        const bool branch_taken_0x14dfd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14DFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFD8u;
            // 0x14dfdc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dfd8) {
            ctx->pc = 0x14E01Cu;
            goto label_14e01c;
        }
    }
    ctx->pc = 0x14DFE0u;
    // 0x14dfe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dfe4: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14DFE4u;
    {
        const bool branch_taken_0x14dfe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14dfe4) {
            ctx->pc = 0x14E00Cu;
            goto label_14e00c;
        }
    }
    ctx->pc = 0x14DFECu;
    // 0x14dfec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DFECu;
    {
        const bool branch_taken_0x14dfec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dfec) {
            ctx->pc = 0x14DFFCu;
            goto label_14dffc;
        }
    }
    ctx->pc = 0x14DFF4u;
    // 0x14dff4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14DFF4u;
    {
        const bool branch_taken_0x14dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dff4) {
            ctx->pc = 0x14E02Cu;
            goto label_14e02c;
        }
    }
    ctx->pc = 0x14DFFCu;
label_14dffc:
    // 0x14dffc: 0xc0635c4  jal         func_18D710
    ctx->pc = 0x14DFFCu;
    SET_GPR_U32(ctx, 31, 0x14E004u);
    ctx->pc = 0x18D710u;
    if (runtime->hasFunction(0x18D710u)) {
        auto targetFn = runtime->lookupFunction(0x18D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E004u; }
        if (ctx->pc != 0x14E004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D710_0x18d710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E004u; }
        if (ctx->pc != 0x14E004u) { return; }
    }
    ctx->pc = 0x14E004u;
label_14e004:
    // 0x14e004: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14E004u;
    {
        const bool branch_taken_0x14e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e004) {
            ctx->pc = 0x14E034u;
            goto label_14e034;
        }
    }
    ctx->pc = 0x14E00Cu;
label_14e00c:
    // 0x14e00c: 0xc0635c8  jal         func_18D720
    ctx->pc = 0x14E00Cu;
    SET_GPR_U32(ctx, 31, 0x14E014u);
    ctx->pc = 0x18D720u;
    if (runtime->hasFunction(0x18D720u)) {
        auto targetFn = runtime->lookupFunction(0x18D720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E014u; }
        if (ctx->pc != 0x14E014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D720_0x18d720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E014u; }
        if (ctx->pc != 0x14E014u) { return; }
    }
    ctx->pc = 0x14E014u;
label_14e014:
    // 0x14e014: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14E014u;
    {
        const bool branch_taken_0x14e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e014) {
            ctx->pc = 0x14E034u;
            goto label_14e034;
        }
    }
    ctx->pc = 0x14E01Cu;
label_14e01c:
    // 0x14e01c: 0xc0635cc  jal         func_18D730
    ctx->pc = 0x14E01Cu;
    SET_GPR_U32(ctx, 31, 0x14E024u);
    ctx->pc = 0x18D730u;
    if (runtime->hasFunction(0x18D730u)) {
        auto targetFn = runtime->lookupFunction(0x18D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E024u; }
        if (ctx->pc != 0x14E024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D730_0x18d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E024u; }
        if (ctx->pc != 0x14E024u) { return; }
    }
    ctx->pc = 0x14E024u;
label_14e024:
    // 0x14e024: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14E024u;
    {
        const bool branch_taken_0x14e024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e024) {
            ctx->pc = 0x14E034u;
            goto label_14e034;
        }
    }
    ctx->pc = 0x14E02Cu;
label_14e02c:
    // 0x14e02c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x14E02Cu;
    {
        const bool branch_taken_0x14e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E02Cu;
            // 0x14e030: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e02c) {
            ctx->pc = 0x14E0CCu;
            goto label_14e0cc;
        }
    }
    ctx->pc = 0x14E034u;
label_14e034:
    // 0x14e034: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14E034u;
    {
        const bool branch_taken_0x14e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e034) {
            ctx->pc = 0x14E0C8u;
            goto label_14e0c8;
        }
    }
    ctx->pc = 0x14E03Cu;
    // 0x14e03c: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x14e03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14e040: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x14e040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x14e044: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x14e044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14e048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e04c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x14e04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14e050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e054: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14e054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14e058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14e058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e05c: 0x2442ea30  addiu       $v0, $v0, -0x15D0
    ctx->pc = 0x14e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
    // 0x14e060: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x14e060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e064: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x14e064u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x14e068: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14e068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14e06c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14e070: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14e070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x14e074: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e078: 0xc067da4  jal         func_19F690
    ctx->pc = 0x14E078u;
    SET_GPR_U32(ctx, 31, 0x14E080u);
    ctx->pc = 0x14E07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E078u;
            // 0x14e07c: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F690u;
    if (runtime->hasFunction(0x19F690u)) {
        auto targetFn = runtime->lookupFunction(0x19F690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E080u; }
        if (ctx->pc != 0x14E080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F690_0x19f690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E080u; }
        if (ctx->pc != 0x14E080u) { return; }
    }
    ctx->pc = 0x14E080u;
label_14e080:
    // 0x14e080: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x14e080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14e084: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14e084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14e088: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x14e088u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14e08c: 0xc067da8  jal         func_19F6A0
    ctx->pc = 0x14E08Cu;
    SET_GPR_U32(ctx, 31, 0x14E094u);
    ctx->pc = 0x14E090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E08Cu;
            // 0x14e090: 0x2445ff81  addiu       $a1, $v0, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F6A0u;
    if (runtime->hasFunction(0x19F6A0u)) {
        auto targetFn = runtime->lookupFunction(0x19F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E094u; }
        if (ctx->pc != 0x14E094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6A0_0x19f6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E094u; }
        if (ctx->pc != 0x14E094u) { return; }
    }
    ctx->pc = 0x14E094u;
label_14e094:
    // 0x14e094: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E094u;
    {
        const bool branch_taken_0x14e094 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e094) {
            ctx->pc = 0x14E0B4u;
            goto label_14e0b4;
        }
    }
    ctx->pc = 0x14E09Cu;
    // 0x14e09c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14e0a0: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x14e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x14e0a4: 0xc067dac  jal         func_19F6B0
    ctx->pc = 0x14E0A4u;
    SET_GPR_U32(ctx, 31, 0x14E0ACu);
    ctx->pc = 0x14E0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0A4u;
            // 0x14e0a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F6B0u;
    if (runtime->hasFunction(0x19F6B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0ACu; }
        if (ctx->pc != 0x14E0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6B0_0x19f6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0ACu; }
        if (ctx->pc != 0x14E0ACu) { return; }
    }
    ctx->pc = 0x14E0ACu;
label_14e0ac:
    // 0x14e0ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E0ACu;
    {
        const bool branch_taken_0x14e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e0ac) {
            ctx->pc = 0x14E0C8u;
            goto label_14e0c8;
        }
    }
    ctx->pc = 0x14E0B4u;
label_14e0b4:
    // 0x14e0b4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14e0b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14e0bc: 0x8045ec3a  lb          $a1, -0x13C6($v0)
    ctx->pc = 0x14e0bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962234)));
    // 0x14e0c0: 0xc067dac  jal         func_19F6B0
    ctx->pc = 0x14E0C0u;
    SET_GPR_U32(ctx, 31, 0x14E0C8u);
    ctx->pc = 0x14E0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0C0u;
            // 0x14e0c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F6B0u;
    if (runtime->hasFunction(0x19F6B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0C8u; }
        if (ctx->pc != 0x14E0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6B0_0x19f6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0C8u; }
        if (ctx->pc != 0x14E0C8u) { return; }
    }
    ctx->pc = 0x14E0C8u;
label_14e0c8:
    // 0x14e0c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14e0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14e0cc:
    // 0x14e0cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e0d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0D8u;
            // 0x14e0dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E0E0u;
    ctx->pc = 0x14e0e0u;
}
