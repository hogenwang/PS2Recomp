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

// Function: sub_002F0A00
// Address: 0x2f0a00 - 0x2f0b00
void sub_002F0A00_0x2f0a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0A00_0x2f0a00");
#endif

    switch (ctx->pc) {
        case 0x2f0ad8u: goto label_2f0ad8;
        default: break;
    }

    ctx->pc = 0x2f0a00u;

    // 0x2f0a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0a04: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x2f0a04u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x2f0a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0a0c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2f0a0cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f0a14: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2f0a14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f0a1c: 0x25d0eca8  addiu       $s0, $t6, -0x1358
    ctx->pc = 0x2f0a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962344));
    // 0x2f0a20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f0a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a24: 0x8dcdeca8  lw          $t5, -0x1358($t6)
    ctx->pc = 0x2f0a24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294962344)));
    // 0x2f0a28: 0x11af0006  beq         $t5, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0A28u;
    {
        const bool branch_taken_0x2f0a28 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x2F0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A28u;
        // 0x2f0a2c: 0x24050d9b  addiu       $a1, $zero, 0xD9B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3483));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a28) {
            ctx->pc = 0x2F0A44u;
            goto label_2f0a44;
        }
    }
    ctx->pc = 0x2F0A30u;
    // 0x2f0a30: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x2f0a30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f0a34: 0x11af0003  beq         $t5, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0A34u;
    {
        const bool branch_taken_0x2f0a34 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x2F0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A34u;
        // 0x2f0a38: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a34) {
            ctx->pc = 0x2F0A44u;
            goto label_2f0a44;
        }
    }
    ctx->pc = 0x2F0A3Cu;
    // 0x2f0a3c: 0x55af000c  bnel        $t5, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2F0A3Cu;
    {
        const bool branch_taken_0x2f0a3c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        if (branch_taken_0x2f0a3c) {
            ctx->pc = 0x2F0A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0A3Cu;
            // 0x2f0a40: 0x8e0e0058  lw          $t6, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0A70u;
            goto label_2f0a70;
        }
    }
    ctx->pc = 0x2F0A44u;
label_2f0a44:
    // 0x2f0a44: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f0a44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f0a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0a4c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f0a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f0a50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0a58: 0x25081708  addiu       $t0, $t0, 0x1708
    ctx->pc = 0x2f0a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5896));
    // 0x2f0a5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f0a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0a60: 0x24841720  addiu       $a0, $a0, 0x1720
    ctx->pc = 0x2f0a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5920));
    // 0x2f0a64: 0x2407d8ee  addiu       $a3, $zero, -0x2712
    ctx->pc = 0x2f0a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x2f0a68: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2F0A68u;
    ctx->pc = 0x2F0A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0A68u;
    // 0x2f0a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0A70u;
label_2f0a70:
    // 0x2f0a70: 0x8e0f008c  lw          $t7, 0x8C($s0)
    ctx->pc = 0x2f0a70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2f0a74: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x2f0a74u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x2f0a78: 0x22f782b  sltu        $t7, $s1, $t7
    ctx->pc = 0x2f0a78u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x2f0a7c: 0x55e0000f  bnel        $t7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2F0A7Cu;
    {
        const bool branch_taken_0x2f0a7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a7c) {
            ctx->pc = 0x2F0A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0A7Cu;
            // 0x2f0a80: 0x8e0f038c  lw          $t7, 0x38C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0ABCu;
            goto label_2f0abc;
        }
    }
    ctx->pc = 0x2F0A84u;
    // 0x2f0a84: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f0a84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0a8c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f0a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0a90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0a94: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f0a94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f0a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0a9c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f0a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f0aa0: 0x25081738  addiu       $t0, $t0, 0x1738
    ctx->pc = 0x2f0aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5944));
    // 0x2f0aa4: 0x24841720  addiu       $a0, $a0, 0x1720
    ctx->pc = 0x2f0aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5920));
    // 0x2f0aa8: 0x24050d9e  addiu       $a1, $zero, 0xD9E
    ctx->pc = 0x2f0aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3486));
    // 0x2f0aac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f0aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0ab0: 0x34e763bd  ori         $a3, $a3, 0x63BD
    ctx->pc = 0x2f0ab0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
    // 0x2f0ab4: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2F0AB4u;
    ctx->pc = 0x2F0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0AB4u;
    // 0x2f0ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0ABCu;
label_2f0abc:
    // 0x2f0abc: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x2F0ABCu;
    {
        const bool branch_taken_0x2f0abc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0ABCu;
        // 0x2f0ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0abc) {
            ctx->pc = 0x2F0AE8u;
            goto label_2f0ae8;
        }
    }
    ctx->pc = 0x2F0AC4u;
    // 0x2f0ac4: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x2f0ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2f0ac8: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x2f0ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0acc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f0accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ad0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F0AD0u;
    SET_GPR_U32(ctx, 31, 0x2F0AD8u);
    ctx->pc = 0x2F0AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0AD0u;
    // 0x2f0ad4: 0x8e2021  addu        $a0, $a0, $t6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F0AD0u, 0x2F0AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0AD8u;
label_2f0ad8:
    // 0x2f0ad8: 0x8e0f0058  lw          $t7, 0x58($s0)
    ctx->pc = 0x2f0ad8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f0adc: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x2f0adcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x2f0ae0: 0xae0f0058  sw          $t7, 0x58($s0)
    ctx->pc = 0x2f0ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 15));
    // 0x2f0ae4: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x2f0ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ae8:
    // 0x2f0ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0af4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AF4u;
        // 0x2f0af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0AFCu;
    // 0x2f0afc: 0x0  nop
    ctx->pc = 0x2f0afcu;
    // NOP
}
