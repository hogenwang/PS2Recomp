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

// Function: sub_0020F658
// Address: 0x20f658 - 0x20fcb0
void sub_0020F658_0x20f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F658_0x20f658");
#endif

    switch (ctx->pc) {
        case 0x20f6b8u: goto label_20f6b8;
        case 0x20f784u: goto label_20f784;
        case 0x20f7c0u: goto label_20f7c0;
        case 0x20f7d8u: goto label_20f7d8;
        case 0x20f838u: goto label_20f838;
        case 0x20f85cu: goto label_20f85c;
        case 0x20f8acu: goto label_20f8ac;
        case 0x20f8f4u: goto label_20f8f4;
        case 0x20f918u: goto label_20f918;
        case 0x20f964u: goto label_20f964;
        case 0x20f97cu: goto label_20f97c;
        case 0x20f9a0u: goto label_20f9a0;
        case 0x20f9d4u: goto label_20f9d4;
        case 0x20fa68u: goto label_20fa68;
        case 0x20fb44u: goto label_20fb44;
        case 0x20fc0cu: goto label_20fc0c;
        case 0x20fc24u: goto label_20fc24;
        case 0x20fc44u: goto label_20fc44;
        case 0x20fc78u: goto label_20fc78;
        default: break;
    }

    ctx->pc = 0x20f658u;

    // 0x20f658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20f658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20f65c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x20f65cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f660: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20f660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20f664: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20f668: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20f668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20f66c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x20f66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f670: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20f670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20f674: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20f674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f678: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20f678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20f67c: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x20f67cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x20f680: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20f680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20f684: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x20f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x20f688: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x20f688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x20f68c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x20f68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x20f690: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20f690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20f694: 0x8c8e0024  lw          $t6, 0x24($a0)
    ctx->pc = 0x20f694u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x20f698: 0x11cf0015  beq         $t6, $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x20F698u;
    {
        const bool branch_taken_0x20f698 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x20F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F698u;
        // 0x20f69c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f698) {
            ctx->pc = 0x20F6F0u;
            goto label_20f6f0;
        }
    }
    ctx->pc = 0x20F6A0u;
    // 0x20f6a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f6a4: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f6a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f6a8: 0x2484fc58  addiu       $a0, $a0, -0x3A8
    ctx->pc = 0x20f6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966360));
    // 0x20f6ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f6b0: 0x2529fc70  addiu       $t1, $t1, -0x390
    ctx->pc = 0x20f6b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966384));
    // 0x20f6b4: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x20f6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_20f6b8:
    // 0x20f6b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f6bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20f6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20f6c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f6c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f6c4: 0x2408d8ee  addiu       $t0, $zero, -0x2712
    ctx->pc = 0x20f6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x20f6c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f6c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f6cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20f6ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f6d0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20f6d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f6d4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20f6d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20f6d8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20f6d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f6dc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20f6dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20f6e0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x20f6e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20f6e4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20f6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20f6e8: 0x8084408  j           func_211020
    ctx->pc = 0x20F6E8u;
    ctx->pc = 0x20F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F6E8u;
    // 0x20f6ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x20F6E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x20F6F0u;
label_20f6f0:
    // 0x20f6f0: 0x808f002a  lb          $t7, 0x2A($a0)
    ctx->pc = 0x20f6f0u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x20f6f4: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F6F4u;
    {
        const bool branch_taken_0x20f6f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6F4u;
        // 0x20f6f8: 0x3c09003f  lui         $t1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6f4) {
            ctx->pc = 0x20F714u;
            goto label_20f714;
        }
    }
    ctx->pc = 0x20F6FCu;
    // 0x20f6fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f700: 0x2484fc58  addiu       $a0, $a0, -0x3A8
    ctx->pc = 0x20f700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966360));
    // 0x20f704: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f708: 0x2529fc90  addiu       $t1, $t1, -0x370
    ctx->pc = 0x20f708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966416));
    // 0x20f70c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x20F70Cu;
    {
        const bool branch_taken_0x20f70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F70Cu;
        // 0x20f710: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f70c) {
            ctx->pc = 0x20F6B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f6b8;
        }
    }
    ctx->pc = 0x20F714u;
