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

// Function: sub_001775A0
// Address: 0x1775a0 - 0x177750
void sub_001775A0_0x1775a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001775A0_0x1775a0");
#endif

    switch (ctx->pc) {
        case 0x1775f0u: goto label_1775f0;
        case 0x177628u: goto label_177628;
        case 0x1776b8u: goto label_1776b8;
        default: break;
    }

    ctx->pc = 0x1775a0u;

    // 0x1775a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1775a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1775a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1775a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1775a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1775a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1775ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1775acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1775b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1775b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1775b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1775b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1775b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1775bc: 0x128c3c  dsll32      $s1, $s2, 16
    ctx->pc = 0x1775bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1775c0: 0x8c64af68  lw          $a0, -0x5098($v1)
    ctx->pc = 0x1775c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946664)));
    // 0x1775c4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1775c4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1775c8: 0x2a23ffff  slti        $v1, $s1, -0x1
    ctx->pc = 0x1775c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1775cc: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1775CCu;
    {
        const bool branch_taken_0x1775cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1775D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775CCu;
        // 0x1775d0: 0x94900004  lhu         $s0, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775cc) {
            ctx->pc = 0x17772Cu;
            goto label_17772c;
        }
    }
    ctx->pc = 0x1775D4u;
    // 0x1775d4: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x1775d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1775d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1775D8u;
    {
        const bool branch_taken_0x1775d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1775d8) {
            ctx->pc = 0x1775E8u;
            goto label_1775e8;
        }
    }
    ctx->pc = 0x1775E0u;
    // 0x1775e0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1775E0u;
    {
        const bool branch_taken_0x1775e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1775E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775E0u;
        // 0x1775e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775e0) {
            ctx->pc = 0x177730u;
            goto label_177730;
        }
    }
    ctx->pc = 0x1775E8u;
label_1775e8:
    // 0x1775e8: 0xc0660e4  jal         func_198390
    ctx->pc = 0x1775E8u;
    SET_GPR_U32(ctx, 31, 0x1775F0u);
    ctx->pc = 0x198390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198390u, 0x1775E8u, 0x1775F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775F0u;
label_1775f0:
    // 0x1775f0: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1775F0u;
    {
        const bool branch_taken_0x1775f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1775f0) {
            ctx->pc = 0x17772Cu;
            goto label_17772c;
        }
    }
    ctx->pc = 0x1775F8u;
    // 0x1775f8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1775f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1775fc: 0x846337d8  lh          $v1, 0x37D8($v1)
    ctx->pc = 0x1775fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14296)));
    // 0x177600: 0x461004a  bgez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x177600u;
    {
        const bool branch_taken_0x177600 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x177600) {
            ctx->pc = 0x17772Cu;
            goto label_17772c;
        }
    }
    ctx->pc = 0x177608u;
    // 0x177608: 0x6210019  bgez        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x177608u;
    {
        const bool branch_taken_0x177608 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x177608) {
            ctx->pc = 0x177670u;
            goto label_177670;
        }
    }
    ctx->pc = 0x177610u;
    // 0x177610: 0x1a000013  blez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177610u;
    {
        const bool branch_taken_0x177610 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x177614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177610u;
        // 0x177614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177610) {
            ctx->pc = 0x177660u;
            goto label_177660;
        }
    }
    ctx->pc = 0x177618u;
    // 0x177618: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x177618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17761c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17761cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177620: 0x24a5a380  addiu       $a1, $a1, -0x5C80
    ctx->pc = 0x177620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
    // 0x177624: 0x2484ad80  addiu       $a0, $a0, -0x5280
    ctx->pc = 0x177624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946176));
label_177628:
    // 0x177628: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x177628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17762c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17762Cu;
    {
        const bool branch_taken_0x17762c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17762c) {
            ctx->pc = 0x177630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17762Cu;
            // 0x177630: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177650u;
            goto label_177650;
        }
    }
    ctx->pc = 0x177634u;
    // 0x177634: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x177634u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177638: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x177638u;
    {
        const bool branch_taken_0x177638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177638) {
            ctx->pc = 0x17764Cu;
            goto label_17764c;
        }
    }
    ctx->pc = 0x177640u;
    // 0x177640: 0x6943c  dsll32      $s2, $a2, 16
    ctx->pc = 0x177640u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) << (32 + 16));
    // 0x177644: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x177644u;
    {
        const bool branch_taken_0x177644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177644u;
        // 0x177648: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177644) {
            ctx->pc = 0x177660u;
            goto label_177660;
        }
    }
    ctx->pc = 0x17764Cu;
