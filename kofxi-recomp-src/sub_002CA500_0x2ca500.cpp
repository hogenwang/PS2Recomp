#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA500
// Address: 0x2ca500 - 0x2ca6d0
void sub_002CA500_0x2ca500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA500_0x2ca500");
#endif

    switch (ctx->pc) {
        case 0x2ca570u: goto label_2ca570;
        case 0x2ca5a0u: goto label_2ca5a0;
        case 0x2ca5b4u: goto label_2ca5b4;
        case 0x2ca5c0u: goto label_2ca5c0;
        case 0x2ca5d8u: goto label_2ca5d8;
        case 0x2ca60cu: goto label_2ca60c;
        case 0x2ca634u: goto label_2ca634;
        case 0x2ca660u: goto label_2ca660;
        default: break;
    }

    ctx->pc = 0x2ca500u;

    // 0x2ca500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ca500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ca504: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ca504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ca508: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ca508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca50c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ca50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ca510: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ca510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca514: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2ca514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2ca518: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2ca518u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca51c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2ca51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2ca520: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2ca520u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca524: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2ca524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2ca528: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2ca528u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca52c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ca52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ca530: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ca530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2ca534: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2ca534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2ca538: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2ca538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2ca53c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2ca53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2ca540: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2ca540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2ca544: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2CA544u;
    {
        const bool branch_taken_0x2ca544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA544u;
            // 0x2ca548: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca544) {
            ctx->pc = 0x2CA694u;
            goto label_2ca694;
        }
    }
    ctx->pc = 0x2CA54Cu;
    // 0x2ca54c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ca54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca550: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CA550u;
    {
        const bool branch_taken_0x2ca550 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CA554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA550u;
            // 0x2ca554: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca550) {
            ctx->pc = 0x2CA590u;
            goto label_2ca590;
        }
    }
    ctx->pc = 0x2CA558u;
    // 0x2ca558: 0x2e42000b  sltiu       $v0, $s2, 0xB
    ctx->pc = 0x2ca558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2ca55c: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x2ca55cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ca560: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CA560u;
    {
        const bool branch_taken_0x2ca560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA560u;
            // 0x2ca564: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca560) {
            ctx->pc = 0x2CA590u;
            goto label_2ca590;
        }
    }
    ctx->pc = 0x2CA568u;
    // 0x2ca568: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ca568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ca56c: 0x0  nop
    ctx->pc = 0x2ca56cu;
    // NOP
label_2ca570:
    // 0x2ca570: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2ca570u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2ca574: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CA574u;
    {
        const bool branch_taken_0x2ca574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca574) {
            ctx->pc = 0x2CA578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA574u;
            // 0x2ca578: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA57Cu;
            goto label_2ca57c;
        }
    }
    ctx->pc = 0x2CA57Cu;
label_2ca57c:
    // 0x2ca57c: 0x1812  mflo        $v1
    ctx->pc = 0x2ca57cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2ca580: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x2ca580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2ca584: 0x0  nop
    ctx->pc = 0x2ca584u;
    // NOP
    // 0x2ca588: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CA588u;
    {
        const bool branch_taken_0x2ca588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA588u;
            // 0x2ca58c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca588) {
            ctx->pc = 0x2CA570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca570;
        }
    }
    ctx->pc = 0x2CA590u;
label_2ca590:
    // 0x2ca590: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA590u;
    {
        const bool branch_taken_0x2ca590 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca590) {
            ctx->pc = 0x2CA594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA590u;
            // 0x2ca594: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA5A4u;
            goto label_2ca5a4;
        }
    }
    ctx->pc = 0x2CA598u;
    // 0x2ca598: 0xc0b29b4  jal         func_2CA6D0
    ctx->pc = 0x2CA598u;
    SET_GPR_U32(ctx, 31, 0x2CA5A0u);
    ctx->pc = 0x2CA59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA598u;
            // 0x2ca59c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6D0u;
    if (runtime->hasFunction(0x2CA6D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5A0u; }
        if (ctx->pc != 0x2CA5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA6D0_0x2ca6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5A0u; }
        if (ctx->pc != 0x2CA5A0u) { return; }
    }
    ctx->pc = 0x2CA5A0u;
