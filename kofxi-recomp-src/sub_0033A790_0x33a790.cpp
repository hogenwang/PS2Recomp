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

// Function: sub_0033A790
// Address: 0x33a790 - 0x33a8d0
void sub_0033A790_0x33a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A790_0x33a790");
#endif

    switch (ctx->pc) {
        case 0x33a7e4u: goto label_33a7e4;
        case 0x33a7f0u: goto label_33a7f0;
        default: break;
    }

    ctx->pc = 0x33a790u;

    // 0x33a790: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a794: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x33a794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x33a798: 0x9066b271  lbu         $a2, -0x4D8F($v1)
    ctx->pc = 0x33a798u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947441)));
    // 0x33a79c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x33a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x33a7a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33a7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33a7a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33a7a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7a8: 0x2529db50  addiu       $t1, $t1, -0x24B0
    ctx->pc = 0x33a7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957904));
    // 0x33a7ac: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x33a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x33a7b0: 0xa0865c58  sb          $a2, 0x5C58($a0)
    ctx->pc = 0x33a7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23640), (uint8_t)GPR_U32(ctx, 6));
    // 0x33a7b4: 0xa0655c50  sb          $a1, 0x5C50($v1)
    ctx->pc = 0x33a7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23632), (uint8_t)GPR_U32(ctx, 5));
    // 0x33a7b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33a7bc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x33a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x33a7c0: 0xa4655c60  sh          $a1, 0x5C60($v1)
    ctx->pc = 0x33a7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23648), (uint16_t)GPR_U32(ctx, 5));
    // 0x33a7c4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a7c8: 0x90679748  lbu         $a3, -0x68B8($v1)
    ctx->pc = 0x33a7c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940488)));
    // 0x33a7cc: 0x2405fcff  addiu       $a1, $zero, -0x301
    ctx->pc = 0x33a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x33a7d0: 0x3c0d009d  lui         $t5, 0x9D
    ctx->pc = 0x33a7d0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)157 << 16));
    // 0x33a7d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33a7d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a7dc: 0x3c0c009d  lui         $t4, 0x9D
    ctx->pc = 0x33a7dcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)157 << 16));
    // 0x33a7e0: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x33a7e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_33a7e4:
    // 0x33a7e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33a7e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7e8: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x33a7e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7ec: 0x0  nop
    ctx->pc = 0x33a7ecu;
    // NOP
label_33a7f0:
    // 0x33a7f0: 0x8d060078  lw          $a2, 0x78($t0)
    ctx->pc = 0x33a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x33a7f4: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x33A7F4u;
    {
        const bool branch_taken_0x33a7f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a7f4) {
            ctx->pc = 0x33A8A0u;
            goto label_33a8a0;
        }
    }
    ctx->pc = 0x33A7FCu;
    // 0x33a7fc: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x33a7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x33a800: 0x8cce00dc  lw          $t6, 0xDC($a2)
    ctx->pc = 0x33a800u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x33a804: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x33a804u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
    // 0x33a808: 0xacce00dc  sw          $t6, 0xDC($a2)
    ctx->pc = 0x33a808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 14));
    // 0x33a80c: 0x91aeb240  lbu         $t6, -0x4DC0($t5)
    ctx->pc = 0x33a80cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4294947392)));
    // 0x33a810: 0x15c40007  bne         $t6, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33A810u;
    {
        const bool branch_taken_0x33a810 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 4));
        if (branch_taken_0x33a810) {
            ctx->pc = 0x33A830u;
            goto label_33a830;
        }
    }
    ctx->pc = 0x33A818u;
    // 0x33a818: 0x8cce00dc  lw          $t6, 0xDC($a2)
    ctx->pc = 0x33a818u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x33a81c: 0x35ce0200  ori         $t6, $t6, 0x200
    ctx->pc = 0x33a81cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)512);
    // 0x33a820: 0xacce00dc  sw          $t6, 0xDC($a2)
    ctx->pc = 0x33a820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 14));
    // 0x33a824: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33A824u;
    {
        const bool branch_taken_0x33a824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A824u;
        // 0x33a828: 0xa124000a  sb          $a0, 0xA($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a824) {
            ctx->pc = 0x33A8A0u;
            goto label_33a8a0;
        }
    }
    ctx->pc = 0x33A82Cu;
    // 0x33a82c: 0x0  nop
    ctx->pc = 0x33a82cu;
    // NOP
