#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD488
// Address: 0x1fd488 - 0x1fd5a8
void sub_001FD488_0x1fd488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD488_0x1fd488");
#endif

    switch (ctx->pc) {
        case 0x1fd4b4u: goto label_1fd4b4;
        case 0x1fd4c0u: goto label_1fd4c0;
        case 0x1fd4dcu: goto label_1fd4dc;
        case 0x1fd4e8u: goto label_1fd4e8;
        case 0x1fd4f8u: goto label_1fd4f8;
        case 0x1fd514u: goto label_1fd514;
        case 0x1fd520u: goto label_1fd520;
        case 0x1fd530u: goto label_1fd530;
        case 0x1fd54cu: goto label_1fd54c;
        case 0x1fd558u: goto label_1fd558;
        case 0x1fd568u: goto label_1fd568;
        case 0x1fd578u: goto label_1fd578;
        default: break;
    }

    ctx->pc = 0x1fd488u;

    // 0x1fd488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd490: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd49c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fd4a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD4A0u;
    {
        const bool branch_taken_0x1fd4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4A0u;
            // 0x1fd4a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4a0) {
            ctx->pc = 0x1FD4C8u;
            goto label_1fd4c8;
        }
    }
    ctx->pc = 0x1FD4A8u;
    // 0x1fd4a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd4ac: 0xc07f5fe  jal         func_1FD7F8
    ctx->pc = 0x1FD4ACu;
    SET_GPR_U32(ctx, 31, 0x1FD4B4u);
    ctx->pc = 0x1FD4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4ACu;
            // 0x1fd4b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F8u;
    if (runtime->hasFunction(0x1FD7F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4B4u; }
        if (ctx->pc != 0x1FD4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD7F8_0x1fd7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4B4u; }
        if (ctx->pc != 0x1FD4B4u) { return; }
    }
    ctx->pc = 0x1FD4B4u;
label_1fd4b4:
    // 0x1fd4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd4b8: 0xc07f56a  jal         func_1FD5A8
    ctx->pc = 0x1FD4B8u;
    SET_GPR_U32(ctx, 31, 0x1FD4C0u);
    ctx->pc = 0x1FD4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4B8u;
            // 0x1fd4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD5A8u;
    if (runtime->hasFunction(0x1FD5A8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4C0u; }
        if (ctx->pc != 0x1FD4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD5A8_0x1fd5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4C0u; }
        if (ctx->pc != 0x1FD4C0u) { return; }
    }
    ctx->pc = 0x1FD4C0u;
label_1fd4c0:
    // 0x1fd4c0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1FD4C0u;
    {
        const bool branch_taken_0x1fd4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4C0u;
            // 0x1fd4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4c0) {
            ctx->pc = 0x1FD594u;
            goto label_1fd594;
        }
    }
    ctx->pc = 0x1FD4C8u;
label_1fd4c8:
    // 0x1fd4c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1fd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fd4cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD4CCu;
    {
        const bool branch_taken_0x1fd4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4CCu;
            // 0x1fd4d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4cc) {
            ctx->pc = 0x1FD500u;
            goto label_1fd500;
        }
    }
    ctx->pc = 0x1FD4D4u;
    // 0x1fd4d4: 0xc07f5fe  jal         func_1FD7F8
    ctx->pc = 0x1FD4D4u;
    SET_GPR_U32(ctx, 31, 0x1FD4DCu);
    ctx->pc = 0x1FD4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4D4u;
            // 0x1fd4d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F8u;
    if (runtime->hasFunction(0x1FD7F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4DCu; }
        if (ctx->pc != 0x1FD4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD7F8_0x1fd7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4DCu; }
        if (ctx->pc != 0x1FD4DCu) { return; }
    }
    ctx->pc = 0x1FD4DCu;
label_1fd4dc:
    // 0x1fd4dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd4e0: 0xc07f5a6  jal         func_1FD698
    ctx->pc = 0x1FD4E0u;
    SET_GPR_U32(ctx, 31, 0x1FD4E8u);
    ctx->pc = 0x1FD4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4E0u;
            // 0x1fd4e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD698u;
    if (runtime->hasFunction(0x1FD698u)) {
        auto targetFn = runtime->lookupFunction(0x1FD698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4E8u; }
        if (ctx->pc != 0x1FD4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD698_0x1fd698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4E8u; }
        if (ctx->pc != 0x1FD4E8u) { return; }
    }
    ctx->pc = 0x1FD4E8u;
label_1fd4e8:
    // 0x1fd4e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd4ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1fd4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fd4f0: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FD4F0u;
    SET_GPR_U32(ctx, 31, 0x1FD4F8u);
    ctx->pc = 0x1FD4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4F0u;
            // 0x1fd4f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (runtime->hasFunction(0x1FAE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4F8u; }
        if (ctx->pc != 0x1FD4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAE40_0x1fae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4F8u; }
        if (ctx->pc != 0x1FD4F8u) { return; }
    }
    ctx->pc = 0x1FD4F8u;
label_1fd4f8:
    // 0x1fd4f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1FD4F8u;
    {
        const bool branch_taken_0x1fd4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4F8u;
            // 0x1fd4fc: 0xae200bb4  sw          $zero, 0xBB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2996), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4f8) {
            ctx->pc = 0x1FD590u;
            goto label_1fd590;
        }
    }
    ctx->pc = 0x1FD500u;
