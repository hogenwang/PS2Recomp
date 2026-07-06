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

// Function: sub_002F0398
// Address: 0x2f0398 - 0x2f0640
void sub_002F0398_0x2f0398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0398_0x2f0398");
#endif

    switch (ctx->pc) {
        case 0x2f03e0u: goto label_2f03e0;
        case 0x2f03f4u: goto label_2f03f4;
        case 0x2f0400u: goto label_2f0400;
        case 0x2f0494u: goto label_2f0494;
        case 0x2f04acu: goto label_2f04ac;
        case 0x2f04b4u: goto label_2f04b4;
        case 0x2f04fcu: goto label_2f04fc;
        case 0x2f0504u: goto label_2f0504;
        case 0x2f0514u: goto label_2f0514;
        case 0x2f0544u: goto label_2f0544;
        case 0x2f0554u: goto label_2f0554;
        case 0x2f0564u: goto label_2f0564;
        case 0x2f059cu: goto label_2f059c;
        case 0x2f05a8u: goto label_2f05a8;
        case 0x2f0618u: goto label_2f0618;
        case 0x2f0638u: goto label_2f0638;
        case 0x2f063cu: goto label_2f063c;
        default: break;
    }

    ctx->pc = 0x2f0398u;

    // 0x2f0398: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f0398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f039c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f039cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f03a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f03a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f03a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f03a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f03a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f03a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2f03ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f03acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f03b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f03b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f03b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f03b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f03b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f03bc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2f03bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2f03c0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2f03c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2f03c4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2f03c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2f03c8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2f03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2f03cc: 0x8df3ed28  lw          $s3, -0x12D8($t7)
    ctx->pc = 0x2f03ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962472)));
    // 0x2f03d0: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x2f03d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2f03d4: 0x26740004  addiu       $s4, $s3, 0x4
    ctx->pc = 0x2f03d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2f03d8: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F03D8u;
    SET_GPR_U32(ctx, 31, 0x2F03E0u);
    ctx->pc = 0x2F03DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03D8u;
    // 0x2f03dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0678u, 0x2F03D8u, 0x2F03E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03E0u;
label_2f03e0:
    // 0x2f03e0: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x2f03e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f03e4: 0x240f000d  addiu       $t7, $zero, 0xD
    ctx->pc = 0x2f03e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f03e8: 0x308e000f  andi        $t6, $a0, 0xF
    ctx->pc = 0x2f03e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2f03ec: 0x11cf0036  beq         $t6, $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F03ECu;
    {
        const bool branch_taken_0x2f03ec = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2F03F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03ECu;
        // 0x2f03f0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03ec) {
            ctx->pc = 0x2F04C8u;
            goto label_2f04c8;
        }
    }
    ctx->pc = 0x2F03F4u;
label_2f03f4:
    // 0x2f03f4: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x2f03f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x2f03f8: 0xc0bb5fc  jal         func_2ED7F0
    ctx->pc = 0x2F03F8u;
    SET_GPR_U32(ctx, 31, 0x2F0400u);
    ctx->pc = 0x2F03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03F8u;
    // 0x2f03fc: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED7F0u, 0x2F03F8u, 0x2F0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0400u;
