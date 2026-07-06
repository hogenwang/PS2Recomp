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

// Function: sub_001D8B00
// Address: 0x1d8b00 - 0x1d8b98
void sub_001D8B00_0x1d8b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8B00_0x1d8b00");
#endif

    ctx->pc = 0x1d8b00u;

    // 0x1d8b00: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x1d8b00u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d8b04: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1d8b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d8b08: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1d8b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1d8b0c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8b10: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1d8b10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d8b14: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d8b14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d8b18: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1d8b18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1d8b1c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8b20: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d8b20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d8b24: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8b24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8b28: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x1d8b28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x1d8b2c: 0x10e60017  beq         $a3, $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D8B2Cu;
    {
        const bool branch_taken_0x1d8b2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B2Cu;
        // 0x1d8b30: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b2c) {
            ctx->pc = 0x1D8B8Cu;
            goto label_1d8b8c;
        }
    }
    ctx->pc = 0x1D8B34u;
    // 0x1d8b34: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1d8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1d8b38: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D8B38u;
    {
        const bool branch_taken_0x1d8b38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B38u;
        // 0x1d8b3c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b38) {
            ctx->pc = 0x1D8B8Cu;
            goto label_1d8b8c;
        }
    }
    ctx->pc = 0x1D8B40u;
    // 0x1d8b40: 0x24e2fefe  addiu       $v0, $a3, -0x102
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967038));
    // 0x1d8b44: 0x2c4200ae  sltiu       $v0, $v0, 0xAE
    ctx->pc = 0x1d8b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)174) ? 1 : 0);
    // 0x1d8b48: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8B48u;
    {
        const bool branch_taken_0x1d8b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B48u;
        // 0x1d8b4c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b48) {
            ctx->pc = 0x1D8B8Cu;
            goto label_1d8b8c;
        }
    }
    ctx->pc = 0x1D8B50u;
    // 0x1d8b50: 0x240201b2  addiu       $v0, $zero, 0x1B2
    ctx->pc = 0x1d8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
    // 0x1d8b54: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8B54u;
    {
        const bool branch_taken_0x1d8b54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B54u;
        // 0x1d8b58: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b54) {
            ctx->pc = 0x1D8B8Cu;
            goto label_1d8b8c;
        }
    }
    ctx->pc = 0x1D8B5Cu;
    // 0x1d8b5c: 0x240201b3  addiu       $v0, $zero, 0x1B3
    ctx->pc = 0x1d8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x1d8b60: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8B60u;
    {
        const bool branch_taken_0x1d8b60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B60u;
        // 0x1d8b64: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b60) {
            ctx->pc = 0x1D8B8Cu;
            goto label_1d8b8c;
        }
    }
    ctx->pc = 0x1D8B68u;
    // 0x1d8b68: 0x240201b5  addiu       $v0, $zero, 0x1B5
    ctx->pc = 0x1d8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
    // 0x1d8b6c: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8B6Cu;
    {
        const bool branch_taken_0x1d8b6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B6Cu;
        // 0x1d8b70: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b6c) {
            ctx->pc = 0x1D8B8Cu;
            goto label_1d8b8c;
        }
    }
    ctx->pc = 0x1D8B74u;
    // 0x1d8b74: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x1d8b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x1d8b78: 0x10e20004  beq         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8B78u;
    {
        const bool branch_taken_0x1d8b78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B78u;
        // 0x1d8b7c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b78) {
            ctx->pc = 0x1D8B8Cu;
            goto label_1d8b8c;
        }
    }
    ctx->pc = 0x1D8B80u;
    // 0x1d8b80: 0x38e201b8  xori        $v0, $a3, 0x1B8
    ctx->pc = 0x1d8b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)440);
    // 0x1d8b84: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1d8b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d8b88: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x1d8b88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_1d8b8c:
    // 0x1d8b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B8Cu;
        // 0x1d8b90: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8B94u;
    // 0x1d8b94: 0x0  nop
    ctx->pc = 0x1d8b94u;
    // NOP
}
