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

// Function: sub_00218600
// Address: 0x218600 - 0x2186f0
void sub_00218600_0x218600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218600_0x218600");
#endif

    switch (ctx->pc) {
        case 0x21864cu: goto label_21864c;
        case 0x218664u: goto label_218664;
        case 0x2186b4u: goto label_2186b4;
        case 0x2186c8u: goto label_2186c8;
        default: break;
    }

    ctx->pc = 0x218600u;

label_218600:
    // 0x218600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218604: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21860c: 0x24841080  addiu       $a0, $a0, 0x1080
    ctx->pc = 0x21860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x218610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218614: 0x8043e52  j           func_10F948
    ctx->pc = 0x218614u;
    ctx->pc = 0x218618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218614u;
    // 0x218618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21861Cu;
    // 0x21861c: 0x0  nop
    ctx->pc = 0x21861cu;
    // NOP
    // 0x218620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218624: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218624u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218628: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x218628u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21862c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218634: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218638: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x218638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21863c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21863cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x218640: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x218640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218644: 0xc084ae8  jal         func_212BA0
    ctx->pc = 0x218644u;
    SET_GPR_U32(ctx, 31, 0x21864Cu);
    ctx->pc = 0x218648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218644u;
    // 0x218648: 0x8cd10000  lw          $s1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BA0u, 0x218644u, 0x21864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21864Cu;
label_21864c:
    // 0x21864c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21864cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218650: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x218650u;
    {
        const bool branch_taken_0x218650 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x218654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218650u;
        // 0x218654: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218650) {
            ctx->pc = 0x218668u;
            goto label_218668;
        }
    }
    ctx->pc = 0x218658u;
    // 0x218658: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x218658u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21865c: 0xc086180  jal         func_218600
    ctx->pc = 0x21865Cu;
    SET_GPR_U32(ctx, 31, 0x218664u);
    ctx->pc = 0x218660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21865Cu;
    // 0x218660: 0x22f8823  subu        $s1, $s1, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218600u;
    goto label_218600;
    ctx->pc = 0x218664u;
label_218664:
    // 0x218664: 0x220782d  daddu       $t7, $s1, $zero
    ctx->pc = 0x218664u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_218668:
    // 0x218668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21866c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x21866cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218670: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218674: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218678: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x218678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21867c: 0x3e00008  jr          $ra
    ctx->pc = 0x21867Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21867Cu;
        // 0x218680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21867Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218684u;
    // 0x218684: 0x0  nop
    ctx->pc = 0x218684u;
    // NOP
    // 0x218688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21868c: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x21868cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x218690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218698: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21869c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21869cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2186a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2186a4: 0xadc0ab5c  sw          $zero, -0x54A4($t6)
    ctx->pc = 0x2186a4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294945628), GPR_U32(ctx, 0));
    // 0x2186a8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2186a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2186ac: 0xc084b36  jal         func_212CD8
    ctx->pc = 0x2186ACu;
    SET_GPR_U32(ctx, 31, 0x2186B4u);
    ctx->pc = 0x2186B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186ACu;
    // 0x2186b0: 0x8cb20000  lw          $s2, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212CD8u, 0x2186ACu, 0x2186B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186B4u;
label_2186b4:
    // 0x2186b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2186b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186b8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2186B8u;
    {
        const bool branch_taken_0x2186b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2186BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186B8u;
        // 0x2186bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186b8) {
            ctx->pc = 0x2186D0u;
            goto label_2186d0;
        }
    }
    ctx->pc = 0x2186C0u;
    // 0x2186c0: 0xc086180  jal         func_218600
    ctx->pc = 0x2186C0u;
    SET_GPR_U32(ctx, 31, 0x2186C8u);
    ctx->pc = 0x218600u;
    goto label_218600;
    ctx->pc = 0x2186C8u;
label_2186c8:
    // 0x2186c8: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2186c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2186cc: 0x1f22823  subu        $a1, $t7, $s2
    ctx->pc = 0x2186ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_2186d0:
    // 0x2186d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2186d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2186d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2186d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2186d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2186dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2186dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2186e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2186e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2186e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2186E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2186E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186E4u;
        // 0x2186e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2186E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2186ECu;
    // 0x2186ec: 0x0  nop
    ctx->pc = 0x2186ecu;
    // NOP
    if (ctx->pc == 0x2186ecu) { ctx->pc = 0x2186f0u; }
}
