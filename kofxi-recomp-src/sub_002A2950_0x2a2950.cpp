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

// Function: sub_002A2950
// Address: 0x2a2950 - 0x2a2b78
void sub_002A2950_0x2a2950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2950_0x2a2950");
#endif

    switch (ctx->pc) {
        case 0x2a295cu: goto label_2a295c;
        case 0x2a29e0u: goto label_2a29e0;
        case 0x2a29f8u: goto label_2a29f8;
        case 0x2a2a08u: goto label_2a2a08;
        case 0x2a2a10u: goto label_2a2a10;
        case 0x2a2a24u: goto label_2a2a24;
        case 0x2a2a54u: goto label_2a2a54;
        case 0x2a2a64u: goto label_2a2a64;
        case 0x2a2a80u: goto label_2a2a80;
        case 0x2a2a94u: goto label_2a2a94;
        case 0x2a2ab0u: goto label_2a2ab0;
        case 0x2a2b08u: goto label_2a2b08;
        case 0x2a2b20u: goto label_2a2b20;
        case 0x2a2b28u: goto label_2a2b28;
        case 0x2a2b30u: goto label_2a2b30;
        case 0x2a2b48u: goto label_2a2b48;
        default: break;
    }

    ctx->pc = 0x2a2950u;

label_2a2950:
    // 0x2a2950: 0x4830004  bgezl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2950u;
    {
        const bool branch_taken_0x2a2950 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2a2950) {
            ctx->pc = 0x2A2954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2950u;
            // 0x2a2954: 0x2882001b  slti        $v0, $a0, 0x1B (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)27) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2964u;
            goto label_2a2964;
        }
    }
    ctx->pc = 0x2A2958u;
    // 0x2a2958: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a2958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2a295c:
    // 0x2a295c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A295Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A295Cu;
        // 0x2a2960: 0x2442c880  addiu       $v0, $v0, -0x3780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A295Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2964u;
label_2a2964:
    // 0x2a2964: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2964u;
    {
        const bool branch_taken_0x2a2964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2964) {
            ctx->pc = 0x2A2968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2964u;
            // 0x2a2968: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2984u;
            goto label_2a2984;
        }
    }
    ctx->pc = 0x2A296Cu;
    // 0x2a296c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a2970: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2a2970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a2974: 0x24426998  addiu       $v0, $v0, 0x6998
    ctx->pc = 0x2a2974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
    // 0x2a2978: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a2978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a297c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A297Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A297Cu;
        // 0x2a2980: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A297Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2984u;
label_2a2984:
    // 0x2a2984: 0x8c456a04  lw          $a1, 0x6A04($v0)
    ctx->pc = 0x2a2984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27140)));
    // 0x2a2988: 0x10a0fff4  beqz        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A2988u;
    {
        const bool branch_taken_0x2a2988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2988u;
        // 0x2a298c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2988) {
            ctx->pc = 0x2A295Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a295c;
        }
    }
    ctx->pc = 0x2A2990u;
    // 0x2a2990: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a2994: 0x2482ffe5  addiu       $v0, $a0, -0x1B
    ctx->pc = 0x2a2994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967269));
    // 0x2a2998: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a2998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a299c: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2A299Cu;
    {
        const bool branch_taken_0x2a299c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a299c) {
            ctx->pc = 0x2A29A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A299Cu;
            // 0x2a29a0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A295Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a295c;
        }
    }
    ctx->pc = 0x2A29A4u;
    // 0x2a29a4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2a29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a29a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a29ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a29acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a29b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A29B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29B0u;
        // 0x2a29b4: 0x8c42ff94  lw          $v0, -0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967188)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A29B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A29B8u;
    // 0x2a29b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a29b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a29bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a29bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a29c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a29c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a29c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a29c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a29c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a29cc: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x2a29ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x2a29d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a29d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a29d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a29d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a29d8: 0xc0a8ade  jal         func_2A2B78
    ctx->pc = 0x2A29D8u;
    SET_GPR_U32(ctx, 31, 0x2A29E0u);
    ctx->pc = 0x2A29DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29D8u;
    // 0x2a29dc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2B78u, 0x2A29D8u, 0x2A29E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29E0u;
label_2a29e0:
    // 0x2a29e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a29e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29e4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2a29e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a29e8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2a29e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a29ec: 0x2686c888  addiu       $a2, $s4, -0x3778
    ctx->pc = 0x2a29ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953096));
    // 0x2a29f0: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2A29F0u;
    SET_GPR_U32(ctx, 31, 0x2A29F8u);
    ctx->pc = 0x2A29F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29F0u;
    // 0x2a29f4: 0x24070074  addiu       $a3, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2A29F0u, 0x2A29F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29F8u;
label_2a29f8:
    // 0x2a29f8: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A29F8u;
    {
        const bool branch_taken_0x2a29f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29F8u;
        // 0x2a29fc: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29f8) {
            ctx->pc = 0x2A2A40u;
            goto label_2a2a40;
        }
    }
    ctx->pc = 0x2A2A00u;
    // 0x2a2a00: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2A2A00u;
    {
        const bool branch_taken_0x2a2a00 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2A2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A00u;
        // 0x2a2a04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a00) {
            ctx->pc = 0x2A2A3Cu;
            goto label_2a2a3c;
        }
    }
    ctx->pc = 0x2A2A08u;
