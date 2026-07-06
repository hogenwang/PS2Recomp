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

// Function: sub_002A19F0
// Address: 0x2a19f0 - 0x2a1dc8
void sub_002A19F0_0x2a19f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A19F0_0x2a19f0");
#endif

    switch (ctx->pc) {
        case 0x2a1a38u: goto label_2a1a38;
        case 0x2a1a78u: goto label_2a1a78;
        case 0x2a1ae4u: goto label_2a1ae4;
        case 0x2a1b18u: goto label_2a1b18;
        case 0x2a1b74u: goto label_2a1b74;
        case 0x2a1b80u: goto label_2a1b80;
        case 0x2a1b9cu: goto label_2a1b9c;
        case 0x2a1bc8u: goto label_2a1bc8;
        case 0x2a1c10u: goto label_2a1c10;
        case 0x2a1c60u: goto label_2a1c60;
        case 0x2a1ca0u: goto label_2a1ca0;
        case 0x2a1cd0u: goto label_2a1cd0;
        case 0x2a1d90u: goto label_2a1d90;
        default: break;
    }

    ctx->pc = 0x2a19f0u;

label_2a19f0:
    // 0x2a19f0: 0xe8402a  slt         $t0, $a3, $t0
    ctx->pc = 0x2a19f0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2a19f4: 0x11000029  beqz        $t0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2A19F4u;
    {
        const bool branch_taken_0x2a19f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19F4u;
        // 0x2a19f8: 0x28e2000a  slti        $v0, $a3, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19f4) {
            ctx->pc = 0x2A1A9Cu;
            goto label_2a1a9c;
        }
    }
    ctx->pc = 0x2A19FCu;
    // 0x2a19fc: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A19FCu;
    {
        const bool branch_taken_0x2a19fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19FCu;
        // 0x2a1a00: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19fc) {
            ctx->pc = 0x2A1A9Cu;
            goto label_2a1a9c;
        }
    }
    ctx->pc = 0x2A1A04u;
    // 0x2a1a04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1a08: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2a1a08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a1a0c: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A1A0Cu;
    {
        const bool branch_taken_0x2a1a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A0Cu;
        // 0x2a1a10: 0x1075021  addu        $t2, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a0c) {
            ctx->pc = 0x2A1A9Cu;
            goto label_2a1a9c;
        }
    }
    ctx->pc = 0x2A1A14u;
    // 0x2a1a14: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a1a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1a18: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x2a1a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a1a1c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1A1Cu;
    {
        const bool branch_taken_0x2a1a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A1Cu;
        // 0x2a1a20: 0x29220009  slti        $v0, $t1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a1c) {
            ctx->pc = 0x2A1A54u;
            goto label_2a1a54;
        }
    }
    ctx->pc = 0x2A1A24u;
    // 0x2a1a24: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x2a1a24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x2a1a28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A1A28u;
    {
        const bool branch_taken_0x2a1a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A28u;
        // 0x2a1a2c: 0x29220009  slti        $v0, $t1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a28) {
            ctx->pc = 0x2A1A54u;
            goto label_2a1a54;
        }
    }
    ctx->pc = 0x2A1A30u;
    // 0x2a1a30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a1a30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a1a34: 0x0  nop
    ctx->pc = 0x2a1a34u;
    // NOP
label_2a1a38:
    // 0x2a1a38: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x2a1a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a1a3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1A3Cu;
    {
        const bool branch_taken_0x2a1a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A3Cu;
        // 0x2a1a40: 0xc91021  addu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a3c) {
            ctx->pc = 0x2A1A50u;
            goto label_2a1a50;
        }
    }
    ctx->pc = 0x2A1A44u;
    // 0x2a1a44: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a1a44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1a48: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A1A48u;
    {
        const bool branch_taken_0x2a1a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a48) {
            ctx->pc = 0x2A1A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A48u;
            // 0x2a1a4c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1a38;
        }
    }
    ctx->pc = 0x2A1A50u;
label_2a1a50:
    // 0x2a1a50: 0x29220009  slti        $v0, $t1, 0x9
    ctx->pc = 0x2a1a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
