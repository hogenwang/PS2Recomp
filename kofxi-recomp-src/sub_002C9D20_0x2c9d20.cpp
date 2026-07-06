#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C9D20
// Address: 0x2c9d20 - 0x2c9db0
void sub_002C9D20_0x2c9d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9D20_0x2c9d20");
#endif

    switch (ctx->pc) {
        case 0x2c9d40u: goto label_2c9d40;
        case 0x2c9d48u: goto label_2c9d48;
        case 0x2c9d9cu: goto label_2c9d9c;
        default: break;
    }

    ctx->pc = 0x2c9d20u;

    // 0x2c9d20: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c9d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d24: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2c9d24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9d28: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2c9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2c9d2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c9d2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d30: 0x352975ff  ori         $t1, $t1, 0x75FF
    ctx->pc = 0x2c9d30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30207);
    // 0x2c9d34: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x2c9d34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2c9d38: 0x240b0103  addiu       $t3, $zero, 0x103
    ctx->pc = 0x2c9d38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x2c9d3c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2c9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2c9d40:
    // 0x2c9d40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9d44: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2c9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2c9d48:
    // 0x2c9d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9d4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9d50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c9d54: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2c9d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9d58: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x2c9d58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x2c9d5c: 0xc91824  and         $v1, $a2, $t1
    ctx->pc = 0x2c9d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x2c9d60: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x2c9d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x2c9d64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C9D64u;
    {
        const bool branch_taken_0x2c9d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D64u;
            // 0x2c9d68: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d64) {
            ctx->pc = 0x2C9D90u;
            goto label_2c9d90;
        }
    }
    ctx->pc = 0x2C9D6Cu;
    // 0x2c9d6c: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2c9d6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c9d70: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C9D70u;
    {
        const bool branch_taken_0x2c9d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d70) {
            ctx->pc = 0x2C9D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D70u;
            // 0x2c9d74: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9D9Cu;
            goto label_2c9d9c;
        }
    }
    ctx->pc = 0x2C9D78u;
    // 0x2c9d78: 0x30c21400  andi        $v0, $a2, 0x1400
    ctx->pc = 0x2c9d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)5120);
    // 0x2c9d7c: 0x544afff0  bnel        $v0, $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C9D7Cu;
    {
        const bool branch_taken_0x2c9d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x2c9d7c) {
            ctx->pc = 0x2C9D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D7Cu;
            // 0x2c9d80: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9d40;
        }
    }
    ctx->pc = 0x2C9D84u;
    // 0x2c9d84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9D84u;
    {
        const bool branch_taken_0x2c9d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D84u;
            // 0x2c9d88: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d84) {
            ctx->pc = 0x2C9D9Cu;
            goto label_2c9d9c;
        }
    }
    ctx->pc = 0x2C9D8Cu;
    // 0x2c9d8c: 0x0  nop
    ctx->pc = 0x2c9d8cu;
    // NOP
label_2c9d90:
    // 0x2c9d90: 0x6b1826  xor         $v1, $v1, $t3
    ctx->pc = 0x2c9d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 11));
    // 0x2c9d94: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2c9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2c9d98: 0x43400a  movz        $t0, $v0, $v1
    ctx->pc = 0x2c9d98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_2c9d9c:
    // 0x2c9d9c: 0x5d00ffe8  bgtzl       $t0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2C9D9Cu;
    {
        const bool branch_taken_0x2c9d9c = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x2c9d9c) {
            ctx->pc = 0x2C9DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D9Cu;
            // 0x2c9da0: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9d40;
        }
    }
    ctx->pc = 0x2C9DA4u;
    // 0x2c9da4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9DACu;
    // 0x2c9dac: 0x0  nop
    ctx->pc = 0x2c9dacu;
    // NOP
    ctx->pc = 0x2c9db0u;
}