label_20f714:
    // 0x20f714: 0x908f0028  lbu         $t7, 0x28($a0)
    ctx->pc = 0x20f714u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x20f718: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x20f718u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20f71c: 0x55e00008  bnel        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F71Cu;
    {
        const bool branch_taken_0x20f71c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f71c) {
            ctx->pc = 0x20F720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F71Cu;
            // 0x20f720: 0x8c8f0008  lw          $t7, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F740u;
            goto label_20f740;
        }
    }
    ctx->pc = 0x20F724u;
    // 0x20f724: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f728: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f728u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f72c: 0x2484fc58  addiu       $a0, $a0, -0x3A8
    ctx->pc = 0x20f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966360));
    // 0x20f730: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f734: 0x2529fca8  addiu       $t1, $t1, -0x358
    ctx->pc = 0x20f734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966440));
    // 0x20f738: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x20F738u;
    {
        const bool branch_taken_0x20f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F738u;
        // 0x20f73c: 0x24050118  addiu       $a1, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f738) {
            ctx->pc = 0x20F6B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f6b8;
        }
    }
    ctx->pc = 0x20F740u;
label_20f740:
    // 0x20f740: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20f740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f744: 0x8c8e000c  lw          $t6, 0xC($a0)
    ctx->pc = 0x20f744u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20f748: 0x25ef000c  addiu       $t7, $t7, 0xC
    ctx->pc = 0x20f748u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
    // 0x20f74c: 0x25d6fff4  addiu       $s6, $t6, -0xC
    ctx->pc = 0x20f74cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967284));
    // 0x20f750: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x20f750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x20f754: 0x16400017  bnez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x20F754u;
    {
        const bool branch_taken_0x20f754 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F754u;
        // 0x20f758: 0x2c7b823  subu        $s7, $s6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f754) {
            ctx->pc = 0x20F7B4u;
            goto label_20f7b4;
        }
    }
    ctx->pc = 0x20F75Cu;
    // 0x20f75c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x20f75cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x20f760: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f764: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f764u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f768: 0x2484fc58  addiu       $a0, $a0, -0x3A8
    ctx->pc = 0x20f768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966360));
    // 0x20f76c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f770: 0x2529fcc0  addiu       $t1, $t1, -0x340
    ctx->pc = 0x20f770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966464));
    // 0x20f774: 0x24050124  addiu       $a1, $zero, 0x124
    ctx->pc = 0x20f774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x20f778: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20f778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20f77c: 0x350863c0  ori         $t0, $t0, 0x63C0
    ctx->pc = 0x20f77cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)25536);
    // 0x20f780: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20f780u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f784:
    // 0x20f784: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f788: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f78c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f78cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f790: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20f790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f794: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20f794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f798: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20f798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20f79c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20f79cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f7a0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20f7a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20f7a4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x20f7a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20f7a8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20f7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20f7ac: 0x8084408  j           func_211020
    ctx->pc = 0x20F7ACu;
    ctx->pc = 0x20F7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F7ACu;
    // 0x20f7b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x20F7ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x20F7B4u;
label_20f7b4:
    // 0x20f7b4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x20f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20f7b8: 0xc083c7e  jal         func_20F1F8
    ctx->pc = 0x20F7B8u;
    SET_GPR_U32(ctx, 31, 0x20F7C0u);
    ctx->pc = 0x20F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F7B8u;
    // 0x20f7bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1F8u, 0x20F7B8u, 0x20F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7C0u;
label_20f7c0:
    // 0x20f7c0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20F7C0u;
    {
        const bool branch_taken_0x20f7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7C0u;
        // 0x20f7c4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7c0) {
            ctx->pc = 0x20F810u;
            goto label_20f810;
        }
    }
    ctx->pc = 0x20F7C8u;
    // 0x20f7c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x20f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x20f7cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f7d0: 0xc083c7e  jal         func_20F1F8
    ctx->pc = 0x20F7D0u;
    SET_GPR_U32(ctx, 31, 0x20F7D8u);
    ctx->pc = 0x20F7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F7D0u;
    // 0x20f7d4: 0x2484ab68  addiu       $a0, $a0, -0x5498 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1F8u, 0x20F7D0u, 0x20F7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7D8u;
