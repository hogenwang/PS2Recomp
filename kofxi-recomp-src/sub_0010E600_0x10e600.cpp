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

// Function: sub_0010E600
// Address: 0x10e600 - 0x10e6c0
void sub_0010E600_0x10e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E600_0x10e600");
#endif

    switch (ctx->pc) {
        case 0x10e61cu: goto label_10e61c;
        case 0x10e634u: goto label_10e634;
        case 0x10e6a0u: goto label_10e6a0;
        default: break;
    }

    ctx->pc = 0x10e600u;

    // 0x10e600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e608: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e60c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10e610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10e614: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x10E614u;
    SET_GPR_U32(ctx, 31, 0x10E61Cu);
    ctx->pc = 0x10E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E614u;
    // 0x10e618: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x10E614u, 0x10E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E61Cu;
label_10e61c:
    // 0x10e61c: 0x261163d0  addiu       $s1, $s0, 0x63D0
    ctx->pc = 0x10e61cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25552));
    // 0x10e620: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x10e620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x10e624: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x10e624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x10e628: 0x24c6e220  addiu       $a2, $a2, -0x1DE0
    ctx->pc = 0x10e628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959648));
    // 0x10e62c: 0xc0437d0  jal         func_10DF40
    ctx->pc = 0x10E62Cu;
    SET_GPR_U32(ctx, 31, 0x10E634u);
    ctx->pc = 0x10E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E62Cu;
    // 0x10e630: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF40u, 0x10E62Cu, 0x10E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E634u;
label_10e634:
    // 0x10e634: 0xae0263d0  sw          $v0, 0x63D0($s0)
    ctx->pc = 0x10e634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25552), GPR_U32(ctx, 2));
    // 0x10e638: 0x8e0263d0  lw          $v0, 0x63D0($s0)
    ctx->pc = 0x10e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25552)));
    // 0x10e63c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E63Cu;
    {
        const bool branch_taken_0x10e63c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E63Cu;
        // 0x10e640: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e63c) {
            ctx->pc = 0x10E64Cu;
            goto label_10e64c;
        }
    }
    ctx->pc = 0x10E644u;
    // 0x10e644: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10E644u;
    {
        const bool branch_taken_0x10e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E644u;
        // 0x10e648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e644) {
            ctx->pc = 0x10E6A8u;
            goto label_10e6a8;
        }
    }
    ctx->pc = 0x10E64Cu;
label_10e64c:
    // 0x10e64c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10e650: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x10e650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x10e654: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10e654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10e658: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x10e658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x10e65c: 0x24426400  addiu       $v0, $v0, 0x6400
    ctx->pc = 0x10e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
    // 0x10e660: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10e660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10e664: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x10e664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x10e668: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10e668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10e66c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10e670: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x10e670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x10e674: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x10e674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x10e678: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x10e678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x10e67c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x10e67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x10e680: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x10e680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x10e684: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x10e684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10e688: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x10e688u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x10e68c: 0xa0450006  sb          $a1, 0x6($v0)
    ctx->pc = 0x10e68cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x10e690: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x10e690u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x10e694: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x10e694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10e698: 0xc04385e  jal         func_10E178
    ctx->pc = 0x10E698u;
    SET_GPR_U32(ctx, 31, 0x10E6A0u);
    ctx->pc = 0x10E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E698u;
    // 0x10e69c: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E178u, 0x10E698u, 0x10E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6A0u;
label_10e6a0:
    // 0x10e6a0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x10e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x10e6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e6a8:
    // 0x10e6a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10e6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e6ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e6acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e6b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6B4u;
        // 0x10e6b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E6BCu;
    // 0x10e6bc: 0x0  nop
    ctx->pc = 0x10e6bcu;
    // NOP
    if (ctx->pc == 0x10e6bcu) { ctx->pc = 0x10e6c0u; }
}
