#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001086C8
// Address: 0x1086c8 - 0x1089e0
void sub_001086C8_0x1086c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001086C8_0x1086c8");
#endif

    switch (ctx->pc) {
        case 0x1087a8u: goto label_1087a8;
        case 0x1087bcu: goto label_1087bc;
        case 0x1087d4u: goto label_1087d4;
        case 0x1087ecu: goto label_1087ec;
        default: break;
    }

    ctx->pc = 0x1086c8u;

    // 0x1086c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1086c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1086cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1086ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1086d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1086d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1086d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1086d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086d8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1086d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1086dc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1086dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1086e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1086e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1086e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1086e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1086e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1086e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1086ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1086ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1086f0: 0x8e720040  lw          $s2, 0x40($s3)
    ctx->pc = 0x1086f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1086f4: 0x8e450858  lw          $a1, 0x858($s2)
    ctx->pc = 0x1086f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x1086f8: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1086F8u;
    {
        const bool branch_taken_0x1086f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1086f8) {
            ctx->pc = 0x1086FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1086F8u;
            // 0x1086fc: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108728u;
            goto label_108728;
        }
    }
    ctx->pc = 0x108700u;
    // 0x108700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108704: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x108704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108708: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x108708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10870c: 0xae430184  sw          $v1, 0x184($s2)
    ctx->pc = 0x10870cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
    // 0x108710: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x108710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
    // 0x108714: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x108714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x108718: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x108718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x10871c: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x10871cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x108720: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x108720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x108724: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x108724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_108728:
    // 0x108728: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x108728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10872c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10872cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x108730: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x108730u;
    {
        const bool branch_taken_0x108730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x108734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108730u;
        // 0x108734: 0xae42013c  sw          $v0, 0x13C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108730) {
            ctx->pc = 0x108754u;
            goto label_108754;
        }
    }
    ctx->pc = 0x108738u;
    // 0x108738: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x108738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x10873c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10873Cu;
    {
        const bool branch_taken_0x10873c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10873Cu;
        // 0x108740: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10873c) {
            ctx->pc = 0x108758u;
            goto label_108758;
        }
    }
    ctx->pc = 0x108744u;
    // 0x108744: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x108744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x108748: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x108748u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x10874c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10874Cu;
    {
        const bool branch_taken_0x10874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10874Cu;
        // 0x108750: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10874c) {
            ctx->pc = 0x108760u;
            goto label_108760;
        }
    }
    ctx->pc = 0x108754u;
label_108754:
    // 0x108754: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x108754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_108758:
    // 0x108758: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x108758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10875c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10875cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_108760:
    // 0x108760: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x108760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x108764: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x108764u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108768: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x108768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x10876c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x10876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x108770: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x108770u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108774: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x108774u;
    {
        const bool branch_taken_0x108774 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x108778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108774u;
        // 0x108778: 0x24160180  addiu       $s6, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108774) {
            ctx->pc = 0x108788u;
            goto label_108788;
        }
    }
    ctx->pc = 0x10877Cu;
    // 0x10877c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x10877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x108780: 0x12a2008d  beq         $s5, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x108780u;
    {
        const bool branch_taken_0x108780 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x108784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108780u;
        // 0x108784: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108780) {
            ctx->pc = 0x1089B8u;
            goto label_1089b8;
        }
    }
    ctx->pc = 0x108788u;
label_108788:
    // 0x108788: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x108788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x10878c: 0x2b68018  mult        $s0, $s5, $s6
    ctx->pc = 0x10878cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x108790: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x108790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x108794: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x108794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
    // 0x108798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10879c: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x10879cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1087a0: 0xc042ae4  jal         func_10AB90
    ctx->pc = 0x1087A0u;
    SET_GPR_U32(ctx, 31, 0x1087A8u);
    ctx->pc = 0x1087A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087A0u;
    // 0x1087a4: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB90u, 0x1087A0u, 0x1087A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087A8u;
label_1087a8:
    // 0x1087a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1087a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1087acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1087b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087b4: 0xc042ae8  jal         func_10ABA0
    ctx->pc = 0x1087B4u;
    SET_GPR_U32(ctx, 31, 0x1087BCu);
    ctx->pc = 0x1087B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087B4u;
    // 0x1087b8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ABA0u, 0x1087B4u, 0x1087BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087BCu;