label_20f7d8:
    // 0x20f7d8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20F7D8u;
    {
        const bool branch_taken_0x20f7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7D8u;
        // 0x20f7dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7d8) {
            ctx->pc = 0x20F810u;
            goto label_20f810;
        }
    }
    ctx->pc = 0x20F7E0u;
    // 0x20f7e0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x20f7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x20f7e4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f7e8: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f7e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f7ec: 0x2484fc58  addiu       $a0, $a0, -0x3A8
    ctx->pc = 0x20f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966360));
    // 0x20f7f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f7f4: 0x2529fce0  addiu       $t1, $t1, -0x320
    ctx->pc = 0x20f7f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966496));
    // 0x20f7f8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x20f7f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f7fc: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x20f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x20f800: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20f800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20f804: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x20F804u;
    {
        const bool branch_taken_0x20f804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F804u;
        // 0x20f808: 0x350863c0  ori         $t0, $t0, 0x63C0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)25536);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f804) {
            ctx->pc = 0x20F784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f784;
        }
    }
    ctx->pc = 0x20F80Cu;
    // 0x20f80c: 0x0  nop
    ctx->pc = 0x20f80cu;
    // NOP
label_20f810:
    // 0x20f810: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x20f810u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x20f814: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x20f814u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x20f818: 0x25fefc58  addiu       $fp, $t7, -0x3A8
    ctx->pc = 0x20f818u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966360));
    // 0x20f81c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20f81cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20f820: 0x24e7fd08  addiu       $a3, $a3, -0x2F8
    ctx->pc = 0x20f820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966536));
    // 0x20f824: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20f824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f828: 0x24050132  addiu       $a1, $zero, 0x132
    ctx->pc = 0x20f828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x20f82c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20f830: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F830u;
    SET_GPR_U32(ctx, 31, 0x20F838u);
    ctx->pc = 0x20F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F830u;
    // 0x20f834: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F830u, 0x20F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F838u;
label_20f838:
    // 0x20f838: 0x6e30016  bgezl       $s7, . + 4 + (0x16 << 2)
    ctx->pc = 0x20F838u;
    {
        const bool branch_taken_0x20f838 = (GPR_S32(ctx, 23) >= 0);
        if (branch_taken_0x20f838) {
            ctx->pc = 0x20F83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F838u;
            // 0x20f83c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F894u;
            goto label_20f894;
        }
    }
    ctx->pc = 0x20F840u;
    // 0x20f840: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f840u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f844: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20f844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f848: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f84c: 0x2529fd28  addiu       $t1, $t1, -0x2D8
    ctx->pc = 0x20f84cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966568));
    // 0x20f850: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x20f850u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f854: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x20f854u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f858: 0x24050136  addiu       $a1, $zero, 0x136
    ctx->pc = 0x20f858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
label_20f85c:
    // 0x20f85c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f860: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20f860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20f864: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f868: 0x2408d8ed  addiu       $t0, $zero, -0x2713
    ctx->pc = 0x20f868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957293));
    // 0x20f86c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f86cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f870: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20f870u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f874: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20f874u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f878: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20f878u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20f87c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20f87cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f880: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20f880u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20f884: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x20f884u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20f888: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20f888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20f88c: 0x8084408  j           func_211020
    ctx->pc = 0x20F88Cu;
    ctx->pc = 0x20F890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F88Cu;
    // 0x20f890: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x20F88Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x20F894u;
label_20f894:
    // 0x20f894: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x20F894u;
    {
        const bool branch_taken_0x20f894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F894u;
        // 0x20f898: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f894) {
            ctx->pc = 0x20F964u;
            goto label_20f964;
        }
    }
    ctx->pc = 0x20F89Cu;
    // 0x20f89c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x20f89cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20f8a0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x20f8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f8a4: 0xc084698  jal         func_211A60
    ctx->pc = 0x20F8A4u;
    SET_GPR_U32(ctx, 31, 0x20F8ACu);
    ctx->pc = 0x20F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F8A4u;
    // 0x20f8a8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211A60u, 0x20F8A4u, 0x20F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F8ACu;
