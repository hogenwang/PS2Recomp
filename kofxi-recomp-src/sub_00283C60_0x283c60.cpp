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

// Function: sub_00283C60
// Address: 0x283c60 - 0x283dc0
void sub_00283C60_0x283c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283C60_0x283c60");
#endif

    switch (ctx->pc) {
        case 0x283cb0u: goto label_283cb0;
        case 0x283d88u: goto label_283d88;
        default: break;
    }

    ctx->pc = 0x283c60u;

    // 0x283c60: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x283c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x283c64: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x283C64u;
    {
        const bool branch_taken_0x283c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C64u;
        // 0x283c68: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c64) {
            ctx->pc = 0x283D60u;
            goto label_283d60;
        }
    }
    ctx->pc = 0x283C6Cu;
    // 0x283c6c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x283c6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x283c70: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x283c70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283c74: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x283c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x283c78: 0x304300e0  andi        $v1, $v0, 0xE0
    ctx->pc = 0x283c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)224);
    // 0x283c7c: 0x3047001f  andi        $a3, $v0, 0x1F
    ctx->pc = 0x283c7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x283c80: 0x14e4001a  bne         $a3, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x283C80u;
    {
        const bool branch_taken_0x283c80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x283C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C80u;
        // 0x283c84: 0xa1430014  sb          $v1, 0x14($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c80) {
            ctx->pc = 0x283CECu;
            goto label_283cec;
        }
    }
    ctx->pc = 0x283C88u;
    // 0x283c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283c8c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x283c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283c90: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x283C90u;
    {
        const bool branch_taken_0x283c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C90u;
        // 0x283c94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c90) {
            ctx->pc = 0x283D60u;
            goto label_283d60;
        }
    }
    ctx->pc = 0x283C98u;
    // 0x283c98: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x283c98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x283c9c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x283c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283ca0: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x283ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x283ca4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x283CA4u;
    {
        const bool branch_taken_0x283ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CA4u;
        // 0x283ca8: 0x3047007f  andi        $a3, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ca4) {
            ctx->pc = 0x283CECu;
            goto label_283cec;
        }
    }
    ctx->pc = 0x283CACu;
    // 0x283cac: 0x0  nop
    ctx->pc = 0x283cacu;
    // NOP
label_283cb0:
    // 0x283cb0: 0x25080007  addiu       $t0, $t0, 0x7
    ctx->pc = 0x283cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x283cb4: 0x2d020021  sltiu       $v0, $t0, 0x21
    ctx->pc = 0x283cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x283cb8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x283CB8u;
    {
        const bool branch_taken_0x283cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CB8u;
        // 0x283cbc: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cb8) {
            ctx->pc = 0x283D68u;
            goto label_283d68;
        }
    }
    ctx->pc = 0x283CC0u;
    // 0x283cc0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x283cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x283cc4: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x283cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283cc8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x283CC8u;
    {
        const bool branch_taken_0x283cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CC8u;
        // 0x283ccc: 0x739c0  sll         $a3, $a3, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cc8) {
            ctx->pc = 0x283D60u;
            goto label_283d60;
        }
    }
    ctx->pc = 0x283CD0u;
    // 0x283cd0: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x283cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x283cd4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x283cd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283cd8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x283cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x283cdc: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x283cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x283ce0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x283ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x283ce4: 0x1060fff2  beqz        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x283CE4u;
    {
        const bool branch_taken_0x283ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CE4u;
        // 0x283ce8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ce4) {
            ctx->pc = 0x283CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283cb0;
        }
    }
    ctx->pc = 0x283CECu;
