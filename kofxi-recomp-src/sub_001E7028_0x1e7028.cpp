#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7028
// Address: 0x1e7028 - 0x1e70e8
void sub_001E7028_0x1e7028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7028_0x1e7028");
#endif

    switch (ctx->pc) {
        case 0x1e7028u: goto label_1e7028;
        case 0x1e702cu: goto label_1e702c;
        case 0x1e7030u: goto label_1e7030;
        case 0x1e7034u: goto label_1e7034;
        case 0x1e7038u: goto label_1e7038;
        case 0x1e703cu: goto label_1e703c;
        case 0x1e7040u: goto label_1e7040;
        case 0x1e7044u: goto label_1e7044;
        case 0x1e7048u: goto label_1e7048;
        case 0x1e704cu: goto label_1e704c;
        case 0x1e7050u: goto label_1e7050;
        case 0x1e7054u: goto label_1e7054;
        case 0x1e7058u: goto label_1e7058;
        case 0x1e705cu: goto label_1e705c;
        case 0x1e7060u: goto label_1e7060;
        case 0x1e7064u: goto label_1e7064;
        case 0x1e7068u: goto label_1e7068;
        case 0x1e706cu: goto label_1e706c;
        case 0x1e7070u: goto label_1e7070;
        case 0x1e7074u: goto label_1e7074;
        case 0x1e7078u: goto label_1e7078;
        case 0x1e707cu: goto label_1e707c;
        case 0x1e7080u: goto label_1e7080;
        case 0x1e7084u: goto label_1e7084;
        case 0x1e7088u: goto label_1e7088;
        case 0x1e708cu: goto label_1e708c;
        case 0x1e7090u: goto label_1e7090;
        case 0x1e7094u: goto label_1e7094;
        case 0x1e7098u: goto label_1e7098;
        case 0x1e709cu: goto label_1e709c;
        case 0x1e70a0u: goto label_1e70a0;
        case 0x1e70a4u: goto label_1e70a4;
        case 0x1e70a8u: goto label_1e70a8;
        case 0x1e70acu: goto label_1e70ac;
        case 0x1e70b0u: goto label_1e70b0;
        case 0x1e70b4u: goto label_1e70b4;
        case 0x1e70b8u: goto label_1e70b8;
        case 0x1e70bcu: goto label_1e70bc;
        case 0x1e70c0u: goto label_1e70c0;
        case 0x1e70c4u: goto label_1e70c4;
        case 0x1e70c8u: goto label_1e70c8;
        case 0x1e70ccu: goto label_1e70cc;
        case 0x1e70d0u: goto label_1e70d0;
        case 0x1e70d4u: goto label_1e70d4;
        case 0x1e70d8u: goto label_1e70d8;
        case 0x1e70dcu: goto label_1e70dc;
        case 0x1e70e0u: goto label_1e70e0;
        case 0x1e70e4u: goto label_1e70e4;
        default: break;
    }

    ctx->pc = 0x1e7028u;

label_1e7028:
    // 0x1e7028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e702c:
    // 0x1e702c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e7030:
    // 0x1e7030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7034:
    // 0x1e7034: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e7034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e7038:
    // 0x1e7038: 0xc079fb2  jal         func_1E7EC8
label_1e703c:
    if (ctx->pc == 0x1E703Cu) {
        ctx->pc = 0x1E703Cu;
            // 0x1e703c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x1E7040u;
        goto label_1e7040;
    }
    ctx->pc = 0x1E7038u;
    SET_GPR_U32(ctx, 31, 0x1E7040u);
    ctx->pc = 0x1E703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7038u;
            // 0x1e703c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EC8u;
    if (runtime->hasFunction(0x1E7EC8u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7040u; }
        if (ctx->pc != 0x1E7040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7EC8_0x1e7ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7040u; }
        if (ctx->pc != 0x1E7040u) { return; }
    }
    ctx->pc = 0x1E7040u;
label_1e7040:
    // 0x1e7040: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e7040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7044:
    // 0x1e7044: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_1e7048:
    if (ctx->pc == 0x1E7048u) {
        ctx->pc = 0x1E7048u;
            // 0x1e7048: 0x8e0403c0  lw          $a0, 0x3C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
        ctx->pc = 0x1E704Cu;
        goto label_1e704c;
    }
    ctx->pc = 0x1E7044u;
    {
        const bool branch_taken_0x1e7044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7044) {
            ctx->pc = 0x1E7048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7044u;
            // 0x1e7048: 0x8e0403c0  lw          $a0, 0x3C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7058u;
            goto label_1e7058;
        }
    }
    ctx->pc = 0x1E704Cu;