label_1fd500:
    // 0x1fd500: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fd500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fd504: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD504u;
    {
        const bool branch_taken_0x1fd504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD504u;
            // 0x1fd508: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd504) {
            ctx->pc = 0x1FD538u;
            goto label_1fd538;
        }
    }
    ctx->pc = 0x1FD50Cu;
    // 0x1fd50c: 0xc07f5fe  jal         func_1FD7F8
    ctx->pc = 0x1FD50Cu;
    SET_GPR_U32(ctx, 31, 0x1FD514u);
    ctx->pc = 0x1FD510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD50Cu;
            // 0x1fd510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F8u;
    if (runtime->hasFunction(0x1FD7F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD514u; }
        if (ctx->pc != 0x1FD514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD7F8_0x1fd7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD514u; }
        if (ctx->pc != 0x1FD514u) { return; }
    }
    ctx->pc = 0x1FD514u;
label_1fd514:
    // 0x1fd514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd518: 0xc07f5ce  jal         func_1FD738
    ctx->pc = 0x1FD518u;
    SET_GPR_U32(ctx, 31, 0x1FD520u);
    ctx->pc = 0x1FD51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD518u;
            // 0x1fd51c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD738u;
    if (runtime->hasFunction(0x1FD738u)) {
        auto targetFn = runtime->lookupFunction(0x1FD738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD520u; }
        if (ctx->pc != 0x1FD520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD738_0x1fd738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD520u; }
        if (ctx->pc != 0x1FD520u) { return; }
    }
    ctx->pc = 0x1FD520u;
label_1fd520:
    // 0x1fd520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd524: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fd524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fd528: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FD528u;
    SET_GPR_U32(ctx, 31, 0x1FD530u);
    ctx->pc = 0x1FD52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD528u;
            // 0x1fd52c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (runtime->hasFunction(0x1FAE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD530u; }
        if (ctx->pc != 0x1FD530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAE40_0x1fae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD530u; }
        if (ctx->pc != 0x1FD530u) { return; }
    }
    ctx->pc = 0x1FD530u;
label_1fd530:
    // 0x1fd530: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FD530u;
    {
        const bool branch_taken_0x1fd530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD530u;
            // 0x1fd534: 0xae200bb0  sw          $zero, 0xBB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd530) {
            ctx->pc = 0x1FD590u;
            goto label_1fd590;
        }
    }
    ctx->pc = 0x1FD538u;
label_1fd538:
    // 0x1fd538: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1fd538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fd53c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD53Cu;
    {
        const bool branch_taken_0x1fd53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD53Cu;
            // 0x1fd540: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd53c) {
            ctx->pc = 0x1FD588u;
            goto label_1fd588;
        }
    }
    ctx->pc = 0x1FD544u;
    // 0x1fd544: 0xc07f5fe  jal         func_1FD7F8
    ctx->pc = 0x1FD544u;
    SET_GPR_U32(ctx, 31, 0x1FD54Cu);
    ctx->pc = 0x1FD548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD544u;
            // 0x1fd548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F8u;
    if (runtime->hasFunction(0x1FD7F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD54Cu; }
        if (ctx->pc != 0x1FD54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD7F8_0x1fd7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD54Cu; }
        if (ctx->pc != 0x1FD54Cu) { return; }
    }
    ctx->pc = 0x1FD54Cu;
label_1fd54c:
    // 0x1fd54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd550: 0xc07f5f6  jal         func_1FD7D8
    ctx->pc = 0x1FD550u;
    SET_GPR_U32(ctx, 31, 0x1FD558u);
    ctx->pc = 0x1FD554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD550u;
            // 0x1fd554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7D8u;
    if (runtime->hasFunction(0x1FD7D8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD558u; }
        if (ctx->pc != 0x1FD558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD7D8_0x1fd7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD558u; }
        if (ctx->pc != 0x1FD558u) { return; }
    }
    ctx->pc = 0x1FD558u;
label_1fd558:
    // 0x1fd558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd55c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1fd55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fd560: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FD560u;
    SET_GPR_U32(ctx, 31, 0x1FD568u);
    ctx->pc = 0x1FD564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD560u;
            // 0x1fd564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (runtime->hasFunction(0x1FAE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD568u; }
        if (ctx->pc != 0x1FD568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAE40_0x1fae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD568u; }
        if (ctx->pc != 0x1FD568u) { return; }
    }
    ctx->pc = 0x1FD568u;
label_1fd568:
    // 0x1fd568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd56c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fd56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fd570: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FD570u;
    SET_GPR_U32(ctx, 31, 0x1FD578u);
    ctx->pc = 0x1FD574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD570u;
            // 0x1fd574: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (runtime->hasFunction(0x1FAE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD578u; }
        if (ctx->pc != 0x1FD578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAE40_0x1fae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD578u; }
        if (ctx->pc != 0x1FD578u) { return; }
    }
    ctx->pc = 0x1FD578u;
label_1fd578:
    // 0x1fd578: 0xae200bb4  sw          $zero, 0xBB4($s1)
    ctx->pc = 0x1fd578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2996), GPR_U32(ctx, 0));
    // 0x1fd57c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD57Cu;
    {
        const bool branch_taken_0x1fd57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD57Cu;
            // 0x1fd580: 0xae200bb0  sw          $zero, 0xBB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd57c) {
            ctx->pc = 0x1FD590u;
            goto label_1fd590;
        }
    }
    ctx->pc = 0x1FD584u;
    // 0x1fd584: 0x0  nop
    ctx->pc = 0x1fd584u;
    // NOP
label_1fd588:
    // 0x1fd588: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD588u;
    {
        const bool branch_taken_0x1fd588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD588u;
            // 0x1fd58c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd588) {
            ctx->pc = 0x1FD594u;
            goto label_1fd594;
        }
    }
    ctx->pc = 0x1FD590u;
label_1fd590:
    // 0x1fd590: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd594:
    // 0x1fd594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd598: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd59c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5A0u;
            // 0x1fd5a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD5A8u;
    ctx->pc = 0x1fd5a8u;
}