label_2ca5a0:
    // 0x2ca5a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ca5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ca5a4:
    // 0x2ca5a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA5A4u;
    {
        const bool branch_taken_0x2ca5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5A4u;
            // 0x2ca5a8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5a4) {
            ctx->pc = 0x2CA5B8u;
            goto label_2ca5b8;
        }
    }
    ctx->pc = 0x2CA5ACu;
    // 0x2ca5ac: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2CA5ACu;
    SET_GPR_U32(ctx, 31, 0x2CA5B4u);
    ctx->pc = 0x2D8398u;
    if (runtime->hasFunction(0x2D8398u)) {
        auto targetFn = runtime->lookupFunction(0x2D8398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5B4u; }
        if (ctx->pc != 0x2CA5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8398_0x2d8398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5B4u; }
        if (ctx->pc != 0x2CA5B4u) { return; }
    }
    ctx->pc = 0x2CA5B4u;
label_2ca5b4:
    // 0x2ca5b4: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x2ca5b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ca5b8:
    // 0x2ca5b8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2CA5B8u;
    SET_GPR_U32(ctx, 31, 0x2CA5C0u);
    ctx->pc = 0x2CA5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5B8u;
            // 0x2ca5bc: 0x8ec40010  lw          $a0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (runtime->hasFunction(0x2D8398u)) {
        auto targetFn = runtime->lookupFunction(0x2D8398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5C0u; }
        if (ctx->pc != 0x2CA5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8398_0x2d8398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5C0u; }
        if (ctx->pc != 0x2CA5C0u) { return; }
    }
    ctx->pc = 0x2CA5C0u;
label_2ca5c0:
    // 0x2ca5c0: 0x2b42821  addu        $a1, $s5, $s4
    ctx->pc = 0x2ca5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2ca5c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ca5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ca5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca5cc: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2ca5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2ca5d0: 0xc0b60c0  jal         func_2D8300
    ctx->pc = 0x2CA5D0u;
    SET_GPR_U32(ctx, 31, 0x2CA5D8u);
    ctx->pc = 0x2CA5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5D0u;
            // 0x2ca5d4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8300u;
    if (runtime->hasFunction(0x2D8300u)) {
        auto targetFn = runtime->lookupFunction(0x2D8300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5D8u; }
        if (ctx->pc != 0x2CA5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8300_0x2d8300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5D8u; }
        if (ctx->pc != 0x2CA5D8u) { return; }
    }
    ctx->pc = 0x2CA5D8u;
label_2ca5d8:
    // 0x2ca5d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ca5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5dc: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA5DCu;
    {
        const bool branch_taken_0x2ca5dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5dc) {
            ctx->pc = 0x2CA5F0u;
            goto label_2ca5f0;
        }
    }
    ctx->pc = 0x2CA5E4u;
    // 0x2ca5e4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2CA5E4u;
    {
        const bool branch_taken_0x2ca5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5E4u;
            // 0x2ca5e8: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5e4) {
            ctx->pc = 0x2CA698u;
            goto label_2ca698;
        }
    }
    ctx->pc = 0x2CA5ECu;
    // 0x2ca5ec: 0x0  nop
    ctx->pc = 0x2ca5ecu;
    // NOP
label_2ca5f0:
    // 0x2ca5f0: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA5F0u;
    {
        const bool branch_taken_0x2ca5f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5F0u;
            // 0x2ca5f4: 0x2938021  addu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5f0) {
            ctx->pc = 0x2CA618u;
            goto label_2ca618;
        }
    }
    ctx->pc = 0x2CA5F8u;
    // 0x2ca5f8: 0x26a60001  addiu       $a2, $s5, 0x1
    ctx->pc = 0x2ca5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ca5fc: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x2ca5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2ca600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ca600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca604: 0xc0b60a2  jal         func_2D8288
    ctx->pc = 0x2CA604u;
    SET_GPR_U32(ctx, 31, 0x2CA60Cu);
    ctx->pc = 0x2CA608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA604u;
            // 0x2ca608: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8288u;
    if (runtime->hasFunction(0x2D8288u)) {
        auto targetFn = runtime->lookupFunction(0x2D8288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA60Cu; }
        if (ctx->pc != 0x2CA60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8288_0x2d8288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA60Cu; }
        if (ctx->pc != 0x2CA60Cu) { return; }
    }
    ctx->pc = 0x2CA60Cu;
