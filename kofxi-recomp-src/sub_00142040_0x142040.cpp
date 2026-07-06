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

// Function: sub_00142040
// Address: 0x142040 - 0x1420d0
void sub_00142040_0x142040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142040_0x142040");
#endif

    switch (ctx->pc) {
        case 0x142058u: goto label_142058;
        case 0x142064u: goto label_142064;
        case 0x142074u: goto label_142074;
        default: break;
    }

    ctx->pc = 0x142040u;

    // 0x142040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x142044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x142044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x142048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14204c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142050: 0xc05085c  jal         func_142170
    ctx->pc = 0x142050u;
    SET_GPR_U32(ctx, 31, 0x142058u);
    ctx->pc = 0x142054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142050u;
    // 0x142054: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142170u, 0x142050u, 0x142058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142058u;
label_142058:
    // 0x142058: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x142058u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14205c: 0xc05087c  jal         func_1421F0
    ctx->pc = 0x14205Cu;
    SET_GPR_U32(ctx, 31, 0x142064u);
    ctx->pc = 0x142060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14205Cu;
    // 0x142060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421F0u, 0x14205Cu, 0x142064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142064u;
label_142064:
    // 0x142064: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x142068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14206c: 0xc050834  jal         func_1420D0
    ctx->pc = 0x14206Cu;
    SET_GPR_U32(ctx, 31, 0x142074u);
    ctx->pc = 0x142070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14206Cu;
    // 0x142070: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1420D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1420D0u, 0x14206Cu, 0x142074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142074u;
label_142074:
    // 0x142074: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x142078: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x142078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x14207c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14207cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x142080: 0x304300f0  andi        $v1, $v0, 0xF0
    ctx->pc = 0x142080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x142084: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x142084u;
    {
        const bool branch_taken_0x142084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142084) {
            ctx->pc = 0x142088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142084u;
            // 0x142088: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14209Cu;
            goto label_14209c;
        }
    }
    ctx->pc = 0x14208Cu;
    // 0x14208c: 0x92030438  lbu         $v1, 0x438($s0)
    ctx->pc = 0x14208cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1080)));
    // 0x142090: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x142090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x142094: 0xa2030438  sb          $v1, 0x438($s0)
    ctx->pc = 0x142094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1080), (uint8_t)GPR_U32(ctx, 3));
    // 0x142098: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x142098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_14209c:
    // 0x14209c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14209Cu;
    {
        const bool branch_taken_0x14209c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14209c) {
            ctx->pc = 0x1420A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14209Cu;
            // 0x1420a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1420B4u;
            goto label_1420b4;
        }
    }
    ctx->pc = 0x1420A4u;
    // 0x1420a4: 0x92030438  lbu         $v1, 0x438($s0)
    ctx->pc = 0x1420a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1080)));
    // 0x1420a8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1420a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1420ac: 0xa2030438  sb          $v1, 0x438($s0)
    ctx->pc = 0x1420acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1080), (uint8_t)GPR_U32(ctx, 3));
    // 0x1420b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1420b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1420b4:
    // 0x1420b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1420b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1420b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1420b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1420bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1420BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1420C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420BCu;
        // 0x1420c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1420BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1420C4u;
    // 0x1420c4: 0x0  nop
    ctx->pc = 0x1420c4u;
    // NOP
    // 0x1420c8: 0x0  nop
    ctx->pc = 0x1420c8u;
    // NOP
    // 0x1420cc: 0x0  nop
    ctx->pc = 0x1420ccu;
    // NOP
}
