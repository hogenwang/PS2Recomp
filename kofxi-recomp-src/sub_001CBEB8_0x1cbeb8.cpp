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

// Function: sub_001CBEB8
// Address: 0x1cbeb8 - 0x1cbfb0
void sub_001CBEB8_0x1cbeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBEB8_0x1cbeb8");
#endif

    switch (ctx->pc) {
        case 0x1cbeb8u: goto label_1cbeb8;
        case 0x1cbebcu: goto label_1cbebc;
        case 0x1cbec0u: goto label_1cbec0;
        case 0x1cbec4u: goto label_1cbec4;
        case 0x1cbec8u: goto label_1cbec8;
        case 0x1cbeccu: goto label_1cbecc;
        case 0x1cbed0u: goto label_1cbed0;
        case 0x1cbed4u: goto label_1cbed4;
        case 0x1cbed8u: goto label_1cbed8;
        case 0x1cbedcu: goto label_1cbedc;
        case 0x1cbee0u: goto label_1cbee0;
        case 0x1cbee4u: goto label_1cbee4;
        case 0x1cbee8u: goto label_1cbee8;
        case 0x1cbeecu: goto label_1cbeec;
        case 0x1cbef0u: goto label_1cbef0;
        case 0x1cbef4u: goto label_1cbef4;
        case 0x1cbef8u: goto label_1cbef8;
        case 0x1cbefcu: goto label_1cbefc;
        case 0x1cbf00u: goto label_1cbf00;
        case 0x1cbf04u: goto label_1cbf04;
        case 0x1cbf08u: goto label_1cbf08;
        case 0x1cbf0cu: goto label_1cbf0c;
        case 0x1cbf10u: goto label_1cbf10;
        case 0x1cbf14u: goto label_1cbf14;
        case 0x1cbf18u: goto label_1cbf18;
        case 0x1cbf1cu: goto label_1cbf1c;
        case 0x1cbf20u: goto label_1cbf20;
        case 0x1cbf24u: goto label_1cbf24;
        case 0x1cbf28u: goto label_1cbf28;
        case 0x1cbf2cu: goto label_1cbf2c;
        case 0x1cbf30u: goto label_1cbf30;
        case 0x1cbf34u: goto label_1cbf34;
        case 0x1cbf38u: goto label_1cbf38;
        case 0x1cbf3cu: goto label_1cbf3c;
        case 0x1cbf40u: goto label_1cbf40;
        case 0x1cbf44u: goto label_1cbf44;
        case 0x1cbf48u: goto label_1cbf48;
        case 0x1cbf4cu: goto label_1cbf4c;
        case 0x1cbf50u: goto label_1cbf50;
        case 0x1cbf54u: goto label_1cbf54;
        case 0x1cbf58u: goto label_1cbf58;
        case 0x1cbf5cu: goto label_1cbf5c;
        case 0x1cbf60u: goto label_1cbf60;
        case 0x1cbf64u: goto label_1cbf64;
        case 0x1cbf68u: goto label_1cbf68;
        case 0x1cbf6cu: goto label_1cbf6c;
        case 0x1cbf70u: goto label_1cbf70;
        case 0x1cbf74u: goto label_1cbf74;
        case 0x1cbf78u: goto label_1cbf78;
        case 0x1cbf7cu: goto label_1cbf7c;
        case 0x1cbf80u: goto label_1cbf80;
        case 0x1cbf84u: goto label_1cbf84;
        case 0x1cbf88u: goto label_1cbf88;
        case 0x1cbf8cu: goto label_1cbf8c;
        case 0x1cbf90u: goto label_1cbf90;
        case 0x1cbf94u: goto label_1cbf94;
        case 0x1cbf98u: goto label_1cbf98;
        case 0x1cbf9cu: goto label_1cbf9c;
        case 0x1cbfa0u: goto label_1cbfa0;
        case 0x1cbfa4u: goto label_1cbfa4;
        case 0x1cbfa8u: goto label_1cbfa8;
        case 0x1cbfacu: goto label_1cbfac;
        default: break;
    }

    ctx->pc = 0x1cbeb8u;

