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

// Function: sub_001CAF10
// Address: 0x1caf10 - 0x1cb000
void sub_001CAF10_0x1caf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAF10_0x1caf10");
#endif

    switch (ctx->pc) {
        case 0x1caf10u: goto label_1caf10;
        case 0x1caf14u: goto label_1caf14;
        case 0x1caf18u: goto label_1caf18;
        case 0x1caf1cu: goto label_1caf1c;
        case 0x1caf20u: goto label_1caf20;
        case 0x1caf24u: goto label_1caf24;
        case 0x1caf28u: goto label_1caf28;
        case 0x1caf2cu: goto label_1caf2c;
        case 0x1caf30u: goto label_1caf30;
        case 0x1caf34u: goto label_1caf34;
        case 0x1caf38u: goto label_1caf38;
        case 0x1caf3cu: goto label_1caf3c;
        case 0x1caf40u: goto label_1caf40;
        case 0x1caf44u: goto label_1caf44;
        case 0x1caf48u: goto label_1caf48;
        case 0x1caf4cu: goto label_1caf4c;
        case 0x1caf50u: goto label_1caf50;
        case 0x1caf54u: goto label_1caf54;
        case 0x1caf58u: goto label_1caf58;
        case 0x1caf5cu: goto label_1caf5c;
        case 0x1caf60u: goto label_1caf60;
        case 0x1caf64u: goto label_1caf64;
        case 0x1caf68u: goto label_1caf68;
        case 0x1caf6cu: goto label_1caf6c;
        case 0x1caf70u: goto label_1caf70;
        case 0x1caf74u: goto label_1caf74;
        case 0x1caf78u: goto label_1caf78;
        case 0x1caf7cu: goto label_1caf7c;
        case 0x1caf80u: goto label_1caf80;
        case 0x1caf84u: goto label_1caf84;
        case 0x1caf88u: goto label_1caf88;
        case 0x1caf8cu: goto label_1caf8c;
        case 0x1caf90u: goto label_1caf90;
        case 0x1caf94u: goto label_1caf94;
        case 0x1caf98u: goto label_1caf98;
        case 0x1caf9cu: goto label_1caf9c;
        case 0x1cafa0u: goto label_1cafa0;
        case 0x1cafa4u: goto label_1cafa4;
        case 0x1cafa8u: goto label_1cafa8;
        case 0x1cafacu: goto label_1cafac;
        case 0x1cafb0u: goto label_1cafb0;
        case 0x1cafb4u: goto label_1cafb4;
        case 0x1cafb8u: goto label_1cafb8;
        case 0x1cafbcu: goto label_1cafbc;
        case 0x1cafc0u: goto label_1cafc0;
        case 0x1cafc4u: goto label_1cafc4;
        case 0x1cafc8u: goto label_1cafc8;
        case 0x1cafccu: goto label_1cafcc;
        case 0x1cafd0u: goto label_1cafd0;
        case 0x1cafd4u: goto label_1cafd4;
        case 0x1cafd8u: goto label_1cafd8;
        case 0x1cafdcu: goto label_1cafdc;
        case 0x1cafe0u: goto label_1cafe0;
        case 0x1cafe4u: goto label_1cafe4;
        case 0x1cafe8u: goto label_1cafe8;
        case 0x1cafecu: goto label_1cafec;
        case 0x1caff0u: goto label_1caff0;
        case 0x1caff4u: goto label_1caff4;
        case 0x1caff8u: goto label_1caff8;
        case 0x1caffcu: goto label_1caffc;
        default: break;
    }

    ctx->pc = 0x1caf10u;

label_1caf10:
    // 0x1caf10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1caf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1caf14:
    // 0x1caf14: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1caf18:
    if (ctx->pc == 0x1CAF18u) {
        ctx->pc = 0x1CAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF14u;
        // 0x1caf18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF1Cu;
        goto label_1caf1c;
    }
    ctx->pc = 0x1CAF14u;
    {
        const bool branch_taken_0x1caf14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF14u;
        // 0x1caf18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf14) {
            ctx->pc = 0x1CAF38u;
            goto label_1caf38;
        }
    }
    ctx->pc = 0x1CAF1Cu;
