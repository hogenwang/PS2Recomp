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

// Function: sub_001F5610
// Address: 0x1f5610 - 0x1f5730
void sub_001F5610_0x1f5610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5610_0x1f5610");
#endif

    switch (ctx->pc) {
        case 0x1f562cu: goto label_1f562c;
        case 0x1f563cu: goto label_1f563c;
        case 0x1f565cu: goto label_1f565c;
        case 0x1f5680u: goto label_1f5680;
        case 0x1f56acu: goto label_1f56ac;
        case 0x1f56c0u: goto label_1f56c0;
        case 0x1f56d8u: goto label_1f56d8;
        case 0x1f56ecu: goto label_1f56ec;
        case 0x1f5704u: goto label_1f5704;
        case 0x1f5718u: goto label_1f5718;
        default: break;
    }

    ctx->pc = 0x1f5610u;

    // 0x1f5610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f5614: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f5614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f5618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f561c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f5620: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f5620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f5624: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1F5624u;
    SET_GPR_U32(ctx, 31, 0x1F562Cu);
    ctx->pc = 0x1F5628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5624u;
    // 0x1f5628: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9C0u, 0x1F5624u, 0x1F562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F562Cu;
label_1f562c:
    // 0x1f562c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1f562cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f5630: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1f5630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1f5634: 0xc07d5f2  jal         func_1F57C8
    ctx->pc = 0x1F5634u;
    SET_GPR_U32(ctx, 31, 0x1F563Cu);
    ctx->pc = 0x1F5638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5634u;
    // 0x1f5638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F57C8u, 0x1F5634u, 0x1F563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F563Cu;
label_1f563c:
    // 0x1f563c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1f563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f5640: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1f5640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5648: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1f5648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1f564c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f564cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f5650: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1f5650u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1f5654: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F5654u;
    SET_GPR_U32(ctx, 31, 0x1F565Cu);
    ctx->pc = 0x1F5658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5654u;
    // 0x1f5658: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F5654u, 0x1F565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F565Cu;
label_1f565c:
    // 0x1f565c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f565cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5660: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f5660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f5664: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F5664u;
    {
        const bool branch_taken_0x1f5664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5664) {
            ctx->pc = 0x1F5668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5664u;
            // 0x1f5668: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F56B8u;
            goto label_1f56b8;
        }
    }
    ctx->pc = 0x1F566Cu;
    // 0x1f566c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F566Cu;
    {
        const bool branch_taken_0x1f566c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F566Cu;
        // 0x1f5670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f566c) {
            ctx->pc = 0x1F5688u;
            goto label_1f5688;
        }
    }
    ctx->pc = 0x1F5674u;
    // 0x1f5674: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x1f5674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1f5678: 0xc07f2f8  jal         func_1FCBE0
    ctx->pc = 0x1F5678u;
    SET_GPR_U32(ctx, 31, 0x1F5680u);
    ctx->pc = 0x1F567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5678u;
    // 0x1f567c: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCBE0u, 0x1F5678u, 0x1F5680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5680u;
label_1f5680:
    // 0x1f5680: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5680u;
    {
        const bool branch_taken_0x1f5680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5680) {
            ctx->pc = 0x1F5684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5680u;
            // 0x1f5684: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F56B8u;
            goto label_1f56b8;
        }
    }
    ctx->pc = 0x1F5688u;
label_1f5688:
    // 0x1f5688: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1f5688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f568c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F568Cu;
    {
        const bool branch_taken_0x1f568c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f568c) {
            ctx->pc = 0x1F5690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F568Cu;
            // 0x1f5690: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F56B8u;
            goto label_1f56b8;
        }
    }
    ctx->pc = 0x1F5694u;
    // 0x1f5694: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5694u;
    {
        const bool branch_taken_0x1f5694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5694) {
            ctx->pc = 0x1F5698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5694u;
            // 0x1f5698: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F56B8u;
            goto label_1f56b8;
        }
    }
    ctx->pc = 0x1F569Cu;
    // 0x1f569c: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x1f569cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1f56a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f56a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56a4: 0xc07f2f8  jal         func_1FCBE0
    ctx->pc = 0x1F56A4u;
    SET_GPR_U32(ctx, 31, 0x1F56ACu);
    ctx->pc = 0x1F56A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56A4u;
    // 0x1f56a8: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCBE0u, 0x1F56A4u, 0x1F56ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56ACu;
label_1f56ac:
    // 0x1f56ac: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F56ACu;
    {
        const bool branch_taken_0x1f56ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f56ac) {
            ctx->pc = 0x1F56B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F56ACu;
            // 0x1f56b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F56B8u;
            goto label_1f56b8;
        }
    }
    ctx->pc = 0x1F56B4u;
    // 0x1f56b4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1f56b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f56b8:
    // 0x1f56b8: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1F56B8u;
    SET_GPR_U32(ctx, 31, 0x1F56C0u);
    ctx->pc = 0x1F56BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56B8u;
    // 0x1f56bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9D8u, 0x1F56B8u, 0x1F56C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56C0u;
label_1f56c0:
    // 0x1f56c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f56c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f56c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f56c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f56c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f56cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f56ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f56d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F56D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56D0u;
        // 0x1f56d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F56D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F56D8u;
label_1f56d8:
    // 0x1f56d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f56d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f56dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f56dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f56e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f56e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f56e4: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F56E4u;
    SET_GPR_U32(ctx, 31, 0x1F56ECu);
    ctx->pc = 0x1F56E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56E4u;
    // 0x1f56e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F56E4u, 0x1F56ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56ECu;
label_1f56ec:
    // 0x1f56ec: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f56ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f56f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f56f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F56F4u;
    {
        const bool branch_taken_0x1f56f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56F4u;
        // 0x1f56f8: 0x34a50183  ori         $a1, $a1, 0x183 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)387);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f56f4) {
            ctx->pc = 0x1F5710u;
            goto label_1f5710;
        }
    }
    ctx->pc = 0x1F56FCu;
    // 0x1f56fc: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1F56FCu;
    SET_GPR_U32(ctx, 31, 0x1F5704u);
    ctx->pc = 0x1F5700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56FCu;
    // 0x1f5700: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1F56FCu, 0x1F5704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5704u;
label_1f5704:
    // 0x1f5704: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5704u;
    {
        const bool branch_taken_0x1f5704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5704u;
        // 0x1f5708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5704) {
            ctx->pc = 0x1F571Cu;
            goto label_1f571c;
        }
    }
    ctx->pc = 0x1F570Cu;
    // 0x1f570c: 0x0  nop
    ctx->pc = 0x1f570cu;
    // NOP
label_1f5710:
    // 0x1f5710: 0xc07d5cc  jal         func_1F5730
    ctx->pc = 0x1F5710u;
    SET_GPR_U32(ctx, 31, 0x1F5718u);
    ctx->pc = 0x1F5730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5730u, 0x1F5710u, 0x1F5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5718u;
label_1f5718:
    // 0x1f5718: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f5718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f571c:
    // 0x1f571c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f571cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5720: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f5720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5724: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5724u;
        // 0x1f5728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F572Cu;
    // 0x1f572c: 0x0  nop
    ctx->pc = 0x1f572cu;
    // NOP
}