label_2f0400:
    // 0x2f0400: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F0400u;
    {
        const bool branch_taken_0x2f0400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0400) {
            ctx->pc = 0x2F0404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0400u;
            // 0x2f0404: 0x926f0000  lbu         $t7, 0x0($s3) (Delay Slot)
            SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0460u;
            goto label_2f0460;
        }
    }
    ctx->pc = 0x2F0408u;
    // 0x2f0408: 0x92690000  lbu         $t1, 0x0($s3)
    ctx->pc = 0x2f0408u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f040c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f040cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f0410: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f0410u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f0414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f041c: 0x248415a0  addiu       $a0, $a0, 0x15A0
    ctx->pc = 0x2f041cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
    // 0x2f0420: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f0420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0424: 0x250811c8  addiu       $t0, $t0, 0x11C8
    ctx->pc = 0x2f0424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4552));
    // 0x2f0428: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f0428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f042c: 0x24050c54  addiu       $a1, $zero, 0xC54
    ctx->pc = 0x2f042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3156));
    // 0x2f0430: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f0430u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0434: 0x9493a  dsrl        $t1, $t1, 4
    ctx->pc = 0x2f0434u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 4);
    // 0x2f0438: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f0438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f043c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f043cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0440: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2f0440u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0444: 0x24078aca  addiu       $a3, $zero, -0x7536
    ctx->pc = 0x2f0444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937290));
    // 0x2f0448: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2f0448u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f044c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2f044cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0450: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2f0450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f0454: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2F0454u;
    ctx->pc = 0x2F0458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0454u;
    // 0x2f0458: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2F045Cu;
    // 0x2f045c: 0x0  nop
    ctx->pc = 0x2f045cu;
    // NOP
label_2f0460:
    // 0x2f0460: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x2f0460u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f0464: 0x31ed000f  andi        $t5, $t7, 0xF
    ctx->pc = 0x2f0464u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2f0468: 0x11ae002e  beq         $t5, $t6, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F0468u;
    {
        const bool branch_taken_0x2f0468 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x2F046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0468u;
        // 0x2f046c: 0x29af000a  slti        $t7, $t5, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0468) {
            ctx->pc = 0x2F0524u;
            goto label_2f0524;
        }
    }
    ctx->pc = 0x2F0470u;
    // 0x2f0470: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F0470u;
    {
        const bool branch_taken_0x2f0470 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0470u;
        // 0x2f0474: 0x240f000b  addiu       $t7, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0470) {
            ctx->pc = 0x2F047Cu;
            goto label_2f047c;
        }
    }
    ctx->pc = 0x2F0478u;
    // 0x2f0478: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2f0478u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f047c:
    // 0x2f047c: 0x11af001f  beq         $t5, $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F047Cu;
    {
        const bool branch_taken_0x2f047c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x2f047c) {
            ctx->pc = 0x2F04FCu;
            goto label_2f04fc;
        }
    }
    ctx->pc = 0x2F0484u;
    // 0x2f0484: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x2f0484u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2f0488: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f0488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f048c: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F048Cu;
    SET_GPR_U32(ctx, 31, 0x2F0494u);
    ctx->pc = 0x2F0490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F048Cu;
    // 0x2f0490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0678u, 0x2F048Cu, 0x2F0494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0494u;
label_2f0494:
    // 0x2f0494: 0x244f0004  addiu       $t7, $v0, 0x4
    ctx->pc = 0x2f0494u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f0498: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2f0498u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2f049c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f049cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f04a0: 0x1e0a02d  daddu       $s4, $t7, $zero
    ctx->pc = 0x2f04a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f04a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f04a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f04a8: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x2f04a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2f04ac:
    // 0x2f04ac: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F04ACu;
    SET_GPR_U32(ctx, 31, 0x2F04B4u);
    ctx->pc = 0x2F0678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0678u, 0x2F04ACu, 0x2F04B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F04B4u;
label_2f04b4:
    // 0x2f04b4: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x2f04b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f04b8: 0x240f000d  addiu       $t7, $zero, 0xD
    ctx->pc = 0x2f04b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f04bc: 0x308e000f  andi        $t6, $a0, 0xF
    ctx->pc = 0x2f04bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2f04c0: 0x15cfffcc  bne         $t6, $t7, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2F04C0u;
    {
        const bool branch_taken_0x2f04c0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2F04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04C0u;
        // 0x2f04c4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04c0) {
            ctx->pc = 0x2F03F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f03f4;
        }
    }
    ctx->pc = 0x2F04C8u;
label_2f04c8:
    // 0x2f04c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f04c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f04cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f04d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f04d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f04d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f04d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f04d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f04d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f04dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f04dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f04e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f04e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f04e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2f04e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f04e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2f04e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f04ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2f04ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f04f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2f04f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f04f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F04F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04F4u;
        // 0x2f04f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F04F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F04FCu;