label_1e704c:
    // 0x1e704c: 0x10000021  b           . + 4 + (0x21 << 2)
label_1e7050:
    if (ctx->pc == 0x1E7050u) {
        ctx->pc = 0x1E7050u;
            // 0x1e7050: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1E7054u;
        goto label_1e7054;
    }
    ctx->pc = 0x1E704Cu;
    {
        const bool branch_taken_0x1e704c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E704Cu;
            // 0x1e7050: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e704c) {
            ctx->pc = 0x1E70D4u;
            goto label_1e70d4;
        }
    }
    ctx->pc = 0x1E7054u;
label_1e7054:
    // 0x1e7054: 0x0  nop
    ctx->pc = 0x1e7054u;
    // NOP
label_1e7058:
    // 0x1e7058: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e705c:
    if (ctx->pc == 0x1E705Cu) {
        ctx->pc = 0x1E705Cu;
            // 0x1e705c: 0x8e0503a8  lw          $a1, 0x3A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
        ctx->pc = 0x1E7060u;
        goto label_1e7060;
    }
    ctx->pc = 0x1E7058u;
    {
        const bool branch_taken_0x1e7058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7058) {
            ctx->pc = 0x1E705Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7058u;
            // 0x1e705c: 0x8e0503a8  lw          $a1, 0x3A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7074u;
            goto label_1e7074;
        }
    }
    ctx->pc = 0x1E7060u;
label_1e7060:
    // 0x1e7060: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e7060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7064:
    // 0x1e7064: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1e7064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1e7068:
    // 0x1e7068: 0x40f809  jalr        $v0
label_1e706c:
    if (ctx->pc == 0x1E706Cu) {
        ctx->pc = 0x1E7070u;
        goto label_1e7070;
    }
    ctx->pc = 0x1E7068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E7070u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7070u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7070u; }
            if (ctx->pc != 0x1E7070u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7070u;
label_1e7070:
    // 0x1e7070: 0x8e0503a8  lw          $a1, 0x3A8($s0)
    ctx->pc = 0x1e7070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
label_1e7074:
    // 0x1e7074: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1e7074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e7078:
    // 0x1e7078: 0x8e0603b4  lw          $a2, 0x3B4($s0)
    ctx->pc = 0x1e7078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
label_1e707c:
    // 0x1e707c: 0x8e0703b8  lw          $a3, 0x3B8($s0)
    ctx->pc = 0x1e707cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
label_1e7080:
    // 0x1e7080: 0xc079f7a  jal         func_1E7DE8
label_1e7084:
    if (ctx->pc == 0x1E7084u) {
        ctx->pc = 0x1E7084u;
            // 0x1e7084: 0x8e0803bc  lw          $t0, 0x3BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 956)));
        ctx->pc = 0x1E7088u;
        goto label_1e7088;
    }
    ctx->pc = 0x1E7080u;
    SET_GPR_U32(ctx, 31, 0x1E7088u);
    ctx->pc = 0x1E7084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7080u;
            // 0x1e7084: 0x8e0803bc  lw          $t0, 0x3BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 956)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DE8u;
    if (runtime->hasFunction(0x1E7DE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7088u; }
        if (ctx->pc != 0x1E7088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7DE8_0x1e7de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7088u; }
        if (ctx->pc != 0x1E7088u) { return; }
    }
    ctx->pc = 0x1E7088u;
label_1e7088:
    // 0x1e7088: 0xc079f98  jal         func_1E7E60
label_1e708c:
    if (ctx->pc == 0x1E708Cu) {
        ctx->pc = 0x1E708Cu;
            // 0x1e708c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x1E7090u;
        goto label_1e7090;
    }
    ctx->pc = 0x1E7088u;
    SET_GPR_U32(ctx, 31, 0x1E7090u);
    ctx->pc = 0x1E708Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7088u;
            // 0x1e708c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E60u;
    if (runtime->hasFunction(0x1E7E60u)) {
        auto targetFn = runtime->lookupFunction(0x1E7E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7090u; }
        if (ctx->pc != 0x1E7090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7E60_0x1e7e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7090u; }
        if (ctx->pc != 0x1E7090u) { return; }
    }
    ctx->pc = 0x1E7090u;
label_1e7090:
    // 0x1e7090: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e7090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e7094:
    // 0x1e7094: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1e7098:
    if (ctx->pc == 0x1E7098u) {
        ctx->pc = 0x1E7098u;
            // 0x1e7098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E709Cu;
        goto label_1e709c;
    }
    ctx->pc = 0x1E7094u;
    {
        const bool branch_taken_0x1e7094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E7098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7094u;
            // 0x1e7098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7094) {
            ctx->pc = 0x1E70C8u;
            goto label_1e70c8;
        }
    }
    ctx->pc = 0x1E709Cu;
