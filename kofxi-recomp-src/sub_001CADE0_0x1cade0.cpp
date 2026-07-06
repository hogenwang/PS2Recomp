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

// Function: sub_001CADE0
// Address: 0x1cade0 - 0x1caf10
void sub_001CADE0_0x1cade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CADE0_0x1cade0");
#endif

    switch (ctx->pc) {
        case 0x1cade0u: goto label_1cade0;
        case 0x1cade4u: goto label_1cade4;
        case 0x1cade8u: goto label_1cade8;
        case 0x1cadecu: goto label_1cadec;
        case 0x1cadf0u: goto label_1cadf0;
        case 0x1cadf4u: goto label_1cadf4;
        case 0x1cadf8u: goto label_1cadf8;
        case 0x1cadfcu: goto label_1cadfc;
        case 0x1cae00u: goto label_1cae00;
        case 0x1cae04u: goto label_1cae04;
        case 0x1cae08u: goto label_1cae08;
        case 0x1cae0cu: goto label_1cae0c;
        case 0x1cae10u: goto label_1cae10;
        case 0x1cae14u: goto label_1cae14;
        case 0x1cae18u: goto label_1cae18;
        case 0x1cae1cu: goto label_1cae1c;
        case 0x1cae20u: goto label_1cae20;
        case 0x1cae24u: goto label_1cae24;
        case 0x1cae28u: goto label_1cae28;
        case 0x1cae2cu: goto label_1cae2c;
        case 0x1cae30u: goto label_1cae30;
        case 0x1cae34u: goto label_1cae34;
        case 0x1cae38u: goto label_1cae38;
        case 0x1cae3cu: goto label_1cae3c;
        case 0x1cae40u: goto label_1cae40;
        case 0x1cae44u: goto label_1cae44;
        case 0x1cae48u: goto label_1cae48;
        case 0x1cae4cu: goto label_1cae4c;
        case 0x1cae50u: goto label_1cae50;
        case 0x1cae54u: goto label_1cae54;
        case 0x1cae58u: goto label_1cae58;
        case 0x1cae5cu: goto label_1cae5c;
        case 0x1cae60u: goto label_1cae60;
        case 0x1cae64u: goto label_1cae64;
        case 0x1cae68u: goto label_1cae68;
        case 0x1cae6cu: goto label_1cae6c;
        case 0x1cae70u: goto label_1cae70;
        case 0x1cae74u: goto label_1cae74;
        case 0x1cae78u: goto label_1cae78;
        case 0x1cae7cu: goto label_1cae7c;
        case 0x1cae80u: goto label_1cae80;
        case 0x1cae84u: goto label_1cae84;
        case 0x1cae88u: goto label_1cae88;
        case 0x1cae8cu: goto label_1cae8c;
        case 0x1cae90u: goto label_1cae90;
        case 0x1cae94u: goto label_1cae94;
        case 0x1cae98u: goto label_1cae98;
        case 0x1cae9cu: goto label_1cae9c;
        case 0x1caea0u: goto label_1caea0;
        case 0x1caea4u: goto label_1caea4;
        case 0x1caea8u: goto label_1caea8;
        case 0x1caeacu: goto label_1caeac;
        case 0x1caeb0u: goto label_1caeb0;
        case 0x1caeb4u: goto label_1caeb4;
        case 0x1caeb8u: goto label_1caeb8;
        case 0x1caebcu: goto label_1caebc;
        case 0x1caec0u: goto label_1caec0;
        case 0x1caec4u: goto label_1caec4;
        case 0x1caec8u: goto label_1caec8;
        case 0x1caeccu: goto label_1caecc;
        case 0x1caed0u: goto label_1caed0;
        case 0x1caed4u: goto label_1caed4;
        case 0x1caed8u: goto label_1caed8;
        case 0x1caedcu: goto label_1caedc;
        case 0x1caee0u: goto label_1caee0;
        case 0x1caee4u: goto label_1caee4;
        case 0x1caee8u: goto label_1caee8;
        case 0x1caeecu: goto label_1caeec;
        case 0x1caef0u: goto label_1caef0;
        case 0x1caef4u: goto label_1caef4;
        case 0x1caef8u: goto label_1caef8;
        case 0x1caefcu: goto label_1caefc;
        case 0x1caf00u: goto label_1caf00;
        case 0x1caf04u: goto label_1caf04;
        case 0x1caf08u: goto label_1caf08;
        case 0x1caf0cu: goto label_1caf0c;
        default: break;
    }

    ctx->pc = 0x1cade0u;

label_1cade0:
    // 0x1cade0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cade4:
    // 0x1cade4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1cade4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cade8:
    // 0x1cade8: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_1cadec:
    if (ctx->pc == 0x1CADECu) {
        ctx->pc = 0x1CADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADE8u;
        // 0x1cadec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CADF0u;
        goto label_1cadf0;
    }
    ctx->pc = 0x1CADE8u;
    {
        const bool branch_taken_0x1cade8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADE8u;
        // 0x1cadec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cade8) {
            ctx->pc = 0x1CAE10u;
            goto label_1cae10;
        }
    }
    ctx->pc = 0x1CADF0u;