label_20f8ac:
    // 0x20f8ac: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20F8ACu;
    {
        const bool branch_taken_0x20f8ac = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x20F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8ACu;
        // 0x20f8b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8ac) {
            ctx->pc = 0x20F8D4u;
            goto label_20f8d4;
        }
    }
    ctx->pc = 0x20F8B4u;
    // 0x20f8b4: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f8b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f8bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f8c0: 0x2529fd28  addiu       $t1, $t1, -0x2D8
    ctx->pc = 0x20f8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966568));
    // 0x20f8c4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x20f8c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f8c8: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x20f8c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f8cc: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x20F8CCu;
    {
        const bool branch_taken_0x20f8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8CCu;
        // 0x20f8d0: 0x2405013f  addiu       $a1, $zero, 0x13F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8cc) {
            ctx->pc = 0x20F85Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f85c;
        }
    }
    ctx->pc = 0x20F8D4u;
label_20f8d4:
    // 0x20f8d4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20f8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20f8d8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20f8d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f8dc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f8e0: 0x24e7fd48  addiu       $a3, $a3, -0x2B8
    ctx->pc = 0x20f8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966600));
    // 0x20f8e4: 0x24050141  addiu       $a1, $zero, 0x141
    ctx->pc = 0x20f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x20f8e8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20f8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20f8ec: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F8ECu;
    SET_GPR_U32(ctx, 31, 0x20F8F4u);
    ctx->pc = 0x20F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F8ECu;
    // 0x20f8f0: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F8ECu, 0x20F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F8F4u;
label_20f8f4:
    // 0x20f8f4: 0x8e6e0014  lw          $t6, 0x14($s3)
    ctx->pc = 0x20f8f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x20f8f8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20f8f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f8fc: 0x55cf001a  bnel        $t6, $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x20F8FCu;
    {
        const bool branch_taken_0x20f8fc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x20f8fc) {
            ctx->pc = 0x20F900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F8FCu;
            // 0x20f900: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F968u;
            goto label_20f968;
        }
    }
    ctx->pc = 0x20F904u;
    // 0x20f904: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x20f904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f908: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20f908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f90c: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x20f90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x20f910: 0xc089398  jal         func_224E60
    ctx->pc = 0x20F910u;
    SET_GPR_U32(ctx, 31, 0x20F918u);
    ctx->pc = 0x20F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F910u;
    // 0x20f914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E60u, 0x20F910u, 0x20F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F918u;
label_20f918:
    // 0x20f918: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20F918u;
    {
        const bool branch_taken_0x20f918 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F918u;
        // 0x20f91c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f918) {
            ctx->pc = 0x20F948u;
            goto label_20f948;
        }
    }
    ctx->pc = 0x20F920u;
    // 0x20f920: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x20f920u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x20f924: 0x8e6a0014  lw          $t2, 0x14($s3)
    ctx->pc = 0x20f924u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x20f928: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f928u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f92c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20f92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f930: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f934: 0x2529fd70  addiu       $t1, $t1, -0x290
    ctx->pc = 0x20f934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966640));
    // 0x20f938: 0x24050149  addiu       $a1, $zero, 0x149
    ctx->pc = 0x20f938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x20f93c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20f93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20f940: 0x1000ff90  b           . + 4 + (-0x70 << 2)
    ctx->pc = 0x20F940u;
    {
        const bool branch_taken_0x20f940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F940u;
        // 0x20f944: 0x350863be  ori         $t0, $t0, 0x63BE (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)25534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f940) {
            ctx->pc = 0x20F784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f784;
        }
    }
    ctx->pc = 0x20F948u;
label_20f948:
    // 0x20f948: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20f948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20f94c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20f94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f950: 0x2405014b  addiu       $a1, $zero, 0x14B
    ctx->pc = 0x20f950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 331));
    // 0x20f954: 0x24e7fd88  addiu       $a3, $a3, -0x278
    ctx->pc = 0x20f954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966664));
    // 0x20f958: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20f958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20f95c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F95Cu;
    SET_GPR_U32(ctx, 31, 0x20F964u);
    ctx->pc = 0x20F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F95Cu;
    // 0x20f960: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F95Cu, 0x20F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F964u;