label_1caf1c:
    // 0x1caf1c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1caf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1caf20:
    // 0x1caf20: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1caf20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1caf24:
    // 0x1caf24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1caf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1caf28:
    // 0x1caf28: 0x2484b938  addiu       $a0, $a0, -0x46C8
    ctx->pc = 0x1caf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949176));
label_1caf2c:
    // 0x1caf2c: 0x24a5b868  addiu       $a1, $a1, -0x4798
    ctx->pc = 0x1caf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
label_1caf30:
    // 0x1caf30: 0x8072a14  j           func_1CA850
label_1caf34:
    if (ctx->pc == 0x1CAF34u) {
        ctx->pc = 0x1CAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF30u;
        // 0x1caf34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF38u;
        goto label_1caf38;
    }
    ctx->pc = 0x1CAF30u;
    ctx->pc = 0x1CAF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF30u;
    // 0x1caf34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAF38u;
label_1caf38:
    // 0x1caf38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1caf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1caf3c:
    // 0x1caf3c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1caf40:
    if (ctx->pc == 0x1CAF40u) {
        ctx->pc = 0x1CAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF3Cu;
        // 0x1caf40: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF44u;
        goto label_1caf44;
    }
    ctx->pc = 0x1CAF3Cu;
    {
        const bool branch_taken_0x1caf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caf3c) {
            ctx->pc = 0x1CAF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAF3Cu;
            // 0x1caf40: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAF60u;
            goto label_1caf60;
        }
    }
    ctx->pc = 0x1CAF44u;
label_1caf44:
    // 0x1caf44: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1caf44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1caf48:
    // 0x1caf48: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1caf48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1caf4c:
    // 0x1caf4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1caf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1caf50:
    // 0x1caf50: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1caf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1caf54:
    // 0x1caf54: 0x24a5b898  addiu       $a1, $a1, -0x4768
    ctx->pc = 0x1caf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
label_1caf58:
    // 0x1caf58: 0x8072a14  j           func_1CA850
label_1caf5c:
    if (ctx->pc == 0x1CAF5Cu) {
        ctx->pc = 0x1CAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF58u;
        // 0x1caf5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF60u;
        goto label_1caf60;
    }
    ctx->pc = 0x1CAF58u;
    ctx->pc = 0x1CAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF58u;
    // 0x1caf5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAF60u;
label_1caf60:
    // 0x1caf60: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_1caf64:
    if (ctx->pc == 0x1CAF64u) {
        ctx->pc = 0x1CAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF60u;
        // 0x1caf64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF68u;
        goto label_1caf68;
    }
    ctx->pc = 0x1CAF60u;
    {
        const bool branch_taken_0x1caf60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF60u;
        // 0x1caf64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf60) {
            ctx->pc = 0x1CAFA4u;
            goto label_1cafa4;
        }
    }
    ctx->pc = 0x1CAF68u;
label_1caf68:
    // 0x1caf68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1caf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1caf6c:
    // 0x1caf6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1caf70:
    if (ctx->pc == 0x1CAF70u) {
        ctx->pc = 0x1CAF74u;
        goto label_1caf74;
    }
    ctx->pc = 0x1CAF6Cu;
    {
        const bool branch_taken_0x1caf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf6c) {
            ctx->pc = 0x1CAFA4u;
            goto label_1cafa4;
        }
    }
    ctx->pc = 0x1CAF74u;
label_1caf74:
    // 0x1caf74: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_1caf78:
    if (ctx->pc == 0x1CAF78u) {
        ctx->pc = 0x1CAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF74u;
        // 0x1caf78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF7Cu;
        goto label_1caf7c;
    }
    ctx->pc = 0x1CAF74u;
    {
        const bool branch_taken_0x1caf74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF74u;
        // 0x1caf78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf74) {
            ctx->pc = 0x1CAFA4u;
            goto label_1cafa4;
        }
    }
    ctx->pc = 0x1CAF7Cu;
label_1caf7c:
    // 0x1caf7c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_1caf80:
    if (ctx->pc == 0x1CAF80u) {
        ctx->pc = 0x1CAF84u;
        goto label_1caf84;
    }
    ctx->pc = 0x1CAF7Cu;
    {
        const bool branch_taken_0x1caf7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1caf7c) {
            ctx->pc = 0x1CAFA4u;
            goto label_1cafa4;
        }
    }
    ctx->pc = 0x1CAF84u;
