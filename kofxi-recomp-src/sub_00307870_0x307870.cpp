#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00307870
// Address: 0x307870 - 0x307a00
void sub_00307870_0x307870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307870_0x307870");
#endif

    switch (ctx->pc) {
        case 0x307894u: goto label_307894;
        case 0x3078a0u: goto label_3078a0;
        case 0x3078a8u: goto label_3078a8;
        case 0x3078b0u: goto label_3078b0;
        case 0x3078b8u: goto label_3078b8;
        case 0x3078c0u: goto label_3078c0;
        case 0x3078c8u: goto label_3078c8;
        case 0x3078d0u: goto label_3078d0;
        case 0x3078dcu: goto label_3078dc;
        case 0x3078ecu: goto label_3078ec;
        case 0x307900u: goto label_307900;
        case 0x30790cu: goto label_30790c;
        case 0x307914u: goto label_307914;
        case 0x30791cu: goto label_30791c;
        case 0x307930u: goto label_307930;
        case 0x30793cu: goto label_30793c;
        case 0x307948u: goto label_307948;
        case 0x307994u: goto label_307994;
        case 0x3079b0u: goto label_3079b0;
        case 0x3079c0u: goto label_3079c0;
        case 0x3079d4u: goto label_3079d4;
        case 0x3079ecu: goto label_3079ec;
        default: break;
    }

    ctx->pc = 0x307870u;

label_307870:
    // 0x307870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x307870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x307874: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x307874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307878: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x307878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30787c: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x30787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x307880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x307880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x307884: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x307884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x307888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30788c: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x30788Cu;
    SET_GPR_U32(ctx, 31, 0x307894u);
    ctx->pc = 0x307890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30788Cu;
            // 0x307890: 0xa0431d48  sb          $v1, 0x1D48($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 7496), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307894u; }
        if (ctx->pc != 0x307894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307894u; }
        if (ctx->pc != 0x307894u) { return; }
    }
    ctx->pc = 0x307894u;
label_307894:
    // 0x307894: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x307894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x307898: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30789c: 0xac621db8  sw          $v0, 0x1DB8($v1)
    ctx->pc = 0x30789cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7608), GPR_U32(ctx, 2));
label_3078a0:
    // 0x3078a0: 0xc0c1cd4  jal         func_307350
    ctx->pc = 0x3078A0u;
    SET_GPR_U32(ctx, 31, 0x3078A8u);
    ctx->pc = 0x3078A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3078A0u;
            // 0x3078a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307350u;
    if (runtime->hasFunction(0x307350u)) {
        auto targetFn = runtime->lookupFunction(0x307350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078A8u; }
        if (ctx->pc != 0x3078A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307350_0x307350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078A8u; }
        if (ctx->pc != 0x3078A8u) { return; }
    }
    ctx->pc = 0x3078A8u;
label_3078a8:
    // 0x3078a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3078a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078ac: 0x0  nop
    ctx->pc = 0x3078acu;
    // NOP
label_3078b0:
    // 0x3078b0: 0xc04042e  jal         func_1010B8
    ctx->pc = 0x3078B0u;
    SET_GPR_U32(ctx, 31, 0x3078B8u);
    ctx->pc = 0x3078B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3078B0u;
            // 0x3078b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1010B8u;
    if (runtime->hasFunction(0x1010B8u)) {
        auto targetFn = runtime->lookupFunction(0x1010B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078B8u; }
        if (ctx->pc != 0x3078B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001010B8_0x1010b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078B8u; }
        if (ctx->pc != 0x3078B8u) { return; }
    }
    ctx->pc = 0x3078B8u;
label_3078b8:
    // 0x3078b8: 0xc068754  jal         func_1A1D50
    ctx->pc = 0x3078B8u;
    SET_GPR_U32(ctx, 31, 0x3078C0u);
    ctx->pc = 0x1A1D50u;
    if (runtime->hasFunction(0x1A1D50u)) {
        auto targetFn = runtime->lookupFunction(0x1A1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078C0u; }
        if (ctx->pc != 0x3078C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1D50_0x1a1d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078C0u; }
        if (ctx->pc != 0x3078C0u) { return; }
    }
    ctx->pc = 0x3078C0u;
label_3078c0:
    // 0x3078c0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3078C0u;
    SET_GPR_U32(ctx, 31, 0x3078C8u);
    ctx->pc = 0x3078C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3078C0u;
            // 0x3078c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078C8u; }
        if (ctx->pc != 0x3078C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078C8u; }
        if (ctx->pc != 0x3078C8u) { return; }
    }
    ctx->pc = 0x3078C8u;