label_2a1a54:
    // 0x2a1a54: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A1A54u;
    {
        const bool branch_taken_0x2a1a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a54) {
            ctx->pc = 0x2A1A9Cu;
            goto label_2a1a9c;
        }
    }
    ctx->pc = 0x2A1A5Cu;
    // 0x2a1a5c: 0x1127000f  beq         $t1, $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2A1A5Cu;
    {
        const bool branch_taken_0x2a1a5c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x2A1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A5Cu;
        // 0x2a1a60: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a5c) {
            ctx->pc = 0x2A1A9Cu;
            goto label_2a1a9c;
        }
    }
    ctx->pc = 0x2A1A64u;
    // 0x2a1a64: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x2a1a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a1a68: 0x1481823  subu        $v1, $t2, $t0
    ctx->pc = 0x2a1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2a1a6c: 0x110a0009  beq         $t0, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1A6Cu;
    {
        const bool branch_taken_0x2a1a6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x2A1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A6Cu;
        // 0x2a1a70: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a6c) {
            ctx->pc = 0x2A1A94u;
            goto label_2a1a94;
        }
    }
    ctx->pc = 0x2A1A74u;
    // 0x2a1a74: 0x0  nop
    ctx->pc = 0x2a1a74u;
    // NOP
label_2a1a78:
    // 0x2a1a78: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2a1a78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a1a7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a1a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a1a80: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a1a80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a1a84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a1a88: 0x0  nop
    ctx->pc = 0x2a1a88u;
    // NOP
    // 0x2a1a8c: 0x150afffa  bne         $t0, $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1A8Cu;
    {
        const bool branch_taken_0x2a1a8c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        if (branch_taken_0x2a1a8c) {
            ctx->pc = 0x2A1A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1a78;
        }
    }
    ctx->pc = 0x2A1A94u;
label_2a1a94:
    // 0x2a1a94: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A94u;
        // 0x2a1a98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1A9Cu;
label_2a1a9c:
    // 0x2a1a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A9Cu;
        // 0x2a1aa0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1AA4u;
    // 0x2a1aa4: 0x0  nop
    ctx->pc = 0x2a1aa4u;
    // NOP
    // 0x2a1aa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a1aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a1aac: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2a1aacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ab0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a1ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a1ab4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a1ab4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ab8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a1ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a1abc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a1abcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ac0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a1ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a1ac4: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x2a1ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2a1ac8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a1ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a1acc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a1accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a1ad0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1AD0u;
    {
        const bool branch_taken_0x2a1ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AD0u;
        // 0x2a1ad4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ad0) {
            ctx->pc = 0x2A1AECu;
            goto label_2a1aec;
        }
    }
    ctx->pc = 0x2A1AD8u;
    // 0x2a1ad8: 0x2409f7ff  addiu       $t1, $zero, -0x801
    ctx->pc = 0x2a1ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2a1adc: 0xc0a8636  jal         func_2A18D8
    ctx->pc = 0x2A1ADCu;
    SET_GPR_U32(ctx, 31, 0x2A1AE4u);
    ctx->pc = 0x2A1AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1ADCu;
    // 0x2a1ae0: 0x694824  and         $t1, $v1, $t1 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A18D8u, 0x2A1ADCu, 0x2A1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AE4u;
label_2a1ae4:
    // 0x2a1ae4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2A1AE4u;
    {
        const bool branch_taken_0x2a1ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AE4u;
        // 0x2a1ae8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ae4) {
            ctx->pc = 0x2A1BD4u;
            goto label_2a1bd4;
        }
    }
    ctx->pc = 0x2A1AECu;
