#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003404D0
// Address: 0x3404d0 - 0x340680
void sub_003404D0_0x3404d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003404D0_0x3404d0");
#endif

    switch (ctx->pc) {
        case 0x340530u: goto label_340530;
        case 0x340560u: goto label_340560;
        case 0x340590u: goto label_340590;
        case 0x3405d4u: goto label_3405d4;
        case 0x340604u: goto label_340604;
        case 0x340638u: goto label_340638;
        default: break;
    }

    ctx->pc = 0x3404d0u;

    // 0x3404d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3404d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3404d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3404d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3404d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3404d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3404dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3404dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3404e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3404e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3404e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3404e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3404e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3404e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3404ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3404ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3404f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3404f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3404f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3404f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3404f8: 0x8c68ea78  lw          $t0, -0x1588($v1)
    ctx->pc = 0x3404f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x3404fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3404fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340500: 0x5503002b  bnel        $t0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x340500u;
    {
        const bool branch_taken_0x340500 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x340500) {
            ctx->pc = 0x340504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340500u;
            // 0x340504: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3405B0u;
            goto label_3405b0;
        }
    }
    ctx->pc = 0x340508u;
    // 0x340508: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x340508u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34050c: 0x1a000050  blez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x34050Cu;
    {
        const bool branch_taken_0x34050c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x340510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34050Cu;
            // 0x340510: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34050c) {
            ctx->pc = 0x340650u;
            goto label_340650;
        }
    }
    ctx->pc = 0x340514u;
    // 0x340514: 0x3c13003d  lui         $s3, 0x3D
    ctx->pc = 0x340514u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61 << 16));
    // 0x340518: 0x3c12003d  lui         $s2, 0x3D
    ctx->pc = 0x340518u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61 << 16));
    // 0x34051c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x34051cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340520: 0x309600ff  andi        $s6, $a0, 0xFF
    ctx->pc = 0x340520u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x340524: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x340524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340528: 0x26733e98  addiu       $s3, $s3, 0x3E98
    ctx->pc = 0x340528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16024));
    // 0x34052c: 0x26523ea0  addiu       $s2, $s2, 0x3EA0
    ctx->pc = 0x34052cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16032));
label_340530:
    // 0x340530: 0x16b6000d  bne         $s5, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x340530u;
    {
        const bool branch_taken_0x340530 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        if (branch_taken_0x340530) {
            ctx->pc = 0x340568u;
            goto label_340568;
        }
    }
    ctx->pc = 0x340538u;
    // 0x340538: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x340538u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34053c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x340540: 0x24423830  addiu       $v0, $v0, 0x3830
    ctx->pc = 0x340540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14384));
    // 0x340544: 0x2685ffe0  addiu       $a1, $s4, -0x20
    ctx->pc = 0x340544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967264));
    // 0x340548: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x340548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34054c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x34054cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x340554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340558: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340558u;
    SET_GPR_U32(ctx, 31, 0x340560u);
    ctx->pc = 0x34055Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340558u;
            // 0x34055c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340560u; }
        if (ctx->pc != 0x340560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340560u; }
        if (ctx->pc != 0x340560u) { return; }
    }
    ctx->pc = 0x340560u;
label_340560:
    // 0x340560: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x340560u;
    {
        const bool branch_taken_0x340560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340560) {
            ctx->pc = 0x340590u;
            goto label_340590;
        }
    }
    ctx->pc = 0x340568u;
label_340568:
    // 0x340568: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x340568u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34056c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34056cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x340570: 0x2685ffe0  addiu       $a1, $s4, -0x20
    ctx->pc = 0x340570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967264));
    // 0x340574: 0x24423830  addiu       $v0, $v0, 0x3830
    ctx->pc = 0x340574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14384));
    // 0x340578: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x340578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34057c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x34057cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x340584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340588: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340588u;
    SET_GPR_U32(ctx, 31, 0x340590u);
    ctx->pc = 0x34058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340588u;
            // 0x34058c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340590u; }
        if (ctx->pc != 0x340590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340590u; }
        if (ctx->pc != 0x340590u) { return; }
    }
    ctx->pc = 0x340590u;
