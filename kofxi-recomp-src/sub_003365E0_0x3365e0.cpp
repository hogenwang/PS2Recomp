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

// Function: sub_003365E0
// Address: 0x3365e0 - 0x3366d0
void sub_003365E0_0x3365e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003365E0_0x3365e0");
#endif

    switch (ctx->pc) {
        case 0x336658u: goto label_336658;
        default: break;
    }

    ctx->pc = 0x3365e0u;

    // 0x3365e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3365e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3365e4: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x3365e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x3365e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3365e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3365ec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3365ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3365f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3365f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3365f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3365f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3365f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3365f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3365fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3365fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x336600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336604: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x336604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336608u;
    {
        const bool branch_taken_0x336608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336608u;
        // 0x33660c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336608) {
            ctx->pc = 0x336620u;
            goto label_336620;
        }
    }
    ctx->pc = 0x336610u;
    // 0x336610: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x336610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336614: 0x9442ea26  lhu         $v0, -0x15DA($v0)
    ctx->pc = 0x336614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961702)));
    // 0x336618: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x336618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33661c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33661cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_336620:
    // 0x336620: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x336620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x336624: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x336624u;
    {
        const bool branch_taken_0x336624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336624) {
            ctx->pc = 0x336628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336624u;
            // 0x336628: 0x3092ffff  andi        $s2, $a0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x336640u;
            goto label_336640;
        }
    }
    ctx->pc = 0x33662Cu;
    // 0x33662c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336630: 0x9442ea32  lhu         $v0, -0x15CE($v0)
    ctx->pc = 0x336630u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961714)));
    // 0x336634: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x336634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x336638: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x336638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33663c: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x33663cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_336640:
    // 0x336640: 0x32420050  andi        $v0, $s2, 0x50
    ctx->pc = 0x336640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)80);
    // 0x336644: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x336644u;
    {
        const bool branch_taken_0x336644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336644) {
            ctx->pc = 0x336648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336644u;
            // 0x336648: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3366B8u;
            goto label_3366b8;
        }
    }
    ctx->pc = 0x33664Cu;
    // 0x33664c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x336650: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336650u;
    SET_GPR_U32(ctx, 31, 0x336658u);
    ctx->pc = 0x336654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336650u;
    // 0x336654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x336650u, 0x336658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336658u;
label_336658:
    // 0x336658: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x336658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33665c: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x33665cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x336660: 0x38e3c  dsll32      $s1, $v1, 24
    ctx->pc = 0x336660u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 24));
    // 0x336664: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336664u;
    {
        const bool branch_taken_0x336664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336664u;
        // 0x336668: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336664) {
            ctx->pc = 0x336678u;
            goto label_336678;
        }
    }
    ctx->pc = 0x33666Cu;
    // 0x33666c: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x33666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x336670: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x336670u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336674: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x336674u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_336678:
    // 0x336678: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x336678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
    // 0x33667c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x33667cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x336680: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x336680u;
    {
        const bool branch_taken_0x336680 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x336680) {
            ctx->pc = 0x336684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336680u;
            // 0x336684: 0x10163c  dsll32      $v0, $s0, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3366A0u;
            goto label_3366a0;
        }
    }
    ctx->pc = 0x336688u;
    // 0x336688: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x336688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x33668c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33668cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x336690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336694: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x336694u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336698: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336698u;
    {
        const bool branch_taken_0x336698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336698u;
        // 0x33669c: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336698) {
            ctx->pc = 0x3366B4u;
            goto label_3366b4;
        }
    }
    ctx->pc = 0x3366A0u;
label_3366a0:
    // 0x3366a0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3366a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3366a4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3366a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3366a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3366A8u;
    {
        const bool branch_taken_0x3366a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3366a8) {
            ctx->pc = 0x3366B4u;
            goto label_3366b4;
        }
    }
    ctx->pc = 0x3366B0u;
    // 0x3366b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3366b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3366b4:
    // 0x3366b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3366b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3366b8:
    // 0x3366b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3366b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3366bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3366bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3366c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3366c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3366c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3366c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3366c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3366C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3366CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366C8u;
        // 0x3366cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3366C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3366D0u;
}