label_1caf84:
    // 0x1caf84: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1caf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1caf88:
    // 0x1caf88: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1caf88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1caf8c:
    // 0x1caf8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1caf90:
    if (ctx->pc == 0x1CAF90u) {
        ctx->pc = 0x1CAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF8Cu;
        // 0x1caf90: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF94u;
        goto label_1caf94;
    }
    ctx->pc = 0x1CAF8Cu;
    {
        const bool branch_taken_0x1caf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF8Cu;
        // 0x1caf90: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf8c) {
            ctx->pc = 0x1CAFA4u;
            goto label_1cafa4;
        }
    }
    ctx->pc = 0x1CAF94u;
label_1caf94:
    // 0x1caf94: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1caf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1caf98:
    // 0x1caf98: 0x40f809  jalr        $v0
label_1caf9c:
    if (ctx->pc == 0x1CAF9Cu) {
        ctx->pc = 0x1CAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF98u;
        // 0x1caf9c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAFA0u;
        goto label_1cafa0;
    }
    ctx->pc = 0x1CAF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CAFA0u);
        ctx->pc = 0x1CAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF98u;
        // 0x1caf9c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAF98u, 0x1CAFA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CAFA0u;
label_1cafa0:
    // 0x1cafa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cafa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cafa4:
    // 0x1cafa4: 0x3e00008  jr          $ra
label_1cafa8:
    if (ctx->pc == 0x1CAFA8u) {
        ctx->pc = 0x1CAFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFA4u;
        // 0x1cafa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAFACu;
        goto label_1cafac;
    }
    ctx->pc = 0x1CAFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFA4u;
        // 0x1cafa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAFACu;
label_1cafac:
    // 0x1cafac: 0x0  nop
    ctx->pc = 0x1cafacu;
    // NOP
label_1cafb0:
    // 0x1cafb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cafb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cafb4:
    // 0x1cafb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cafb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cafb8:
    // 0x1cafb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cafb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cafbc:
    // 0x1cafbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cafbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cafc0:
    // 0x1cafc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cafc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cafc4:
    // 0x1cafc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cafc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cafc8:
    // 0x1cafc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cafc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1cafcc:
    // 0x1cafcc: 0xc0729fa  jal         func_1CA7E8
label_1cafd0:
    if (ctx->pc == 0x1CAFD0u) {
        ctx->pc = 0x1CAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFCCu;
        // 0x1cafd0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAFD4u;
        goto label_1cafd4;
    }
    ctx->pc = 0x1CAFCCu;
    SET_GPR_U32(ctx, 31, 0x1CAFD4u);
    ctx->pc = 0x1CAFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFCCu;
    // 0x1cafd0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CAFCCu, 0x1CAFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFD4u;
label_1cafd4:
    // 0x1cafd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cafd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cafd8:
    // 0x1cafd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cafd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cafdc:
    // 0x1cafdc: 0xc072c00  jal         func_1CB000
label_1cafe0:
    if (ctx->pc == 0x1CAFE0u) {
        ctx->pc = 0x1CAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFDCu;
        // 0x1cafe0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAFE4u;
        goto label_1cafe4;
    }
    ctx->pc = 0x1CAFDCu;
    SET_GPR_U32(ctx, 31, 0x1CAFE4u);
    ctx->pc = 0x1CAFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFDCu;
    // 0x1cafe0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB000u, 0x1CAFDCu, 0x1CAFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFE4u;
label_1cafe4:
    // 0x1cafe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cafe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cafe8:
    // 0x1cafe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cafe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cafec:
    // 0x1cafec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cafecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1caff0:
    // 0x1caff0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1caff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1caff4:
    // 0x1caff4: 0x8072a00  j           func_1CA800
label_1caff8:
    if (ctx->pc == 0x1CAFF8u) {
        ctx->pc = 0x1CAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFF4u;
        // 0x1caff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAFFCu;
        goto label_1caffc;
    }
    ctx->pc = 0x1CAFF4u;
    ctx->pc = 0x1CAFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFF4u;
    // 0x1caff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAFFCu;
label_1caffc:
    // 0x1caffc: 0x0  nop
    ctx->pc = 0x1caffcu;
    // NOP
}
