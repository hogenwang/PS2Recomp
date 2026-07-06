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

// Function: sub_00265768
// Address: 0x265768 - 0x2658d0
void sub_00265768_0x265768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265768_0x265768");
#endif

    switch (ctx->pc) {
        case 0x2657b0u: goto label_2657b0;
        case 0x2657c8u: goto label_2657c8;
        case 0x2657e4u: goto label_2657e4;
        case 0x265800u: goto label_265800;
        case 0x265808u: goto label_265808;
        case 0x265818u: goto label_265818;
        case 0x26587cu: goto label_26587c;
        case 0x2658b8u: goto label_2658b8;
        default: break;
    }

    ctx->pc = 0x265768u;

    // 0x265768: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x265768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26576c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x26576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x265770: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x265770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x265774: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x265774u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265778: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x265778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x26577c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26577cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265780: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x265780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x265784: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x265784u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265788: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x265788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x26578c: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x26578cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x265790: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x265790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x265794: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x265794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x265798: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x265798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26579c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x26579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2657a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2657a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2657a4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2657A4u;
    {
        const bool branch_taken_0x2657a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657A4u;
        // 0x2657a8: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657a4) {
            ctx->pc = 0x265874u;
            goto label_265874;
        }
    }
    ctx->pc = 0x2657ACu;
    // 0x2657ac: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x2657acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2657b0:
    // 0x2657b0: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x2657b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2657b4: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2657b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2657b8: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x2657b8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2657bc: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2657BCu;
    {
        const bool branch_taken_0x2657bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657BCu;
        // 0x2657c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657bc) {
            ctx->pc = 0x265864u;
            goto label_265864;
        }
    }
    ctx->pc = 0x2657C4u;
    // 0x2657c4: 0x241e00c0  addiu       $fp, $zero, 0xC0
    ctx->pc = 0x2657c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2657c8:
    // 0x2657c8: 0x322200c0  andi        $v0, $s1, 0xC0
    ctx->pc = 0x2657c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)192);
    // 0x2657cc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2657CCu;
    {
        const bool branch_taken_0x2657cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2657cc) {
            ctx->pc = 0x2657D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2657CCu;
            // 0x2657d0: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2657ECu;
            goto label_2657ec;
        }
    }
    ctx->pc = 0x2657D4u;
    // 0x2657d4: 0x505e001c  beql        $v0, $fp, . + 4 + (0x1C << 2)
    ctx->pc = 0x2657D4u;
    {
        const bool branch_taken_0x2657d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x2657d4) {
            ctx->pc = 0x2657D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2657D4u;
            // 0x2657d8: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265848u;
            goto label_265848;
        }
    }
    ctx->pc = 0x2657DCu;
    // 0x2657dc: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2657DCu;
    SET_GPR_U32(ctx, 31, 0x2657E4u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2657DCu, 0x2657E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657E4u;
label_2657e4:
    // 0x2657e4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2657E4u;
    {
        const bool branch_taken_0x2657e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657E4u;
        // 0x2657e8: 0x2403007a  addiu       $v1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657e4) {
            ctx->pc = 0x265880u;
            goto label_265880;
        }
    }
    ctx->pc = 0x2657ECu;
label_2657ec:
    // 0x2657ec: 0x1622001d  bne         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2657ECu;
    {
        const bool branch_taken_0x2657ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2657F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657ECu;
        // 0x2657f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657ec) {
            ctx->pc = 0x265864u;
            goto label_265864;
        }
    }
    ctx->pc = 0x2657F4u;
    // 0x2657f4: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2657F4u;
    {
        const bool branch_taken_0x2657f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2657f4) {
            ctx->pc = 0x2657F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2657F4u;
            // 0x2657f8: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26582Cu;
            goto label_26582c;
        }
    }
    ctx->pc = 0x2657FCu;
    // 0x2657fc: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2657fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_265800:
    // 0x265800: 0xc0995d2  jal         func_265748
    ctx->pc = 0x265800u;
    SET_GPR_U32(ctx, 31, 0x265808u);
    ctx->pc = 0x265804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265800u;
    // 0x265804: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265748u, 0x265800u, 0x265808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265808u;