label_3078c8:
    // 0x3078c8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3078C8u;
    SET_GPR_U32(ctx, 31, 0x3078D0u);
    ctx->pc = 0x3078CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3078C8u;
            // 0x3078cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078D0u; }
        if (ctx->pc != 0x3078D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078D0u; }
        if (ctx->pc != 0x3078D0u) { return; }
    }
    ctx->pc = 0x3078D0u;
label_3078d0:
    // 0x3078d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3078d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078d4: 0xc040454  jal         func_101150
    ctx->pc = 0x3078D4u;
    SET_GPR_U32(ctx, 31, 0x3078DCu);
    ctx->pc = 0x3078D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3078D4u;
            // 0x3078d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078DCu; }
        if (ctx->pc != 0x3078DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078DCu; }
        if (ctx->pc != 0x3078DCu) { return; }
    }
    ctx->pc = 0x3078DCu;
label_3078dc:
    // 0x3078dc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3078dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3078e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3078e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078e4: 0xc040416  jal         func_101058
    ctx->pc = 0x3078E4u;
    SET_GPR_U32(ctx, 31, 0x3078ECu);
    ctx->pc = 0x3078E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3078E4u;
            // 0x3078e8: 0x2484e690  addiu       $a0, $a0, -0x1970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101058u;
    if (runtime->hasFunction(0x101058u)) {
        auto targetFn = runtime->lookupFunction(0x101058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078ECu; }
        if (ctx->pc != 0x3078ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101058_0x101058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078ECu; }
        if (ctx->pc != 0x3078ECu) { return; }
    }
    ctx->pc = 0x3078ECu;
label_3078ec:
    // 0x3078ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3078ECu;
    {
        const bool branch_taken_0x3078ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3078ec) {
            ctx->pc = 0x307900u;
            goto label_307900;
        }
    }
    ctx->pc = 0x3078F4u;
    // 0x3078f4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3078f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3078f8: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x3078F8u;
    SET_GPR_U32(ctx, 31, 0x307900u);
    ctx->pc = 0x3078FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3078F8u;
            // 0x3078fc: 0x248435c8  addiu       $a0, $a0, 0x35C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307900u; }
        if (ctx->pc != 0x307900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307900u; }
        if (ctx->pc != 0x307900u) { return; }
    }
    ctx->pc = 0x307900u;
label_307900:
    // 0x307900: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x307900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307904: 0xc040454  jal         func_101150
    ctx->pc = 0x307904u;
    SET_GPR_U32(ctx, 31, 0x30790Cu);
    ctx->pc = 0x307908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307904u;
            // 0x307908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30790Cu; }
        if (ctx->pc != 0x30790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30790Cu; }
        if (ctx->pc != 0x30790Cu) { return; }
    }
    ctx->pc = 0x30790Cu;
label_30790c:
    // 0x30790c: 0xc0c1e00  jal         func_307800
    ctx->pc = 0x30790Cu;
    SET_GPR_U32(ctx, 31, 0x307914u);
    ctx->pc = 0x307910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30790Cu;
            // 0x307910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307800u;
    if (runtime->hasFunction(0x307800u)) {
        auto targetFn = runtime->lookupFunction(0x307800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307914u; }
        if (ctx->pc != 0x307914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307800_0x307800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307914u; }
        if (ctx->pc != 0x307914u) { return; }
    }
    ctx->pc = 0x307914u;
label_307914:
    // 0x307914: 0xc0c1db4  jal         func_3076D0
    ctx->pc = 0x307914u;
    SET_GPR_U32(ctx, 31, 0x30791Cu);
    ctx->pc = 0x3076D0u;
    if (runtime->hasFunction(0x3076D0u)) {
        auto targetFn = runtime->lookupFunction(0x3076D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30791Cu; }
        if (ctx->pc != 0x30791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003076D0_0x3076d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30791Cu; }
        if (ctx->pc != 0x30791Cu) { return; }
    }
    ctx->pc = 0x30791Cu;
label_30791c:
    // 0x30791c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30791cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x307920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307924: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x307924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x307928: 0xc040aac  jal         func_102AB0
    ctx->pc = 0x307928u;
    SET_GPR_U32(ctx, 31, 0x307930u);
    ctx->pc = 0x30792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307928u;
            // 0x30792c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102AB0u;
    if (runtime->hasFunction(0x102AB0u)) {
        auto targetFn = runtime->lookupFunction(0x102AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307930u; }
        if (ctx->pc != 0x307930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102AB0_0x102ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307930u; }
        if (ctx->pc != 0x307930u) { return; }
    }
    ctx->pc = 0x307930u;
label_307930:
    // 0x307930: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x307930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307934: 0xc040454  jal         func_101150
    ctx->pc = 0x307934u;
    SET_GPR_U32(ctx, 31, 0x30793Cu);
    ctx->pc = 0x307938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307934u;
            // 0x307938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30793Cu; }
        if (ctx->pc != 0x30793Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30793Cu; }
        if (ctx->pc != 0x30793Cu) { return; }
    }
    ctx->pc = 0x30793Cu;