label_17764c:
    // 0x17764c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17764cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_177650:
    // 0x177650: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x177650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x177654: 0xd0182a  slt         $v1, $a2, $s0
    ctx->pc = 0x177654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x177658: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x177658u;
    {
        const bool branch_taken_0x177658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177658u;
        // 0x17765c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177658) {
            ctx->pc = 0x177628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177628;
        }
    }
    ctx->pc = 0x177660u;
label_177660:
    // 0x177660: 0x128c3c  dsll32      $s1, $s2, 16
    ctx->pc = 0x177660u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 16));
    // 0x177664: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x177664u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x177668: 0x6200030  bltz        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x177668u;
    {
        const bool branch_taken_0x177668 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x177668) {
            ctx->pc = 0x17772Cu;
            goto label_17772c;
        }
    }
    ctx->pc = 0x177670u;
label_177670:
    // 0x177670: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177674: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x177674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x177678: 0x2463a580  addiu       $v1, $v1, -0x5A80
    ctx->pc = 0x177678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944128));
    // 0x17767c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x17767cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177680: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x177680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x177684: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x177684u;
    {
        const bool branch_taken_0x177684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177684) {
            ctx->pc = 0x17772Cu;
            goto label_17772c;
        }
    }
    ctx->pc = 0x17768Cu;
    // 0x17768c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17768cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177690: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x177690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x177694: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x177694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x177698: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x177698u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x17769c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1776a0: 0x24c6ad78  addiu       $a2, $a2, -0x5288
    ctx->pc = 0x1776a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946168));
    // 0x1776a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1776a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1776a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1776a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1776ac: 0x8c45a7d8  lw          $a1, -0x5828($v0)
    ctx->pc = 0x1776acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944728)));
    // 0x1776b0: 0xc066174  jal         func_1985D0
    ctx->pc = 0x1776B0u;
    SET_GPR_U32(ctx, 31, 0x1776B8u);
    ctx->pc = 0x1776B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776B0u;
    // 0x1776b4: 0x24e774e0  addiu       $a3, $a3, 0x74E0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1985D0u, 0x1776B0u, 0x1776B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776B8u;
label_1776b8:
    // 0x1776b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1776B8u;
    {
        const bool branch_taken_0x1776b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776B8u;
        // 0x1776bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776b8) {
            ctx->pc = 0x1776F8u;
            goto label_1776f8;
        }
    }
    ctx->pc = 0x1776C0u;
    // 0x1776c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1776c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1776c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1776c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1776c8: 0x2463acf0  addiu       $v1, $v1, -0x5310
    ctx->pc = 0x1776c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946032));
    // 0x1776cc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1776ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1776d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1776d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1776d4: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1776d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1776d8: 0x2463ac60  addiu       $v1, $v1, -0x53A0
    ctx->pc = 0x1776d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945888));
    // 0x1776dc: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1776dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1776e0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1776e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1776e4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1776e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1776e8: 0xa47237d8  sh          $s2, 0x37D8($v1)
    ctx->pc = 0x1776e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14296), (uint16_t)GPR_U32(ctx, 18));
    // 0x1776ec: 0x34830010  ori         $v1, $a0, 0x10
    ctx->pc = 0x1776ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x1776f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1776F0u;
    {
        const bool branch_taken_0x1776f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776F0u;
        // 0x1776f4: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776f0) {
            ctx->pc = 0x17772Cu;
            goto label_17772c;
        }
    }
    ctx->pc = 0x1776F8u;
label_1776f8:
    // 0x1776f8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1776f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1776fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1776fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177700: 0x2484acf0  addiu       $a0, $a0, -0x5310
    ctx->pc = 0x177700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946032));
    // 0x177704: 0x2463ac60  addiu       $v1, $v1, -0x53A0
    ctx->pc = 0x177704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945888));
    // 0x177708: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x177708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17770c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x17770cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x177710: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x177710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x177714: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x177714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x177718: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x177718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17771c: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x17771cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x177720: 0xa46437d8  sh          $a0, 0x37D8($v1)
    ctx->pc = 0x177720u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14296), (uint16_t)GPR_U32(ctx, 4));
    // 0x177724: 0x30a300ef  andi        $v1, $a1, 0xEF
    ctx->pc = 0x177724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)239);
    // 0x177728: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x177728u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_17772c:
    // 0x17772c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17772cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_177730:
    // 0x177730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17773c: 0x3e00008  jr          $ra
    ctx->pc = 0x17773Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17773Cu;
        // 0x177740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17773Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177744u;
    // 0x177744: 0x0  nop
    ctx->pc = 0x177744u;
    // NOP
    // 0x177748: 0x0  nop
    ctx->pc = 0x177748u;
    // NOP
    // 0x17774c: 0x0  nop
    ctx->pc = 0x17774cu;
    // NOP
}