label_20f964:
    // 0x20f964: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x20f964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20f968:
    // 0x20f968: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x20f968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f96c: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x20f96cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x20f970: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f974: 0xc084454  jal         func_211150
    ctx->pc = 0x20F974u;
    SET_GPR_U32(ctx, 31, 0x20F97Cu);
    ctx->pc = 0x20F978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F974u;
    // 0x20f978: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211150u, 0x20F974u, 0x20F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F97Cu;
label_20f97c:
    // 0x20f97c: 0x2610fc58  addiu       $s0, $s0, -0x3A8
    ctx->pc = 0x20f97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966360));
    // 0x20f980: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x20f980u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x20f984: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20f984u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20f988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f98c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x20f98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f990: 0x24e7fd98  addiu       $a3, $a3, -0x268
    ctx->pc = 0x20f990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966680));
    // 0x20f994: 0x24050151  addiu       $a1, $zero, 0x151
    ctx->pc = 0x20f994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
    // 0x20f998: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F998u;
    SET_GPR_U32(ctx, 31, 0x20F9A0u);
    ctx->pc = 0x20F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F998u;
    // 0x20f99c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F998u, 0x20F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9A0u;
label_20f9a0:
    // 0x20f9a0: 0x8e6e0010  lw          $t6, 0x10($s3)
    ctx->pc = 0x20f9a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x20f9a4: 0x264f0001  addiu       $t7, $s2, 0x1
    ctx->pc = 0x20f9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20f9a8: 0xa62f005e  sh          $t7, 0x5E($s1)
    ctx->pc = 0x20f9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 94), (uint16_t)GPR_U32(ctx, 15));
    // 0x20f9ac: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20f9acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20f9b0: 0xae2e0070  sw          $t6, 0x70($s1)
    ctx->pc = 0x20f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 14));
    // 0x20f9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9b8: 0xae350060  sw          $s5, 0x60($s1)
    ctx->pc = 0x20f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 21));
    // 0x20f9bc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x20f9bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9c0: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x20f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x20f9c4: 0x24e7fda8  addiu       $a3, $a3, -0x258
    ctx->pc = 0x20f9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966696));
    // 0x20f9c8: 0x2405015c  addiu       $a1, $zero, 0x15C
    ctx->pc = 0x20f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x20f9cc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F9CCu;
    SET_GPR_U32(ctx, 31, 0x20F9D4u);
    ctx->pc = 0x20F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F9CCu;
    // 0x20f9d0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F9CCu, 0x20F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9D4u;
label_20f9d4:
    // 0x20f9d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20f9d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f9d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f9dc: 0xa22f002a  sb          $t7, 0x2A($s1)
    ctx->pc = 0x20f9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 15));
    // 0x20f9e0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x20f9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f9e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f9e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f9e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f9ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20f9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f9f0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20f9f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f9f4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20f9f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20f9f8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20f9f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f9fc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20f9fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20fa00: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x20fa00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20fa04: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20fa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20fa08: 0x3e00008  jr          $ra
    ctx->pc = 0x20FA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA08u;
        // 0x20fa0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FA10u;
    // 0x20fa10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20fa14: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x20fa14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20fa18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20fa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20fa1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20fa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20fa20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20fa24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20fa24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fa28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20fa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20fa2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20fa2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fa30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20fa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20fa34: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x20fa34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fa38: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x20fa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x20fa3c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x20fa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x20fa40: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x20fa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x20fa44: 0x8c8e0024  lw          $t6, 0x24($a0)
    ctx->pc = 0x20fa44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x20fa48: 0x11cf0013  beq         $t6, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x20FA48u;
    {
        const bool branch_taken_0x20fa48 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x20FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA48u;
        // 0x20fa4c: 0x30b4ffff  andi        $s4, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa48) {
            ctx->pc = 0x20FA98u;
            goto label_20fa98;
        }
    }
    ctx->pc = 0x20FA50u;
    // 0x20fa50: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20fa54: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20fa54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20fa58: 0x2484fdc0  addiu       $a0, $a0, -0x240
    ctx->pc = 0x20fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966720));
    // 0x20fa5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20fa5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fa60: 0x2529fc70  addiu       $t1, $t1, -0x390
    ctx->pc = 0x20fa60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966384));
    // 0x20fa64: 0x24050174  addiu       $a1, $zero, 0x174
    ctx->pc = 0x20fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