label_2a1aec:
    // 0x2a1aec: 0x12800038  beqz        $s4, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A1AECu;
    {
        const bool branch_taken_0x2a1aec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AECu;
        // 0x2a1af0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1aec) {
            ctx->pc = 0x2A1BD0u;
            goto label_2a1bd0;
        }
    }
    ctx->pc = 0x2A1AF4u;
    // 0x2a1af4: 0x2502000b  addiu       $v0, $t0, 0xB
    ctx->pc = 0x2a1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 11));
    // 0x2a1af8: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x2a1af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a1afc: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2A1AFCu;
    {
        const bool branch_taken_0x2a1afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AFCu;
        // 0x2a1b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1afc) {
            ctx->pc = 0x2A1BD0u;
            goto label_2a1bd0;
        }
    }
    ctx->pc = 0x2A1B04u;
    // 0x2a1b04: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x2a1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2a1b08: 0x2510ffff  addiu       $s0, $t0, -0x1
    ctx->pc = 0x2a1b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2a1b0c: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A1B0Cu;
    {
        const bool branch_taken_0x2a1b0c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2A1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B0Cu;
        // 0x2a1b10: 0x488823  subu        $s1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b0c) {
            ctx->pc = 0x2A1B3Cu;
            goto label_2a1b3c;
        }
    }
    ctx->pc = 0x2A1B14u;
    // 0x2a1b14: 0x25060003  addiu       $a2, $t0, 0x3
    ctx->pc = 0x2a1b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2a1b18:
    // 0x2a1b18: 0xf01021  addu        $v0, $a3, $s0
    ctx->pc = 0x2a1b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2a1b1c: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x2a1b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a1b20: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a1b20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1b24: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a1b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a1b28: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2a1b28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1b2c: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1B2Cu;
    {
        const bool branch_taken_0x2a1b2c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2a1b2c) {
            ctx->pc = 0x2A1B18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1b18;
        }
    }
    ctx->pc = 0x2A1B34u;
    // 0x2a1b34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1B34u;
    {
        const bool branch_taken_0x2a1b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B34u;
        // 0x2a1b38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b34) {
            ctx->pc = 0x2A1B44u;
            goto label_2a1b44;
        }
    }
    ctx->pc = 0x2A1B3Cu;
label_2a1b3c:
    // 0x2a1b3c: 0x25060003  addiu       $a2, $t0, 0x3
    ctx->pc = 0x2a1b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x2a1b40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a1b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a1b44:
    // 0x2a1b44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a1b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1b48: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2a1b48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1b4c: 0x1461023  subu        $v0, $t2, $a2
    ctx->pc = 0x2a1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2a1b50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a1b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a1b54: 0x2452fff8  addiu       $s2, $v0, -0x8
    ctx->pc = 0x2a1b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2a1b58: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2a1b58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1b5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a1b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a1b64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a1b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b6c: 0xc0a8d02  jal         func_2A3408
    ctx->pc = 0x2A1B6Cu;
    SET_GPR_U32(ctx, 31, 0x2A1B74u);
    ctx->pc = 0x2A1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B6Cu;
    // 0x2a1b70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x2A1B6Cu, 0x2A1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B74u;
label_2a1b74:
    // 0x2a1b74: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2A1B74u;
    {
        const bool branch_taken_0x2a1b74 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2A1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B74u;
        // 0x2a1b78: 0x2329821  addu        $s3, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b74) {
            ctx->pc = 0x2A1BB4u;
            goto label_2a1bb4;
        }
    }
    ctx->pc = 0x2A1B7Cu;
    // 0x2a1b7c: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x2a1b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2a1b80:
    // 0x2a1b80: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2a1b80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a1b84: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1B84u;
    {
        const bool branch_taken_0x2a1b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b84) {
            ctx->pc = 0x2A1B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1B84u;
            // 0x2a1b88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1BA0u;
            goto label_2a1ba0;
        }
    }
    ctx->pc = 0x2A1B8Cu;
    // 0x2a1b8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a1b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1b94: 0xc0a8d02  jal         func_2A3408
    ctx->pc = 0x2A1B94u;
    SET_GPR_U32(ctx, 31, 0x2A1B9Cu);
    ctx->pc = 0x2A1B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B94u;
    // 0x2a1b98: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x2A1B94u, 0x2A1B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B9Cu;
label_2a1b9c:
    // 0x2a1b9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a1b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a1ba0:
    // 0x2a1ba0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2a1ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a1ba4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A1BA4u;
    {
        const bool branch_taken_0x2a1ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BA4u;
        // 0x2a1ba8: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ba4) {
            ctx->pc = 0x2A1B80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1b80;
        }
    }
    ctx->pc = 0x2A1BACu;
    // 0x2a1bac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1BACu;
    {
        const bool branch_taken_0x2a1bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BACu;
        // 0x2a1bb0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1bac) {
            ctx->pc = 0x2A1BB8u;
            goto label_2a1bb8;
        }
    }
    ctx->pc = 0x2A1BB4u;