label_283cec:
    // 0x283cec: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x283cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x283cf0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x283cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x283cf4: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x283cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283cf8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x283CF8u;
    {
        const bool branch_taken_0x283cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CF8u;
        // 0x283cfc: 0xad470010  sw          $a3, 0x10($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cf8) {
            ctx->pc = 0x283D60u;
            goto label_283d60;
        }
    }
    ctx->pc = 0x283D00u;
    // 0x283d00: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x283d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x283d04: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x283d04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283d08: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x283d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x283d0c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x283D0Cu;
    {
        const bool branch_taken_0x283d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D0Cu;
        // 0x283d10: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d0c) {
            ctx->pc = 0x283DA8u;
            goto label_283da8;
        }
    }
    ctx->pc = 0x283D14u;
    // 0x283d14: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x283d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x283d18: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283D18u;
    {
        const bool branch_taken_0x283d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x283D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D18u;
        // 0x283d1c: 0x2c820009  sltiu       $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d18) {
            ctx->pc = 0x283D3Cu;
            goto label_283d3c;
        }
    }
    ctx->pc = 0x283D20u;
    // 0x283d20: 0x91420014  lbu         $v0, 0x14($t2)
    ctx->pc = 0x283d20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x283d24: 0x91430016  lbu         $v1, 0x16($t2)
    ctx->pc = 0x283d24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 22)));
    // 0x283d28: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x283d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x283d2c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x283d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x283d30: 0xa1420014  sb          $v0, 0x14($t2)
    ctx->pc = 0x283d30u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x283d34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x283D34u;
    {
        const bool branch_taken_0x283d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D34u;
        // 0x283d38: 0xa1430016  sb          $v1, 0x16($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d34) {
            ctx->pc = 0x283DA8u;
            goto label_283da8;
        }
    }
    ctx->pc = 0x283D3Cu;
label_283d3c:
    // 0x283d3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283D3Cu;
    {
        const bool branch_taken_0x283d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D3Cu;
        // 0x283d40: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d3c) {
            ctx->pc = 0x283D4Cu;
            goto label_283d4c;
        }
    }
    ctx->pc = 0x283D44u;
    // 0x283d44: 0x3e00008  jr          $ra
    ctx->pc = 0x283D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D44u;
        // 0x283d48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283D4Cu;
label_283d4c:
    // 0x283d4c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x283d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x283d50: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x283d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x283d54: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x283d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283d58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283D58u;
    {
        const bool branch_taken_0x283d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D58u;
        // 0x283d5c: 0xa91021  addu        $v0, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d58) {
            ctx->pc = 0x283D70u;
            goto label_283d70;
        }
    }
    ctx->pc = 0x283D60u;
label_283d60:
    // 0x283d60: 0x3e00008  jr          $ra
    ctx->pc = 0x283D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D60u;
        // 0x283d64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283D68u;
label_283d68:
    // 0x283d68: 0x3e00008  jr          $ra
    ctx->pc = 0x283D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D68u;
        // 0x283d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283D70u;
label_283d70:
    // 0x283d70: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x283d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x283d74: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x283d74u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x283d78: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x283d78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283d7c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x283d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x283d80: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283D80u;
    {
        const bool branch_taken_0x283d80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D80u;
        // 0x283d84: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d80) {
            ctx->pc = 0x283DA8u;
            goto label_283da8;
        }
    }
    ctx->pc = 0x283D88u;
label_283d88:
    // 0x283d88: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x283d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x283d8c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x283d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x283d90: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x283d90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283d94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x283d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x283d98: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x283d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x283d9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x283d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x283da0: 0x1500fff9  bnez        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x283DA0u;
    {
        const bool branch_taken_0x283da0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x283da0) {
            ctx->pc = 0x283D88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283d88;
        }
    }
    ctx->pc = 0x283DA8u;
label_283da8:
    // 0x283da8: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x283da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x283dac: 0xa1490015  sb          $t1, 0x15($t2)
    ctx->pc = 0x283dacu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 21), (uint8_t)GPR_U32(ctx, 9));
    // 0x283db0: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x283db0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x283db4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283db8: 0x3e00008  jr          $ra
    ctx->pc = 0x283DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DB8u;
        // 0x283dbc: 0xad430008  sw          $v1, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283DC0u;
}