label_20fa68:
    // 0x20fa68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fa68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fa6c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20fa6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fa70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20fa70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20fa74: 0x2408d8ee  addiu       $t0, $zero, -0x2712
    ctx->pc = 0x20fa74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x20fa78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20fa78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fa7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20fa7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20fa80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20fa80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fa84: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20fa84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20fa88: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x20fa88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fa8c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20fa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20fa90: 0x8084408  j           func_211020
    ctx->pc = 0x20FA90u;
    ctx->pc = 0x20FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FA90u;
    // 0x20fa94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x20FA90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x20FA98u;
label_20fa98:
    // 0x20fa98: 0x808f002a  lb          $t7, 0x2A($a0)
    ctx->pc = 0x20fa98u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x20fa9c: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x20FA9Cu;
    {
        const bool branch_taken_0x20fa9c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA9Cu;
        // 0x20faa0: 0x3c09003f  lui         $t1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa9c) {
            ctx->pc = 0x20FABCu;
            goto label_20fabc;
        }
    }
    ctx->pc = 0x20FAA4u;
    // 0x20faa4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20faa8: 0x2484fdc0  addiu       $a0, $a0, -0x240
    ctx->pc = 0x20faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966720));
    // 0x20faac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20faacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fab0: 0x2529fc90  addiu       $t1, $t1, -0x370
    ctx->pc = 0x20fab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966416));
    // 0x20fab4: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x20FAB4u;
    {
        const bool branch_taken_0x20fab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAB4u;
        // 0x20fab8: 0x24050176  addiu       $a1, $zero, 0x176 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fab4) {
            ctx->pc = 0x20FA68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fa68;
        }
    }
    ctx->pc = 0x20FABCu;
label_20fabc:
    // 0x20fabc: 0x908f0028  lbu         $t7, 0x28($a0)
    ctx->pc = 0x20fabcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x20fac0: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x20fac0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20fac4: 0x55e00008  bnel        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FAC4u;
    {
        const bool branch_taken_0x20fac4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fac4) {
            ctx->pc = 0x20FAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FAC4u;
            // 0x20fac8: 0x8c8f0000  lw          $t7, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FAE8u;
            goto label_20fae8;
        }
    }
    ctx->pc = 0x20FACCu;
    // 0x20facc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20faccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20fad0: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20fad0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20fad4: 0x2484fdc0  addiu       $a0, $a0, -0x240
    ctx->pc = 0x20fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966720));
    // 0x20fad8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20fad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fadc: 0x2529fca8  addiu       $t1, $t1, -0x358
    ctx->pc = 0x20fadcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966440));
    // 0x20fae0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x20FAE0u;
    {
        const bool branch_taken_0x20fae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAE0u;
        // 0x20fae4: 0x24050178  addiu       $a1, $zero, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fae0) {
            ctx->pc = 0x20FA68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fa68;
        }
    }
    ctx->pc = 0x20FAE8u;
