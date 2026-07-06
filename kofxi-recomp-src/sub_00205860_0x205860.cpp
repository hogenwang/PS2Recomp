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

// Function: sub_00205860
// Address: 0x205860 - 0x205960
void sub_00205860_0x205860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205860_0x205860");
#endif

    switch (ctx->pc) {
        case 0x2058c0u: goto label_2058c0;
        case 0x2058c8u: goto label_2058c8;
        case 0x205914u: goto label_205914;
        case 0x20591cu: goto label_20591c;
        default: break;
    }

    ctx->pc = 0x205860u;

    // 0x205860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x205864: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x205864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x205868: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x205868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20586c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20586cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x205870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x205874: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x205874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205878: 0x54900003  bnel        $a0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205878u;
    {
        const bool branch_taken_0x205878 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x205878) {
            ctx->pc = 0x20587Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205878u;
            // 0x20587c: 0x2a020021  slti        $v0, $s0, 0x21 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x205888u;
            goto label_205888;
        }
    }
    ctx->pc = 0x205880u;
    // 0x205880: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x205880u;
    {
        const bool branch_taken_0x205880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205880u;
        // 0x205884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205880) {
            ctx->pc = 0x205944u;
            goto label_205944;
        }
    }
    ctx->pc = 0x205888u;
label_205888:
    // 0x205888: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x205888u;
    {
        const bool branch_taken_0x205888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205888) {
            ctx->pc = 0x205940u;
            goto label_205940;
        }
    }
    ctx->pc = 0x205890u;
    // 0x205890: 0x90082a  slt         $at, $a0, $s0
    ctx->pc = 0x205890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x205894: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x205894u;
    {
        const bool branch_taken_0x205894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x205898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205894u;
        // 0x205898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205894) {
            ctx->pc = 0x2058A0u;
            goto label_2058a0;
        }
    }
    ctx->pc = 0x20589Cu;
    // 0x20589c: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x20589cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2058a0:
    // 0x2058a0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2058A0u;
    {
        const bool branch_taken_0x2058a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058a0) {
            ctx->pc = 0x2058A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2058A0u;
            // 0x2058a4: 0x2611ffe0  addiu       $s1, $s0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205900u;
            goto label_205900;
        }
    }
    ctx->pc = 0x2058A8u;
    // 0x2058a8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2058a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2058ac: 0x2612ffe0  addiu       $s2, $s0, -0x20
    ctx->pc = 0x2058acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x2058b0: 0x244298d0  addiu       $v0, $v0, -0x6730
    ctx->pc = 0x2058b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940880));
    // 0x2058b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2058b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2058b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2058B8u;
    {
        const bool branch_taken_0x2058b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058B8u;
        // 0x2058bc: 0x528821  addu        $s1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058b8) {
            ctx->pc = 0x2058E0u;
            goto label_2058e0;
        }
    }
    ctx->pc = 0x2058C0u;
label_2058c0:
    // 0x2058c0: 0xc081dbc  jal         func_2076F0
    ctx->pc = 0x2058C0u;
    SET_GPR_U32(ctx, 31, 0x2058C8u);
    ctx->pc = 0x2058C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2058C0u;
    // 0x2058c4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076F0u, 0x2058C0u, 0x2058C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058C8u;
label_2058c8:
    // 0x2058c8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2058C8u;
    {
        const bool branch_taken_0x2058c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058c8) {
            ctx->pc = 0x2058CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2058C8u;
            // 0x2058cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058D8u;
            goto label_2058d8;
        }
    }
    ctx->pc = 0x2058D0u;
    // 0x2058d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2058D0u;
    {
        const bool branch_taken_0x2058d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058D0u;
        // 0x2058d4: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058d0) {
            ctx->pc = 0x205940u;
            goto label_205940;
        }
    }
    ctx->pc = 0x2058D8u;
label_2058d8:
    // 0x2058d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2058d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2058dc: 0x0  nop
    ctx->pc = 0x2058dcu;
    // NOP
label_2058e0:
    // 0x2058e0: 0x2a41000f  slti        $at, $s2, 0xF
    ctx->pc = 0x2058e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2058e4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2058E4u;
    {
        const bool branch_taken_0x2058e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058e4) {
            ctx->pc = 0x205940u;
            goto label_205940;
        }
    }
    ctx->pc = 0x2058ECu;
    // 0x2058ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2058ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2058f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2058F0u;
    {
        const bool branch_taken_0x2058f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2058f0) {
            ctx->pc = 0x2058C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2058F8u;
    // 0x2058f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2058F8u;
    {
        const bool branch_taken_0x2058f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058f8) {
            ctx->pc = 0x205940u;
            goto label_205940;
        }
    }
    ctx->pc = 0x205900u;
label_205900:
    // 0x205900: 0x620000f  bltz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x205900u;
    {
        const bool branch_taken_0x205900 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x205904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205900u;
        // 0x205904: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205900) {
            ctx->pc = 0x205940u;
            goto label_205940;
        }
    }
    ctx->pc = 0x205908u;
    // 0x205908: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x205908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x20590c: 0x244298d0  addiu       $v0, $v0, -0x6730
    ctx->pc = 0x20590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940880));
    // 0x205910: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x205910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_205914:
    // 0x205914: 0xc081dbc  jal         func_2076F0
    ctx->pc = 0x205914u;
    SET_GPR_U32(ctx, 31, 0x20591Cu);
    ctx->pc = 0x205918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205914u;
    // 0x205918: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076F0u, 0x205914u, 0x20591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20591Cu;
label_20591c:
    // 0x20591c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20591cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x205920: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x205920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x205924: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x205924u;
    {
        const bool branch_taken_0x205924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205924) {
            ctx->pc = 0x205928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205924u;
            // 0x205928: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205934u;
            goto label_205934;
        }
    }
    ctx->pc = 0x20592Cu;
    // 0x20592c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20592Cu;
    {
        const bool branch_taken_0x20592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20592Cu;
        // 0x205930: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20592c) {
            ctx->pc = 0x205940u;
            goto label_205940;
        }
    }
    ctx->pc = 0x205934u;
label_205934:
    // 0x205934: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x205934u;
    {
        const bool branch_taken_0x205934 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x205938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205934u;
        // 0x205938: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205934) {
            ctx->pc = 0x205914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205914;
        }
    }
    ctx->pc = 0x20593Cu;
    // 0x20593c: 0x0  nop
    ctx->pc = 0x20593cu;
    // NOP
label_205940:
    // 0x205940: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x205940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205944:
    // 0x205944: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x205944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x205948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20594c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20594cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205954: 0x3e00008  jr          $ra
    ctx->pc = 0x205954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205954u;
        // 0x205958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20595Cu;
    // 0x20595c: 0x0  nop
    ctx->pc = 0x20595cu;
    // NOP
}