label_2f04fc:
    // 0x2f04fc: 0xc0bc0cc  jal         func_2F0330
    ctx->pc = 0x2F04FCu;
    SET_GPR_U32(ctx, 31, 0x2F0504u);
    ctx->pc = 0x2F0330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0330u, 0x2F04FCu, 0x2F0504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0504u;
label_2f0504:
    // 0x2f0504: 0x553023  subu        $a2, $v0, $s5
    ctx->pc = 0x2f0504u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2f0508: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f0508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f050c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F050Cu;
    SET_GPR_U32(ctx, 31, 0x2F0514u);
    ctx->pc = 0x2F0510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F050Cu;
    // 0x2f0510: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F050Cu, 0x2F0514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0514u;
label_2f0514:
    // 0x2f0514: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x2f0514u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2f0518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f0518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f051c: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2F051Cu;
    {
        const bool branch_taken_0x2f051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F051Cu;
        // 0x2f0520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f051c) {
            ctx->pc = 0x2F04ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f04ac;
        }
    }
    ctx->pc = 0x2F0524u;
label_2f0524:
    // 0x2f0524: 0x926a0001  lbu         $t2, 0x1($s3)
    ctx->pc = 0x2f0524u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2f0528: 0x1140fff4  beqz        $t2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F0528u;
    {
        const bool branch_taken_0x2f0528 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0528u;
        // 0x2f052c: 0x3c0f0040  lui         $t7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0528) {
            ctx->pc = 0x2F04FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f04fc;
        }
    }
    ctx->pc = 0x2F0530u;
    // 0x2f0530: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2f0530u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x2f0534: 0x25f615a0  addiu       $s6, $t7, 0x15A0
    ctx->pc = 0x2f0534u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 5536));
    // 0x2f0538: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2f0538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f053c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2f053cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0540: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x2f0540u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f0544:
    // 0x2f0544: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2f0544u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f0548: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x2f0548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f054c: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x2f054cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f0550: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f0550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0554:
    // 0x2f0554: 0x43902  srl         $a3, $a0, 4
    ctx->pc = 0x2f0554u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x2f0558: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2f0558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2f055c: 0xc0bc454  jal         func_2F1150
    ctx->pc = 0x2F055Cu;
    SET_GPR_U32(ctx, 31, 0x2F0564u);
    ctx->pc = 0x2F0560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F055Cu;
    // 0x2f0560: 0x5293a  dsrl        $a1, $a1, 4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1150u, 0x2F055Cu, 0x2F0564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0564u;
label_2f0564:
    // 0x2f0564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f056c: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F056Cu;
    {
        const bool branch_taken_0x2f056c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F056Cu;
        // 0x2f0570: 0x2425023  subu        $t2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f056c) {
            ctx->pc = 0x2F05E0u;
            goto label_2f05e0;
        }
    }
    ctx->pc = 0x2F0574u;
    // 0x2f0574: 0x922a0000  lbu         $t2, 0x0($s1)
    ctx->pc = 0x2f0574u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f0578: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f0578u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f057c: 0x96680002  lhu         $t0, 0x2($s3)
    ctx->pc = 0x2f057cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2f0580: 0x24050c64  addiu       $a1, $zero, 0xC64
    ctx->pc = 0x2f0580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3172));
    // 0x2f0584: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f0584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0588: 0x24e715d0  addiu       $a3, $a3, 0x15D0
    ctx->pc = 0x2f0588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5584));
    // 0x2f058c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f058cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0590: 0xa5102  srl         $t2, $t2, 4
    ctx->pc = 0x2f0590u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x2f0594: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F0594u;
    SET_GPR_U32(ctx, 31, 0x2F059Cu);
    ctx->pc = 0x2F0598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0594u;
    // 0x2f0598: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F0594u, 0x2F059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F059Cu;