label_2ca60c:
    // 0x2ca60c: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x2ca60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2ca610: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA610u;
    {
        const bool branch_taken_0x2ca610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA610u;
            // 0x2ca614: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca610) {
            ctx->pc = 0x2CA624u;
            goto label_2ca624;
        }
    }
    ctx->pc = 0x2CA618u;
label_2ca618:
    // 0x2ca618: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x2ca618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2ca61c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ca61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ca620: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2ca620u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2ca624:
    // 0x2ca624: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x2ca624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2ca628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca62c: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CA62Cu;
    SET_GPR_U32(ctx, 31, 0x2CA634u);
    ctx->pc = 0x2CA630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA62Cu;
            // 0x2ca630: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA634u; }
        if (ctx->pc != 0x2CA634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA634u; }
        if (ctx->pc != 0x2CA634u) { return; }
    }
    ctx->pc = 0x2CA634u;
label_2ca634:
    // 0x2ca634: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ca634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca638: 0x12430016  beq         $s2, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CA638u;
    {
        const bool branch_taken_0x2ca638 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CA63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA638u;
            // 0x2ca63c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca638) {
            ctx->pc = 0x2CA694u;
            goto label_2ca694;
        }
    }
    ctx->pc = 0x2CA640u;
    // 0x2ca640: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x2ca640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2ca644: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x2ca644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2ca648: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x2ca648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2ca64c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2ca64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ca650: 0x2848021  addu        $s0, $s4, $a0
    ctx->pc = 0x2ca650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2ca654: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2ca654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca658: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ca658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ca65c: 0x244001b  divu        $zero, $s2, $a0
    ctx->pc = 0x2ca65cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_2ca660:
    // 0x2ca660: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2ca660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2ca664: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CA664u;
    {
        const bool branch_taken_0x2ca664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca664) {
            ctx->pc = 0x2CA668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA664u;
            // 0x2ca668: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA66Cu;
            goto label_2ca66c;
        }
    }
    ctx->pc = 0x2CA66Cu;
label_2ca66c:
    // 0x2ca66c: 0x1812  mflo        $v1
    ctx->pc = 0x2ca66cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2ca670: 0x1010  mfhi        $v0
    ctx->pc = 0x2ca670u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ca674: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2ca674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2ca678: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2ca678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca67c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2ca67cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca680: 0x5640fff7  bnel        $s2, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CA680u;
    {
        const bool branch_taken_0x2ca680 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca680) {
            ctx->pc = 0x2CA684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA680u;
            // 0x2ca684: 0x244001b  divu        $zero, $s2, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca660;
        }
    }
    ctx->pc = 0x2CA688u;
    // 0x2ca688: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x2ca688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2ca68c: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x2ca68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2ca690: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2ca690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ca694:
    // 0x2ca694: 0xaef10000  sw          $s1, 0x0($s7)
    ctx->pc = 0x2ca694u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
label_2ca698:
    // 0x2ca698: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2ca698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca69c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ca69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca6a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ca6a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ca6a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ca6a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca6a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ca6a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ca6ac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ca6acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca6b0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2ca6b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ca6b4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2ca6b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca6b8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2ca6b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca6bc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2ca6bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca6c0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2ca6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ca6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA6C4u;
            // 0x2ca6c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA6CCu;
    // 0x2ca6cc: 0x0  nop
    ctx->pc = 0x2ca6ccu;
    // NOP
    ctx->pc = 0x2ca6d0u;
}
