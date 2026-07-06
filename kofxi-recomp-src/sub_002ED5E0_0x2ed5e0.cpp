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

// Function: sub_002ED5E0
// Address: 0x2ed5e0 - 0x2ed718
void sub_002ED5E0_0x2ed5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED5E0_0x2ed5e0");
#endif

    switch (ctx->pc) {
        case 0x2ed6b4u: goto label_2ed6b4;
        case 0x2ed6f0u: goto label_2ed6f0;
        default: break;
    }

    ctx->pc = 0x2ed5e0u;

    // 0x2ed5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ed5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ed5e4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ed5e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ed5e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed5ec: 0x25ececa8  addiu       $t4, $t7, -0x1358
    ctx->pc = 0x2ed5ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ed5f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed5f4: 0x308d00ff  andi        $t5, $a0, 0xFF
    ctx->pc = 0x2ed5f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ed5f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ed5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ed5fc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2ed5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed600: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ed600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ed604: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ed604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ed608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ed60c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2ed60cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ed610: 0x8deeeca8  lw          $t6, -0x1358($t7)
    ctx->pc = 0x2ed610u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2ed614: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2ed614u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ed618: 0x15cf0037  bne         $t6, $t7, . + 4 + (0x37 << 2)
    ctx->pc = 0x2ED618u;
    {
        const bool branch_taken_0x2ed618 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2ED61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED618u;
        // 0x2ed61c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed618) {
            ctx->pc = 0x2ED6F8u;
            goto label_2ed6f8;
        }
    }
    ctx->pc = 0x2ED620u;
    // 0x2ed620: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED620u;
    {
        const bool branch_taken_0x2ed620 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED620u;
        // 0x2ed624: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed620) {
            ctx->pc = 0x2ED660u;
            goto label_2ed660;
        }
    }
    ctx->pc = 0x2ED628u;
    // 0x2ed628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed62c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed62cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed630: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed634: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ed634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed638: 0x24840b48  addiu       $a0, $a0, 0xB48
    ctx->pc = 0x2ed638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2888));
    // 0x2ed63c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ed63cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ed640: 0x25080b60  addiu       $t0, $t0, 0xB60
    ctx->pc = 0x2ed640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2912));
    // 0x2ed644: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ed644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed648: 0x24050539  addiu       $a1, $zero, 0x539
    ctx->pc = 0x2ed648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1337));
    // 0x2ed64c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ed64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed650: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x2ed650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x2ed654: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2ED654u;
    ctx->pc = 0x2ED658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED654u;
    // 0x2ed658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2ED65Cu;
    // 0x2ed65c: 0x0  nop
    ctx->pc = 0x2ed65cu;
    // NOP
label_2ed660:
    // 0x2ed660: 0x4e1000f  bgez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED660u;
    {
        const bool branch_taken_0x2ed660 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2ED664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED660u;
        // 0x2ed664: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed660) {
            ctx->pc = 0x2ED6A0u;
            goto label_2ed6a0;
        }
    }
    ctx->pc = 0x2ED668u;
    // 0x2ed668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed66c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed670: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed674: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed674u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ed678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed67c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ed67cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ed680: 0x24840b48  addiu       $a0, $a0, 0xB48
    ctx->pc = 0x2ed680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2888));
    // 0x2ed684: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ed684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed688: 0x25080af8  addiu       $t0, $t0, 0xAF8
    ctx->pc = 0x2ed688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2808));
    // 0x2ed68c: 0x2405053a  addiu       $a1, $zero, 0x53A
    ctx->pc = 0x2ed68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1338));
    // 0x2ed690: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ed690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed694: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x2ed694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x2ed698: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2ED698u;
    ctx->pc = 0x2ED69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED698u;
    // 0x2ed69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2ED6A0u;
label_2ed6a0:
    // 0x2ed6a0: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2ED6A0u;
    {
        const bool branch_taken_0x2ed6a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6A0u;
        // 0x2ed6a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6a0) {
            ctx->pc = 0x2ED6F8u;
            goto label_2ed6f8;
        }
    }
    ctx->pc = 0x2ED6A8u;
    // 0x2ed6a8: 0x8d840070  lw          $a0, 0x70($t4)
    ctx->pc = 0x2ed6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 112)));
    // 0x2ed6ac: 0xc0bc3d6  jal         func_2F0F58
    ctx->pc = 0x2ED6ACu;
    SET_GPR_U32(ctx, 31, 0x2ED6B4u);
    ctx->pc = 0x2ED6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6ACu;
    // 0x2ed6b0: 0x1a0282d  daddu       $a1, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F58u, 0x2ED6ACu, 0x2ED6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6B4u;
label_2ed6b4:
    // 0x2ed6b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ed6b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed6b8: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED6B8u;
    {
        const bool branch_taken_0x2ed6b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6B8u;
        // 0x2ed6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6b8) {
            ctx->pc = 0x2ED6F8u;
            goto label_2ed6f8;
        }
    }
    ctx->pc = 0x2ED6C0u;
    // 0x2ed6c0: 0x924e0003  lbu         $t6, 0x3($s2)
    ctx->pc = 0x2ed6c0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2ed6c4: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2ed6c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ed6c8: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x2ED6C8u;
    {
        const bool branch_taken_0x2ed6c8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ED6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6C8u;
        // 0x2ed6cc: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6c8) {
            ctx->pc = 0x2ED6F8u;
            goto label_2ed6f8;
        }
    }
    ctx->pc = 0x2ED6D0u;
    // 0x2ed6d0: 0x11d30009  beq         $t6, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED6D0u;
    {
        const bool branch_taken_0x2ed6d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 19));
        ctx->pc = 0x2ED6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6D0u;
        // 0x2ed6d4: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6d0) {
            ctx->pc = 0x2ED6F8u;
            goto label_2ed6f8;
        }
    }
    ctx->pc = 0x2ED6D8u;
    // 0x2ed6d8: 0x924e0001  lbu         $t6, 0x1($s2)
    ctx->pc = 0x2ed6d8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2ed6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed6e0: 0x1d0782a  slt         $t7, $t6, $s0
    ctx->pc = 0x2ed6e0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ed6e4: 0x1cf800b  movn        $s0, $t6, $t7
    ctx->pc = 0x2ed6e4u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
    // 0x2ed6e8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2ED6E8u;
    SET_GPR_U32(ctx, 31, 0x2ED6F0u);
    ctx->pc = 0x2ED6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6E8u;
    // 0x2ed6ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2ED6E8u, 0x2ED6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6F0u;
label_2ed6f0:
    // 0x2ed6f0: 0xa2530003  sb          $s3, 0x3($s2)
    ctx->pc = 0x2ed6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2ed6f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ed6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed6f8:
    // 0x2ed6f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed6fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed700: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ed700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed704: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ed704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ed708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ed708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed70c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED70Cu;
        // 0x2ed710: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED714u;
    // 0x2ed714: 0x0  nop
    ctx->pc = 0x2ed714u;
    // NOP
}
