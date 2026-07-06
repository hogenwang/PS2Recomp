#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270130
// Address: 0x270130 - 0x2701a8
void sub_00270130_0x270130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270130_0x270130");
#endif

    switch (ctx->pc) {
        case 0x270150u: goto label_270150;
        case 0x270164u: goto label_270164;
        case 0x27017cu: goto label_27017c;
        case 0x270194u: goto label_270194;
        default: break;
    }

    ctx->pc = 0x270130u;

    // 0x270130: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x270130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x270134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270138: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x270138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x27013c: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x27013cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x270140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270144: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x270144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x270148: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x270148u;
    SET_GPR_U32(ctx, 31, 0x270150u);
    ctx->pc = 0x27014Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270148u;
            // 0x27014c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270150u; }
        if (ctx->pc != 0x270150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270150u; }
        if (ctx->pc != 0x270150u) { return; }
    }
    ctx->pc = 0x270150u;
label_270150:
    // 0x270150: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x270150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x270154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x270154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270158: 0x24a598f0  addiu       $a1, $a1, -0x6710
    ctx->pc = 0x270158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
    // 0x27015c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x27015Cu;
    SET_GPR_U32(ctx, 31, 0x270164u);
    ctx->pc = 0x270160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27015Cu;
            // 0x270160: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270164u; }
        if (ctx->pc != 0x270164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270164u; }
        if (ctx->pc != 0x270164u) { return; }
    }
    ctx->pc = 0x270164u;
label_270164:
    // 0x270164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270168: 0x34058084  ori         $a1, $zero, 0x8084
    ctx->pc = 0x270168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32900);
    // 0x27016c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27016cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x270170: 0x34a569d4  ori         $a1, $a1, 0x69D4
    ctx->pc = 0x270170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27092);
    // 0x270174: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x270174u;
    SET_GPR_U32(ctx, 31, 0x27017Cu);
    ctx->pc = 0x270178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270174u;
            // 0x270178: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27017Cu; }
        if (ctx->pc != 0x27017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27017Cu; }
        if (ctx->pc != 0x27017Cu) { return; }
    }
    ctx->pc = 0x27017Cu;
label_27017c:
    // 0x27017c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27017Cu;
    {
        const bool branch_taken_0x27017c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x270180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27017Cu;
            // 0x270180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27017c) {
            ctx->pc = 0x270198u;
            goto label_270198;
        }
    }
    ctx->pc = 0x270184u;
    // 0x270184: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x270184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x270188: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x270188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27018c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x27018Cu;
    SET_GPR_U32(ctx, 31, 0x270194u);
    ctx->pc = 0x270190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27018Cu;
            // 0x270190: 0x24a59a48  addiu       $a1, $a1, -0x65B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270194u; }
        if (ctx->pc != 0x270194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270194u; }
        if (ctx->pc != 0x270194u) { return; }
    }
    ctx->pc = 0x270194u;
label_270194:
    // 0x270194: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270198:
    // 0x270198: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x270198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27019c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x27019cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2701a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2701A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2701A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701A0u;
            // 0x2701a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2701A8u;
    ctx->pc = 0x2701a8u;
}
