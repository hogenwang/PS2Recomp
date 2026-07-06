#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020D430
// Address: 0x20d430 - 0x20d5c0
void sub_0020D430_0x20d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D430_0x20d430");
#endif

    switch (ctx->pc) {
        case 0x20d460u: goto label_20d460;
        case 0x20d46cu: goto label_20d46c;
        case 0x20d498u: goto label_20d498;
        case 0x20d4a0u: goto label_20d4a0;
        case 0x20d4b0u: goto label_20d4b0;
        case 0x20d4dcu: goto label_20d4dc;
        case 0x20d50cu: goto label_20d50c;
        case 0x20d534u: goto label_20d534;
        case 0x20d55cu: goto label_20d55c;
        case 0x20d584u: goto label_20d584;
        case 0x20d5a0u: goto label_20d5a0;
        default: break;
    }

    ctx->pc = 0x20d430u;

    // 0x20d430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d434: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x20d434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x20d438: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20d438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20d43c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x20d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x20d440: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20d440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20d444: 0x34216400  ori         $at, $at, 0x6400
    ctx->pc = 0x20d444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25600);
    // 0x20d448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d44c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20d44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d454: 0x8c42b7d8  lw          $v0, -0x4828($v0)
    ctx->pc = 0x20d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948824)));
    // 0x20d458: 0x24103480  addiu       $s0, $zero, 0x3480
    ctx->pc = 0x20d458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x20d45c: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x20d45cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20d460:
    // 0x20d460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20d460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d464: 0xc040454  jal         func_101150
    ctx->pc = 0x20D464u;
    SET_GPR_U32(ctx, 31, 0x20D46Cu);
    ctx->pc = 0x20D468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D464u;
            // 0x20d468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D46Cu; }
        if (ctx->pc != 0x20D46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D46Cu; }
        if (ctx->pc != 0x20D46Cu) { return; }
    }
    ctx->pc = 0x20D46Cu;
label_20d46c:
    // 0x20d46c: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x20d46cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x20d470: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20d470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20d474: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x20d474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d478: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20d478u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x20d47c: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x20d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x20d480: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20d480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d484: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x20d484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20d488: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d48c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d48cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d490: 0xc040532  jal         func_1014C8
    ctx->pc = 0x20D490u;
    SET_GPR_U32(ctx, 31, 0x20D498u);
    ctx->pc = 0x20D494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D490u;
            // 0x20d494: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D498u; }
        if (ctx->pc != 0x20D498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D498u; }
        if (ctx->pc != 0x20D498u) { return; }
    }
    ctx->pc = 0x20D498u;
label_20d498:
    // 0x20d498: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20D498u;
    SET_GPR_U32(ctx, 31, 0x20D4A0u);
    ctx->pc = 0x20D49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D498u;
            // 0x20d49c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4A0u; }
        if (ctx->pc != 0x20D4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4A0u; }
        if (ctx->pc != 0x20D4A0u) { return; }
    }
    ctx->pc = 0x20D4A0u;
label_20d4a0:
    // 0x20d4a0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20d4a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20d4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d4a8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x20D4A8u;
    SET_GPR_U32(ctx, 31, 0x20D4B0u);
    ctx->pc = 0x20D4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4A8u;
            // 0x20d4ac: 0x2484a3f0  addiu       $a0, $a0, -0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4B0u; }
        if (ctx->pc != 0x20D4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4B0u; }
        if (ctx->pc != 0x20D4B0u) { return; }
    }
    ctx->pc = 0x20D4B0u;
label_20d4b0:
    // 0x20d4b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20d4b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20d4b4: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x20d4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x20d4b8: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x20d4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20d4bc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x20D4BCu;
    {
        const bool branch_taken_0x20d4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4BCu;
            // 0x20d4c0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4bc) {
            ctx->pc = 0x20D460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d460;
        }
    }
    ctx->pc = 0x20D4C4u;
    // 0x20d4c4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20d4c8: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x20d4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x20d4cc: 0x8042a4c0  lb          $v0, -0x5B40($v0)
    ctx->pc = 0x20d4ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943936)));
    // 0x20d4d0: 0x241100d0  addiu       $s1, $zero, 0xD0
    ctx->pc = 0x20d4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x20d4d4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x20D4D4u;
    {
        const bool branch_taken_0x20d4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4D4u;
            // 0x20d4d8: 0x2610a4c0  addiu       $s0, $s0, -0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4d4) {
            ctx->pc = 0x20D598u;
            goto label_20d598;
        }
    }
    ctx->pc = 0x20D4DCu;
label_20d4dc:
    // 0x20d4dc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x20d4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x20d4e0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x20d4e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x20d4e4: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x20d4e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x20d4e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20D4E8u;
    {
        const bool branch_taken_0x20d4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d4e8) {
            ctx->pc = 0x20D518u;
            goto label_20d518;
        }
    }
    ctx->pc = 0x20D4F0u;
    // 0x20d4f0: 0x2861003a  slti        $at, $v1, 0x3A
    ctx->pc = 0x20d4f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x20d4f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D4F4u;
    {
        const bool branch_taken_0x20d4f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d4f4) {
            ctx->pc = 0x20D518u;
            goto label_20d518;
        }
    }
    ctx->pc = 0x20D4FCu;
    // 0x20d4fc: 0x2466ffd0  addiu       $a2, $v1, -0x30
    ctx->pc = 0x20d4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x20d500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d504: 0xc0834c8  jal         func_20D320
    ctx->pc = 0x20D504u;
    SET_GPR_U32(ctx, 31, 0x20D50Cu);
    ctx->pc = 0x20D508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D504u;
            // 0x20d508: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D320u;
    if (runtime->hasFunction(0x20D320u)) {
        auto targetFn = runtime->lookupFunction(0x20D320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D50Cu; }
        if (ctx->pc != 0x20D50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D320_0x20d320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D50Cu; }
        if (ctx->pc != 0x20D50Cu) { return; }
    }
    ctx->pc = 0x20D50Cu;