label_1cbeb8:
    // 0x1cbeb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cbebc:
    // 0x1cbebc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cbec0:
    // 0x1cbec0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cbec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cbec4:
    // 0x1cbec4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cbec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cbec8:
    // 0x1cbec8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1cbec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cbecc:
    // 0x1cbecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cbed0:
    // 0x1cbed0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1cbed4:
    if (ctx->pc == 0x1CBED4u) {
        ctx->pc = 0x1CBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBED0u;
        // 0x1cbed4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBED8u;
        goto label_1cbed8;
    }
    ctx->pc = 0x1CBED0u;
    {
        const bool branch_taken_0x1cbed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBED0u;
        // 0x1cbed4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbed0) {
            ctx->pc = 0x1CBEF0u;
            goto label_1cbef0;
        }
    }
    ctx->pc = 0x1CBED8u;
label_1cbed8:
    // 0x1cbed8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cbed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cbedc:
    // 0x1cbedc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cbee0:
    // 0x1cbee0: 0x2484bb20  addiu       $a0, $a0, -0x44E0
    ctx->pc = 0x1cbee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949664));
label_1cbee4:
    // 0x1cbee4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cbee8:
    if (ctx->pc == 0x1CBEE8u) {
        ctx->pc = 0x1CBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEE4u;
        // 0x1cbee8: 0x24a5b9c8  addiu       $a1, $a1, -0x4638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEECu;
        goto label_1cbeec;
    }
    ctx->pc = 0x1CBEE4u;
    {
        const bool branch_taken_0x1cbee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEE4u;
        // 0x1cbee8: 0x24a5b9c8  addiu       $a1, $a1, -0x4638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbee4) {
            ctx->pc = 0x1CBF0Cu;
            goto label_1cbf0c;
        }
    }
    ctx->pc = 0x1CBEECu;
label_1cbeec:
    // 0x1cbeec: 0x0  nop
    ctx->pc = 0x1cbeecu;
    // NOP
label_1cbef0:
    // 0x1cbef0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1cbef4:
    // 0x1cbef4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1cbef8:
    if (ctx->pc == 0x1CBEF8u) {
        ctx->pc = 0x1CBEFCu;
        goto label_1cbefc;
    }
    ctx->pc = 0x1CBEF4u;
    {
        const bool branch_taken_0x1cbef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbef4) {
            ctx->pc = 0x1CBF20u;
            goto label_1cbf20;
        }
    }
    ctx->pc = 0x1CBEFCu;
label_1cbefc:
    // 0x1cbefc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cbefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cbf00:
    // 0x1cbf00: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cbf00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cbf04:
    // 0x1cbf04: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x1cbf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
label_1cbf08:
    // 0x1cbf08: 0x24a5ba48  addiu       $a1, $a1, -0x45B8
    ctx->pc = 0x1cbf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949448));
label_1cbf0c:
    // 0x1cbf0c: 0xc072c9a  jal         func_1CB268
label_1cbf10:
    if (ctx->pc == 0x1CBF10u) {
        ctx->pc = 0x1CBF14u;
        goto label_1cbf14;
    }
    ctx->pc = 0x1CBF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF14u);
    ctx->pc = 0x1CB268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB268u, 0x1CBF0Cu, 0x1CBF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF14u;
label_1cbf14:
    // 0x1cbf14: 0x10000020  b           . + 4 + (0x20 << 2)
label_1cbf18:
    if (ctx->pc == 0x1CBF18u) {
        ctx->pc = 0x1CBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF14u;
        // 0x1cbf18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF1Cu;
        goto label_1cbf1c;
    }
    ctx->pc = 0x1CBF14u;
    {
        const bool branch_taken_0x1cbf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF14u;
        // 0x1cbf18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf14) {
            ctx->pc = 0x1CBF98u;
            goto label_1cbf98;
        }
    }
    ctx->pc = 0x1CBF1Cu;
label_1cbf1c:
    // 0x1cbf1c: 0x0  nop
    ctx->pc = 0x1cbf1cu;
    // NOP
label_1cbf20:
    // 0x1cbf20: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_1cbf24:
    if (ctx->pc == 0x1CBF24u) {
        ctx->pc = 0x1CBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF20u;
        // 0x1cbf24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF28u;
        goto label_1cbf28;
    }
    ctx->pc = 0x1CBF20u;
    {
        const bool branch_taken_0x1cbf20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF20u;
        // 0x1cbf24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf20) {
            ctx->pc = 0x1CBF40u;
            goto label_1cbf40;
        }
    }
    ctx->pc = 0x1CBF28u;
