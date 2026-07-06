#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D42B0
// Address: 0x2d42b0 - 0x2d4470
void sub_002D42B0_0x2d42b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D42B0_0x2d42b0");
#endif

    switch (ctx->pc) {
        case 0x2d4300u: goto label_2d4300;
        case 0x2d430cu: goto label_2d430c;
        case 0x2d4320u: goto label_2d4320;
        case 0x2d4350u: goto label_2d4350;
        case 0x2d4388u: goto label_2d4388;
        case 0x2d4394u: goto label_2d4394;
        case 0x2d43acu: goto label_2d43ac;
        case 0x2d43c0u: goto label_2d43c0;
        case 0x2d43dcu: goto label_2d43dc;
        case 0x2d43ecu: goto label_2d43ec;
        case 0x2d4420u: goto label_2d4420;
        default: break;
    }

    ctx->pc = 0x2d42b0u;

    // 0x2d42b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d42b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d42b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d42b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d42b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d42bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d42bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d42c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d42c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d42c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d42c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d42cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d42ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d42d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d42d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d42d4: 0x18c0005d  blez        $a2, . + 4 + (0x5D << 2)
    ctx->pc = 0x2D42D4u;
    {
        const bool branch_taken_0x2d42d4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2D42D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D42D4u;
            // 0x2d42d8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d42d4) {
            ctx->pc = 0x2D444Cu;
            goto label_2d444c;
        }
    }
    ctx->pc = 0x2D42DCu;
    // 0x2d42dc: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x2d42dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d42e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d42e4: 0x2668821  addu        $s1, $s3, $a2
    ctx->pc = 0x2d42e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2d42e8: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2d42e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d42ec: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D42ECu;
    {
        const bool branch_taken_0x2d42ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d42ec) {
            ctx->pc = 0x2D42F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D42ECu;
            // 0x2d42f0: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D43C8u;
            goto label_2d43c8;
        }
    }
    ctx->pc = 0x2D42F4u;
    // 0x2d42f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2D42F4u;
    {
        const bool branch_taken_0x2d42f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D42F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D42F4u;
            // 0x2d42f8: 0x6a0c0  sll         $s4, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d42f4) {
            ctx->pc = 0x2D4380u;
            goto label_2d4380;
        }
    }
    ctx->pc = 0x2D42FCu;
    // 0x2d42fc: 0x0  nop
    ctx->pc = 0x2d42fcu;
    // NOP
label_2d4300:
    // 0x2d4300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4304: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D4304u;
    SET_GPR_U32(ctx, 31, 0x2D430Cu);
    ctx->pc = 0x2D4308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4304u;
            // 0x2d4308: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D430Cu; }
        if (ctx->pc != 0x2D430Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D430Cu; }
        if (ctx->pc != 0x2D430Cu) { return; }
    }
    ctx->pc = 0x2D430Cu;
label_2d430c:
    // 0x2d430c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2d430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d4310: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2d4310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4314: 0x1330c0  sll         $a2, $s3, 3
    ctx->pc = 0x2d4314u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2d4318: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2D4318u;
    SET_GPR_U32(ctx, 31, 0x2D4320u);
    ctx->pc = 0x2D431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4318u;
            // 0x2d431c: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4320u; }
        if (ctx->pc != 0x2D4320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4320u; }
        if (ctx->pc != 0x2D4320u) { return; }
    }
    ctx->pc = 0x2D4320u;
