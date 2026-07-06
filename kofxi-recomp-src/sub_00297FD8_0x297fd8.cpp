#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297FD8
// Address: 0x297fd8 - 0x298198
void sub_00297FD8_0x297fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297FD8_0x297fd8");
#endif

    switch (ctx->pc) {
        case 0x298000u: goto label_298000;
        case 0x298010u: goto label_298010;
        case 0x29801cu: goto label_29801c;
        case 0x298038u: goto label_298038;
        case 0x298048u: goto label_298048;
        case 0x298068u: goto label_298068;
        case 0x298080u: goto label_298080;
        case 0x298088u: goto label_298088;
        case 0x298090u: goto label_298090;
        case 0x2980b0u: goto label_2980b0;
        case 0x298110u: goto label_298110;
        case 0x298128u: goto label_298128;
        case 0x298140u: goto label_298140;
        case 0x298150u: goto label_298150;
        case 0x298164u: goto label_298164;
        default: break;
    }

    ctx->pc = 0x297fd8u;

label_297fd8:
    // 0x297fd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x297fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x297fdc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x297fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x297fe0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x297fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x297fe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x297fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fe8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x297fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x297fec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x297fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ff0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x297ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x297ff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ff8: 0xc0a5af8  jal         func_296BE0
    ctx->pc = 0x297FF8u;
    SET_GPR_U32(ctx, 31, 0x298000u);
    ctx->pc = 0x297FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297FF8u;
            // 0x297ffc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296BE0u;
    if (runtime->hasFunction(0x296BE0u)) {
        auto targetFn = runtime->lookupFunction(0x296BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298000u; }
        if (ctx->pc != 0x298000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296BE0_0x296be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298000u; }
        if (ctx->pc != 0x298000u) { return; }
    }
    ctx->pc = 0x298000u;
label_298000:
    // 0x298000: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x298000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x298004: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x298004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298008: 0xc0a5148  jal         func_294520
    ctx->pc = 0x298008u;
    SET_GPR_U32(ctx, 31, 0x298010u);
    ctx->pc = 0x29800Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298008u;
            // 0x29800c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (runtime->hasFunction(0x294520u)) {
        auto targetFn = runtime->lookupFunction(0x294520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298010u; }
        if (ctx->pc != 0x298010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294520_0x294520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298010u; }
        if (ctx->pc != 0x298010u) { return; }
    }
    ctx->pc = 0x298010u;
label_298010:
    // 0x298010: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x298010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x298014: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x298014u;
    SET_GPR_U32(ctx, 31, 0x29801Cu);
    ctx->pc = 0x298018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298014u;
            // 0x298018: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (runtime->hasFunction(0x296EB8u)) {
        auto targetFn = runtime->lookupFunction(0x296EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29801Cu; }
        if (ctx->pc != 0x29801Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296EB8_0x296eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29801Cu; }
        if (ctx->pc != 0x29801Cu) { return; }
    }
    ctx->pc = 0x29801Cu;
label_29801c:
    // 0x29801c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29801Cu;
    {
        const bool branch_taken_0x29801c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29801c) {
            ctx->pc = 0x298020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29801Cu;
            // 0x298020: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29802Cu;
            goto label_29802c;
        }
    }
    ctx->pc = 0x298024u;
    // 0x298024: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x298024u;
    {
        const bool branch_taken_0x298024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298024u;
            // 0x298028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298024) {
            ctx->pc = 0x29804Cu;
            goto label_29804c;
        }
    }
    ctx->pc = 0x29802Cu;
label_29802c:
    // 0x29802c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29802cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298030: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x298030u;
    SET_GPR_U32(ctx, 31, 0x298038u);
    ctx->pc = 0x298034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298030u;
            // 0x298034: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298038u; }
        if (ctx->pc != 0x298038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298038u; }
        if (ctx->pc != 0x298038u) { return; }
    }
    ctx->pc = 0x298038u;
