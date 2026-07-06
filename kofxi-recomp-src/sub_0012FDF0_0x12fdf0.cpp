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

// Function: sub_0012FDF0
// Address: 0x12fdf0 - 0x12fe90
void sub_0012FDF0_0x12fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FDF0_0x12fdf0");
#endif

    switch (ctx->pc) {
        case 0x12fe44u: goto label_12fe44;
        case 0x12fe7cu: goto label_12fe7c;
        default: break;
    }

    ctx->pc = 0x12fdf0u;

    // 0x12fdf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fdf4: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12FDF4u;
    {
        const bool branch_taken_0x12fdf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDF4u;
        // 0x12fdf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdf4) {
            ctx->pc = 0x12FE4Cu;
            goto label_12fe4c;
        }
    }
    ctx->pc = 0x12FDFCu;
    // 0x12fdfc: 0x30830030  andi        $v1, $a0, 0x30
    ctx->pc = 0x12fdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x12fe00: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x12fe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x12fe04: 0x33102  srl         $a2, $v1, 4
    ctx->pc = 0x12fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12fe08: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x12fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x12fe0c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x12fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12fe10: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12fe14: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x12fe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12fe18: 0x246355b0  addiu       $v1, $v1, 0x55B0
    ctx->pc = 0x12fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21936));
    // 0x12fe1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12fe20: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12fe24: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x12fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12fe28: 0x244255a0  addiu       $v0, $v0, 0x55A0
    ctx->pc = 0x12fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21920));
    // 0x12fe2c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x12fe2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12fe30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12fe34: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12fe38: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x12fe38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x12fe3c: 0xc04bfa4  jal         func_12FE90
    ctx->pc = 0x12FE3Cu;
    SET_GPR_U32(ctx, 31, 0x12FE44u);
    ctx->pc = 0x12FE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE3Cu;
    // 0x12fe40: 0x2465fffe  addiu       $a1, $v1, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FE90u, 0x12FE3Cu, 0x12FE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE44u;
label_12fe44:
    // 0x12fe44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12FE44u;
    {
        const bool branch_taken_0x12fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE44u;
        // 0x12fe48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe44) {
            ctx->pc = 0x12FE80u;
            goto label_12fe80;
        }
    }
    ctx->pc = 0x12FE4Cu;
label_12fe4c:
    // 0x12fe4c: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x12fe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x12fe50: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12fe54: 0x23082  srl         $a2, $v0, 2
    ctx->pc = 0x12fe54u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x12fe58: 0x246355a0  addiu       $v1, $v1, 0x55A0
    ctx->pc = 0x12fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21920));
    // 0x12fe5c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x12fe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x12fe60: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x12fe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x12fe64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x12fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12fe68: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x12fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x12fe6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12fe70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12fe74: 0xc04bfa4  jal         func_12FE90
    ctx->pc = 0x12FE74u;
    SET_GPR_U32(ctx, 31, 0x12FE7Cu);
    ctx->pc = 0x12FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE74u;
    // 0x12fe78: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FE90u, 0x12FE74u, 0x12FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE7Cu;
label_12fe7c:
    // 0x12fe7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12fe7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12fe80:
    // 0x12fe80: 0x3e00008  jr          $ra
    ctx->pc = 0x12FE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE80u;
        // 0x12fe84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FE88u;
    // 0x12fe88: 0x0  nop
    ctx->pc = 0x12fe88u;
    // NOP
    // 0x12fe8c: 0x0  nop
    ctx->pc = 0x12fe8cu;
    // NOP
    if (ctx->pc == 0x12fe8cu) { ctx->pc = 0x12fe90u; }
}