label_1cadf0:
    // 0x1cadf0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cadf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cadf4:
    // 0x1cadf4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cadf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cadf8:
    // 0x1cadf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cadf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cadfc:
    // 0x1cadfc: 0x2484b918  addiu       $a0, $a0, -0x46E8
    ctx->pc = 0x1cadfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949144));
label_1cae00:
    // 0x1cae00: 0x24a5b868  addiu       $a1, $a1, -0x4798
    ctx->pc = 0x1cae00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
label_1cae04:
    // 0x1cae04: 0x8072a14  j           func_1CA850
label_1cae08:
    if (ctx->pc == 0x1CAE08u) {
        ctx->pc = 0x1CAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE04u;
        // 0x1cae08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAE0Cu;
        goto label_1cae0c;
    }
    ctx->pc = 0x1CAE04u;
    ctx->pc = 0x1CAE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE04u;
    // 0x1cae08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAE0Cu;
label_1cae0c:
    // 0x1cae0c: 0x0  nop
    ctx->pc = 0x1cae0cu;
    // NOP
label_1cae10:
    // 0x1cae10: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1cae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1cae14:
    // 0x1cae14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1cae18:
    if (ctx->pc == 0x1CAE18u) {
        ctx->pc = 0x1CAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE14u;
        // 0x1cae18: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAE1Cu;
        goto label_1cae1c;
    }
    ctx->pc = 0x1CAE14u;
    {
        const bool branch_taken_0x1cae14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE14u;
        // 0x1cae18: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae14) {
            ctx->pc = 0x1CAE38u;
            goto label_1cae38;
        }
    }
    ctx->pc = 0x1CAE1Cu;
label_1cae1c:
    // 0x1cae1c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cae20:
    // 0x1cae20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cae20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cae24:
    // 0x1cae24: 0x2484b928  addiu       $a0, $a0, -0x46D8
    ctx->pc = 0x1cae24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949160));
label_1cae28:
    // 0x1cae28: 0x24a5b898  addiu       $a1, $a1, -0x4768
    ctx->pc = 0x1cae28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
label_1cae2c:
    // 0x1cae2c: 0x8072a14  j           func_1CA850
label_1cae30:
    if (ctx->pc == 0x1CAE30u) {
        ctx->pc = 0x1CAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE2Cu;
        // 0x1cae30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAE34u;
        goto label_1cae34;
    }
    ctx->pc = 0x1CAE2Cu;
    ctx->pc = 0x1CAE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE2Cu;
    // 0x1cae30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAE34u;
label_1cae34:
    // 0x1cae34: 0x0  nop
    ctx->pc = 0x1cae34u;
    // NOP
label_1cae38:
    // 0x1cae38: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_1cae3c:
    if (ctx->pc == 0x1CAE3Cu) {
        ctx->pc = 0x1CAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE38u;
        // 0x1cae3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAE40u;
        goto label_1cae40;
    }
    ctx->pc = 0x1CAE38u;
    {
        const bool branch_taken_0x1cae38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE38u;
        // 0x1cae3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae38) {
            ctx->pc = 0x1CAE50u;
            goto label_1cae50;
        }
    }
    ctx->pc = 0x1CAE40u;
label_1cae40:
    // 0x1cae40: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1cae40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1cae44:
    // 0x1cae44: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1cae48:
    if (ctx->pc == 0x1CAE48u) {
        ctx->pc = 0x1CAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE44u;
        // 0x1cae48: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAE4Cu;
        goto label_1cae4c;
    }
    ctx->pc = 0x1CAE44u;
    {
        const bool branch_taken_0x1cae44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE44u;
        // 0x1cae48: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae44) {
            ctx->pc = 0x1CAEB0u;
            goto label_1caeb0;
        }
    }
    ctx->pc = 0x1CAE4Cu;
label_1cae4c:
    // 0x1cae4c: 0x0  nop
    ctx->pc = 0x1cae4cu;
    // NOP
label_1cae50:
    // 0x1cae50: 0x54a20011  bnel        $a1, $v0, . + 4 + (0x11 << 2)
label_1cae54:
    if (ctx->pc == 0x1CAE54u) {
        ctx->pc = 0x1CAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE50u;
        // 0x1cae54: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAE58u;
        goto label_1cae58;
    }
    ctx->pc = 0x1CAE50u;
    {
        const bool branch_taken_0x1cae50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cae50) {
            ctx->pc = 0x1CAE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAE50u;
            // 0x1cae54: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAE98u;
            goto label_1cae98;
        }
    }
    ctx->pc = 0x1CAE58u;
label_1cae58:
    // 0x1cae58: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x1cae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1cae5c:
    // 0x1cae5c: 0x8d050014  lw          $a1, 0x14($t0)
    ctx->pc = 0x1cae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_1cae60:
    // 0x1cae60: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1cae60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1cae64:
    // 0x1cae64: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x1cae64u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_1cae68:
    // 0x1cae68: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1cae68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1cae6c:
    // 0x1cae6c: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x1cae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_1cae70:
    // 0x1cae70: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1cae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1cae74:
    // 0x1cae74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cae78:
    // 0x1cae78: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1cae78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1cae7c:
    // 0x1cae7c: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x1cae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