label_298038:
    // 0x298038: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x298038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29803c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29803cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298040: 0xc0a5148  jal         func_294520
    ctx->pc = 0x298040u;
    SET_GPR_U32(ctx, 31, 0x298048u);
    ctx->pc = 0x298044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298040u;
            // 0x298044: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (runtime->hasFunction(0x294520u)) {
        auto targetFn = runtime->lookupFunction(0x294520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298048u; }
        if (ctx->pc != 0x298048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294520_0x294520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298048u; }
        if (ctx->pc != 0x298048u) { return; }
    }
    ctx->pc = 0x298048u;
label_298048:
    // 0x298048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29804c:
    // 0x29804c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29804cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298050: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x298050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298054: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x298054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298058: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x298058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29805c: 0x3e00008  jr          $ra
    ctx->pc = 0x29805Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29805Cu;
            // 0x298060: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298064u;
    // 0x298064: 0x0  nop
    ctx->pc = 0x298064u;
    // NOP
label_298068:
    // 0x298068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29806c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298078: 0xc0a5b50  jal         func_296D40
    ctx->pc = 0x298078u;
    SET_GPR_U32(ctx, 31, 0x298080u);
    ctx->pc = 0x29807Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298078u;
            // 0x29807c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296D40u;
    if (runtime->hasFunction(0x296D40u)) {
        auto targetFn = runtime->lookupFunction(0x296D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298080u; }
        if (ctx->pc != 0x298080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296D40_0x296d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298080u; }
        if (ctx->pc != 0x298080u) { return; }
    }
    ctx->pc = 0x298080u;
label_298080:
    // 0x298080: 0xc0a5b50  jal         func_296D40
    ctx->pc = 0x298080u;
    SET_GPR_U32(ctx, 31, 0x298088u);
    ctx->pc = 0x298084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298080u;
            // 0x298084: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296D40u;
    if (runtime->hasFunction(0x296D40u)) {
        auto targetFn = runtime->lookupFunction(0x296D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298088u; }
        if (ctx->pc != 0x298088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296D40_0x296d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298088u; }
        if (ctx->pc != 0x298088u) { return; }
    }
    ctx->pc = 0x298088u;
label_298088:
    // 0x298088: 0xc0a5b50  jal         func_296D40
    ctx->pc = 0x298088u;
    SET_GPR_U32(ctx, 31, 0x298090u);
    ctx->pc = 0x29808Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298088u;
            // 0x29808c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296D40u;
    if (runtime->hasFunction(0x296D40u)) {
        auto targetFn = runtime->lookupFunction(0x296D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298090u; }
        if (ctx->pc != 0x298090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296D40_0x296d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298090u; }
        if (ctx->pc != 0x298090u) { return; }
    }
    ctx->pc = 0x298090u;
label_298090:
    // 0x298090: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x298090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x298094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29809c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29809cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980a0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2980a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2980a4: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x2980A4u;
    ctx->pc = 0x2980A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2980A4u;
            // 0x2980a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2980ACu;
    // 0x2980ac: 0x0  nop
    ctx->pc = 0x2980acu;
    // NOP
label_2980b0:
    // 0x2980b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2980b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2980b4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2980b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2980b8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2980b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2980bc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2980bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2980c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2980c4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2980c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980c8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2980c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2980cc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2980ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2980d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2980d4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2980d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2980d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2980dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2980dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2980e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2980e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2980e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2980e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2980ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2980ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980f0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2980f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2980f4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2980f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980f8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2980F8u;
    {
        const bool branch_taken_0x2980f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2980FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2980F8u;
            // 0x2980fc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2980f8) {
            ctx->pc = 0x298108u;
            goto label_298108;
        }
    }
    ctx->pc = 0x298100u;
    // 0x298100: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x298100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x298104: 0x24514880  addiu       $s1, $v0, 0x4880
    ctx->pc = 0x298104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18560));