label_2d4320:
    // 0x2d4320: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2d4320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d4324: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d4324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d4328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d4328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d432c: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x2d432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2d4330: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2d4330u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4334: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D4334u;
    {
        const bool branch_taken_0x2d4334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4334) {
            ctx->pc = 0x2D4338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4334u;
            // 0x2d4338: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D43B8u;
            goto label_2d43b8;
        }
    }
    ctx->pc = 0x2D433Cu;
    // 0x2d433c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2d433cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d4340: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D4340u;
    {
        const bool branch_taken_0x2d4340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4340) {
            ctx->pc = 0x2D4344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4340u;
            // 0x2d4344: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D43B8u;
            goto label_2d43b8;
        }
    }
    ctx->pc = 0x2D4348u;
    // 0x2d4348: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2d4348u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d434c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2d434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_2d4350:
    // 0x2d4350: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d4350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d4354: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d4354u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4358: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D4358u;
    {
        const bool branch_taken_0x2d4358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4358u;
            // 0x2d435c: 0x2a240002  slti        $a0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4358) {
            ctx->pc = 0x2D4374u;
            goto label_2d4374;
        }
    }
    ctx->pc = 0x2D4360u;
    // 0x2d4360: 0x0  nop
    ctx->pc = 0x2d4360u;
    // NOP
    // 0x2d4364: 0x0  nop
    ctx->pc = 0x2d4364u;
    // NOP
    // 0x2d4368: 0x0  nop
    ctx->pc = 0x2d4368u;
    // NOP
    // 0x2d436c: 0x5080fff8  beql        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D436Cu;
    {
        const bool branch_taken_0x2d436c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d436c) {
            ctx->pc = 0x2D4370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D436Cu;
            // 0x2d4370: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4350;
        }
    }
    ctx->pc = 0x2D4374u;
label_2d4374:
    // 0x2d4374: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D4374u;
    {
        const bool branch_taken_0x2d4374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4374u;
            // 0x2d4378: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4374) {
            ctx->pc = 0x2D43B8u;
            goto label_2d43b8;
        }
    }
    ctx->pc = 0x2D437Cu;
    // 0x2d437c: 0x0  nop
    ctx->pc = 0x2d437cu;
    // NOP
label_2d4380:
    // 0x2d4380: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D4380u;
    SET_GPR_U32(ctx, 31, 0x2D4388u);
    ctx->pc = 0x2D4384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4380u;
            // 0x2d4384: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4388u; }
        if (ctx->pc != 0x2D4388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4388u; }
        if (ctx->pc != 0x2D4388u) { return; }
    }
    ctx->pc = 0x2D4388u;
label_2d4388:
    // 0x2d4388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d438c: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D438Cu;
    SET_GPR_U32(ctx, 31, 0x2D4394u);
    ctx->pc = 0x2D4390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D438Cu;
            // 0x2d4390: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4394u; }
        if (ctx->pc != 0x2D4394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4394u; }
        if (ctx->pc != 0x2D4394u) { return; }
    }
    ctx->pc = 0x2D4394u;
label_2d4394:
    // 0x2d4394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d4394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4398: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4398u;
    {
        const bool branch_taken_0x2d4398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4398) {
            ctx->pc = 0x2D43B8u;
            goto label_2d43b8;
        }
    }
    ctx->pc = 0x2D43A0u;
    // 0x2d43a0: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2d43a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d43a4: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D43A4u;
    SET_GPR_U32(ctx, 31, 0x2D43ACu);
    ctx->pc = 0x2D43A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D43A4u;
            // 0x2d43a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43ACu; }
        if (ctx->pc != 0x2D43ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43ACu; }
        if (ctx->pc != 0x2D43ACu) { return; }
    }
    ctx->pc = 0x2D43ACu;
label_2d43ac:
    // 0x2d43ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d43acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d43b0: 0x5200ffd3  beql        $s0, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2D43B0u;
    {
        const bool branch_taken_0x2d43b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d43b0) {
            ctx->pc = 0x2D43B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D43B0u;
            // 0x2d43b4: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4300;
        }
    }
    ctx->pc = 0x2D43B8u;
label_2d43b8:
    // 0x2d43b8: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D43B8u;
    SET_GPR_U32(ctx, 31, 0x2D43C0u);
    ctx->pc = 0x2D43BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D43B8u;
            // 0x2d43bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43C0u; }
        if (ctx->pc != 0x2D43C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43C0u; }
        if (ctx->pc != 0x2D43C0u) { return; }
    }
    ctx->pc = 0x2D43C0u;
