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

// Function: sub_002CB100
// Address: 0x2cb100 - 0x2cb240
void sub_002CB100_0x2cb100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB100_0x2cb100");
#endif

    switch (ctx->pc) {
        case 0x2cb140u: goto label_2cb140;
        case 0x2cb17cu: goto label_2cb17c;
        case 0x2cb198u: goto label_2cb198;
        case 0x2cb200u: goto label_2cb200;
        case 0x2cb234u: goto label_2cb234;
        default: break;
    }

    ctx->pc = 0x2cb100u;

    // 0x2cb100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb104: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2cb104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb108: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb10c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cb10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb110: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CB110u;
    {
        const bool branch_taken_0x2cb110 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB110u;
        // 0x2cb114: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb110) {
            ctx->pc = 0x2CB140u;
            goto label_2cb140;
        }
    }
    ctx->pc = 0x2CB118u;
    // 0x2cb118: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x2cb118u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2cb11c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2cb11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cb120: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2cb120u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2cb124: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2cb124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb128: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2cb128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2cb12c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2cb12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2cb130: 0xa3a80011  sb          $t0, 0x11($sp)
    ctx->pc = 0x2cb130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 8));
    // 0x2cb134: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x2cb134u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cb138: 0xc0b2d0a  jal         func_2CB428
    ctx->pc = 0x2CB138u;
    SET_GPR_U32(ctx, 31, 0x2CB140u);
    ctx->pc = 0x2CB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB138u;
    // 0x2cb13c: 0xafa90004  sw          $t1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB428u, 0x2CB138u, 0x2CB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB140u;
label_2cb140:
    // 0x2cb140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb144: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB144u;
        // 0x2cb148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB14Cu;
    // 0x2cb14c: 0x0  nop
    ctx->pc = 0x2cb14cu;
    // NOP
    // 0x2cb150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cb150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cb154: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cb154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb158: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2cb158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2cb15c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2cb15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cb160: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2cb160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2cb164: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb168: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cb168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb16c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cb16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cb170: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2cb170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2cb174: 0xc0b2cd2  jal         func_2CB348
    ctx->pc = 0x2CB174u;
    SET_GPR_U32(ctx, 31, 0x2CB17Cu);
    ctx->pc = 0x2CB178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB174u;
    // 0x2cb178: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB348u, 0x2CB174u, 0x2CB17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB17Cu;
label_2cb17c:
    // 0x2cb17c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CB17Cu;
    {
        const bool branch_taken_0x2cb17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb17c) {
            ctx->pc = 0x2CB180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB17Cu;
            // 0x2cb180: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB1C4u;
            goto label_2cb1c4;
        }
    }
    ctx->pc = 0x2CB184u;
    // 0x2cb184: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2cb184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2cb188: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2cb188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb18c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb190: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cb190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb194: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2cb194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2cb198:
    // 0x2cb198: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2cb198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2cb19c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cb19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cb1a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2cb1a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb1a4: 0x2ca40004  sltiu       $a0, $a1, 0x4
    ctx->pc = 0x2cb1a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cb1a8: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x2cb1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x2cb1ac: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x2cb1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x2cb1b0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CB1B0u;
    {
        const bool branch_taken_0x2cb1b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1B0u;
        // 0x2cb1b4: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1b0) {
            ctx->pc = 0x2CB198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb198;
        }
    }
    ctx->pc = 0x2CB1B8u;
    // 0x2cb1b8: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x2cb1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x2cb1bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cb1bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb1c0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2cb1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb1c4:
    // 0x2cb1c4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2cb1c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cb1c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cb1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1CCu;
        // 0x2cb1d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB1D4u;
    // 0x2cb1d4: 0x0  nop
    ctx->pc = 0x2cb1d4u;
    // NOP
    // 0x2cb1d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb1dc: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2cb1dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb1e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb1e4: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB1E4u;
    {
        const bool branch_taken_0x2cb1e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1E4u;
        // 0x2cb1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1e4) {
            ctx->pc = 0x2CB234u;
            goto label_2cb234;
        }
    }
    ctx->pc = 0x2CB1ECu;
    // 0x2cb1ec: 0x27ac0010  addiu       $t4, $sp, 0x10
    ctx->pc = 0x2cb1ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cb1f0: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2cb1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cb1f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cb1f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb1f8: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x2cb1f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb1fc: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x2cb1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2cb200:
    // 0x2cb200: 0x1482021  addu        $a0, $t2, $t0
    ctx->pc = 0x2cb200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2cb204: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2cb204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2cb208: 0x1271806  srlv        $v1, $a3, $t1
    ctx->pc = 0x2cb208u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x2cb20c: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x2cb20cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x2cb210: 0x2d020004  sltiu       $v0, $t0, 0x4
    ctx->pc = 0x2cb210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cb214: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CB214u;
    {
        const bool branch_taken_0x2cb214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB214u;
        // 0x2cb218: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb214) {
            ctx->pc = 0x2CB200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb200;
        }
    }
    ctx->pc = 0x2CB21Cu;
    // 0x2cb21c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb220: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2cb220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb224: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cb224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb228: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x2cb228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x2cb22c: 0xc0b2d0a  jal         func_2CB428
    ctx->pc = 0x2CB22Cu;
    SET_GPR_U32(ctx, 31, 0x2CB234u);
    ctx->pc = 0x2CB230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB22Cu;
    // 0x2cb230: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB428u, 0x2CB22Cu, 0x2CB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB234u;
label_2cb234:
    // 0x2cb234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb238: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB238u;
        // 0x2cb23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB240u;
}