label_2a2a08:
    // 0x2a2a08: 0xc0a8a54  jal         func_2A2950
    ctx->pc = 0x2A2A08u;
    SET_GPR_U32(ctx, 31, 0x2A2A10u);
    ctx->pc = 0x2A2A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A08u;
    // 0x2a2a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2950u;
    goto label_2a2950;
    ctx->pc = 0x2A2A10u;
label_2a2a10:
    // 0x2a2a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a14: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2A14u;
    {
        const bool branch_taken_0x2a2a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A14u;
        // 0x2a2a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a14) {
            ctx->pc = 0x2A2A2Cu;
            goto label_2a2a2c;
        }
    }
    ctx->pc = 0x2A2A1Cu;
    // 0x2a2a1c: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x2A2A1Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A24u);
    ctx->pc = 0x2A2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A1Cu;
    // 0x2a2a20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x2A2A1Cu, 0x2A2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A24u;
label_2a2a24:
    // 0x2a2a24: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A2A24u;
    {
        const bool branch_taken_0x2a2a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A24u;
        // 0x2a2a28: 0x2686c888  addiu       $a2, $s4, -0x3778 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a24) {
            ctx->pc = 0x2A2AA0u;
            goto label_2a2aa0;
        }
    }
    ctx->pc = 0x2A2A2Cu;
label_2a2a2c:
    // 0x2a2a2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a2a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a2a30: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2a2a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a2a34: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A2A34u;
    {
        const bool branch_taken_0x2a2a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a34) {
            ctx->pc = 0x2A2A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2a08;
        }
    }
    ctx->pc = 0x2A2A3Cu;
label_2a2a3c:
    // 0x2a2a3c: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2a2a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
label_2a2a40:
    // 0x2a2a40: 0x8e226a04  lw          $v0, 0x6A04($s1)
    ctx->pc = 0x2a2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27140)));
    // 0x2a2a44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2A44u;
    {
        const bool branch_taken_0x2a2a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a44) {
            ctx->pc = 0x2A2A5Cu;
            goto label_2a2a5c;
        }
    }
    ctx->pc = 0x2A2A4Cu;
    // 0x2a2a4c: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2A2A4Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A54u);
    ctx->pc = 0x2A2A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A4Cu;
    // 0x2a2a50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2A2A4Cu, 0x2A2A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A54u;
label_2a2a54:
    // 0x2a2a54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2A54u;
    {
        const bool branch_taken_0x2a2a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a54) {
            ctx->pc = 0x2A2A70u;
            goto label_2a2a70;
        }
    }
    ctx->pc = 0x2A2A5Cu;
label_2a2a5c:
    // 0x2a2a5c: 0xc0a3358  jal         func_28CD60
    ctx->pc = 0x2A2A5Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A64u);
    ctx->pc = 0x2A2A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A5Cu;
    // 0x2a2a60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CD60u, 0x2A2A5Cu, 0x2A2A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A64u;
label_2a2a64:
    // 0x2a2a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a68: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2A68u;
    {
        const bool branch_taken_0x2a2a68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A68u;
        // 0x2a2a6c: 0x8e246a04  lw          $a0, 0x6A04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a68) {
            ctx->pc = 0x2A2A78u;
            goto label_2a2a78;
        }
    }
    ctx->pc = 0x2A2A70u;
label_2a2a70:
    // 0x2a2a70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A2A70u;
    {
        const bool branch_taken_0x2a2a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A70u;
        // 0x2a2a74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a70) {
            ctx->pc = 0x2A2A9Cu;
            goto label_2a2a9c;
        }
    }
    ctx->pc = 0x2A2A78u;
label_2a2a78:
    // 0x2a2a78: 0xc0af10e  jal         func_2BC438
    ctx->pc = 0x2A2A78u;
    SET_GPR_U32(ctx, 31, 0x2A2A80u);
    ctx->pc = 0x2A2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A78u;
    // 0x2a2a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x2A2A78u, 0x2A2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A80u;
label_2a2a80:
    // 0x2a2a80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a84: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2A84u;
    {
        const bool branch_taken_0x2a2a84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a84) {
            ctx->pc = 0x2A2A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2A84u;
            // 0x2a2a88: 0x2631001a  addiu       $s1, $s1, 0x1A (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2A9Cu;
            goto label_2a2a9c;
        }
    }
    ctx->pc = 0x2A2A8Cu;
    // 0x2a2a8c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A2A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A94u);
    ctx->pc = 0x2A2A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A8Cu;
    // 0x2a2a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A2A8Cu, 0x2A2A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A94u;
label_2a2a94:
    // 0x2a2a94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2A94u;
    {
        const bool branch_taken_0x2a2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A94u;
        // 0x2a2a98: 0x2686c888  addiu       $a2, $s4, -0x3778 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a94) {
            ctx->pc = 0x2A2AA0u;
            goto label_2a2aa0;
        }
    }
    ctx->pc = 0x2A2A9Cu;