label_340590:
    // 0x340590: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x340590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x340594: 0x2b0182a  slt         $v1, $s5, $s0
    ctx->pc = 0x340594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x340598: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x340598u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x34059c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34059cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3405a0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3405A0u;
    {
        const bool branch_taken_0x3405a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3405A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3405A0u;
            // 0x3405a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405a0) {
            ctx->pc = 0x340530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_340530;
        }
    }
    ctx->pc = 0x3405A8u;
    // 0x3405a8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3405A8u;
    {
        const bool branch_taken_0x3405a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3405a8) {
            ctx->pc = 0x340650u;
            goto label_340650;
        }
    }
    ctx->pc = 0x3405B0u;
label_3405b0:
    // 0x3405b0: 0x1a000027  blez        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3405B0u;
    {
        const bool branch_taken_0x3405b0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3405B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3405B0u;
            // 0x3405b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405b0) {
            ctx->pc = 0x340650u;
            goto label_340650;
        }
    }
    ctx->pc = 0x3405B8u;
    // 0x3405b8: 0x3c14003d  lui         $s4, 0x3D
    ctx->pc = 0x3405b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61 << 16));
    // 0x3405bc: 0x3c13003d  lui         $s3, 0x3D
    ctx->pc = 0x3405bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61 << 16));
    // 0x3405c0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3405c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3405c4: 0x309600ff  andi        $s6, $a0, 0xFF
    ctx->pc = 0x3405c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3405c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3405c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3405cc: 0x26943e98  addiu       $s4, $s4, 0x3E98
    ctx->pc = 0x3405ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16024));
    // 0x3405d0: 0x26733ea0  addiu       $s3, $s3, 0x3EA0
    ctx->pc = 0x3405d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16032));
label_3405d4:
    // 0x3405d4: 0x1636000e  bne         $s1, $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x3405D4u;
    {
        const bool branch_taken_0x3405d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        if (branch_taken_0x3405d4) {
            ctx->pc = 0x340610u;
            goto label_340610;
        }
    }
    ctx->pc = 0x3405DCu;
    // 0x3405dc: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x3405dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3405e0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3405e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3405e4: 0x24423830  addiu       $v0, $v0, 0x3830
    ctx->pc = 0x3405e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14384));
    // 0x3405e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3405e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3405ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3405ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3405f0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3405f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3405f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3405f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3405f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3405f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3405fc: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3405FCu;
    SET_GPR_U32(ctx, 31, 0x340604u);
    ctx->pc = 0x340600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3405FCu;
            // 0x340600: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340604u; }
        if (ctx->pc != 0x340604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340604u; }
        if (ctx->pc != 0x340604u) { return; }
    }
    ctx->pc = 0x340604u;
label_340604:
    // 0x340604: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x340604u;
    {
        const bool branch_taken_0x340604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340604) {
            ctx->pc = 0x340638u;
            goto label_340638;
        }
    }
    ctx->pc = 0x34060Cu;
    // 0x34060c: 0x0  nop
    ctx->pc = 0x34060cu;
    // NOP
label_340610:
    // 0x340610: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x340610u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x340614: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x340614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x340618: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x340618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34061c: 0x24423830  addiu       $v0, $v0, 0x3830
    ctx->pc = 0x34061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14384));
    // 0x340620: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x340620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340624: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x340624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340628: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34062c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34062cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340630: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340630u;
    SET_GPR_U32(ctx, 31, 0x340638u);
    ctx->pc = 0x340634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340630u;
            // 0x340634: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340638u; }
        if (ctx->pc != 0x340638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340638u; }
        if (ctx->pc != 0x340638u) { return; }
    }
    ctx->pc = 0x340638u;
label_340638:
    // 0x340638: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x340638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34063c: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x34063cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x340640: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x340640u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x340644: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x340644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x340648: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x340648u;
    {
        const bool branch_taken_0x340648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34064Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340648u;
            // 0x34064c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340648) {
            ctx->pc = 0x3405D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3405d4;
        }
    }
    ctx->pc = 0x340650u;
label_340650:
    // 0x340650: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x340650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x340654: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x340654u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x340658: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x340658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34065c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34065cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340660: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x340660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340664: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x340664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34066c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34066cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340670: 0x3e00008  jr          $ra
    ctx->pc = 0x340670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340670u;
            // 0x340674: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x340678u;
    // 0x340678: 0x0  nop
    ctx->pc = 0x340678u;
    // NOP
    // 0x34067c: 0x0  nop
    ctx->pc = 0x34067cu;
    // NOP
    ctx->pc = 0x340680u;
}
