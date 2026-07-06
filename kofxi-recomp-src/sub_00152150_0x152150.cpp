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

// Function: sub_00152150
// Address: 0x152150 - 0x1521d0
void sub_00152150_0x152150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152150_0x152150");
#endif

    switch (ctx->pc) {
        case 0x152168u: goto label_152168;
        case 0x152174u: goto label_152174;
        default: break;
    }

    ctx->pc = 0x152150u;

    // 0x152150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x152158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15215c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152160: 0xc05085c  jal         func_142170
    ctx->pc = 0x152160u;
    SET_GPR_U32(ctx, 31, 0x152168u);
    ctx->pc = 0x152164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152160u;
    // 0x152164: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142170u, 0x152160u, 0x152168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152168u;
label_152168:
    // 0x152168: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x152168u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15216c: 0xc05087c  jal         func_1421F0
    ctx->pc = 0x15216Cu;
    SET_GPR_U32(ctx, 31, 0x152174u);
    ctx->pc = 0x152170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15216Cu;
    // 0x152170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421F0u, 0x15216Cu, 0x152174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152174u;
label_152174:
    // 0x152174: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x152174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x152178: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x152178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x15217c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x152180: 0x304300f0  andi        $v1, $v0, 0xF0
    ctx->pc = 0x152180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x152184: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x152184u;
    {
        const bool branch_taken_0x152184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x152184) {
            ctx->pc = 0x152188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152184u;
            // 0x152188: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15219Cu;
            goto label_15219c;
        }
    }
    ctx->pc = 0x15218Cu;
    // 0x15218c: 0x92030274  lbu         $v1, 0x274($s0)
    ctx->pc = 0x15218cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x152190: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x152190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x152194: 0xa2030274  sb          $v1, 0x274($s0)
    ctx->pc = 0x152194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 628), (uint8_t)GPR_U32(ctx, 3));
    // 0x152198: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x152198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_15219c:
    // 0x15219c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15219Cu;
    {
        const bool branch_taken_0x15219c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15219c) {
            ctx->pc = 0x1521A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15219Cu;
            // 0x1521a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1521B4u;
            goto label_1521b4;
        }
    }
    ctx->pc = 0x1521A4u;
    // 0x1521a4: 0x92030274  lbu         $v1, 0x274($s0)
    ctx->pc = 0x1521a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x1521a8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1521a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1521ac: 0xa2030274  sb          $v1, 0x274($s0)
    ctx->pc = 0x1521acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 628), (uint8_t)GPR_U32(ctx, 3));
    // 0x1521b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1521b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1521b4:
    // 0x1521b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1521b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1521b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1521b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1521bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1521BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1521C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521BCu;
        // 0x1521c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1521BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1521C4u;
    // 0x1521c4: 0x0  nop
    ctx->pc = 0x1521c4u;
    // NOP
    // 0x1521c8: 0x0  nop
    ctx->pc = 0x1521c8u;
    // NOP
    // 0x1521cc: 0x0  nop
    ctx->pc = 0x1521ccu;
    // NOP
    if (ctx->pc == 0x1521ccu) { ctx->pc = 0x1521d0u; }
}
