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

// Function: sub_0033A9B0
// Address: 0x33a9b0 - 0x33aaa0
void sub_0033A9B0_0x33a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A9B0_0x33a9b0");
#endif

    switch (ctx->pc) {
        case 0x33aa24u: goto label_33aa24;
        default: break;
    }

    ctx->pc = 0x33a9b0u;

    // 0x33a9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a9b4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33a9b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33a9bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a9c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a9c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33a9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9c8: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x33a9c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x33a9cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33a9d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A9D0u;
    {
        const bool branch_taken_0x33a9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9D0u;
        // 0x33a9d4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9d0) {
            ctx->pc = 0x33A9E0u;
            goto label_33a9e0;
        }
    }
    ctx->pc = 0x33A9D8u;
    // 0x33a9d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x33A9D8u;
    {
        const bool branch_taken_0x33a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9D8u;
        // 0x33a9dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9d8) {
            ctx->pc = 0x33AA80u;
            goto label_33aa80;
        }
    }
    ctx->pc = 0x33A9E0u;
label_33a9e0:
    // 0x33a9e0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a9e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33a9e8: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x33a9e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x33a9ec: 0x50430024  beql        $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x33A9ECu;
    {
        const bool branch_taken_0x33a9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a9ec) {
            ctx->pc = 0x33A9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A9ECu;
            // 0x33a9f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AA80u;
            goto label_33aa80;
        }
    }
    ctx->pc = 0x33A9F4u;
    // 0x33a9f4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a9f8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33a9fc: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x33a9fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x33aa00: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x33AA00u;
    {
        const bool branch_taken_0x33aa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33aa00) {
            ctx->pc = 0x33AA7Cu;
            goto label_33aa7c;
        }
    }
    ctx->pc = 0x33AA08u;
    // 0x33aa08: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33aa0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33aa10: 0x9042b243  lbu         $v0, -0x4DBD($v0)
    ctx->pc = 0x33aa10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947395)));
    // 0x33aa14: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x33AA14u;
    {
        const bool branch_taken_0x33aa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33aa14) {
            ctx->pc = 0x33AA7Cu;
            goto label_33aa7c;
        }
    }
    ctx->pc = 0x33AA1Cu;
    // 0x33aa1c: 0xc062794  jal         func_189E50
    ctx->pc = 0x33AA1Cu;
    SET_GPR_U32(ctx, 31, 0x33AA24u);
    ctx->pc = 0x33AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AA1Cu;
    // 0x33aa20: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E50u, 0x33AA1Cu, 0x33AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AA24u;
label_33aa24:
    // 0x33aa24: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33aa24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33aa28: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33aa2c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33aa30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33aa34: 0x2442db57  addiu       $v0, $v0, -0x24A9
    ctx->pc = 0x33aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957911));
    // 0x33aa38: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33aa3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33aa40: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33aa44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33aa48: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x33aa48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33aa4c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33AA4Cu;
    {
        const bool branch_taken_0x33aa4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33aa4c) {
            ctx->pc = 0x33AA7Cu;
            goto label_33aa7c;
        }
    }
    ctx->pc = 0x33AA54u;
    // 0x33aa54: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x33aa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x33aa58: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x33aa58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x33aa5c: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x33AA5Cu;
    {
        const bool branch_taken_0x33aa5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33aa5c) {
            ctx->pc = 0x33AA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AA5Cu;
            // 0x33aa60: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AA74u;
            goto label_33aa74;
        }
    }
    ctx->pc = 0x33AA64u;
    // 0x33aa64: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x33aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33aa68: 0x64100006  daddiu      $s0, $zero, 0x6
    ctx->pc = 0x33aa68u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x33aa6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33AA6Cu;
    {
        const bool branch_taken_0x33aa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA6Cu;
        // 0x33aa70: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa6c) {
            ctx->pc = 0x33AA7Cu;
            goto label_33aa7c;
        }
    }
    ctx->pc = 0x33AA74u;
label_33aa74:
    // 0x33aa74: 0x64100004  daddiu      $s0, $zero, 0x4
    ctx->pc = 0x33aa74u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x33aa78: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x33aa78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_33aa7c:
    // 0x33aa7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33aa7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33aa80:
    // 0x33aa80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33aa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33aa84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33aa84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33aa88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33aa88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33aa8c: 0x3e00008  jr          $ra
    ctx->pc = 0x33AA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA8Cu;
        // 0x33aa90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AA94u;
    // 0x33aa94: 0x0  nop
    ctx->pc = 0x33aa94u;
    // NOP
    // 0x33aa98: 0x0  nop
    ctx->pc = 0x33aa98u;
    // NOP
    // 0x33aa9c: 0x0  nop
    ctx->pc = 0x33aa9cu;
    // NOP
    if (ctx->pc == 0x33aa9cu) { ctx->pc = 0x33aaa0u; }
}
