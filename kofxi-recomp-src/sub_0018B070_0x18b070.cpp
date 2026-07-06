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

// Function: sub_0018B070
// Address: 0x18b070 - 0x18b0f0
void sub_0018B070_0x18b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B070_0x18b070");
#endif

    switch (ctx->pc) {
        case 0x18b070u: goto label_18b070;
        case 0x18b074u: goto label_18b074;
        case 0x18b078u: goto label_18b078;
        case 0x18b07cu: goto label_18b07c;
        case 0x18b080u: goto label_18b080;
        case 0x18b084u: goto label_18b084;
        case 0x18b088u: goto label_18b088;
        case 0x18b08cu: goto label_18b08c;
        case 0x18b090u: goto label_18b090;
        case 0x18b094u: goto label_18b094;
        case 0x18b098u: goto label_18b098;
        case 0x18b09cu: goto label_18b09c;
        case 0x18b0a0u: goto label_18b0a0;
        case 0x18b0a4u: goto label_18b0a4;
        case 0x18b0a8u: goto label_18b0a8;
        case 0x18b0acu: goto label_18b0ac;
        case 0x18b0b0u: goto label_18b0b0;
        case 0x18b0b4u: goto label_18b0b4;
        case 0x18b0b8u: goto label_18b0b8;
        case 0x18b0bcu: goto label_18b0bc;
        case 0x18b0c0u: goto label_18b0c0;
        case 0x18b0c4u: goto label_18b0c4;
        case 0x18b0c8u: goto label_18b0c8;
        case 0x18b0ccu: goto label_18b0cc;
        case 0x18b0d0u: goto label_18b0d0;
        case 0x18b0d4u: goto label_18b0d4;
        case 0x18b0d8u: goto label_18b0d8;
        case 0x18b0dcu: goto label_18b0dc;
        case 0x18b0e0u: goto label_18b0e0;
        case 0x18b0e4u: goto label_18b0e4;
        case 0x18b0e8u: goto label_18b0e8;
        case 0x18b0ecu: goto label_18b0ec;
        default: break;
    }

    ctx->pc = 0x18b070u;

label_18b070:
    // 0x18b070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18b074:
    // 0x18b074: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18b074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18b078:
    // 0x18b078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18b07c:
    // 0x18b07c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18b080:
    // 0x18b080: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b084:
    // 0x18b084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18b088:
    // 0x18b088: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b08c:
    // 0x18b08c: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18b08cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18b090:
    // 0x18b090: 0x26104080  addiu       $s0, $s0, 0x4080
    ctx->pc = 0x18b090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16512));
label_18b094:
    // 0x18b094: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_18b098:
    // 0x18b098: 0xa051bb60  sb          $s1, -0x44A0($v0)
    ctx->pc = 0x18b098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949728), (uint8_t)GPR_U32(ctx, 17));
label_18b09c:
    // 0x18b09c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b0a0:
    // 0x18b0a0: 0x40f809  jalr        $v0
label_18b0a4:
    if (ctx->pc == 0x18B0A4u) {
        ctx->pc = 0x18B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0A0u;
        // 0x18b0a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B0A8u;
        goto label_18b0a8;
    }
    ctx->pc = 0x18B0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B0A8u);
        ctx->pc = 0x18B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0A0u;
        // 0x18b0a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B0A0u, 0x18B0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B0A8u;
label_18b0a8:
    // 0x18b0a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18b0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18b0ac:
    // 0x18b0ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b0b0:
    // 0x18b0b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18b0b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18b0b4:
    // 0x18b0b4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_18b0b8:
    if (ctx->pc == 0x18B0B8u) {
        ctx->pc = 0x18B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0B4u;
        // 0x18b0b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B0BCu;
        goto label_18b0bc;
    }
    ctx->pc = 0x18B0B4u;
    {
        const bool branch_taken_0x18b0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b0b4) {
            ctx->pc = 0x18B0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B0B4u;
            // 0x18b0b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B0C4u;
            goto label_18b0c4;
        }
    }
    ctx->pc = 0x18B0BCu;
label_18b0bc:
    // 0x18b0bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_18b0c0:
    if (ctx->pc == 0x18B0C0u) {
        ctx->pc = 0x18B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0BCu;
        // 0x18b0c0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B0C4u;
        goto label_18b0c4;
    }
    ctx->pc = 0x18B0BCu;
    {
        const bool branch_taken_0x18b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0BCu;
        // 0x18b0c0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0bc) {
            ctx->pc = 0x18B0D8u;
            goto label_18b0d8;
        }
    }
    ctx->pc = 0x18B0C4u;
label_18b0c4:
    // 0x18b0c4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x18b0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_18b0c8:
    // 0x18b0c8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_18b0cc:
    if (ctx->pc == 0x18B0CCu) {
        ctx->pc = 0x18B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0C8u;
        // 0x18b0cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B0D0u;
        goto label_18b0d0;
    }
    ctx->pc = 0x18B0C8u;
    {
        const bool branch_taken_0x18b0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0C8u;
        // 0x18b0cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0c8) {
            ctx->pc = 0x18B094u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b094;
        }
    }
    ctx->pc = 0x18B0D0u;
label_18b0d0:
    // 0x18b0d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18b0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18b0d4:
    // 0x18b0d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18b0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18b0d8:
    // 0x18b0d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b0dc:
    // 0x18b0dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b0e0:
    // 0x18b0e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b0e4:
    // 0x18b0e4: 0x3e00008  jr          $ra
label_18b0e8:
    if (ctx->pc == 0x18B0E8u) {
        ctx->pc = 0x18B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0E4u;
        // 0x18b0e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B0ECu;
        goto label_18b0ec;
    }
    ctx->pc = 0x18B0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0E4u;
        // 0x18b0e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B0ECu;
label_18b0ec:
    // 0x18b0ec: 0x0  nop
    ctx->pc = 0x18b0ecu;
    // NOP
    if (ctx->pc == 0x18b0ecu) { ctx->pc = 0x18b0f0u; }
}