label_265808:
    // 0x265808: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x265808u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26580c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26580cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265810: 0xc0995d2  jal         func_265748
    ctx->pc = 0x265810u;
    SET_GPR_U32(ctx, 31, 0x265818u);
    ctx->pc = 0x265814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265810u;
    // 0x265814: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265748u, 0x265810u, 0x265818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265818u;
label_265818:
    // 0x265818: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x265818u;
    {
        const bool branch_taken_0x265818 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265818u;
        // 0x26581c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265818) {
            ctx->pc = 0x265864u;
            goto label_265864;
        }
    }
    ctx->pc = 0x265820u;
    // 0x265820: 0x5620fff7  bnel        $s1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x265820u;
    {
        const bool branch_taken_0x265820 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x265820) {
            ctx->pc = 0x265824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265820u;
            // 0x265824: 0x92640000  lbu         $a0, 0x0($s3) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265800;
        }
    }
    ctx->pc = 0x265828u;
    // 0x265828: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x265828u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_26582c:
    // 0x26582c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x26582Cu;
    {
        const bool branch_taken_0x26582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26582c) {
            ctx->pc = 0x265830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26582Cu;
            // 0x265830: 0x92510000  lbu         $s1, 0x0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26585Cu;
            goto label_26585c;
        }
    }
    ctx->pc = 0x265834u;
    // 0x265834: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x265834u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x265838: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x265838u;
    {
        const bool branch_taken_0x265838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265838u;
        // 0x26583c: 0x2d51023  subu        $v0, $s6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265838) {
            ctx->pc = 0x265864u;
            goto label_265864;
        }
    }
    ctx->pc = 0x265840u;
    // 0x265840: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x265840u;
    {
        const bool branch_taken_0x265840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265840u;
        // 0x265844: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265840) {
            ctx->pc = 0x26588Cu;
            goto label_26588c;
        }
    }
    ctx->pc = 0x265848u;
label_265848:
    // 0x265848: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x265848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
    // 0x26584c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x26584cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x265850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x265850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x265854: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x265854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x265858: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x265858u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_26585c:
    // 0x26585c: 0x1620ffda  bnez        $s1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x26585Cu;
    {
        const bool branch_taken_0x26585c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x265860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26585Cu;
        // 0x265860: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26585c) {
            ctx->pc = 0x2657C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2657c8;
        }
    }
    ctx->pc = 0x265864u;
label_265864:
    // 0x265864: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x265864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x265868: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x265868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x26586c: 0x5440ffd0  bnel        $v0, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x26586Cu;
    {
        const bool branch_taken_0x26586c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26586c) {
            ctx->pc = 0x265870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26586Cu;
            // 0x265870: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2657B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2657b0;
        }
    }
    ctx->pc = 0x265874u;
label_265874:
    // 0x265874: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x265874u;
    SET_GPR_U32(ctx, 31, 0x26587Cu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x265874u, 0x26587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26587Cu;
label_26587c:
    // 0x26587c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26587cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_265880:
    // 0x265880: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x265880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x265884: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x265884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265888: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x265888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26588c:
    // 0x26588c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x26588cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x265890: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x265890u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x265894: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x265894u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265898: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x265898u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26589c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x26589cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2658a0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2658a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2658a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2658a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2658a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2658a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2658ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2658acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2658b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2658B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2658B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658B0u;
        // 0x2658b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2658B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2658B8u;
label_2658b8:
    // 0x2658b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2658b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2658bc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2658bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2658c0: 0xac441a30  sw          $a0, 0x1A30($v0)
    ctx->pc = 0x2658c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6704), GPR_U32(ctx, 4));
    // 0x2658c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2658C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2658C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658C4u;
        // 0x2658c8: 0xac651a34  sw          $a1, 0x1A34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6708), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2658C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2658CCu;
    // 0x2658cc: 0x0  nop
    ctx->pc = 0x2658ccu;
    // NOP
    if (ctx->pc == 0x2658ccu) { ctx->pc = 0x2658d0u; }
}