label_2a2a9c:
    // 0x2a2a9c: 0x2686c888  addiu       $a2, $s4, -0x3778
    ctx->pc = 0x2a2a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953096));
label_2a2aa0:
    // 0x2a2aa0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a2aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a2aa4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2a2aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a2aa8: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2A2AA8u;
    SET_GPR_U32(ctx, 31, 0x2A2AB0u);
    ctx->pc = 0x2A2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2AA8u;
    // 0x2a2aac: 0x240700a5  addiu       $a3, $zero, 0xA5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2A2AA8u, 0x2A2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AB0u;
label_2a2ab0:
    // 0x2a2ab0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a2ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ab4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a2ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a2ab8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a2ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2abc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a2abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2ac0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a2ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2ac4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2acc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2ACCu;
        // 0x2a2ad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2AD4u;
    // 0x2a2ad4: 0x0  nop
    ctx->pc = 0x2a2ad4u;
    // NOP
    // 0x2a2ad8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a2ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a2adc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2a2adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a2ae0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a2ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a2ae4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2a2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a2ae8: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2a2ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2a2aec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a2af0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a2af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a2af4: 0x2646c888  addiu       $a2, $s2, -0x3778
    ctx->pc = 0x2a2af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953096));
    // 0x2a2af8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2afc: 0x240700ae  addiu       $a3, $zero, 0xAE
    ctx->pc = 0x2a2afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x2a2b00: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2A2B00u;
    SET_GPR_U32(ctx, 31, 0x2A2B08u);
    ctx->pc = 0x2A2B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B00u;
    // 0x2a2b04: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2A2B00u, 0x2A2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B08u;
label_2a2b08:
    // 0x2a2b08: 0x8e226a04  lw          $v0, 0x6A04($s1)
    ctx->pc = 0x2a2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27140)));
    // 0x2a2b0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A2B0Cu;
    {
        const bool branch_taken_0x2a2b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B0Cu;
        // 0x2a2b10: 0x2646c888  addiu       $a2, $s2, -0x3778 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b0c) {
            ctx->pc = 0x2A2B50u;
            goto label_2a2b50;
        }
    }
    ctx->pc = 0x2A2B14u;
    // 0x2a2b14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2b18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2B18u;
    {
        const bool branch_taken_0x2a2b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B18u;
        // 0x2a2b1c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b18) {
            ctx->pc = 0x2A2B40u;
            goto label_2a2b40;
        }
    }
    ctx->pc = 0x2A2B20u;
label_2a2b20:
    // 0x2a2b20: 0xc0af12a  jal         func_2BC4A8
    ctx->pc = 0x2A2B20u;
    SET_GPR_U32(ctx, 31, 0x2A2B28u);
    ctx->pc = 0x2A2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B20u;
    // 0x2a2b24: 0x8e046a04  lw          $a0, 0x6A04($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4A8u, 0x2A2B20u, 0x2A2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B28u;
label_2a2b28:
    // 0x2a2b28: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A2B28u;
    SET_GPR_U32(ctx, 31, 0x2A2B30u);
    ctx->pc = 0x2A2B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B28u;
    // 0x2a2b2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A2B28u, 0x2A2B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B30u;
label_2a2b30:
    // 0x2a2b30: 0x8e026a04  lw          $v0, 0x6A04($s0)
    ctx->pc = 0x2a2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27140)));
    // 0x2a2b34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2b38: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A2B38u;
    {
        const bool branch_taken_0x2a2b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2b38) {
            ctx->pc = 0x2A2B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2b20;
        }
    }
    ctx->pc = 0x2A2B40u;
label_2a2b40:
    // 0x2a2b40: 0xc0af176  jal         func_2BC5D8
    ctx->pc = 0x2A2B40u;
    SET_GPR_U32(ctx, 31, 0x2A2B48u);
    ctx->pc = 0x2A2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B40u;
    // 0x2a2b44: 0x8e246a04  lw          $a0, 0x6A04($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2A2B40u, 0x2A2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B48u;
label_2a2b48:
    // 0x2a2b48: 0xae206a04  sw          $zero, 0x6A04($s1)
    ctx->pc = 0x2a2b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27140), GPR_U32(ctx, 0));
    // 0x2a2b4c: 0x2646c888  addiu       $a2, $s2, -0x3778
    ctx->pc = 0x2a2b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953096));
label_2a2b50:
    // 0x2a2b50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a2b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2b54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a2b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2b58: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a2b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a2b5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2b60: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2a2b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a2b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2b68: 0x240700bc  addiu       $a3, $zero, 0xBC
    ctx->pc = 0x2a2b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x2a2b6c: 0x80a8b3a  j           func_2A2CE8
    ctx->pc = 0x2A2B6Cu;
    ctx->pc = 0x2A2B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B6Cu;
    // 0x2a2b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A2B74u;
    // 0x2a2b74: 0x0  nop
    ctx->pc = 0x2a2b74u;
    // NOP
    if (ctx->pc == 0x2a2b74u) { ctx->pc = 0x2a2b78u; }
}
