#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00255DD8
// Address: 0x255dd8 - 0x255e98
void sub_00255DD8_0x255dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255DD8_0x255dd8");
#endif

    switch (ctx->pc) {
        case 0x255e08u: goto label_255e08;
        case 0x255e44u: goto label_255e44;
        case 0x255e7cu: goto label_255e7c;
        default: break;
    }

    ctx->pc = 0x255dd8u;

    // 0x255dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x255ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x255ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x255de0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x255de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x255de4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x255de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255de8: 0x90a20013  lbu         $v0, 0x13($a1)
    ctx->pc = 0x255de8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x255dec: 0x90a30012  lbu         $v1, 0x12($a1)
    ctx->pc = 0x255decu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x255df0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x255df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x255df4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255df8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x255df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x255dfc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x255dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x255e00: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x255e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x255e04: 0x0  nop
    ctx->pc = 0x255e04u;
    // NOP
label_255e08:
    // 0x255e08: 0x4e20009  bltzl       $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x255E08u;
    {
        const bool branch_taken_0x255e08 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x255e08) {
            ctx->pc = 0x255E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x255E08u;
            // 0x255e0c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x255E30u;
            goto label_255e30;
        }
    }
    ctx->pc = 0x255E10u;
    // 0x255e10: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x255e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x255e14: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x255e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x255e18: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x255E18u;
    {
        const bool branch_taken_0x255e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255e18) {
            ctx->pc = 0x255E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x255E18u;
            // 0x255e1c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x255E44u;
            goto label_255e44;
        }
    }
    ctx->pc = 0x255E20u;
    // 0x255e20: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x255e20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x255e24: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x255E24u;
    {
        const bool branch_taken_0x255e24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x255E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255E24u;
            // 0x255e28: 0xe33823  subu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e24) {
            ctx->pc = 0x255E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255e08;
        }
    }
    ctx->pc = 0x255E2Cu;
    // 0x255e2c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x255e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_255e30:
    // 0x255e30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x255e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x255e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255e38: 0x24846f80  addiu       $a0, $a0, 0x6F80
    ctx->pc = 0x255e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28544));
    // 0x255e3c: 0x808b5e0  j           func_22D780
    ctx->pc = 0x255E3Cu;
    ctx->pc = 0x255E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255E3Cu;
            // 0x255e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D780_0x22d780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x255E44u;
label_255e44:
    // 0x255e44: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x255e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x255e48: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x255e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x255e4c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x255e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x255e50: 0x906200b0  lbu         $v0, 0xB0($v1)
    ctx->pc = 0x255e50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x255e54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x255e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e58: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x255e58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x255e5c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x255e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x255e60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x255e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x255e64: 0xa06200b0  sb          $v0, 0xB0($v1)
    ctx->pc = 0x255e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 176), (uint8_t)GPR_U32(ctx, 2));
    // 0x255e68: 0xa06600b1  sb          $a2, 0xB1($v1)
    ctx->pc = 0x255e68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 177), (uint8_t)GPR_U32(ctx, 6));
    // 0x255e6c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x255e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x255e70: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x255e70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x255e74: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x255E74u;
    SET_GPR_U32(ctx, 31, 0x255E7Cu);
    ctx->pc = 0x255E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255E74u;
            // 0x255e78: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255E7Cu; }
        if (ctx->pc != 0x255E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255E7Cu; }
        if (ctx->pc != 0x255E7Cu) { return; }
    }
    ctx->pc = 0x255E7Cu;
label_255e7c:
    // 0x255e7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x255e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x255e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x255e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255e84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x255e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x255e88: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x255e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x255e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x255e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255e90: 0x3e00008  jr          $ra
    ctx->pc = 0x255E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255E90u;
            // 0x255e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255E98u;
    ctx->pc = 0x255e98u;
}
