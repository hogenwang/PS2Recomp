#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E93C8
// Address: 0x1e93c8 - 0x1e94c8
void sub_001E93C8_0x1e93c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E93C8_0x1e93c8");
#endif

    switch (ctx->pc) {
        case 0x1e93e8u: goto label_1e93e8;
        case 0x1e9408u: goto label_1e9408;
        case 0x1e9444u: goto label_1e9444;
        case 0x1e946cu: goto label_1e946c;
        default: break;
    }

    ctx->pc = 0x1e93c8u;

    // 0x1e93c8: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1e93c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1e93cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e93ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e93d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e93d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e93d4: 0x24a59408  addiu       $a1, $a1, -0x6BF8
    ctx->pc = 0x1e93d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939656));
    // 0x1e93d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e93d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e93dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e93dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e93e0: 0xc07f142  jal         func_1FC508
    ctx->pc = 0x1E93E0u;
    SET_GPR_U32(ctx, 31, 0x1E93E8u);
    ctx->pc = 0x1E93E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93E0u;
            // 0x1e93e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC508u;
    if (runtime->hasFunction(0x1FC508u)) {
        auto targetFn = runtime->lookupFunction(0x1FC508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93E8u; }
        if (ctx->pc != 0x1E93E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC508_0x1fc508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93E8u; }
        if (ctx->pc != 0x1E93E8u) { return; }
    }
    ctx->pc = 0x1E93E8u;
label_1e93e8:
    // 0x1e93e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e93e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e93ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e93ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e93f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e93f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e93f4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e93f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e93f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e93f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e93fc: 0x807eb90  j           func_1FAE40
    ctx->pc = 0x1E93FCu;
    ctx->pc = 0x1E9400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93FCu;
            // 0x1e9400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (runtime->hasFunction(0x1FAE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FAE40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FAE40_0x1fae40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E9404u;
    // 0x1e9404: 0x0  nop
    ctx->pc = 0x1e9404u;
    // NOP
label_1e9408:
    // 0x1e9408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e9408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e940c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e9410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9414: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e9418: 0x26131078  addiu       $s3, $s0, 0x1078
    ctx->pc = 0x1e9418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4216));
    // 0x1e941c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e9420: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e9420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9424: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1e9424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1e9428: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1e9428u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e942c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e9430: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e9430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e9434: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e9434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e9438: 0x8e11205c  lw          $s1, 0x205C($s0)
    ctx->pc = 0x1e9438u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8284)));
    // 0x1e943c: 0xc07f052  jal         func_1FC148
    ctx->pc = 0x1E943Cu;
    SET_GPR_U32(ctx, 31, 0x1E9444u);
    ctx->pc = 0x1E9440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E943Cu;
            // 0x1e9440: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC148u;
    if (runtime->hasFunction(0x1FC148u)) {
        auto targetFn = runtime->lookupFunction(0x1FC148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9444u; }
        if (ctx->pc != 0x1E9444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC148_0x1fc148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9444u; }
        if (ctx->pc != 0x1E9444u) { return; }
    }
    ctx->pc = 0x1E9444u;
label_1e9444:
    // 0x1e9444: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E9444u;
    {
        const bool branch_taken_0x1e9444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9444u;
            // 0x1e9448: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9444) {
            ctx->pc = 0x1E94A0u;
            goto label_1e94a0;
        }
    }
    ctx->pc = 0x1E944Cu;
    // 0x1e944c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1e944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1e9450: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E9450u;
    {
        const bool branch_taken_0x1e9450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e9450) {
            ctx->pc = 0x1E9454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9450u;
            // 0x1e9454: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9490u;
            goto label_1e9490;
        }
    }
    ctx->pc = 0x1E9458u;
    // 0x1e9458: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e9458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e945c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e945cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9460: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e9460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9464: 0xc07a532  jal         func_1E94C8
    ctx->pc = 0x1E9464u;
    SET_GPR_U32(ctx, 31, 0x1E946Cu);
    ctx->pc = 0x1E9468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9464u;
            // 0x1e9468: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E94C8u;
    if (runtime->hasFunction(0x1E94C8u)) {
        auto targetFn = runtime->lookupFunction(0x1E94C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E946Cu; }
        if (ctx->pc != 0x1E946Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E94C8_0x1e94c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E946Cu; }
        if (ctx->pc != 0x1E946Cu) { return; }
    }
    ctx->pc = 0x1E946Cu;
label_1e946c:
    // 0x1e946c: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e946cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e9470: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e9470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9474: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1e9474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e9478: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9478u;
    {
        const bool branch_taken_0x1e9478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9478) {
            ctx->pc = 0x1E947Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9478u;
            // 0x1e947c: 0xae840000  sw          $a0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9494u;
            goto label_1e9494;
        }
    }
    ctx->pc = 0x1E9480u;
    // 0x1e9480: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e9480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e9484: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e9484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9488: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1e9488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1e948c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1e948cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1e9490:
    // 0x1e9490: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1e9490u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_1e9494:
    // 0x1e9494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9498: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1e9498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1e949c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1e949cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1e94a0:
    // 0x1e94a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e94a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e94a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e94a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e94a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e94a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e94ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e94acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e94b0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e94b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e94b4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1e94b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e94b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e94b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e94bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E94BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E94C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94BCu;
            // 0x1e94c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E94C4u;
    // 0x1e94c4: 0x0  nop
    ctx->pc = 0x1e94c4u;
    // NOP
    ctx->pc = 0x1e94c8u;
}
