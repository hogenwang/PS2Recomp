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

// Function: sub_0010B5E8
// Address: 0x10b5e8 - 0x10b6a8
void sub_0010B5E8_0x10b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B5E8_0x10b5e8");
#endif

    switch (ctx->pc) {
        case 0x10b634u: goto label_10b634;
        case 0x10b65cu: goto label_10b65c;
        case 0x10b674u: goto label_10b674;
        default: break;
    }

    ctx->pc = 0x10b5e8u;

    // 0x10b5e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b5ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b5f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10b5f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b5fc: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x10b5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x10b600: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10b604: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x10B604u;
    {
        const bool branch_taken_0x10b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B604u;
        // 0x10b608: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b604) {
            ctx->pc = 0x10B690u;
            goto label_10b690;
        }
    }
    ctx->pc = 0x10B60Cu;
    // 0x10b60c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10b610: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10B610u;
    {
        const bool branch_taken_0x10b610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B610u;
        // 0x10b614: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b610) {
            ctx->pc = 0x10B694u;
            goto label_10b694;
        }
    }
    ctx->pc = 0x10B618u;
    // 0x10b618: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x10b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x10b61c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B61Cu;
    {
        const bool branch_taken_0x10b61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B61Cu;
        // 0x10b620: 0x8e060128  lw          $a2, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b61c) {
            ctx->pc = 0x10B63Cu;
            goto label_10b63c;
        }
    }
    ctx->pc = 0x10B624u;
    // 0x10b624: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x10b624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x10b628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b62c: 0xc04305a  jal         func_10C168
    ctx->pc = 0x10B62Cu;
    SET_GPR_U32(ctx, 31, 0x10B634u);
    ctx->pc = 0x10B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B62Cu;
    // 0x10b630: 0x24a5a478  addiu       $a1, $a1, -0x5B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x10B62Cu, 0x10B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B634u;
label_10b634:
    // 0x10b634: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10B634u;
    {
        const bool branch_taken_0x10b634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B634u;
        // 0x10b638: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b634) {
            ctx->pc = 0x10B678u;
            goto label_10b678;
        }
    }
    ctx->pc = 0x10B63Cu;
label_10b63c:
    // 0x10b63c: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x10b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10b640: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b644: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B644u;
    {
        const bool branch_taken_0x10b644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B644u;
        // 0x10b648: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b644) {
            ctx->pc = 0x10B664u;
            goto label_10b664;
        }
    }
    ctx->pc = 0x10B64Cu;
    // 0x10b64c: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x10b64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x10b650: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x10b650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x10b654: 0xc042bc2  jal         func_10AF08
    ctx->pc = 0x10B654u;
    SET_GPR_U32(ctx, 31, 0x10B65Cu);
    ctx->pc = 0x10B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B654u;
    // 0x10b658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AF08u, 0x10B654u, 0x10B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B65Cu;
label_10b65c:
    // 0x10b65c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10B65Cu;
    {
        const bool branch_taken_0x10b65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B65Cu;
        // 0x10b660: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b65c) {
            ctx->pc = 0x10B678u;
            goto label_10b678;
        }
    }
    ctx->pc = 0x10B664u;
label_10b664:
    // 0x10b664: 0x8e0501dc  lw          $a1, 0x1DC($s0)
    ctx->pc = 0x10b664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x10b668: 0x8e0601ec  lw          $a2, 0x1EC($s0)
    ctx->pc = 0x10b668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x10b66c: 0xc042c72  jal         func_10B1C8
    ctx->pc = 0x10B66Cu;
    SET_GPR_U32(ctx, 31, 0x10B674u);
    ctx->pc = 0x10B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B66Cu;
    // 0x10b670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B1C8u, 0x10B66Cu, 0x10B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B674u;
label_10b674:
    // 0x10b674: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x10b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_10b678:
    // 0x10b678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b67c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x10b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x10b680: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x10b680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x10b684: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10b684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b688: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10b688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x10b68c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_10b690:
    // 0x10b690: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10b694:
    // 0x10b694: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10b694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b698: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b69c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10B6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6A0u;
        // 0x10b6a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B6A8u;
}