label_33a830:
    // 0x33a830: 0x15c30007  bne         $t6, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33A830u;
    {
        const bool branch_taken_0x33a830 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        if (branch_taken_0x33a830) {
            ctx->pc = 0x33A850u;
            goto label_33a850;
        }
    }
    ctx->pc = 0x33A838u;
    // 0x33a838: 0x8cce00dc  lw          $t6, 0xDC($a2)
    ctx->pc = 0x33a838u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x33a83c: 0x35ce0100  ori         $t6, $t6, 0x100
    ctx->pc = 0x33a83cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)256);
    // 0x33a840: 0xacce00dc  sw          $t6, 0xDC($a2)
    ctx->pc = 0x33a840u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 14));
    // 0x33a844: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x33A844u;
    {
        const bool branch_taken_0x33a844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A844u;
        // 0x33a848: 0xa123000a  sb          $v1, 0xA($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a844) {
            ctx->pc = 0x33A8A0u;
            goto label_33a8a0;
        }
    }
    ctx->pc = 0x33A84Cu;
    // 0x33a84c: 0x0  nop
    ctx->pc = 0x33a84cu;
    // NOP
label_33a850:
    // 0x33a850: 0x15670007  bne         $t3, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x33A850u;
    {
        const bool branch_taken_0x33a850 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 7));
        if (branch_taken_0x33a850) {
            ctx->pc = 0x33A870u;
            goto label_33a870;
        }
    }
    ctx->pc = 0x33A858u;
    // 0x33a858: 0x8cce00dc  lw          $t6, 0xDC($a2)
    ctx->pc = 0x33a858u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x33a85c: 0x35ce0100  ori         $t6, $t6, 0x100
    ctx->pc = 0x33a85cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)256);
    // 0x33a860: 0xacce00dc  sw          $t6, 0xDC($a2)
    ctx->pc = 0x33a860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 14));
    // 0x33a864: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x33A864u;
    {
        const bool branch_taken_0x33a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A864u;
        // 0x33a868: 0xa123000a  sb          $v1, 0xA($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a864) {
            ctx->pc = 0x33A8A0u;
            goto label_33a8a0;
        }
    }
    ctx->pc = 0x33A86Cu;
    // 0x33a86c: 0x0  nop
    ctx->pc = 0x33a86cu;
    // NOP
label_33a870:
    // 0x33a870: 0x918eb242  lbu         $t6, -0x4DBE($t4)
    ctx->pc = 0x33a870u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294947394)));
    // 0x33a874: 0x15cf0006  bne         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A874u;
    {
        const bool branch_taken_0x33a874 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x33a874) {
            ctx->pc = 0x33A890u;
            goto label_33a890;
        }
    }
    ctx->pc = 0x33A87Cu;
    // 0x33a87c: 0x8cce00dc  lw          $t6, 0xDC($a2)
    ctx->pc = 0x33a87cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x33a880: 0x35ce0100  ori         $t6, $t6, 0x100
    ctx->pc = 0x33a880u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)256);
    // 0x33a884: 0xacce00dc  sw          $t6, 0xDC($a2)
    ctx->pc = 0x33a884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 14));
    // 0x33a888: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33A888u;
    {
        const bool branch_taken_0x33a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A888u;
        // 0x33a88c: 0xa123000a  sb          $v1, 0xA($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a888) {
            ctx->pc = 0x33A8A0u;
            goto label_33a8a0;
        }
    }
    ctx->pc = 0x33A890u;
label_33a890:
    // 0x33a890: 0x8cce00dc  lw          $t6, 0xDC($a2)
    ctx->pc = 0x33a890u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x33a894: 0x35ce0200  ori         $t6, $t6, 0x200
    ctx->pc = 0x33a894u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)512);
    // 0x33a898: 0xacce00dc  sw          $t6, 0xDC($a2)
    ctx->pc = 0x33a898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 14));
    // 0x33a89c: 0xa124000a  sb          $a0, 0xA($t1)
    ctx->pc = 0x33a89cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 4));
label_33a8a0:
    // 0x33a8a0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x33a8a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x33a8a4: 0x29460003  slti        $a2, $t2, 0x3
    ctx->pc = 0x33a8a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33a8a8: 0x14c0ffd1  bnez        $a2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x33A8A8u;
    {
        const bool branch_taken_0x33a8a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8A8u;
        // 0x33a8ac: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8a8) {
            ctx->pc = 0x33A7F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33a7f0;
        }
    }
    ctx->pc = 0x33A8B0u;
    // 0x33a8b0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x33a8b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x33a8b4: 0x29660004  slti        $a2, $t3, 0x4
    ctx->pc = 0x33a8b4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x33a8b8: 0x14c0ffca  bnez        $a2, . + 4 + (-0x36 << 2)
    ctx->pc = 0x33A8B8u;
    {
        const bool branch_taken_0x33a8b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8B8u;
        // 0x33a8bc: 0x25290248  addiu       $t1, $t1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8b8) {
            ctx->pc = 0x33A7E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33a7e4;
        }
    }
    ctx->pc = 0x33A8C0u;
    // 0x33a8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x33A8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A8C8u;
    // 0x33a8c8: 0x0  nop
    ctx->pc = 0x33a8c8u;
    // NOP
    // 0x33a8cc: 0x0  nop
    ctx->pc = 0x33a8ccu;
    // NOP
}
