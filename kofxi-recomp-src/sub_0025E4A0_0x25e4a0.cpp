#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025E4A0
// Address: 0x25e4a0 - 0x25e5e0
void sub_0025E4A0_0x25e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E4A0_0x25e4a0");
#endif

    switch (ctx->pc) {
        case 0x25e504u: goto label_25e504;
        case 0x25e524u: goto label_25e524;
        case 0x25e590u: goto label_25e590;
        case 0x25e5a8u: goto label_25e5a8;
        default: break;
    }

    ctx->pc = 0x25e4a0u;

    // 0x25e4a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25e4a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25e4a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25e4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25e4ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25e4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25e4b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25e4b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25e4b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25e4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e4c0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25e4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25e4c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25e4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4cc: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E4CCu;
    {
        const bool branch_taken_0x25e4cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x25E4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4CCu;
            // 0x25e4d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4cc) {
            ctx->pc = 0x25E4E8u;
            goto label_25e4e8;
        }
    }
    ctx->pc = 0x25E4D4u;
    // 0x25e4d4: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x25e4d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x25e4d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E4D8u;
    {
        const bool branch_taken_0x25e4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4D8u;
            // 0x25e4dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4d8) {
            ctx->pc = 0x25E4F4u;
            goto label_25e4f4;
        }
    }
    ctx->pc = 0x25E4E0u;
    // 0x25e4e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25E4E0u;
    {
        const bool branch_taken_0x25e4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e4e0) {
            ctx->pc = 0x25E4FCu;
            goto label_25e4fc;
        }
    }
    ctx->pc = 0x25E4E8u;
label_25e4e8:
    // 0x25e4e8: 0x2e221001  sltiu       $v0, $s1, 0x1001
    ctx->pc = 0x25e4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
    // 0x25e4ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E4ECu;
    {
        const bool branch_taken_0x25e4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4ECu;
            // 0x25e4f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4ec) {
            ctx->pc = 0x25E4FCu;
            goto label_25e4fc;
        }
    }
    ctx->pc = 0x25E4F4u;
label_25e4f4:
    // 0x25e4f4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x25E4F4u;
    {
        const bool branch_taken_0x25e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4F4u;
            // 0x25e4f8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4f4) {
            ctx->pc = 0x25E5C0u;
            goto label_25e5c0;
        }
    }
    ctx->pc = 0x25E4FCu;
label_25e4fc:
    // 0x25e4fc: 0xc08a922  jal         func_22A488
    ctx->pc = 0x25E4FCu;
    SET_GPR_U32(ctx, 31, 0x25E504u);
    ctx->pc = 0x25E500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4FCu;
            // 0x25e500: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (runtime->hasFunction(0x22A488u)) {
        auto targetFn = runtime->lookupFunction(0x22A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E504u; }
        if (ctx->pc != 0x25E504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A488_0x22a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E504u; }
        if (ctx->pc != 0x25E504u) { return; }
    }
    ctx->pc = 0x25E504u;
label_25e504:
    // 0x25e504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e508: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x25E508u;
    {
        const bool branch_taken_0x25e508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E508u;
            // 0x25e50c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e508) {
            ctx->pc = 0x25E5C0u;
            goto label_25e5c0;
        }
    }
    ctx->pc = 0x25E510u;
    // 0x25e510: 0x2e2200ed  sltiu       $v0, $s1, 0xED
    ctx->pc = 0x25e510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)237) ? 1 : 0);
    // 0x25e514: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x25E514u;
    {
        const bool branch_taken_0x25e514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e514) {
            ctx->pc = 0x25E518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25E514u;
            // 0x25e518: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25E598u;
            goto label_25e598;
        }
    }
    ctx->pc = 0x25E51Cu;
    // 0x25e51c: 0xc098552  jal         func_261548
    ctx->pc = 0x25E51Cu;
    SET_GPR_U32(ctx, 31, 0x25E524u);
    ctx->pc = 0x25E520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E51Cu;
            // 0x25e520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E524u; }
        if (ctx->pc != 0x25E524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E524u; }
        if (ctx->pc != 0x25E524u) { return; }
    }
    ctx->pc = 0x25E524u;
label_25e524:
    // 0x25e524: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25e524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e528: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25E528u;
    {
        const bool branch_taken_0x25e528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E528u;
            // 0x25e52c: 0xae050020  sw          $a1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e528) {
            ctx->pc = 0x25E578u;
            goto label_25e578;
        }
    }
    ctx->pc = 0x25E530u;
    // 0x25e530: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x25e530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25e534: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x25e534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x25e538: 0x24634550  addiu       $v1, $v1, 0x4550
    ctx->pc = 0x25e538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17744));
    // 0x25e53c: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x25e53cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x25e540: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25e540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25e544: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x25e544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x25e548: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25e548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25e54c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x25e550: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25e554: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x25e554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x25e558: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x25e558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e55c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x25e55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x25e560: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x25e560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
    // 0x25e564: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25e564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x25e568: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x25e568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x25e56c: 0xae100038  sw          $s0, 0x38($s0)
    ctx->pc = 0x25e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 16));
    // 0x25e570: 0xae100034  sw          $s0, 0x34($s0)
    ctx->pc = 0x25e570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 16));
    // 0x25e574: 0x0  nop
    ctx->pc = 0x25e574u;
    // NOP
label_25e578:
    // 0x25e578: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x25e578u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x25e57c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25e57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25e580: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E580u;
    {
        const bool branch_taken_0x25e580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e580) {
            ctx->pc = 0x25E584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25E580u;
            // 0x25e584: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25E598u;
            goto label_25e598;
        }
    }
    ctx->pc = 0x25E588u;
    // 0x25e588: 0xc08a996  jal         func_22A658
    ctx->pc = 0x25E588u;
    SET_GPR_U32(ctx, 31, 0x25E590u);
    ctx->pc = 0x25E58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E588u;
            // 0x25e58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E590u; }
        if (ctx->pc != 0x25E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E590u; }
        if (ctx->pc != 0x25E590u) { return; }
    }
    ctx->pc = 0x25E590u;
label_25e590:
    // 0x25e590: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25E590u;
    {
        const bool branch_taken_0x25e590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E590u;
            // 0x25e594: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e590) {
            ctx->pc = 0x25E5C0u;
            goto label_25e5c0;
        }
    }
    ctx->pc = 0x25E598u;
label_25e598:
    // 0x25e598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e59c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x25e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25e5a0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25E5A0u;
    SET_GPR_U32(ctx, 31, 0x25E5A8u);
    ctx->pc = 0x25E5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E5A0u;
            // 0x25e5a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E5A8u; }
        if (ctx->pc != 0x25E5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E5A8u; }
        if (ctx->pc != 0x25E5A8u) { return; }
    }
    ctx->pc = 0x25E5A8u;
label_25e5a8:
    // 0x25e5a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25e5ac: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E5ACu;
    {
        const bool branch_taken_0x25e5ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x25E5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E5ACu;
            // 0x25e5b0: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5ac) {
            ctx->pc = 0x25E5BCu;
            goto label_25e5bc;
        }
    }
    ctx->pc = 0x25E5B4u;
    // 0x25e5b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x25e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25e5b8: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x25e5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
label_25e5bc:
    // 0x25e5bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25e5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e5c0:
    // 0x25e5c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25e5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e5c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25e5c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e5c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25e5c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e5cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25e5ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e5d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25e5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e5d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25e5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x25E5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E5D8u;
            // 0x25e5dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25E5E0u;
    ctx->pc = 0x25e5e0u;
}