label_1087bc:
    // 0x1087bc: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x1087bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x1087c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1087c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1087c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1087c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087cc: 0xc042ae8  jal         func_10ABA0
    ctx->pc = 0x1087CCu;
    SET_GPR_U32(ctx, 31, 0x1087D4u);
    ctx->pc = 0x1087D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087CCu;
    // 0x1087d0: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ABA0u, 0x1087CCu, 0x1087D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087D4u;
label_1087d4:
    // 0x1087d4: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x1087d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x1087d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1087d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1087dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1087e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087e4: 0xc042ae8  jal         func_10ABA0
    ctx->pc = 0x1087E4u;
    SET_GPR_U32(ctx, 31, 0x1087ECu);
    ctx->pc = 0x1087E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087E4u;
    // 0x1087e8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ABA0u, 0x1087E4u, 0x1087ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087ECu;
label_1087ec:
    // 0x1087ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1087ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087f0: 0x8e43087c  lw          $v1, 0x87C($s2)
    ctx->pc = 0x1087f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2172)));
    // 0x1087f4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1087F4u;
    {
        const bool branch_taken_0x1087f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1087F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087F4u;
        // 0x1087f8: 0xae480114  sw          $t0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087f4) {
            ctx->pc = 0x108880u;
            goto label_108880;
        }
    }
    ctx->pc = 0x1087FCu;
    // 0x1087fc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1087fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x108800: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x108800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x108804: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x108804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x108808: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x108808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10880c: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x10880cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x108810: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x108810u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x108814: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x108814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x108818: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x108818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x10881c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10881cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x108820: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x108820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108824: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x108824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x108828: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x108828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x10882c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x10882cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x108830: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x108830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x108834: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x108834u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x108838: 0x24c201ff  addiu       $v0, $a2, 0x1FF
    ctx->pc = 0x108838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x10883c: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x10883cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x108840: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x108840u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x108844: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x108844u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x108848: 0xae4501f8  sw          $a1, 0x1F8($s2)
    ctx->pc = 0x108848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 5));
    // 0x10884c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x10884cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x108850: 0xae430260  sw          $v1, 0x260($s2)
    ctx->pc = 0x108850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
    // 0x108854: 0xae450330  sw          $a1, 0x330($s2)
    ctx->pc = 0x108854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 5));
    // 0x108858: 0xae430398  sw          $v1, 0x398($s2)
    ctx->pc = 0x108858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 3));
    // 0x10885c: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x10885cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x108860: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x108860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x108864: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x108864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x108868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x108868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10886c: 0xae450468  sw          $a1, 0x468($s2)
    ctx->pc = 0x10886cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 5));
    // 0x108870: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x108870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
    // 0x108874: 0xae440538  sw          $a0, 0x538($s2)
    ctx->pc = 0x108874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 4));
    // 0x108878: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x108878u;
    {
        const bool branch_taken_0x108878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108878u;
        // 0x10887c: 0xae480400  sw          $t0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108878) {
            ctx->pc = 0x1088E8u;
            goto label_1088e8;
        }
    }
    ctx->pc = 0x108880u;