label_2a1bb4:
    // 0x2a1bb4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2a1bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a1bb8:
    // 0x2a1bb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a1bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1bc0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2A1BC0u;
    SET_GPR_U32(ctx, 31, 0x2A1BC8u);
    ctx->pc = 0x2A1BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BC0u;
    // 0x2a1bc4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2A1BC0u, 0x2A1BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BC8u;
label_2a1bc8:
    // 0x2a1bc8: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x2a1bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a1bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1bd0:
    // 0x2a1bd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a1bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a1bd4:
    // 0x2a1bd4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a1bd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1bd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a1bd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1bdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a1bdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1be0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a1be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1be8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BE8u;
        // 0x2a1bec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1BF0u;
    // 0x2a1bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1bf4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2a1bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1bf8: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x2a1bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2a1bfc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1BFCu;
    {
        const bool branch_taken_0x2a1bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BFCu;
        // 0x2a1c00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1bfc) {
            ctx->pc = 0x2A1C18u;
            goto label_2a1c18;
        }
    }
    ctx->pc = 0x2A1C04u;
    // 0x2a1c04: 0x2409f7ff  addiu       $t1, $zero, -0x801
    ctx->pc = 0x2a1c04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2a1c08: 0xc0a867c  jal         func_2A19F0
    ctx->pc = 0x2A1C08u;
    SET_GPR_U32(ctx, 31, 0x2A1C10u);
    ctx->pc = 0x2A1C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C08u;
    // 0x2a1c0c: 0x694824  and         $t1, $v1, $t1 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A19F0u;
    goto label_2a19f0;
    ctx->pc = 0x2A1C10u;
label_2a1c10:
    // 0x2a1c10: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2A1C10u;
    {
        const bool branch_taken_0x2a1c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C10u;
        // 0x2a1c14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c10) {
            ctx->pc = 0x2A1CFCu;
            goto label_2a1cfc;
        }
    }
    ctx->pc = 0x2A1C18u;
label_2a1c18:
    // 0x2a1c18: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x2a1c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2a1c1c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2A1C1Cu;
    {
        const bool branch_taken_0x2a1c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C1Cu;
        // 0x2a1c20: 0x28e2000a  slti        $v0, $a3, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c1c) {
            ctx->pc = 0x2A1CF4u;
            goto label_2a1cf4;
        }
    }
    ctx->pc = 0x2A1C24u;
    // 0x2a1c24: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2A1C24u;
    {
        const bool branch_taken_0x2a1c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C24u;
        // 0x2a1c28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c24) {
            ctx->pc = 0x2A1CF8u;
            goto label_2a1cf8;
        }
    }
    ctx->pc = 0x2A1C2Cu;
    // 0x2a1c2c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2a1c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a1c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1c34: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2a1c34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a1c38: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2A1C38u;
    {
        const bool branch_taken_0x2a1c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C38u;
        // 0x2a1c3c: 0x1075021  addu        $t2, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c38) {
            ctx->pc = 0x2A1CF4u;
            goto label_2a1cf4;
        }
    }
    ctx->pc = 0x2A1C40u;
    // 0x2a1c40: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a1c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1c44: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x2a1c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a1c48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1C48u;
    {
        const bool branch_taken_0x2a1c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C48u;
        // 0x2a1c4c: 0x29220009  slti        $v0, $t1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c48) {
            ctx->pc = 0x2A1C7Cu;
            goto label_2a1c7c;
        }
    }
    ctx->pc = 0x2A1C50u;
    // 0x2a1c50: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x2a1c50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x2a1c54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1C54u;
    {
        const bool branch_taken_0x2a1c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C54u;
        // 0x2a1c58: 0x29220009  slti        $v0, $t1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c54) {
            ctx->pc = 0x2A1C7Cu;
            goto label_2a1c7c;
        }
    }
    ctx->pc = 0x2A1C5Cu;
    // 0x2a1c5c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a1c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2a1c60:
    // 0x2a1c60: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x2a1c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a1c64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1C64u;
    {
        const bool branch_taken_0x2a1c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C64u;
        // 0x2a1c68: 0xc91021  addu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c64) {
            ctx->pc = 0x2A1C78u;
            goto label_2a1c78;
        }
    }
    ctx->pc = 0x2A1C6Cu;
    // 0x2a1c6c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a1c6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1c70: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A1C70u;
    {
        const bool branch_taken_0x2a1c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1c70) {
            ctx->pc = 0x2A1C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1C70u;
            // 0x2a1c74: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1C60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1c60;
        }
    }
    ctx->pc = 0x2A1C78u;
