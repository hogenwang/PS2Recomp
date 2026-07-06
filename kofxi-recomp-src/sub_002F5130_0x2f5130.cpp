#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5130
// Address: 0x2f5130 - 0x2f51d8
void sub_002F5130_0x2f5130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5130_0x2f5130");
#endif

    switch (ctx->pc) {
        case 0x2f5158u: goto label_2f5158;
        case 0x2f516cu: goto label_2f516c;
        case 0x2f5180u: goto label_2f5180;
        case 0x2f5194u: goto label_2f5194;
        case 0x2f51a8u: goto label_2f51a8;
        case 0x2f51bcu: goto label_2f51bc;
        case 0x2f51c4u: goto label_2f51c4;
        default: break;
    }

    ctx->pc = 0x2f5130u;

    // 0x2f5130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f5134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f513c: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F513Cu;
    {
        const bool branch_taken_0x2f513c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F513Cu;
            // 0x2f5140: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f513c) {
            ctx->pc = 0x2F51C4u;
            goto label_2f51c4;
        }
    }
    ctx->pc = 0x2F5144u;
    // 0x2f5144: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f5144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5148: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5148u;
    {
        const bool branch_taken_0x2f5148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5148) {
            ctx->pc = 0x2F514Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5148u;
            // 0x2f514c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F515Cu;
            goto label_2f515c;
        }
    }
    ctx->pc = 0x2F5150u;
    // 0x2f5150: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5150u;
    SET_GPR_U32(ctx, 31, 0x2F5158u);
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5158u; }
        if (ctx->pc != 0x2F5158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5158u; }
        if (ctx->pc != 0x2F5158u) { return; }
    }
    ctx->pc = 0x2F5158u;
label_2f5158:
    // 0x2f5158: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2f5158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f515c:
    // 0x2f515c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F515Cu;
    {
        const bool branch_taken_0x2f515c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f515c) {
            ctx->pc = 0x2F5160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F515Cu;
            // 0x2f5160: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5170u;
            goto label_2f5170;
        }
    }
    ctx->pc = 0x2F5164u;
    // 0x2f5164: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5164u;
    SET_GPR_U32(ctx, 31, 0x2F516Cu);
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F516Cu; }
        if (ctx->pc != 0x2F516Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F516Cu; }
        if (ctx->pc != 0x2F516Cu) { return; }
    }
    ctx->pc = 0x2F516Cu;
label_2f516c:
    // 0x2f516c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2f516cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f5170:
    // 0x2f5170: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5170u;
    {
        const bool branch_taken_0x2f5170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5170) {
            ctx->pc = 0x2F5174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5170u;
            // 0x2f5174: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5184u;
            goto label_2f5184;
        }
    }
    ctx->pc = 0x2F5178u;
    // 0x2f5178: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5178u;
    SET_GPR_U32(ctx, 31, 0x2F5180u);
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5180u; }
        if (ctx->pc != 0x2F5180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5180u; }
        if (ctx->pc != 0x2F5180u) { return; }
    }
    ctx->pc = 0x2F5180u;
label_2f5180:
    // 0x2f5180: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2f5180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f5184:
    // 0x2f5184: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5184u;
    {
        const bool branch_taken_0x2f5184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5184) {
            ctx->pc = 0x2F5188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5184u;
            // 0x2f5188: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5198u;
            goto label_2f5198;
        }
    }
    ctx->pc = 0x2F518Cu;
    // 0x2f518c: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F518Cu;
    SET_GPR_U32(ctx, 31, 0x2F5194u);
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5194u; }
        if (ctx->pc != 0x2F5194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5194u; }
        if (ctx->pc != 0x2F5194u) { return; }
    }
    ctx->pc = 0x2F5194u;
label_2f5194:
    // 0x2f5194: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2f5194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f5198:
    // 0x2f5198: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5198u;
    {
        const bool branch_taken_0x2f5198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5198) {
            ctx->pc = 0x2F519Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5198u;
            // 0x2f519c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F51ACu;
            goto label_2f51ac;
        }
    }
    ctx->pc = 0x2F51A0u;
    // 0x2f51a0: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F51A0u;
    SET_GPR_U32(ctx, 31, 0x2F51A8u);
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51A8u; }
        if (ctx->pc != 0x2F51A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51A8u; }
        if (ctx->pc != 0x2F51A8u) { return; }
    }
    ctx->pc = 0x2F51A8u;
label_2f51a8:
    // 0x2f51a8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2f51a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2f51ac:
    // 0x2f51ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F51ACu;
    {
        const bool branch_taken_0x2f51ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f51ac) {
            ctx->pc = 0x2F51BCu;
            goto label_2f51bc;
        }
    }
    ctx->pc = 0x2F51B4u;
    // 0x2f51b4: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F51B4u;
    SET_GPR_U32(ctx, 31, 0x2F51BCu);
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51BCu; }
        if (ctx->pc != 0x2F51BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51BCu; }
        if (ctx->pc != 0x2F51BCu) { return; }
    }
    ctx->pc = 0x2F51BCu;
label_2f51bc:
    // 0x2f51bc: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F51BCu;
    SET_GPR_U32(ctx, 31, 0x2F51C4u);
    ctx->pc = 0x2F51C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F51BCu;
            // 0x2f51c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51C4u; }
        if (ctx->pc != 0x2F51C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51C4u; }
        if (ctx->pc != 0x2F51C4u) { return; }
    }
    ctx->pc = 0x2F51C4u;
label_2f51c4:
    // 0x2f51c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f51c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f51c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f51cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f51ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f51d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F51D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F51D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F51D0u;
            // 0x2f51d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F51D8u;
    ctx->pc = 0x2f51d8u;
}
