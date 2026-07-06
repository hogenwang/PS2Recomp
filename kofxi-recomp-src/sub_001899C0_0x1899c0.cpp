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

// Function: sub_001899C0
// Address: 0x1899c0 - 0x189a50
void sub_001899C0_0x1899c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001899C0_0x1899c0");
#endif

    switch (ctx->pc) {
        case 0x1899e8u: goto label_1899e8;
        default: break;
    }

    ctx->pc = 0x1899c0u;

    // 0x1899c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1899c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1899c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1899c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1899c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1899c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1899cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1899ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1899d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1899d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899d4: 0x908600f7  lbu         $a2, 0xF7($a0)
    ctx->pc = 0x1899d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 247)));
    // 0x1899d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1899d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899dc: 0x948500ea  lhu         $a1, 0xEA($a0)
    ctx->pc = 0x1899dcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 234)));
    // 0x1899e0: 0xc0636d0  jal         func_18DB40
    ctx->pc = 0x1899E0u;
    SET_GPR_U32(ctx, 31, 0x1899E8u);
    ctx->pc = 0x1899E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899E0u;
    // 0x1899e4: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DB40u, 0x1899E0u, 0x1899E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899E8u;
label_1899e8:
    // 0x1899e8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x1899e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x1899ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1899ECu;
    {
        const bool branch_taken_0x1899ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899ECu;
        // 0x1899f0: 0xa2000204  sb          $zero, 0x204($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899ec) {
            ctx->pc = 0x189A28u;
            goto label_189a28;
        }
    }
    ctx->pc = 0x1899F4u;
    // 0x1899f4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1899f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1899f8: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x1899f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1899fc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1899fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x189a00: 0x5020000c  beql        $at, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x189A00u;
    {
        const bool branch_taken_0x189a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a00) {
            ctx->pc = 0x189A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189A00u;
            // 0x189a04: 0x8e030498  lw          $v1, 0x498($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189A34u;
            goto label_189a34;
        }
    }
    ctx->pc = 0x189A08u;
    // 0x189a08: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x189a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x189a0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x189a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189a10: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x189a10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x189a14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x189a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189a18: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x189a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x189a1c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x189a1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189a20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189A20u;
    {
        const bool branch_taken_0x189a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A20u;
        // 0x189a24: 0xa2030204  sb          $v1, 0x204($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a20) {
            ctx->pc = 0x189A30u;
            goto label_189a30;
        }
    }
    ctx->pc = 0x189A28u;
label_189a28:
    // 0x189a28: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x189a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x189a2c: 0xa2000204  sb          $zero, 0x204($s0)
    ctx->pc = 0x189a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 0));
label_189a30:
    // 0x189a30: 0x8e030498  lw          $v1, 0x498($s0)
    ctx->pc = 0x189a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
label_189a34:
    // 0x189a34: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x189a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x189a38: 0xae030498  sw          $v1, 0x498($s0)
    ctx->pc = 0x189a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
    // 0x189a3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x189a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189a48: 0x3e00008  jr          $ra
    ctx->pc = 0x189A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A48u;
        // 0x189a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189A50u;
}
