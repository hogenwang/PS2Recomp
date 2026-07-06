#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5028
// Address: 0x2f5028 - 0x2f5130
void sub_002F5028_0x2f5028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5028_0x2f5028");
#endif

    switch (ctx->pc) {
        case 0x2f504cu: goto label_2f504c;
        case 0x2f5060u: goto label_2f5060;
        case 0x2f507cu: goto label_2f507c;
        case 0x2f5098u: goto label_2f5098;
        case 0x2f50b4u: goto label_2f50b4;
        case 0x2f50d8u: goto label_2f50d8;
        case 0x2f50f4u: goto label_2f50f4;
        case 0x2f5118u: goto label_2f5118;
        default: break;
    }

    ctx->pc = 0x2f5028u;

    // 0x2f5028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f5028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f502c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f502cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5030: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f5030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f5034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5038: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F5038u;
    {
        const bool branch_taken_0x2f5038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5038u;
            // 0x2f503c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5038) {
            ctx->pc = 0x2F5118u;
            goto label_2f5118;
        }
    }
    ctx->pc = 0x2F5040u;
    // 0x2f5040: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f5040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5044: 0xc0be428  jal         func_2F90A0
    ctx->pc = 0x2F5044u;
    SET_GPR_U32(ctx, 31, 0x2F504Cu);
    ctx->pc = 0x2F5048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5044u;
            // 0x2f5048: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F90A0u;
    if (runtime->hasFunction(0x2F90A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F90A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F504Cu; }
        if (ctx->pc != 0x2F504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F90A0_0x2f90a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F504Cu; }
        if (ctx->pc != 0x2F504Cu) { return; }
    }
    ctx->pc = 0x2F504Cu;
label_2f504c:
    // 0x2f504c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f504cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5050: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F5050u;
    {
        const bool branch_taken_0x2f5050 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5050u;
            // 0x2f5054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5050) {
            ctx->pc = 0x2F511Cu;
            goto label_2f511c;
        }
    }
    ctx->pc = 0x2F5058u;
    // 0x2f5058: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F5058u;
    SET_GPR_U32(ctx, 31, 0x2F5060u);
    ctx->pc = 0x2F505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5058u;
            // 0x2f505c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (runtime->hasFunction(0x2F6510u)) {
        auto targetFn = runtime->lookupFunction(0x2F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5060u; }
        if (ctx->pc != 0x2F5060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6510_0x2f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5060u; }
        if (ctx->pc != 0x2F5060u) { return; }
    }
    ctx->pc = 0x2F5060u;
label_2f5060:
    // 0x2f5060: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5060u;
    {
        const bool branch_taken_0x2f5060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5060u;
            // 0x2f5064: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5060) {
            ctx->pc = 0x2F5074u;
            goto label_2f5074;
        }
    }
    ctx->pc = 0x2F5068u;
    // 0x2f5068: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f5068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f506c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F506Cu;
    {
        const bool branch_taken_0x2f506c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f506c) {
            ctx->pc = 0x2F5110u;
            goto label_2f5110;
        }
    }
    ctx->pc = 0x2F5074u;
label_2f5074:
    // 0x2f5074: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F5074u;
    SET_GPR_U32(ctx, 31, 0x2F507Cu);
    ctx->pc = 0x2F5078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5074u;
            // 0x2f5078: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (runtime->hasFunction(0x2F6510u)) {
        auto targetFn = runtime->lookupFunction(0x2F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F507Cu; }
        if (ctx->pc != 0x2F507Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6510_0x2f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F507Cu; }
        if (ctx->pc != 0x2F507Cu) { return; }
    }
    ctx->pc = 0x2F507Cu;
label_2f507c:
    // 0x2f507c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F507Cu;
    {
        const bool branch_taken_0x2f507c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F507Cu;
            // 0x2f5080: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f507c) {
            ctx->pc = 0x2F5090u;
            goto label_2f5090;
        }
    }
    ctx->pc = 0x2F5084u;
    // 0x2f5084: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f5084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f5088: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F5088u;
    {
        const bool branch_taken_0x2f5088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5088) {
            ctx->pc = 0x2F5110u;
            goto label_2f5110;
        }
    }
    ctx->pc = 0x2F5090u;
label_2f5090:
    // 0x2f5090: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F5090u;
    SET_GPR_U32(ctx, 31, 0x2F5098u);
    ctx->pc = 0x2F5094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5090u;
            // 0x2f5094: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (runtime->hasFunction(0x2F6510u)) {
        auto targetFn = runtime->lookupFunction(0x2F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5098u; }
        if (ctx->pc != 0x2F5098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6510_0x2f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5098u; }
        if (ctx->pc != 0x2F5098u) { return; }
    }
    ctx->pc = 0x2F5098u;