label_20fae8:
    // 0x20fae8: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20fae8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20faec: 0x25d3a500  addiu       $s3, $t6, -0x5B00
    ctx->pc = 0x20faecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 4294944000));
    // 0x20faf0: 0x8c8c000c  lw          $t4, 0xC($a0)
    ctx->pc = 0x20faf0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20faf4: 0x8deb104c  lw          $t3, 0x104C($t7)
    ctx->pc = 0x20faf4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4172)));
    // 0x20faf8: 0x8c8d0008  lw          $t5, 0x8($a0)
    ctx->pc = 0x20faf8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20fafc: 0x2596fff4  addiu       $s6, $t4, -0xC
    ctx->pc = 0x20fafcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967284));
    // 0x20fb00: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x20fb00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x20fb04: 0xa5d4a500  sh          $s4, -0x5B00($t6)
    ctx->pc = 0x20fb04u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4294944000), (uint16_t)GPR_U32(ctx, 20));
    // 0x20fb08: 0x25effde0  addiu       $t7, $t7, -0x220
    ctx->pc = 0x20fb08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966752));
    // 0x20fb0c: 0xae6b0010  sw          $t3, 0x10($s3)
    ctx->pc = 0x20fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 11));
    // 0x20fb10: 0xae6f0018  sw          $t7, 0x18($s3)
    ctx->pc = 0x20fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 15));
    // 0x20fb14: 0x25b5000c  addiu       $s5, $t5, 0xC
    ctx->pc = 0x20fb14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x20fb18: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x20fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x20fb1c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x20fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x20fb20: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20fb20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fb24: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x20fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x20fb28: 0x150f001d  bne         $t0, $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x20FB28u;
    {
        const bool branch_taken_0x20fb28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x20FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB28u;
        // 0x20fb2c: 0xae680014  sw          $t0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb28) {
            ctx->pc = 0x20FBA0u;
            goto label_20fba0;
        }
    }
    ctx->pc = 0x20FB30u;
    // 0x20fb30: 0x24870080  addiu       $a3, $a0, 0x80
    ctx->pc = 0x20fb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x20fb34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20fb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fb38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20fb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fb3c: 0xc089398  jal         func_224E60
    ctx->pc = 0x20FB3Cu;
    SET_GPR_U32(ctx, 31, 0x20FB44u);
    ctx->pc = 0x20FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB3Cu;
    // 0x20fb40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E60u, 0x20FB3Cu, 0x20FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB44u;
label_20fb44:
    // 0x20fb44: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20FB44u;
    {
        const bool branch_taken_0x20fb44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB44u;
        // 0x20fb48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb44) {
            ctx->pc = 0x20FBA0u;
            goto label_20fba0;
        }
    }
    ctx->pc = 0x20FB4Cu;
    // 0x20fb4c: 0x8e6a0014  lw          $t2, 0x14($s3)
    ctx->pc = 0x20fb4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x20fb50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20fb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fb54: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x20fb54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x20fb58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fb5c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20fb60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20fb60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20fb64: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20fb64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20fb68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20fb68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fb6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20fb6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20fb70: 0x2484fdc0  addiu       $a0, $a0, -0x240
    ctx->pc = 0x20fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966720));
    // 0x20fb74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20fb74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fb78: 0x2529fd70  addiu       $t1, $t1, -0x290
    ctx->pc = 0x20fb78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966640));
    // 0x20fb7c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20fb7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20fb80: 0x24050191  addiu       $a1, $zero, 0x191
    ctx->pc = 0x20fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
    // 0x20fb84: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x20fb84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fb88: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20fb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fb8c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20fb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20fb90: 0x350863be  ori         $t0, $t0, 0x63BE
    ctx->pc = 0x20fb90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)25534);
    // 0x20fb94: 0x8084408  j           func_211020
    ctx->pc = 0x20FB94u;
    ctx->pc = 0x20FB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB94u;
    // 0x20fb98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x20FB94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x20FB9Cu;
    // 0x20fb9c: 0x0  nop
    ctx->pc = 0x20fb9cu;
    // NOP
label_20fba0:
    // 0x20fba0: 0x2d2782a  slt         $t7, $s6, $s2
    ctx->pc = 0x20fba0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x20fba4: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x20FBA4u;
    {
        const bool branch_taken_0x20fba4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBA4u;
        // 0x20fba8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fba4) {
            ctx->pc = 0x20FBFCu;
            goto label_20fbfc;
        }
    }
    ctx->pc = 0x20FBACu;
    // 0x20fbac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20fbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fbb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fbb4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x20fbb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20fbb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20fbbc: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x20fbbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20fbc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fbc4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20fbc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20fbc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20fbcc: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20fbccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20fbd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20fbd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fbd4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20fbd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20fbd8: 0x2484fdc0  addiu       $a0, $a0, -0x240
    ctx->pc = 0x20fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966720));
    // 0x20fbdc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x20fbdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fbe0: 0x2529fd28  addiu       $t1, $t1, -0x2D8
    ctx->pc = 0x20fbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966568));
    // 0x20fbe4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20fbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20fbe8: 0x24050198  addiu       $a1, $zero, 0x198
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    // 0x20fbec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20fbecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fbf0: 0x2408d8ed  addiu       $t0, $zero, -0x2713
    ctx->pc = 0x20fbf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957293));
    // 0x20fbf4: 0x8084408  j           func_211020
    ctx->pc = 0x20FBF4u;
    ctx->pc = 0x20FBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FBF4u;
    // 0x20fbf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x20FBF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x20FBFCu;