label_108880:
    // 0x108880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108884: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x108884u;
    {
        const bool branch_taken_0x108884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108884u;
        // 0x108888: 0x143103  sra         $a2, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108884) {
            ctx->pc = 0x1088ECu;
            goto label_1088ec;
        }
    }
    ctx->pc = 0x10888Cu;
    // 0x10888c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x10888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x108890: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x108890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108894: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x108894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x108898: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x108898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x10889c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x10889cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1088a0: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x1088a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x1088a4: 0xae4601f8  sw          $a2, 0x1F8($s2)
    ctx->pc = 0x1088a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 6));
    // 0x1088a8: 0xae450260  sw          $a1, 0x260($s2)
    ctx->pc = 0x1088a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 5));
    // 0x1088ac: 0xae460330  sw          $a2, 0x330($s2)
    ctx->pc = 0x1088acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 6));
    // 0x1088b0: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1088b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1088b4: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x1088b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x1088b8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1088b8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1088bc: 0xae450398  sw          $a1, 0x398($s2)
    ctx->pc = 0x1088bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 5));
    // 0x1088c0: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x1088c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x1088c4: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x1088c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x1088c8: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x1088c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1088cc: 0xae480400  sw          $t0, 0x400($s2)
    ctx->pc = 0x1088ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
    // 0x1088d0: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x1088d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1088d4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1088d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1088d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1088d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1088dc: 0xae460468  sw          $a2, 0x468($s2)
    ctx->pc = 0x1088dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 6));
    // 0x1088e0: 0xae4504d0  sw          $a1, 0x4D0($s2)
    ctx->pc = 0x1088e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 5));
    // 0x1088e4: 0xae430538  sw          $v1, 0x538($s2)
    ctx->pc = 0x1088e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 3));
label_1088e8:
    // 0x1088e8: 0x143103  sra         $a2, $s4, 4
    ctx->pc = 0x1088e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
label_1088ec:
    // 0x1088ec: 0x264201f8  addiu       $v0, $s2, 0x1F8
    ctx->pc = 0x1088ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x1088f0: 0x153903  sra         $a3, $s5, 4
    ctx->pc = 0x1088f0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 4));
    // 0x1088f4: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x1088f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x1088f8: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1088f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x1088fc: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x1088fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x108900: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x108900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x108904: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x108904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x108908: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x108908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x10890c: 0x45143  sra         $t2, $a0, 5
    ctx->pc = 0x10890cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 5));
    // 0x108910: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x108910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x108914: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x108914u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x108918: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x108918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x10891c: 0x264202c8  addiu       $v0, $s2, 0x2C8
    ctx->pc = 0x10891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x108920: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x108920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x108924: 0x26450330  addiu       $a1, $s2, 0x330
    ctx->pc = 0x108924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x108928: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x108928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x10892c: 0x26480468  addiu       $t0, $s2, 0x468
    ctx->pc = 0x10892cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x108930: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x108930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x108934: 0x264904d0  addiu       $t1, $s2, 0x4D0
    ctx->pc = 0x108934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x108938: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x108938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x10893c: 0x26430398  addiu       $v1, $s2, 0x398
    ctx->pc = 0x10893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x108940: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x108940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x108944: 0x26470400  addiu       $a3, $s2, 0x400
    ctx->pc = 0x108944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x108948: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x108948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x10894c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x10894cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x108950: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x108950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x108954: 0x26420538  addiu       $v0, $s2, 0x538
    ctx->pc = 0x108954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x108958: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x108958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x10895c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x10895cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x108960: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x108960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x108964: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x108964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x108968: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x108968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x10896c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x10896cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x108970: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x108970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x108974: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x108974u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x108978: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x108978u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x10897c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x10897cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x108980: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x108980u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x108984: 0xad0a0010  sw          $t2, 0x10($t0)
    ctx->pc = 0x108984u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 10));
    // 0x108988: 0xad140004  sw          $s4, 0x4($t0)
    ctx->pc = 0x108988u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 20));
    // 0x10898c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x10898cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x108990: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x108990u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x108994: 0xad2a0010  sw          $t2, 0x10($t1)
    ctx->pc = 0x108994u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 10));
    // 0x108998: 0xad340004  sw          $s4, 0x4($t1)
    ctx->pc = 0x108998u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 20));
    // 0x10899c: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x10899cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x1089a0: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x1089a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x1089a4: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x1089a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x1089a8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1089a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1089ac: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x1089acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x1089b0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1089b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1089b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1089b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1089b8:
    // 0x1089b8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1089b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1089bc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1089bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1089c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1089c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1089c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1089c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1089c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1089c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1089cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1089ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1089d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1089d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1089d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1089D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089D4u;
        // 0x1089d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1089D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1089DCu;
    // 0x1089dc: 0x0  nop
    ctx->pc = 0x1089dcu;
    // NOP
    if (ctx->pc == 0x1089dcu) { ctx->pc = 0x1089e0u; }
}