label_30793c:
    // 0x30793c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30793Cu;
    {
        const bool branch_taken_0x30793c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30793c) {
            ctx->pc = 0x307968u;
            goto label_307968;
        }
    }
    ctx->pc = 0x307944u;
    // 0x307944: 0x0  nop
    ctx->pc = 0x307944u;
    // NOP
label_307948:
    // 0x307948: 0x0  nop
    ctx->pc = 0x307948u;
    // NOP
    // 0x30794c: 0x0  nop
    ctx->pc = 0x30794cu;
    // NOP
    // 0x307950: 0x0  nop
    ctx->pc = 0x307950u;
    // NOP
    // 0x307954: 0x0  nop
    ctx->pc = 0x307954u;
    // NOP
    // 0x307958: 0x0  nop
    ctx->pc = 0x307958u;
    // NOP
    // 0x30795c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x30795Cu;
    {
        const bool branch_taken_0x30795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30795c) {
            ctx->pc = 0x307948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307948;
        }
    }
    ctx->pc = 0x307964u;
    // 0x307964: 0x0  nop
    ctx->pc = 0x307964u;
    // NOP
label_307968:
    // 0x307968: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x307968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30796c: 0x2a0200c2  slti        $v0, $s0, 0xC2
    ctx->pc = 0x30796cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)194) ? 1 : 0);
    // 0x307970: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x307970u;
    {
        const bool branch_taken_0x307970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307970) {
            ctx->pc = 0x3078B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3078b0;
        }
    }
    ctx->pc = 0x307978u;
    // 0x307978: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x307978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30797c: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x30797cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x307980: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x307980u;
    {
        const bool branch_taken_0x307980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307980) {
            ctx->pc = 0x3078A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3078a0;
        }
    }
    ctx->pc = 0x307988u;
    // 0x307988: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x307988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x30798c: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x30798Cu;
    SET_GPR_U32(ctx, 31, 0x307994u);
    ctx->pc = 0x307990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30798Cu;
            // 0x307990: 0x8c441db8  lw          $a0, 0x1DB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307994u; }
        if (ctx->pc != 0x307994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307994u; }
        if (ctx->pc != 0x307994u) { return; }
    }
    ctx->pc = 0x307994u;
label_307994:
    // 0x307994: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x307994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x307998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30799c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30799cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3079a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3079A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3079A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3079A0u;
            // 0x3079a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3079A8u;
    // 0x3079a8: 0x0  nop
    ctx->pc = 0x3079a8u;
    // NOP
    // 0x3079ac: 0x0  nop
    ctx->pc = 0x3079acu;
    // NOP
label_3079b0:
    // 0x3079b0: 0x80c1db4  j           func_3076D0
    ctx->pc = 0x3079B0u;
    ctx->pc = 0x3076D0u;
    if (runtime->hasFunction(0x3076D0u)) {
        auto targetFn = runtime->lookupFunction(0x3076D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003076D0_0x3076d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3079B8u;
    // 0x3079b8: 0x0  nop
    ctx->pc = 0x3079b8u;
    // NOP
    // 0x3079bc: 0x0  nop
    ctx->pc = 0x3079bcu;
    // NOP
label_3079c0:
    // 0x3079c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3079c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3079c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3079c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3079c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3079c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3079cc: 0xc0c1e1c  jal         func_307870
    ctx->pc = 0x3079CCu;
    SET_GPR_U32(ctx, 31, 0x3079D4u);
    ctx->pc = 0x3079D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3079CCu;
            // 0x3079d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307870u;
    goto label_307870;
    ctx->pc = 0x3079D4u;
label_3079d4:
    // 0x3079d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3079d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3079d8: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x3079d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x3079dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3079dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079e0: 0xac409728  sw          $zero, -0x68D8($v0)
    ctx->pc = 0x3079e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 0));
    // 0x3079e4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x3079E4u;
    SET_GPR_U32(ctx, 31, 0x3079ECu);
    ctx->pc = 0x3079E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3079E4u;
            // 0x3079e8: 0x24843b80  addiu       $a0, $a0, 0x3B80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3079ECu; }
        if (ctx->pc != 0x3079ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3079ECu; }
        if (ctx->pc != 0x3079ECu) { return; }
    }
    ctx->pc = 0x3079ECu;
label_3079ec:
    // 0x3079ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3079ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3079f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3079f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3079f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3079F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3079F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3079F4u;
            // 0x3079f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3079FCu;
    // 0x3079fc: 0x0  nop
    ctx->pc = 0x3079fcu;
    // NOP
    ctx->pc = 0x307a00u;
}