label_1e709c:
    // 0x1e709c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e70a0:
    // 0x1e70a0: 0x2404ff9a  addiu       $a0, $zero, -0x66
    ctx->pc = 0x1e70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967194));
label_1e70a4:
    // 0x1e70a4: 0xc078328  jal         func_1E0CA0
label_1e70a8:
    if (ctx->pc == 0x1E70A8u) {
        ctx->pc = 0x1E70A8u;
            // 0x1e70a8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1E70ACu;
        goto label_1e70ac;
    }
    ctx->pc = 0x1E70A4u;
    SET_GPR_U32(ctx, 31, 0x1E70ACu);
    ctx->pc = 0x1E70A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70A4u;
            // 0x1e70a8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0CA0u;
    if (runtime->hasFunction(0x1E0CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70ACu; }
        if (ctx->pc != 0x1E70ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0CA0_0x1e0ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70ACu; }
        if (ctx->pc != 0x1E70ACu) { return; }
    }
    ctx->pc = 0x1E70ACu;
label_1e70ac:
    // 0x1e70ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e70acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e70b0:
    // 0x1e70b0: 0x8e0503a8  lw          $a1, 0x3A8($s0)
    ctx->pc = 0x1e70b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
label_1e70b4:
    // 0x1e70b4: 0xc079afa  jal         func_1E6BE8
label_1e70b8:
    if (ctx->pc == 0x1E70B8u) {
        ctx->pc = 0x1E70B8u;
            // 0x1e70b8: 0x2484e520  addiu       $a0, $a0, -0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960416));
        ctx->pc = 0x1E70BCu;
        goto label_1e70bc;
    }
    ctx->pc = 0x1E70B4u;
    SET_GPR_U32(ctx, 31, 0x1E70BCu);
    ctx->pc = 0x1E70B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70B4u;
            // 0x1e70b8: 0x2484e520  addiu       $a0, $a0, -0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70BCu; }
        if (ctx->pc != 0x1E70BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70BCu; }
        if (ctx->pc != 0x1E70BCu) { return; }
    }
    ctx->pc = 0x1E70BCu;
label_1e70bc:
    // 0x1e70bc: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x1e70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
label_1e70c0:
    // 0x1e70c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e70c4:
    if (ctx->pc == 0x1E70C4u) {
        ctx->pc = 0x1E70C4u;
            // 0x1e70c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1E70C8u;
        goto label_1e70c8;
    }
    ctx->pc = 0x1E70C0u;
    {
        const bool branch_taken_0x1e70c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E70C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70C0u;
            // 0x1e70c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70c0) {
            ctx->pc = 0x1E70D4u;
            goto label_1e70d4;
        }
    }
    ctx->pc = 0x1E70C8u;
label_1e70c8:
    // 0x1e70c8: 0xc0774d6  jal         func_1DD358
label_1e70cc:
    if (ctx->pc == 0x1E70CCu) {
        ctx->pc = 0x1E70D0u;
        goto label_1e70d0;
    }
    ctx->pc = 0x1E70C8u;
    SET_GPR_U32(ctx, 31, 0x1E70D0u);
    ctx->pc = 0x1DD358u;
    if (runtime->hasFunction(0x1DD358u)) {
        auto targetFn = runtime->lookupFunction(0x1DD358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70D0u; }
        if (ctx->pc != 0x1E70D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD358_0x1dd358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70D0u; }
        if (ctx->pc != 0x1E70D0u) { return; }
    }
    ctx->pc = 0x1E70D0u;
label_1e70d0:
    // 0x1e70d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e70d4:
    // 0x1e70d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e70d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e70d8:
    // 0x1e70d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e70d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e70dc:
    // 0x1e70dc: 0x3e00008  jr          $ra
label_1e70e0:
    if (ctx->pc == 0x1E70E0u) {
        ctx->pc = 0x1E70E0u;
            // 0x1e70e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E70E4u;
        goto label_1e70e4;
    }
    ctx->pc = 0x1E70DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E70E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70DCu;
            // 0x1e70e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E70E4u;
label_1e70e4:
    // 0x1e70e4: 0x0  nop
    ctx->pc = 0x1e70e4u;
    // NOP
    ctx->pc = 0x1e70e8u;
}