label_1cbf28:
    // 0x1cbf28: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1cbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1cbf2c:
    // 0x1cbf2c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1cbf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1cbf30:
    // 0x1cbf30: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1cbf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1cbf34:
    // 0x1cbf34: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1cbf34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cbf38:
    // 0x1cbf38: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cbf3c:
    if (ctx->pc == 0x1CBF3Cu) {
        ctx->pc = 0x1CBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF38u;
        // 0x1cbf3c: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF40u;
        goto label_1cbf40;
    }
    ctx->pc = 0x1CBF38u;
    {
        const bool branch_taken_0x1cbf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF38u;
        // 0x1cbf3c: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf38) {
            ctx->pc = 0x1CBF5Cu;
            goto label_1cbf5c;
        }
    }
    ctx->pc = 0x1CBF40u;
label_1cbf40:
    // 0x1cbf40: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
label_1cbf44:
    if (ctx->pc == 0x1CBF44u) {
        ctx->pc = 0x1CBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF40u;
        // 0x1cbf44: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF48u;
        goto label_1cbf48;
    }
    ctx->pc = 0x1CBF40u;
    {
        const bool branch_taken_0x1cbf40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbf40) {
            ctx->pc = 0x1CBF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBF40u;
            // 0x1cbf44: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBF78u;
            goto label_1cbf78;
        }
    }
    ctx->pc = 0x1CBF48u;
label_1cbf48:
    // 0x1cbf48: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1cbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1cbf4c:
    // 0x1cbf4c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1cbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1cbf50:
    // 0x1cbf50: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1cbf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1cbf54:
    // 0x1cbf54: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1cbf54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cbf58:
    // 0x1cbf58: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cbf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cbf5c:
    // 0x1cbf5c: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x1cbf5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cbf60:
    // 0x1cbf60: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x1cbf60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1cbf64:
    // 0x1cbf64: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x1cbf64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_1cbf68:
    // 0x1cbf68: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1cbf68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1cbf6c:
    // 0x1cbf6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cbf70:
    if (ctx->pc == 0x1CBF70u) {
        ctx->pc = 0x1CBF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF6Cu;
        // 0x1cbf70: 0x223800a  movz        $s0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF74u;
        goto label_1cbf74;
    }
    ctx->pc = 0x1CBF6Cu;
    {
        const bool branch_taken_0x1cbf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF6Cu;
        // 0x1cbf70: 0x223800a  movz        $s0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf6c) {
            ctx->pc = 0x1CBF8Cu;
            goto label_1cbf8c;
        }
    }
    ctx->pc = 0x1CBF74u;
label_1cbf74:
    // 0x1cbf74: 0x0  nop
    ctx->pc = 0x1cbf74u;
    // NOP
label_1cbf78:
    // 0x1cbf78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cbf7c:
    if (ctx->pc == 0x1CBF7Cu) {
        ctx->pc = 0x1CBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF78u;
        // 0x1cbf7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF80u;
        goto label_1cbf80;
    }
    ctx->pc = 0x1CBF78u;
    {
        const bool branch_taken_0x1cbf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF78u;
        // 0x1cbf7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf78) {
            ctx->pc = 0x1CBF8Cu;
            goto label_1cbf8c;
        }
    }
    ctx->pc = 0x1CBF80u;
label_1cbf80:
    // 0x1cbf80: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1cbf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1cbf84:
    // 0x1cbf84: 0x40f809  jalr        $v0
label_1cbf88:
    if (ctx->pc == 0x1CBF88u) {
        ctx->pc = 0x1CBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF84u;
        // 0x1cbf88: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF8Cu;
        goto label_1cbf8c;
    }
    ctx->pc = 0x1CBF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBF8Cu);
        ctx->pc = 0x1CBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF84u;
        // 0x1cbf88: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBF84u, 0x1CBF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBF8Cu;
label_1cbf8c:
    // 0x1cbf8c: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x1cbf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_1cbf90:
    // 0x1cbf90: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1cbf90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_1cbf94:
    // 0x1cbf94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1cbf94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cbf98:
    // 0x1cbf98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbf98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbf9c:
    // 0x1cbf9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbf9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbfa0:
    // 0x1cbfa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cbfa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbfa4:
    // 0x1cbfa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cbfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cbfa8:
    // 0x1cbfa8: 0x3e00008  jr          $ra
label_1cbfac:
    if (ctx->pc == 0x1CBFACu) {
        ctx->pc = 0x1CBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFA8u;
        // 0x1cbfac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBFB0u;
        goto label_fallthrough_0x1cbfa8;
    }
    ctx->pc = 0x1CBFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFA8u;
        // 0x1cbfac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cbfa8:
    ctx->pc = 0x1CBFB0u;
}
