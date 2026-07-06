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

// Function: sub_00180640
// Address: 0x180640 - 0x1806c0
void sub_00180640_0x180640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180640_0x180640");
#endif

    switch (ctx->pc) {
        case 0x18067cu: goto label_18067c;
        case 0x1806a0u: goto label_1806a0;
        default: break;
    }

    ctx->pc = 0x180640u;

    // 0x180640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180644: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x180644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x180648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18064c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180658: 0x90a6000c  lbu         $a2, 0xC($a1)
    ctx->pc = 0x180658u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x18065c: 0x28c3001b  slti        $v1, $a2, 0x1B
    ctx->pc = 0x18065cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x180660: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x180660u;
    {
        const bool branch_taken_0x180660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180660u;
        // 0x180664: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180660) {
            ctx->pc = 0x180684u;
            goto label_180684;
        }
    }
    ctx->pc = 0x180668u;
    // 0x180668: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x180668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18066c: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18066Cu;
    {
        const bool branch_taken_0x18066c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18066c) {
            ctx->pc = 0x180670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18066Cu;
            // 0x180670: 0x8e230530  lw          $v1, 0x530($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180688u;
            goto label_180688;
        }
    }
    ctx->pc = 0x180674u;
    // 0x180674: 0xc060064  jal         func_180190
    ctx->pc = 0x180674u;
    SET_GPR_U32(ctx, 31, 0x18067Cu);
    ctx->pc = 0x180190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180190u, 0x180674u, 0x18067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18067Cu;
label_18067c:
    // 0x18067c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18067cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x180680: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x180680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_180684:
    // 0x180684: 0x8e230530  lw          $v1, 0x530($s1)
    ctx->pc = 0x180684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
label_180688:
    // 0x180688: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x180688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x18068c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18068Cu;
    {
        const bool branch_taken_0x18068c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18068c) {
            ctx->pc = 0x180690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18068Cu;
            // 0x180690: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1806ACu;
            goto label_1806ac;
        }
    }
    ctx->pc = 0x180694u;
    // 0x180694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180698: 0xc0600a8  jal         func_1802A0
    ctx->pc = 0x180698u;
    SET_GPR_U32(ctx, 31, 0x1806A0u);
    ctx->pc = 0x18069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180698u;
    // 0x18069c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1802A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1802A0u, 0x180698u, 0x1806A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1806A0u;
label_1806a0:
    // 0x1806a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1806a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1806a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1806a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1806a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1806a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1806ac:
    // 0x1806ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1806acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1806b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1806b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1806b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1806B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806B4u;
        // 0x1806b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1806B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1806BCu;
    // 0x1806bc: 0x0  nop
    ctx->pc = 0x1806bcu;
    // NOP
}
