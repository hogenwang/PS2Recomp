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

// Function: sub_002350C8
// Address: 0x2350c8 - 0x235180
void sub_002350C8_0x2350c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002350C8_0x2350c8");
#endif

    switch (ctx->pc) {
        case 0x2350dcu: goto label_2350dc;
        case 0x2350ecu: goto label_2350ec;
        case 0x2350fcu: goto label_2350fc;
        case 0x235130u: goto label_235130;
        case 0x235150u: goto label_235150;
        default: break;
    }

    ctx->pc = 0x2350c8u;

    // 0x2350c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2350c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2350cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2350ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2350d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2350d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2350d4: 0xc08d360  jal         func_234D80
    ctx->pc = 0x2350D4u;
    SET_GPR_U32(ctx, 31, 0x2350DCu);
    ctx->pc = 0x2350D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350D4u;
    // 0x2350d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234D80u, 0x2350D4u, 0x2350DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2350DCu;
label_2350dc:
    // 0x2350dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2350DCu;
    {
        const bool branch_taken_0x2350dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2350E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350DCu;
        // 0x2350e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350dc) {
            ctx->pc = 0x235108u;
            goto label_235108;
        }
    }
    ctx->pc = 0x2350E4u;
    // 0x2350e4: 0xc08d39c  jal         func_234E70
    ctx->pc = 0x2350E4u;
    SET_GPR_U32(ctx, 31, 0x2350ECu);
    ctx->pc = 0x2350E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350E4u;
    // 0x2350e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234E70u, 0x2350E4u, 0x2350ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2350ECu;
label_2350ec:
    // 0x2350ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2350ECu;
    {
        const bool branch_taken_0x2350ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2350F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350ECu;
        // 0x2350f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350ec) {
            ctx->pc = 0x235108u;
            goto label_235108;
        }
    }
    ctx->pc = 0x2350F4u;
    // 0x2350f4: 0xc08d3d0  jal         func_234F40
    ctx->pc = 0x2350F4u;
    SET_GPR_U32(ctx, 31, 0x2350FCu);
    ctx->pc = 0x2350F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350F4u;
    // 0x2350f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234F40u, 0x2350F4u, 0x2350FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2350FCu;
label_2350fc:
    // 0x2350fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2350FCu;
    {
        const bool branch_taken_0x2350fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2350fc) {
            ctx->pc = 0x235100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2350FCu;
            // 0x235100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235104u;
            goto label_235104;
        }
    }
    ctx->pc = 0x235104u;
label_235104:
    // 0x235104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235108:
    // 0x235108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23510c: 0x3e00008  jr          $ra
    ctx->pc = 0x23510Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23510Cu;
        // 0x235110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23510Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235114u;
    // 0x235114: 0x0  nop
    ctx->pc = 0x235114u;
    // NOP
    // 0x235118: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x235118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x23511c: 0x8c46fcd0  lw          $a2, -0x330($v0)
    ctx->pc = 0x23511cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
    // 0x235120: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x235120u;
    {
        const bool branch_taken_0x235120 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x235124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235120u;
        // 0x235124: 0x3c070023  lui         $a3, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235120) {
            ctx->pc = 0x235178u;
            goto label_235178;
        }
    }
    ctx->pc = 0x235128u;
    // 0x235128: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x23512c: 0x0  nop
    ctx->pc = 0x23512cu;
    // NOP
label_235130:
    // 0x235130: 0x24e243b0  addiu       $v0, $a3, 0x43B0
    ctx->pc = 0x235130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 17328));
    // 0x235134: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x235134u;
    {
        const bool branch_taken_0x235134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x235134) {
            ctx->pc = 0x235138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235134u;
            // 0x235138: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235170u;
            goto label_235170;
        }
    }
    ctx->pc = 0x23513Cu;
    // 0x23513c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x23513cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x235140: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x235140u;
    {
        const bool branch_taken_0x235140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x235140) {
            ctx->pc = 0x235144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235140u;
            // 0x235144: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235170u;
            goto label_235170;
        }
    }
    ctx->pc = 0x235148u;
    // 0x235148: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x235148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23514c: 0x0  nop
    ctx->pc = 0x23514cu;
    // NOP
label_235150:
    // 0x235150: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x235150u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x235154: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235154u;
    {
        const bool branch_taken_0x235154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x235154) {
            ctx->pc = 0x235158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235154u;
            // 0x235158: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235164u;
            goto label_235164;
        }
    }
    ctx->pc = 0x23515Cu;
    // 0x23515c: 0x3e00008  jr          $ra
    ctx->pc = 0x23515Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23515Cu;
        // 0x235160: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23515Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235164u;
label_235164:
    // 0x235164: 0x54a0fffa  bnel        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x235164u;
    {
        const bool branch_taken_0x235164 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x235164) {
            ctx->pc = 0x235168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235164u;
            // 0x235168: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235150;
        }
    }
    ctx->pc = 0x23516Cu;
    // 0x23516c: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x23516cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_235170:
    // 0x235170: 0x54c0ffef  bnel        $a2, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x235170u;
    {
        const bool branch_taken_0x235170 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x235170) {
            ctx->pc = 0x235174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235170u;
            // 0x235174: 0x8cc300c0  lw          $v1, 0xC0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235130;
        }
    }
    ctx->pc = 0x235178u;
label_235178:
    // 0x235178: 0x3e00008  jr          $ra
    ctx->pc = 0x235178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235178u;
        // 0x23517c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235180u;
}
