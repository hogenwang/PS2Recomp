#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA390
// Address: 0x2ca390 - 0x2ca500
void sub_002CA390_0x2ca390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA390_0x2ca390");
#endif

    switch (ctx->pc) {
        case 0x2ca3c8u: goto label_2ca3c8;
        case 0x2ca404u: goto label_2ca404;
        case 0x2ca408u: goto label_2ca408;
        case 0x2ca414u: goto label_2ca414;
        case 0x2ca470u: goto label_2ca470;
        case 0x2ca49cu: goto label_2ca49c;
        case 0x2ca4b8u: goto label_2ca4b8;
        case 0x2ca4e4u: goto label_2ca4e4;
        default: break;
    }

    ctx->pc = 0x2ca390u;

label_2ca390:
    // 0x2ca390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ca390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ca394: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2ca394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca398: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ca398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ca39c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ca39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ca3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ca3a4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2ca3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3a8: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2ca3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2ca3ac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2ca3acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3b0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2ca3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2ca3b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ca3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ca3b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2ca3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2ca3bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ca3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ca3c0: 0xc0b372a  jal         func_2CDCA8
    ctx->pc = 0x2CA3C0u;
    SET_GPR_U32(ctx, 31, 0x2CA3C8u);
    ctx->pc = 0x2CA3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA3C0u;
            // 0x2ca3c4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDCA8u;
    if (runtime->hasFunction(0x2CDCA8u)) {
        auto targetFn = runtime->lookupFunction(0x2CDCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA3C8u; }
        if (ctx->pc != 0x2CA3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDCA8_0x2cdca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA3C8u; }
        if (ctx->pc != 0x2CA3C8u) { return; }
    }
    ctx->pc = 0x2CA3C8u;
label_2ca3c8:
    // 0x2ca3c8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CA3C8u;
    {
        const bool branch_taken_0x2ca3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA3C8u;
            // 0x2ca3cc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3c8) {
            ctx->pc = 0x2CA458u;
            goto label_2ca458;
        }
    }
    ctx->pc = 0x2CA3D0u;
    // 0x2ca3d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ca3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca3d4: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CA3D4u;
    {
        const bool branch_taken_0x2ca3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA3D4u;
            // 0x2ca3d8: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3d4) {
            ctx->pc = 0x2CA45Cu;
            goto label_2ca45c;
        }
    }
    ctx->pc = 0x2CA3DCu;
    // 0x2ca3dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2ca3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca3e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ca3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3e4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2ca3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2ca3e8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2ca3e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ca3ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA3ECu;
    {
        const bool branch_taken_0x2ca3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA3ECu;
            // 0x2ca3f0: 0x24510004  addiu       $s1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3ec) {
            ctx->pc = 0x2CA400u;
            goto label_2ca400;
        }
    }
    ctx->pc = 0x2CA3F4u;
    // 0x2ca3f4: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x2ca3f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2ca3f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CA3F8u;
    {
        const bool branch_taken_0x2ca3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA3F8u;
            // 0x2ca3fc: 0x2111821  addu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3f8) {
            ctx->pc = 0x2CA44Cu;
            goto label_2ca44c;
        }
    }
    ctx->pc = 0x2CA400u;
label_2ca400:
    // 0x2ca400: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x2ca400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2ca404:
    // 0x2ca404: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2ca404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2ca408:
    // 0x2ca408: 0x2463023  subu        $a2, $s2, $a2
    ctx->pc = 0x2ca408u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2ca40c: 0xc0b28e4  jal         func_2CA390
    ctx->pc = 0x2CA40Cu;
    SET_GPR_U32(ctx, 31, 0x2CA414u);
    ctx->pc = 0x2CA410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA40Cu;
            // 0x2ca410: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA390u;
    goto label_2ca390;
    ctx->pc = 0x2CA414u;
label_2ca414:
    // 0x2ca414: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CA414u;
    {
        const bool branch_taken_0x2ca414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca414) {
            ctx->pc = 0x2CA418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA414u;
            // 0x2ca418: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA458u;
            goto label_2ca458;
        }
    }
    ctx->pc = 0x2CA41Cu;
    // 0x2ca41c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ca41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ca420: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2ca420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca424: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ca424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ca428: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2ca428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca42c: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x2ca42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2ca430: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ca430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca434: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CA434u;
    {
        const bool branch_taken_0x2ca434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA434u;
            // 0x2ca438: 0x2113021  addu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca434) {
            ctx->pc = 0x2CA404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca404;
        }
    }
    ctx->pc = 0x2CA43Cu;
    // 0x2ca43c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2ca43cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2ca440: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CA440u;
    {
        const bool branch_taken_0x2ca440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca440) {
            ctx->pc = 0x2CA444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA440u;
            // 0x2ca444: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca408;
        }
    }
    ctx->pc = 0x2CA448u;
    // 0x2ca448: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x2ca448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2ca44c:
    // 0x2ca44c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca450: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2ca450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2ca454: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ca454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca458:
    // 0x2ca458: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ca458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ca45c:
    // 0x2ca45c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ca45cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca460: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2ca460u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ca464: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ca464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca468: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA468u;
            // 0x2ca46c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA470u;
label_2ca470:
    // 0x2ca470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca47c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca480: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ca480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca488: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2ca488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2ca48c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA48Cu;
    {
        const bool branch_taken_0x2ca48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA48Cu;
            // 0x2ca490: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca48c) {
            ctx->pc = 0x2CA49Cu;
            goto label_2ca49c;
        }
    }
    ctx->pc = 0x2CA494u;
    // 0x2ca494: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2CA494u;
    SET_GPR_U32(ctx, 31, 0x2CA49Cu);
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA49Cu; }
        if (ctx->pc != 0x2CA49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA49Cu; }
        if (ctx->pc != 0x2CA49Cu) { return; }
    }
    ctx->pc = 0x2CA49Cu;
label_2ca49c:
    // 0x2ca49c: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x2ca49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x2ca4a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca4a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca4a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca4a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4ACu;
            // 0x2ca4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA4B4u;
    // 0x2ca4b4: 0x0  nop
    ctx->pc = 0x2ca4b4u;
    // NOP
label_2ca4b8:
    // 0x2ca4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca4c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca4c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ca4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca4d0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2ca4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ca4d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA4D4u;
    {
        const bool branch_taken_0x2ca4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4D4u;
            // 0x2ca4d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4d4) {
            ctx->pc = 0x2CA4E4u;
            goto label_2ca4e4;
        }
    }
    ctx->pc = 0x2CA4DCu;
    // 0x2ca4dc: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2CA4DCu;
    SET_GPR_U32(ctx, 31, 0x2CA4E4u);
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA4E4u; }
        if (ctx->pc != 0x2CA4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA4E4u; }
        if (ctx->pc != 0x2CA4E4u) { return; }
    }
    ctx->pc = 0x2CA4E4u;
label_2ca4e4:
    // 0x2ca4e4: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x2ca4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x2ca4e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca4ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca4f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4F4u;
            // 0x2ca4f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA4FCu;
    // 0x2ca4fc: 0x0  nop
    ctx->pc = 0x2ca4fcu;
    // NOP
    ctx->pc = 0x2ca500u;
}