label_298108:
    // 0x298108: 0xc0a5ef6  jal         func_297BD8
    ctx->pc = 0x298108u;
    SET_GPR_U32(ctx, 31, 0x298110u);
    ctx->pc = 0x297BD8u;
    if (runtime->hasFunction(0x297BD8u)) {
        auto targetFn = runtime->lookupFunction(0x297BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298110u; }
        if (ctx->pc != 0x298110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297BD8_0x297bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298110u; }
        if (ctx->pc != 0x298110u) { return; }
    }
    ctx->pc = 0x298110u;
label_298110:
    // 0x298110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x298114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298118: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x298118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29811c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x29811cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298120: 0xc0a5f8a  jal         func_297E28
    ctx->pc = 0x298120u;
    SET_GPR_U32(ctx, 31, 0x298128u);
    ctx->pc = 0x298124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298120u;
            // 0x298124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297E28u;
    if (runtime->hasFunction(0x297E28u)) {
        auto targetFn = runtime->lookupFunction(0x297E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298128u; }
        if (ctx->pc != 0x298128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297E28_0x297e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298128u; }
        if (ctx->pc != 0x298128u) { return; }
    }
    ctx->pc = 0x298128u;
label_298128:
    // 0x298128: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x298128u;
    {
        const bool branch_taken_0x298128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29812Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298128u;
            // 0x29812c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298128) {
            ctx->pc = 0x298154u;
            goto label_298154;
        }
    }
    ctx->pc = 0x298130u;
    // 0x298130: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x298130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298138: 0xc0a5ff4  jal         func_297FD0
    ctx->pc = 0x298138u;
    SET_GPR_U32(ctx, 31, 0x298140u);
    ctx->pc = 0x29813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298138u;
            // 0x29813c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297FD0u;
    if (runtime->hasFunction(0x297FD0u)) {
        auto targetFn = runtime->lookupFunction(0x297FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298140u; }
        if (ctx->pc != 0x298140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297FD0_0x297fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298140u; }
        if (ctx->pc != 0x298140u) { return; }
    }
    ctx->pc = 0x298140u;
label_298140:
    // 0x298140: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x298140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298148: 0xc0a5ff6  jal         func_297FD8
    ctx->pc = 0x298148u;
    SET_GPR_U32(ctx, 31, 0x298150u);
    ctx->pc = 0x29814Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298148u;
            // 0x29814c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297FD8u;
    goto label_297fd8;
    ctx->pc = 0x298150u;
label_298150:
    // 0x298150: 0x222f00b  movn        $fp, $s1, $v0
    ctx->pc = 0x298150u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 17));
label_298154:
    // 0x298154: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298154u;
    {
        const bool branch_taken_0x298154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x298158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298154u;
            // 0x298158: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298154) {
            ctx->pc = 0x298168u;
            goto label_298168;
        }
    }
    ctx->pc = 0x29815Cu;
    // 0x29815c: 0xc0a5f2a  jal         func_297CA8
    ctx->pc = 0x29815Cu;
    SET_GPR_U32(ctx, 31, 0x298164u);
    ctx->pc = 0x298160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29815Cu;
            // 0x298160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297CA8u;
    if (runtime->hasFunction(0x297CA8u)) {
        auto targetFn = runtime->lookupFunction(0x297CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298164u; }
        if (ctx->pc != 0x298164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297CA8_0x297ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298164u; }
        if (ctx->pc != 0x298164u) { return; }
    }
    ctx->pc = 0x298164u;
label_298164:
    // 0x298164: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x298164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_298168:
    // 0x298168: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x298168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29816c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x29816cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298170: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x298170u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298174: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x298174u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298178: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x298178u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29817c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29817cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298180: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x298180u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298184: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298188: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29818c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29818cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298190: 0x3e00008  jr          $ra
    ctx->pc = 0x298190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298190u;
            // 0x298194: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298198u;
    ctx->pc = 0x298198u;
}