label_2f5098:
    // 0x2f5098: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5098u;
    {
        const bool branch_taken_0x2f5098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F509Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5098u;
            // 0x2f509c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5098) {
            ctx->pc = 0x2F50ACu;
            goto label_2f50ac;
        }
    }
    ctx->pc = 0x2F50A0u;
    // 0x2f50a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f50a4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F50A4u;
    {
        const bool branch_taken_0x2f50a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f50a4) {
            ctx->pc = 0x2F5110u;
            goto label_2f5110;
        }
    }
    ctx->pc = 0x2F50ACu;
label_2f50ac:
    // 0x2f50ac: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F50ACu;
    SET_GPR_U32(ctx, 31, 0x2F50B4u);
    ctx->pc = 0x2F50B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50ACu;
            // 0x2f50b0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (runtime->hasFunction(0x2F6510u)) {
        auto targetFn = runtime->lookupFunction(0x2F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50B4u; }
        if (ctx->pc != 0x2F50B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6510_0x2f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50B4u; }
        if (ctx->pc != 0x2F50B4u) { return; }
    }
    ctx->pc = 0x2F50B4u;
label_2f50b4:
    // 0x2f50b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F50B4u;
    {
        const bool branch_taken_0x2f50b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F50B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50B4u;
            // 0x2f50b8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50b4) {
            ctx->pc = 0x2F50C8u;
            goto label_2f50c8;
        }
    }
    ctx->pc = 0x2F50BCu;
    // 0x2f50bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f50c0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F50C0u;
    {
        const bool branch_taken_0x2f50c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f50c0) {
            ctx->pc = 0x2F5110u;
            goto label_2f5110;
        }
    }
    ctx->pc = 0x2F50C8u;
label_2f50c8:
    // 0x2f50c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2f50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f50cc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2f50ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f50d0: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F50D0u;
    SET_GPR_U32(ctx, 31, 0x2F50D8u);
    ctx->pc = 0x2F50D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50D0u;
            // 0x2f50d4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (runtime->hasFunction(0x2F6510u)) {
        auto targetFn = runtime->lookupFunction(0x2F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50D8u; }
        if (ctx->pc != 0x2F50D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6510_0x2f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50D8u; }
        if (ctx->pc != 0x2F50D8u) { return; }
    }
    ctx->pc = 0x2F50D8u;
label_2f50d8:
    // 0x2f50d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F50D8u;
    {
        const bool branch_taken_0x2f50d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F50DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50D8u;
            // 0x2f50dc: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50d8) {
            ctx->pc = 0x2F50ECu;
            goto label_2f50ec;
        }
    }
    ctx->pc = 0x2F50E0u;
    // 0x2f50e0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2f50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f50e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F50E4u;
    {
        const bool branch_taken_0x2f50e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f50e4) {
            ctx->pc = 0x2F5110u;
            goto label_2f5110;
        }
    }
    ctx->pc = 0x2F50ECu;
label_2f50ec:
    // 0x2f50ec: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F50ECu;
    SET_GPR_U32(ctx, 31, 0x2F50F4u);
    ctx->pc = 0x2F50F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50ECu;
            // 0x2f50f0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (runtime->hasFunction(0x2F6510u)) {
        auto targetFn = runtime->lookupFunction(0x2F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50F4u; }
        if (ctx->pc != 0x2F50F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6510_0x2f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50F4u; }
        if (ctx->pc != 0x2F50F4u) { return; }
    }
    ctx->pc = 0x2F50F4u;
label_2f50f4:
    // 0x2f50f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F50F4u;
    {
        const bool branch_taken_0x2f50f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F50F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50F4u;
            // 0x2f50f8: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50f4) {
            ctx->pc = 0x2F5108u;
            goto label_2f5108;
        }
    }
    ctx->pc = 0x2F50FCu;
    // 0x2f50fc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2f50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2f5100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5100u;
    {
        const bool branch_taken_0x2f5100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5100) {
            ctx->pc = 0x2F5110u;
            goto label_2f5110;
        }
    }
    ctx->pc = 0x2F5108u;
label_2f5108:
    // 0x2f5108: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5108u;
    {
        const bool branch_taken_0x2f5108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5108u;
            // 0x2f510c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5108) {
            ctx->pc = 0x2F511Cu;
            goto label_2f511c;
        }
    }
    ctx->pc = 0x2F5110u;
label_2f5110:
    // 0x2f5110: 0xc0bd44c  jal         func_2F5130
    ctx->pc = 0x2F5110u;
    SET_GPR_U32(ctx, 31, 0x2F5118u);
    ctx->pc = 0x2F5114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5110u;
            // 0x2f5114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5130u;
    if (runtime->hasFunction(0x2F5130u)) {
        auto targetFn = runtime->lookupFunction(0x2F5130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5118u; }
        if (ctx->pc != 0x2F5118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5130_0x2f5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5118u; }
        if (ctx->pc != 0x2F5118u) { return; }
    }
    ctx->pc = 0x2F5118u;
label_2f5118:
    // 0x2f5118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f511c:
    // 0x2f511c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f511cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5120: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f5120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5128: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F512Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5128u;
            // 0x2f512c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5130u;
    ctx->pc = 0x2f5130u;
}