label_20d50c:
    // 0x20d50c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20D50Cu;
    {
        const bool branch_taken_0x20d50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d50c) {
            ctx->pc = 0x20D588u;
            goto label_20d588;
        }
    }
    ctx->pc = 0x20D514u;
    // 0x20d514: 0x0  nop
    ctx->pc = 0x20d514u;
    // NOP
label_20d518:
    // 0x20d518: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x20d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x20d51c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D51Cu;
    {
        const bool branch_taken_0x20d51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d51c) {
            ctx->pc = 0x20D540u;
            goto label_20d540;
        }
    }
    ctx->pc = 0x20D524u;
    // 0x20d524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d528: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x20d528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x20d52c: 0xc0834c8  jal         func_20D320
    ctx->pc = 0x20D52Cu;
    SET_GPR_U32(ctx, 31, 0x20D534u);
    ctx->pc = 0x20D530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D52Cu;
            // 0x20d530: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D320u;
    if (runtime->hasFunction(0x20D320u)) {
        auto targetFn = runtime->lookupFunction(0x20D320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D534u; }
        if (ctx->pc != 0x20D534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D320_0x20d320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D534u; }
        if (ctx->pc != 0x20D534u) { return; }
    }
    ctx->pc = 0x20D534u;
label_20d534:
    // 0x20d534: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20D534u;
    {
        const bool branch_taken_0x20d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d534) {
            ctx->pc = 0x20D588u;
            goto label_20d588;
        }
    }
    ctx->pc = 0x20D53Cu;
    // 0x20d53c: 0x0  nop
    ctx->pc = 0x20d53cu;
    // NOP
label_20d540:
    // 0x20d540: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20d540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20d544: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D544u;
    {
        const bool branch_taken_0x20d544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d544) {
            ctx->pc = 0x20D568u;
            goto label_20d568;
        }
    }
    ctx->pc = 0x20D54Cu;
    // 0x20d54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d550: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x20d550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x20d554: 0xc0834c8  jal         func_20D320
    ctx->pc = 0x20D554u;
    SET_GPR_U32(ctx, 31, 0x20D55Cu);
    ctx->pc = 0x20D558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D554u;
            // 0x20d558: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D320u;
    if (runtime->hasFunction(0x20D320u)) {
        auto targetFn = runtime->lookupFunction(0x20D320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D55Cu; }
        if (ctx->pc != 0x20D55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D320_0x20d320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D55Cu; }
        if (ctx->pc != 0x20D55Cu) { return; }
    }
    ctx->pc = 0x20D55Cu;
label_20d55c:
    // 0x20d55c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20D55Cu;
    {
        const bool branch_taken_0x20d55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d55c) {
            ctx->pc = 0x20D588u;
            goto label_20d588;
        }
    }
    ctx->pc = 0x20D564u;
    // 0x20d564: 0x0  nop
    ctx->pc = 0x20d564u;
    // NOP
label_20d568:
    // 0x20d568: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x20d568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x20d56c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20D56Cu;
    {
        const bool branch_taken_0x20d56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d56c) {
            ctx->pc = 0x20D588u;
            goto label_20d588;
        }
    }
    ctx->pc = 0x20D574u;
    // 0x20d574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d578: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x20d578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x20d57c: 0xc0834c8  jal         func_20D320
    ctx->pc = 0x20D57Cu;
    SET_GPR_U32(ctx, 31, 0x20D584u);
    ctx->pc = 0x20D580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D57Cu;
            // 0x20d580: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D320u;
    if (runtime->hasFunction(0x20D320u)) {
        auto targetFn = runtime->lookupFunction(0x20D320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D584u; }
        if (ctx->pc != 0x20D584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D320_0x20d320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D584u; }
        if (ctx->pc != 0x20D584u) { return; }
    }
    ctx->pc = 0x20D584u;
label_20d584:
    // 0x20d584: 0x0  nop
    ctx->pc = 0x20d584u;
    // NOP
label_20d588:
    // 0x20d588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20d588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20d58c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x20d58cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d590: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x20D590u;
    {
        const bool branch_taken_0x20d590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D590u;
            // 0x20d594: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d590) {
            ctx->pc = 0x20D4DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d4dc;
        }
    }
    ctx->pc = 0x20D598u;
label_20d598:
    // 0x20d598: 0xc0834e0  jal         func_20D380
    ctx->pc = 0x20D598u;
    SET_GPR_U32(ctx, 31, 0x20D5A0u);
    ctx->pc = 0x20D380u;
    if (runtime->hasFunction(0x20D380u)) {
        auto targetFn = runtime->lookupFunction(0x20D380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D5A0u; }
        if (ctx->pc != 0x20D5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D380_0x20d380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D5A0u; }
        if (ctx->pc != 0x20D5A0u) { return; }
    }
    ctx->pc = 0x20D5A0u;
label_20d5a0:
    // 0x20d5a0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20d5a4: 0xac60a080  sw          $zero, -0x5F80($v1)
    ctx->pc = 0x20d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942848), GPR_U32(ctx, 0));
    // 0x20d5a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20d5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20d5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x20D5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D5B8u;
            // 0x20d5bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D5C0u;
    ctx->pc = 0x20d5c0u;
}
