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

// Function: sub_002CF600
// Address: 0x2cf600 - 0x2cf708
void sub_002CF600_0x2cf600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF600_0x2cf600");
#endif

    switch (ctx->pc) {
        case 0x2cf62cu: goto label_2cf62c;
        case 0x2cf654u: goto label_2cf654;
        case 0x2cf690u: goto label_2cf690;
        case 0x2cf6d8u: goto label_2cf6d8;
        default: break;
    }

    ctx->pc = 0x2cf600u;

    // 0x2cf600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf604: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cf604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cf608: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cf608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf60c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cf60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cf610: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cf610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf614: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cf614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf618: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2cf618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cf61c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cf61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cf620: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cf620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cf624: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2CF624u;
    SET_GPR_U32(ctx, 31, 0x2CF62Cu);
    ctx->pc = 0x2CF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF624u;
    // 0x2cf628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2CF624u, 0x2CF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF62Cu;
label_2cf62c:
    // 0x2cf62c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2cf62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2cf630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf634: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF634u;
    {
        const bool branch_taken_0x2cf634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF634u;
        // 0x2cf638: 0x24a59670  addiu       $a1, $a1, -0x6990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf634) {
            ctx->pc = 0x2CF654u;
            goto label_2cf654;
        }
    }
    ctx->pc = 0x2CF63Cu;
    // 0x2cf63c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2cf63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf640: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2cf640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2cf644: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2cf644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf648: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x2cf648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x2cf64c: 0xc0b3d08  jal         func_2CF420
    ctx->pc = 0x2CF64Cu;
    SET_GPR_U32(ctx, 31, 0x2CF654u);
    ctx->pc = 0x2CF650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF64Cu;
    // 0x2cf650: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2CF64Cu, 0x2CF654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF654u;
label_2cf654:
    // 0x2cf654: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cf654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf658: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cf658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf65c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cf65cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf660: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cf660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cf664: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF664u;
        // 0x2cf668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF66Cu;
    // 0x2cf66c: 0x0  nop
    ctx->pc = 0x2cf66cu;
    // NOP
    // 0x2cf670: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2cf670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf674: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2CF674u;
    {
        const bool branch_taken_0x2cf674 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF674u;
        // 0x2cf678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf674) {
            ctx->pc = 0x2CF6B4u;
            goto label_2cf6b4;
        }
    }
    ctx->pc = 0x2CF67Cu;
    // 0x2cf67c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2cf67cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf680: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CF680u;
    {
        const bool branch_taken_0x2cf680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf680) {
            ctx->pc = 0x2CF6B4u;
            goto label_2cf6b4;
        }
    }
    ctx->pc = 0x2CF688u;
    // 0x2cf688: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cf688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cf68c: 0x0  nop
    ctx->pc = 0x2cf68cu;
    // NOP
label_2cf690:
    // 0x2cf690: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2cf690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2cf694: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF694u;
    {
        const bool branch_taken_0x2cf694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF694u;
        // 0x2cf698: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf694) {
            ctx->pc = 0x2CF6B4u;
            goto label_2cf6b4;
        }
    }
    ctx->pc = 0x2CF69Cu;
    // 0x2cf69c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cf69cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf6a0: 0x0  nop
    ctx->pc = 0x2cf6a0u;
    // NOP
    // 0x2cf6a4: 0x0  nop
    ctx->pc = 0x2cf6a4u;
    // NOP
    // 0x2cf6a8: 0x0  nop
    ctx->pc = 0x2cf6a8u;
    // NOP
    // 0x2cf6ac: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CF6ACu;
    {
        const bool branch_taken_0x2cf6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf6ac) {
            ctx->pc = 0x2CF6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF6ACu;
            // 0x2cf6b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cf690;
        }
    }
    ctx->pc = 0x2CF6B4u;
label_2cf6b4:
    // 0x2cf6b4: 0x10a70012  beq         $a1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CF6B4u;
    {
        const bool branch_taken_0x2cf6b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x2CF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6B4u;
        // 0x2cf6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6b4) {
            ctx->pc = 0x2CF700u;
            goto label_2cf700;
        }
    }
    ctx->pc = 0x2CF6BCu;
    // 0x2cf6bc: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2cf6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cf6c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cf6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cf6c4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2cf6c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf6c8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2cf6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2cf6cc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2cf6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cf6d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CF6D0u;
    {
        const bool branch_taken_0x2cf6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6D0u;
        // 0x2cf6d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6d0) {
            ctx->pc = 0x2CF6F4u;
            goto label_2cf6f4;
        }
    }
    ctx->pc = 0x2CF6D8u;
label_2cf6d8:
    // 0x2cf6d8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2cf6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cf6dc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2cf6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cf6e0: 0x0  nop
    ctx->pc = 0x2cf6e0u;
    // NOP
    // 0x2cf6e4: 0x0  nop
    ctx->pc = 0x2cf6e4u;
    // NOP
    // 0x2cf6e8: 0x0  nop
    ctx->pc = 0x2cf6e8u;
    // NOP
    // 0x2cf6ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CF6ECu;
    {
        const bool branch_taken_0x2cf6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6ECu;
        // 0x2cf6f0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6ec) {
            ctx->pc = 0x2CF6D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cf6d8;
        }
    }
    ctx->pc = 0x2CF6F4u;
label_2cf6f4:
    // 0x2cf6f4: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2cf6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2cf6f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2cf6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cf6fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cf6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2cf700:
    // 0x2cf700: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF708u;
}
