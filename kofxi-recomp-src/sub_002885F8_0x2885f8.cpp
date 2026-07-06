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

// Function: sub_002885F8
// Address: 0x2885f8 - 0x288770
void sub_002885F8_0x2885f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002885F8_0x2885f8");
#endif

    switch (ctx->pc) {
        case 0x288630u: goto label_288630;
        case 0x288668u: goto label_288668;
        case 0x2886fcu: goto label_2886fc;
        default: break;
    }

    ctx->pc = 0x2885f8u;

    // 0x2885f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2885f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2885fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2885fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x288600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288604: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x288604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x288608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28860c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28860cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288610: 0x12200052  beqz        $s1, . + 4 + (0x52 << 2)
    ctx->pc = 0x288610u;
    {
        const bool branch_taken_0x288610 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x288614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288610u;
        // 0x288614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288610) {
            ctx->pc = 0x28875Cu;
            goto label_28875c;
        }
    }
    ctx->pc = 0x288618u;
    // 0x288618: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x288618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28861c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28861Cu;
    {
        const bool branch_taken_0x28861c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28861Cu;
        // 0x288620: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28861c) {
            ctx->pc = 0x28863Cu;
            goto label_28863c;
        }
    }
    ctx->pc = 0x288624u;
    // 0x288624: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x288624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288628: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x288628u;
    SET_GPR_U32(ctx, 31, 0x288630u);
    ctx->pc = 0x28862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288628u;
    // 0x28862c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2884A8u, 0x288628u, 0x288630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288630u;
label_288630:
    // 0x288630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x288630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288634: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x288634u;
    {
        const bool branch_taken_0x288634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288634u;
        // 0x288638: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288634) {
            ctx->pc = 0x28875Cu;
            goto label_28875c;
        }
    }
    ctx->pc = 0x28863Cu;
label_28863c:
    // 0x28863c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x288640: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x288640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x288644: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x288644u;
    {
        const bool branch_taken_0x288644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288644) {
            ctx->pc = 0x288648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288644u;
            // 0x288648: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2886D8u;
            goto label_2886d8;
        }
    }
    ctx->pc = 0x28864Cu;
    // 0x28864c: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x28864Cu;
    {
        const bool branch_taken_0x28864c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28864c) {
            ctx->pc = 0x288650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28864Cu;
            // 0x288650: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2886A0u;
            goto label_2886a0;
        }
    }
    ctx->pc = 0x288654u;
    // 0x288654: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x288654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x288658: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288658u;
    {
        const bool branch_taken_0x288658 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288658u;
        // 0x28865c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288658) {
            ctx->pc = 0x288678u;
            goto label_288678;
        }
    }
    ctx->pc = 0x288660u;
    // 0x288660: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x288660u;
    SET_GPR_U32(ctx, 31, 0x288668u);
    ctx->pc = 0x288664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288660u;
    // 0x288664: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x288660u, 0x288668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288668u;
label_288668:
    // 0x288668: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x288668u;
    {
        const bool branch_taken_0x288668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288668) {
            ctx->pc = 0x28866Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288668u;
            // 0x28866c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288688u;
            goto label_288688;
        }
    }
    ctx->pc = 0x288670u;
    // 0x288670: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x288670u;
    {
        const bool branch_taken_0x288670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288670u;
        // 0x288674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288670) {
            ctx->pc = 0x28875Cu;
            goto label_28875c;
        }
    }
    ctx->pc = 0x288678u;
label_288678:
    // 0x288678: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x288678u;
    {
        const bool branch_taken_0x288678 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x288678) {
            ctx->pc = 0x28867Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288678u;
            // 0x28867c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288688u;
            goto label_288688;
        }
    }
    ctx->pc = 0x288680u;
    // 0x288680: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x288680u;
    {
        const bool branch_taken_0x288680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288680u;
        // 0x288684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288680) {
            ctx->pc = 0x28875Cu;
            goto label_28875c;
        }
    }
    ctx->pc = 0x288688u;
label_288688:
    // 0x288688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x288688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28868c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288690: 0xfc910000  sd          $s1, 0x0($a0)
    ctx->pc = 0x288690u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 17));
    // 0x288694: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x288694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x288698: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x288698u;
    {
        const bool branch_taken_0x288698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288698u;
        // 0x28869c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288698) {
            ctx->pc = 0x28875Cu;
            goto label_28875c;
        }
    }
    ctx->pc = 0x2886A0u;