label_2f059c:
    // 0x2f059c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f059cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f05a0: 0x26e815c0  addiu       $t0, $s7, 0x15C0
    ctx->pc = 0x2f05a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 5568));
    // 0x2f05a4: 0x24050c65  addiu       $a1, $zero, 0xC65
    ctx->pc = 0x2f05a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3173));
label_2f05a8:
    // 0x2f05a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f05a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f05ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f05acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f05b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f05b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f05b4: 0x24078aca  addiu       $a3, $zero, -0x7536
    ctx->pc = 0x2f05b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937290));
    // 0x2f05b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f05b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f05bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f05bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f05c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f05c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f05c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f05c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f05c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2f05c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f05cc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2f05ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f05d0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2f05d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f05d4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2f05d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f05d8: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2F05D8u;
    ctx->pc = 0x2F05DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F05D8u;
    // 0x2f05dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2F05E0u;
label_2f05e0:
    // 0x2f05e0: 0x2552ffff  addiu       $s2, $t2, -0x1
    ctx->pc = 0x2f05e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2f05e4: 0x1240ffc5  beqz        $s2, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2F05E4u;
    {
        const bool branch_taken_0x2f05e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f05e4) {
            ctx->pc = 0x2F04FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f04fc;
        }
    }
    ctx->pc = 0x2F05ECu;
    // 0x2f05ec: 0x6430010  bgezl       $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F05ECu;
    {
        const bool branch_taken_0x2f05ec = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2f05ec) {
            ctx->pc = 0x2F05F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F05ECu;
            // 0x2f05f0: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0630u;
            goto label_2f0630;
        }
    }
    ctx->pc = 0x2F05F4u;
    // 0x2f05f4: 0x96680002  lhu         $t0, 0x2($s3)
    ctx->pc = 0x2f05f4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2f05f8: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f05f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f05fc: 0x24050c6e  addiu       $a1, $zero, 0xC6E
    ctx->pc = 0x2f05fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3182));
    // 0x2f0600: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f0600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0604: 0x24e715f8  addiu       $a3, $a3, 0x15F8
    ctx->pc = 0x2f0604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5624));
    // 0x2f0608: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f0608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f060c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2f060cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0610: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F0610u;
    SET_GPR_U32(ctx, 31, 0x2F0618u);
    ctx->pc = 0x2F0614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0610u;
    // 0x2f0614: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F0610u, 0x2F0618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0618u;
label_2f0618:
    // 0x2f0618: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2f0618u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2f061c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0620: 0x25e815c0  addiu       $t0, $t7, 0x15C0
    ctx->pc = 0x2f0620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 5568));
    // 0x2f0624: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x2F0624u;
    {
        const bool branch_taken_0x2f0624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0624u;
        // 0x2f0628: 0x24050c70  addiu       $a1, $zero, 0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0624) {
            ctx->pc = 0x2F05A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f05a8;
        }
    }
    ctx->pc = 0x2F062Cu;
    // 0x2f062c: 0x0  nop
    ctx->pc = 0x2f062cu;
    // NOP
label_2f0630:
    // 0x2f0630: 0xc0bc19a  jal         func_2F0668
    ctx->pc = 0x2F0630u;
    SET_GPR_U32(ctx, 31, 0x2F0638u);
    ctx->pc = 0x2F0634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0630u;
    // 0x2f0634: 0x52902  srl         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0668u, 0x2F0630u, 0x2F0638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0638u;
label_2f0638:
    // 0x2f0638: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_2f063c:
    if (ctx->pc == 0x2F063Cu) {
        ctx->pc = 0x2F063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0638u;
        // 0x2f063c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0640u;
        goto label_fallthrough_0x2f0638;
    }
    ctx->pc = 0x2F0638u;
    {
        const bool branch_taken_0x2f0638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0638u;
        // 0x2f063c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0638) {
            ctx->pc = 0x2F0544u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0544;
        }
    }
label_fallthrough_0x2f0638:
    ctx->pc = 0x2F0640u;
}