label_2a1c78:
    // 0x2a1c78: 0x29220009  slti        $v0, $t1, 0x9
    ctx->pc = 0x2a1c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
label_2a1c7c:
    // 0x2a1c7c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A1C7Cu;
    {
        const bool branch_taken_0x2a1c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C7Cu;
        // 0x2a1c80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c7c) {
            ctx->pc = 0x2A1CF8u;
            goto label_2a1cf8;
        }
    }
    ctx->pc = 0x2A1C84u;
    // 0x2a1c84: 0x1127001c  beq         $t1, $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A1C84u;
    {
        const bool branch_taken_0x2a1c84 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x2A1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C84u;
        // 0x2a1c88: 0x2527fff8  addiu       $a3, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c84) {
            ctx->pc = 0x2A1CF8u;
            goto label_2a1cf8;
        }
    }
    ctx->pc = 0x2A1C8Cu;
    // 0x2a1c8c: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x2a1c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2a1c90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1C90u;
    {
        const bool branch_taken_0x2a1c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C90u;
        // 0x2a1c94: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c90) {
            ctx->pc = 0x2A1CB8u;
            goto label_2a1cb8;
        }
    }
    ctx->pc = 0x2A1C98u;
    // 0x2a1c98: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2a1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1c9c: 0x0  nop
    ctx->pc = 0x2a1c9cu;
    // NOP
label_2a1ca0:
    // 0x2a1ca0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a1ca0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1ca4: 0x14680013  bne         $v1, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A1CA4u;
    {
        const bool branch_taken_0x2a1ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2A1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CA4u;
        // 0x2a1ca8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ca4) {
            ctx->pc = 0x2A1CF4u;
            goto label_2a1cf4;
        }
    }
    ctx->pc = 0x2A1CACu;
    // 0x2a1cac: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x2a1cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2a1cb0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A1CB0u;
    {
        const bool branch_taken_0x2a1cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CB0u;
        // 0x2a1cb4: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1cb0) {
            ctx->pc = 0x2A1CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1ca0;
        }
    }
    ctx->pc = 0x2A1CB8u;
label_2a1cb8:
    // 0x2a1cb8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x2a1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a1cbc: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x2a1cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a1cc0: 0x1481823  subu        $v1, $t2, $t0
    ctx->pc = 0x2a1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2a1cc4: 0x110a0009  beq         $t0, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1CC4u;
    {
        const bool branch_taken_0x2a1cc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x2A1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CC4u;
        // 0x2a1cc8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1cc4) {
            ctx->pc = 0x2A1CECu;
            goto label_2a1cec;
        }
    }
    ctx->pc = 0x2A1CCCu;
    // 0x2a1ccc: 0x0  nop
    ctx->pc = 0x2a1cccu;
    // NOP
label_2a1cd0:
    // 0x2a1cd0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2a1cd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a1cd4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a1cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a1cd8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a1cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a1cdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a1ce0: 0x0  nop
    ctx->pc = 0x2a1ce0u;
    // NOP
    // 0x2a1ce4: 0x150afffa  bne         $t0, $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1CE4u;
    {
        const bool branch_taken_0x2a1ce4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        if (branch_taken_0x2a1ce4) {
            ctx->pc = 0x2A1CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1cd0;
        }
    }
    ctx->pc = 0x2A1CECu;
label_2a1cec:
    // 0x2a1cec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1CECu;
    {
        const bool branch_taken_0x2a1cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CECu;
        // 0x2a1cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1cec) {
            ctx->pc = 0x2A1CF8u;
            goto label_2a1cf8;
        }
    }
    ctx->pc = 0x2A1CF4u;