label_20fbfc:
    // 0x20fbfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20fbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20fc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc04: 0xc049c48  jal         func_127120
    ctx->pc = 0x20FC04u;
    SET_GPR_U32(ctx, 31, 0x20FC0Cu);
    ctx->pc = 0x20FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC04u;
    // 0x20fc08: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x20FC04u, 0x20FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC0Cu;
label_20fc0c:
    // 0x20fc0c: 0x2610fdc0  addiu       $s0, $s0, -0x240
    ctx->pc = 0x20fc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966720));
    // 0x20fc10: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x20fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20fc14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20fc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc18: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x20fc18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x20fc1c: 0xc084454  jal         func_211150
    ctx->pc = 0x20FC1Cu;
    SET_GPR_U32(ctx, 31, 0x20FC24u);
    ctx->pc = 0x20FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC1Cu;
    // 0x20fc20: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211150u, 0x20FC1Cu, 0x20FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC24u;
label_20fc24:
    // 0x20fc24: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x20fc24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x20fc28: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20fc28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20fc2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20fc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc30: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x20fc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc34: 0x24e7fd98  addiu       $a3, $a3, -0x268
    ctx->pc = 0x20fc34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966680));
    // 0x20fc38: 0x2405019e  addiu       $a1, $zero, 0x19E
    ctx->pc = 0x20fc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 414));
    // 0x20fc3c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20FC3Cu;
    SET_GPR_U32(ctx, 31, 0x20FC44u);
    ctx->pc = 0x20FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC3Cu;
    // 0x20fc40: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20FC3Cu, 0x20FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC44u;
label_20fc44:
    // 0x20fc44: 0x8e6e0010  lw          $t6, 0x10($s3)
    ctx->pc = 0x20fc44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x20fc48: 0x268f0001  addiu       $t7, $s4, 0x1
    ctx->pc = 0x20fc48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x20fc4c: 0xa62f005e  sh          $t7, 0x5E($s1)
    ctx->pc = 0x20fc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 94), (uint16_t)GPR_U32(ctx, 15));
    // 0x20fc50: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20fc50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20fc54: 0xae2e0070  sw          $t6, 0x70($s1)
    ctx->pc = 0x20fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 14));
    // 0x20fc58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20fc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc5c: 0xae320060  sw          $s2, 0x60($s1)
    ctx->pc = 0x20fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 18));
    // 0x20fc60: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x20fc60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc64: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x20fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x20fc68: 0x24e7fda8  addiu       $a3, $a3, -0x258
    ctx->pc = 0x20fc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966696));
    // 0x20fc6c: 0x240501a9  addiu       $a1, $zero, 0x1A9
    ctx->pc = 0x20fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
    // 0x20fc70: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20FC70u;
    SET_GPR_U32(ctx, 31, 0x20FC78u);
    ctx->pc = 0x20FC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC70u;
    // 0x20fc74: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20FC70u, 0x20FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC78u;
label_20fc78:
    // 0x20fc78: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20fc78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fc7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fc80: 0xa22f002a  sb          $t7, 0x2A($s1)
    ctx->pc = 0x20fc80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 15));
    // 0x20fc84: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x20fc84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20fc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fc8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20fc8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20fc90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20fc90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20fc94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20fc94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fc98: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20fc98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20fc9c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x20fc9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fca0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20fca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20fca4: 0x3e00008  jr          $ra
    ctx->pc = 0x20FCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCA4u;
        // 0x20fca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FCACu;
    // 0x20fcac: 0x0  nop
    ctx->pc = 0x20fcacu;
    // NOP
    if (ctx->pc == 0x20fcacu) { ctx->pc = 0x20fcb0u; }
}