label_2d43c0:
    // 0x2d43c0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2D43C0u;
    {
        const bool branch_taken_0x2d43c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D43C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D43C0u;
            // 0x2d43c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43c0) {
            ctx->pc = 0x2D444Cu;
            goto label_2d444c;
        }
    }
    ctx->pc = 0x2D43C8u;
label_2d43c8:
    // 0x2d43c8: 0x680c0  sll         $s0, $a2, 3
    ctx->pc = 0x2d43c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d43cc: 0x1330c0  sll         $a2, $s3, 3
    ctx->pc = 0x2d43ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2d43d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d43d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d43d4: 0xc0b60a2  jal         func_2D8288
    ctx->pc = 0x2D43D4u;
    SET_GPR_U32(ctx, 31, 0x2D43DCu);
    ctx->pc = 0x2D43D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D43D4u;
            // 0x2d43d8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8288u;
    if (runtime->hasFunction(0x2D8288u)) {
        auto targetFn = runtime->lookupFunction(0x2D8288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43DCu; }
        if (ctx->pc != 0x2D43DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8288_0x2d8288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43DCu; }
        if (ctx->pc != 0x2D43DCu) { return; }
    }
    ctx->pc = 0x2D43DCu;
label_2d43dc:
    // 0x2d43dc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2d43dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d43e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d43e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d43e4: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D43E4u;
    SET_GPR_U32(ctx, 31, 0x2D43ECu);
    ctx->pc = 0x2D43E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D43E4u;
            // 0x2d43e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43ECu; }
        if (ctx->pc != 0x2D43ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43ECu; }
        if (ctx->pc != 0x2D43ECu) { return; }
    }
    ctx->pc = 0x2D43ECu;
label_2d43ec:
    // 0x2d43ec: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2d43ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d43f0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d43f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d43f8: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x2d43f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2d43fc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2d43fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4400: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D4400u;
    {
        const bool branch_taken_0x2d4400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4400) {
            ctx->pc = 0x2D4404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4400u;
            // 0x2d4404: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4448u;
            goto label_2d4448;
        }
    }
    ctx->pc = 0x2D4408u;
    // 0x2d4408: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2d4408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d440c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D440Cu;
    {
        const bool branch_taken_0x2d440c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d440c) {
            ctx->pc = 0x2D4410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D440Cu;
            // 0x2d4410: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4448u;
            goto label_2d4448;
        }
    }
    ctx->pc = 0x2D4414u;
    // 0x2d4414: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2d4414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4418: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2d4418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2d441c: 0x0  nop
    ctx->pc = 0x2d441cu;
    // NOP
label_2d4420:
    // 0x2d4420: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d4420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d4424: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d4424u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4428: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D4428u;
    {
        const bool branch_taken_0x2d4428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4428u;
            // 0x2d442c: 0x2a240002  slti        $a0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4428) {
            ctx->pc = 0x2D4444u;
            goto label_2d4444;
        }
    }
    ctx->pc = 0x2D4430u;
    // 0x2d4430: 0x0  nop
    ctx->pc = 0x2d4430u;
    // NOP
    // 0x2d4434: 0x0  nop
    ctx->pc = 0x2d4434u;
    // NOP
    // 0x2d4438: 0x0  nop
    ctx->pc = 0x2d4438u;
    // NOP
    // 0x2d443c: 0x5080fff8  beql        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D443Cu;
    {
        const bool branch_taken_0x2d443c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d443c) {
            ctx->pc = 0x2D4440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D443Cu;
            // 0x2d4440: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4420;
        }
    }
    ctx->pc = 0x2D4444u;
label_2d4444:
    // 0x2d4444: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x2d4444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_2d4448:
    // 0x2d4448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d444c:
    // 0x2d444c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d444cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4450: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d4450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4454: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d4454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4458: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d4458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d445c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d445cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4460: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d4460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4464: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4464u;
            // 0x2d4468: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D446Cu;
    // 0x2d446c: 0x0  nop
    ctx->pc = 0x2d446cu;
    // NOP
    ctx->pc = 0x2d4470u;
}