label_2a1cf4:
    // 0x2a1cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1cf8:
    // 0x2a1cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a1cfc:
    // 0x2a1cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CFCu;
        // 0x2a1d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1D04u;
    // 0x2a1d04: 0x0  nop
    ctx->pc = 0x2a1d04u;
    // NOP
    // 0x2a1d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a1d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a1d0c: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x2a1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x2a1d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a1d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a1d18: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a1d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d1c: 0x14a20017  bne         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A1D1Cu;
    {
        const bool branch_taken_0x2a1d1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D1Cu;
        // 0x2a1d20: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d1c) {
            ctx->pc = 0x2A1D7Cu;
            goto label_2a1d7c;
        }
    }
    ctx->pc = 0x2A1D24u;
    // 0x2a1d24: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1D24u;
    {
        const bool branch_taken_0x2a1d24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1d24) {
            ctx->pc = 0x2A1D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1D24u;
            // 0x2a1d28: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1D34u;
            goto label_2a1d34;
        }
    }
    ctx->pc = 0x2A1D2Cu;
    // 0x2a1d2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1D2Cu;
    {
        const bool branch_taken_0x2a1d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D2Cu;
        // 0x2a1d30: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d2c) {
            ctx->pc = 0x2A1D54u;
            goto label_2a1d54;
        }
    }
    ctx->pc = 0x2A1D34u;
label_2a1d34:
    // 0x2a1d34: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x2a1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2a1d38: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2a1d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a1d3c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2a1d3cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2a1d40: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1D40u;
    {
        const bool branch_taken_0x2a1d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D40u;
        // 0x2a1d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d40) {
            ctx->pc = 0x2A1D54u;
            goto label_2a1d54;
        }
    }
    ctx->pc = 0x2A1D48u;
    // 0x2a1d48: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2a1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a1d4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a1d50: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x2a1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2a1d54:
    // 0x2a1d54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1D54u;
    {
        const bool branch_taken_0x2a1d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1d54) {
            ctx->pc = 0x2A1D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1D54u;
            // 0x2a1d58: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1D6Cu;
            goto label_2a1d6c;
        }
    }
    ctx->pc = 0x2A1D5Cu;
    // 0x2a1d5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1d60: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1D60u;
    {
        const bool branch_taken_0x2a1d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1d60) {
            ctx->pc = 0x2A1D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1D60u;
            // 0x2a1d64: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1D70u;
            goto label_2a1d70;
        }
    }
    ctx->pc = 0x2A1D68u;
    // 0x2a1d68: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2a1d6c:
    // 0x2a1d6c: 0x2442c6f8  addiu       $v0, $v0, -0x3908
    ctx->pc = 0x2a1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952696));
label_2a1d70:
    // 0x2a1d70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a1d74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A1D74u;
    {
        const bool branch_taken_0x2a1d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D74u;
        // 0x2a1d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d74) {
            ctx->pc = 0x2A1DB4u;
            goto label_2a1db4;
        }
    }
    ctx->pc = 0x2A1D7Cu;
label_2a1d7c:
    // 0x2a1d7c: 0x24020103  addiu       $v0, $zero, 0x103
    ctx->pc = 0x2a1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x2a1d80: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1D80u;
    {
        const bool branch_taken_0x2a1d80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D80u;
        // 0x2a1d84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d80) {
            ctx->pc = 0x2A1DB4u;
            goto label_2a1db4;
        }
    }
    ctx->pc = 0x2A1D88u;
    // 0x2a1d88: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x2A1D88u;
    SET_GPR_U32(ctx, 31, 0x2A1D90u);
    ctx->pc = 0x2A1D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D88u;
    // 0x2a1d8c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x2A1D88u, 0x2A1D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D90u;
label_2a1d90:
    // 0x2a1d90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a1d90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d94: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a1d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1d98: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x2a1d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2a1d9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a1d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1da0: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x2a1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x2a1da4: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x2a1da4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a1da8: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x2a1da8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x2a1dac: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2a1dacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2a1db0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a1db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2a1db4:
    // 0x2a1db4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a1db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DBCu;
        // 0x2a1dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1DC4u;
    // 0x2a1dc4: 0x0  nop
    ctx->pc = 0x2a1dc4u;
    // NOP
    if (ctx->pc == 0x2a1dc4u) { ctx->pc = 0x2a1dc8u; }
}