label_1cae80:
    // 0x1cae80: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1cae80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_1cae84:
    // 0x1cae84: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1cae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1cae88:
    // 0x1cae88: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1cae88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cae8c:
    // 0x1cae8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cae90:
    if (ctx->pc == 0x1CAE90u) {
        ctx->pc = 0x1CAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE8Cu;
        // 0x1cae90: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAE94u;
        goto label_1cae94;
    }
    ctx->pc = 0x1CAE8Cu;
    {
        const bool branch_taken_0x1cae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE8Cu;
        // 0x1cae90: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae8c) {
            ctx->pc = 0x1CAEB0u;
            goto label_1caeb0;
        }
    }
    ctx->pc = 0x1CAE94u;
label_1cae94:
    // 0x1cae94: 0x0  nop
    ctx->pc = 0x1cae94u;
    // NOP
label_1cae98:
    // 0x1cae98: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1cae98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1cae9c:
    // 0x1cae9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1caea0:
    if (ctx->pc == 0x1CAEA0u) {
        ctx->pc = 0x1CAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE9Cu;
        // 0x1caea0: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEA4u;
        goto label_1caea4;
    }
    ctx->pc = 0x1CAE9Cu;
    {
        const bool branch_taken_0x1cae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE9Cu;
        // 0x1caea0: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae9c) {
            ctx->pc = 0x1CAEB0u;
            goto label_1caeb0;
        }
    }
    ctx->pc = 0x1CAEA4u;
label_1caea4:
    // 0x1caea4: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x1caea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_1caea8:
    // 0x1caea8: 0x40f809  jalr        $v0
label_1caeac:
    if (ctx->pc == 0x1CAEACu) {
        ctx->pc = 0x1CAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEA8u;
        // 0x1caeac: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEB0u;
        goto label_1caeb0;
    }
    ctx->pc = 0x1CAEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CAEB0u);
        ctx->pc = 0x1CAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEA8u;
        // 0x1caeac: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAEA8u, 0x1CAEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CAEB0u;
label_1caeb0:
    // 0x1caeb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1caeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1caeb4:
    // 0x1caeb4: 0x3e00008  jr          $ra
label_1caeb8:
    if (ctx->pc == 0x1CAEB8u) {
        ctx->pc = 0x1CAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEB4u;
        // 0x1caeb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEBCu;
        goto label_1caebc;
    }
    ctx->pc = 0x1CAEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEB4u;
        // 0x1caeb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAEBCu;
label_1caebc:
    // 0x1caebc: 0x0  nop
    ctx->pc = 0x1caebcu;
    // NOP
label_1caec0:
    // 0x1caec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1caec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1caec4:
    // 0x1caec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1caec8:
    // 0x1caec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1caec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1caecc:
    // 0x1caecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1caeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1caed0:
    // 0x1caed0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1caed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1caed4:
    // 0x1caed4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1caed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1caed8:
    // 0x1caed8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1caed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1caedc:
    // 0x1caedc: 0xc0729fa  jal         func_1CA7E8
label_1caee0:
    if (ctx->pc == 0x1CAEE0u) {
        ctx->pc = 0x1CAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEDCu;
        // 0x1caee0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEE4u;
        goto label_1caee4;
    }
    ctx->pc = 0x1CAEDCu;
    SET_GPR_U32(ctx, 31, 0x1CAEE4u);
    ctx->pc = 0x1CAEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEDCu;
    // 0x1caee0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CAEDCu, 0x1CAEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEE4u;
label_1caee4:
    // 0x1caee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1caee8:
    // 0x1caee8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1caee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1caeec:
    // 0x1caeec: 0xc072bc4  jal         func_1CAF10
label_1caef0:
    if (ctx->pc == 0x1CAEF0u) {
        ctx->pc = 0x1CAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEECu;
        // 0x1caef0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEF4u;
        goto label_1caef4;
    }
    ctx->pc = 0x1CAEECu;
    SET_GPR_U32(ctx, 31, 0x1CAEF4u);
    ctx->pc = 0x1CAEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEECu;
    // 0x1caef0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAF10u, 0x1CAEECu, 0x1CAEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEF4u;
label_1caef4:
    // 0x1caef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1caef8:
    // 0x1caef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1caef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1caefc:
    // 0x1caefc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1caefcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1caf00:
    // 0x1caf00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1caf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1caf04:
    // 0x1caf04: 0x8072a00  j           func_1CA800
label_1caf08:
    if (ctx->pc == 0x1CAF08u) {
        ctx->pc = 0x1CAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF04u;
        // 0x1caf08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF0Cu;
        goto label_1caf0c;
    }
    ctx->pc = 0x1CAF04u;
    ctx->pc = 0x1CAF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF04u;
    // 0x1caf08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAF0Cu;
label_1caf0c:
    // 0x1caf0c: 0x0  nop
    ctx->pc = 0x1caf0cu;
    // NOP
}