label_2886a0:
    // 0x2886a0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2886a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2886a4: 0x14710003  bne         $v1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2886A4u;
    {
        const bool branch_taken_0x2886a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2886A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886A4u;
        // 0x2886a8: 0x223102b  sltu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886a4) {
            ctx->pc = 0x2886B4u;
            goto label_2886b4;
        }
    }
    ctx->pc = 0x2886ACu;
    // 0x2886ac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2886ACu;
    {
        const bool branch_taken_0x2886ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886ACu;
        // 0x2886b0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886ac) {
            ctx->pc = 0x288758u;
            goto label_288758;
        }
    }
    ctx->pc = 0x2886B4u;
label_2886b4:
    // 0x2886b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2886B4u;
    {
        const bool branch_taken_0x2886b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886B4u;
        // 0x2886b8: 0x71102f  dsubu       $v0, $v1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886b4) {
            ctx->pc = 0x2886C4u;
            goto label_2886c4;
        }
    }
    ctx->pc = 0x2886BCu;
    // 0x2886bc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2886BCu;
    {
        const bool branch_taken_0x2886bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886BCu;
        // 0x2886c0: 0xfc820000  sd          $v0, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886bc) {
            ctx->pc = 0x288758u;
            goto label_288758;
        }
    }
    ctx->pc = 0x2886C4u;
label_2886c4:
    // 0x2886c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2886c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2886c8: 0x223182f  dsubu       $v1, $s1, $v1
    ctx->pc = 0x2886c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
    // 0x2886cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2886ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2886d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2886D0u;
    {
        const bool branch_taken_0x2886d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886D0u;
        // 0x2886d4: 0xfc830000  sd          $v1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886d0) {
            ctx->pc = 0x28875Cu;
            goto label_28875c;
        }
    }
    ctx->pc = 0x2886D8u;
label_2886d8:
    // 0x2886d8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2886d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2886dc: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x2886dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2886e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2886E0u;
    {
        const bool branch_taken_0x2886e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2886E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886E0u;
        // 0x2886e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886e0) {
            ctx->pc = 0x2886F8u;
            goto label_2886f8;
        }
    }
    ctx->pc = 0x2886E8u;
    // 0x2886e8: 0x71102f  dsubu       $v0, $v1, $s1
    ctx->pc = 0x2886e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 17));
    // 0x2886ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2886ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2886F0u;
    {
        const bool branch_taken_0x2886f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886F0u;
        // 0x2886f4: 0xfc820000  sd          $v0, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886f0) {
            ctx->pc = 0x288734u;
            goto label_288734;
        }
    }
    ctx->pc = 0x2886F8u;
label_2886f8:
    // 0x2886f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2886f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2886fc:
    // 0x2886fc: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2886fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x288700: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x288700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x288704: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x288704u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288708: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x288708u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x28870c: 0x71182f  dsubu       $v1, $v1, $s1
    ctx->pc = 0x28870cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 17));
    // 0x288710: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x288710u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x288714: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x288714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x288718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x288718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28871c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x28871cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x288720: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x288720u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288724: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x288724u;
    {
        const bool branch_taken_0x288724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288724u;
        // 0x288728: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288724) {
            ctx->pc = 0x2886FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2886fc;
        }
    }
    ctx->pc = 0x28872Cu;
    // 0x28872c: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x28872cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x288730: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x288730u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_288734:
    // 0x288734: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x288734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x288738: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x288738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28873c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x28873cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288740: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x288740u;
    {
        const bool branch_taken_0x288740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x288744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288740u;
        // 0x288744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288740) {
            ctx->pc = 0x28875Cu;
            goto label_28875c;
        }
    }
    ctx->pc = 0x288748u;
    // 0x288748: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x288748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28874c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x288750: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x288750u;
    {
        const bool branch_taken_0x288750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x288750) {
            ctx->pc = 0x288754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288750u;
            // 0x288754: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288758u;
            goto label_288758;
        }
    }
    ctx->pc = 0x288758u;
label_288758:
    // 0x288758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28875c:
    // 0x28875c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28875cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288760: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x288760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x288764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288768: 0x3e00008  jr          $ra
    ctx->pc = 0x288768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288768u;
        // 0x28876c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288770u;
}
