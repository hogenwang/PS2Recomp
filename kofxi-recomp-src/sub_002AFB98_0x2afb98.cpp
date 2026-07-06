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

// Function: sub_002AFB98
// Address: 0x2afb98 - 0x2afcd0
void sub_002AFB98_0x2afb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFB98_0x2afb98");
#endif

    switch (ctx->pc) {
        case 0x2afb98u: goto label_2afb98;
        case 0x2afb9cu: goto label_2afb9c;
        case 0x2afba0u: goto label_2afba0;
        case 0x2afba4u: goto label_2afba4;
        case 0x2afba8u: goto label_2afba8;
        case 0x2afbacu: goto label_2afbac;
        case 0x2afbb0u: goto label_2afbb0;
        case 0x2afbb4u: goto label_2afbb4;
        case 0x2afbb8u: goto label_2afbb8;
        case 0x2afbbcu: goto label_2afbbc;
        case 0x2afbc0u: goto label_2afbc0;
        case 0x2afbc4u: goto label_2afbc4;
        case 0x2afbc8u: goto label_2afbc8;
        case 0x2afbccu: goto label_2afbcc;
        case 0x2afbd0u: goto label_2afbd0;
        case 0x2afbd4u: goto label_2afbd4;
        case 0x2afbd8u: goto label_2afbd8;
        case 0x2afbdcu: goto label_2afbdc;
        case 0x2afbe0u: goto label_2afbe0;
        case 0x2afbe4u: goto label_2afbe4;
        case 0x2afbe8u: goto label_2afbe8;
        case 0x2afbecu: goto label_2afbec;
        case 0x2afbf0u: goto label_2afbf0;
        case 0x2afbf4u: goto label_2afbf4;
        case 0x2afbf8u: goto label_2afbf8;
        case 0x2afbfcu: goto label_2afbfc;
        case 0x2afc00u: goto label_2afc00;
        case 0x2afc04u: goto label_2afc04;
        case 0x2afc08u: goto label_2afc08;
        case 0x2afc0cu: goto label_2afc0c;
        case 0x2afc10u: goto label_2afc10;
        case 0x2afc14u: goto label_2afc14;
        case 0x2afc18u: goto label_2afc18;
        case 0x2afc1cu: goto label_2afc1c;
        case 0x2afc20u: goto label_2afc20;
        case 0x2afc24u: goto label_2afc24;
        case 0x2afc28u: goto label_2afc28;
        case 0x2afc2cu: goto label_2afc2c;
        case 0x2afc30u: goto label_2afc30;
        case 0x2afc34u: goto label_2afc34;
        case 0x2afc38u: goto label_2afc38;
        case 0x2afc3cu: goto label_2afc3c;
        case 0x2afc40u: goto label_2afc40;
        case 0x2afc44u: goto label_2afc44;
        case 0x2afc48u: goto label_2afc48;
        case 0x2afc4cu: goto label_2afc4c;
        case 0x2afc50u: goto label_2afc50;
        case 0x2afc54u: goto label_2afc54;
        case 0x2afc58u: goto label_2afc58;
        case 0x2afc5cu: goto label_2afc5c;
        case 0x2afc60u: goto label_2afc60;
        case 0x2afc64u: goto label_2afc64;
        case 0x2afc68u: goto label_2afc68;
        case 0x2afc6cu: goto label_2afc6c;
        case 0x2afc70u: goto label_2afc70;
        case 0x2afc74u: goto label_2afc74;
        case 0x2afc78u: goto label_2afc78;
        case 0x2afc7cu: goto label_2afc7c;
        case 0x2afc80u: goto label_2afc80;
        case 0x2afc84u: goto label_2afc84;
        case 0x2afc88u: goto label_2afc88;
        case 0x2afc8cu: goto label_2afc8c;
        case 0x2afc90u: goto label_2afc90;
        case 0x2afc94u: goto label_2afc94;
        case 0x2afc98u: goto label_2afc98;
        case 0x2afc9cu: goto label_2afc9c;
        case 0x2afca0u: goto label_2afca0;
        case 0x2afca4u: goto label_2afca4;
        case 0x2afca8u: goto label_2afca8;
        case 0x2afcacu: goto label_2afcac;
        case 0x2afcb0u: goto label_2afcb0;
        case 0x2afcb4u: goto label_2afcb4;
        case 0x2afcb8u: goto label_2afcb8;
        case 0x2afcbcu: goto label_2afcbc;
        case 0x2afcc0u: goto label_2afcc0;
        case 0x2afcc4u: goto label_2afcc4;
        case 0x2afcc8u: goto label_2afcc8;
        case 0x2afcccu: goto label_2afccc;
        default: break;
    }

    ctx->pc = 0x2afb98u;

label_2afb98:
    // 0x2afb98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2afb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2afb9c:
    // 0x2afb9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2afb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2afba0:
    // 0x2afba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2afba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2afba4:
    // 0x2afba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2afba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2afba8:
    // 0x2afba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2afba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2afbac:
    // 0x2afbac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2afbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2afbb0:
    // 0x2afbb0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2afbb4:
    if (ctx->pc == 0x2AFBB4u) {
        ctx->pc = 0x2AFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBB0u;
        // 0x2afbb4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBB8u;
        goto label_2afbb8;
    }
    ctx->pc = 0x2AFBB0u;
    {
        const bool branch_taken_0x2afbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBB0u;
        // 0x2afbb4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afbb0) {
            ctx->pc = 0x2AFBD8u;
            goto label_2afbd8;
        }
    }
    ctx->pc = 0x2AFBB8u;
label_2afbb8:
    // 0x2afbb8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2afbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2afbbc:
    // 0x2afbbc: 0x240500a5  addiu       $a1, $zero, 0xA5
    ctx->pc = 0x2afbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
label_2afbc0:
    // 0x2afbc0: 0x240600bc  addiu       $a2, $zero, 0xBC
    ctx->pc = 0x2afbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_2afbc4:
    // 0x2afbc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2afbc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afbc8:
    // 0x2afbc8: 0xc0a5648  jal         func_295920
label_2afbcc:
    if (ctx->pc == 0x2AFBCCu) {
        ctx->pc = 0x2AFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBC8u;
        // 0x2afbcc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBD0u;
        goto label_2afbd0;
    }
    ctx->pc = 0x2AFBC8u;
    SET_GPR_U32(ctx, 31, 0x2AFBD0u);
    ctx->pc = 0x2AFBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBC8u;
    // 0x2afbcc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AFBC8u, 0x2AFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBD0u;
label_2afbd0:
    // 0x2afbd0: 0x10000039  b           . + 4 + (0x39 << 2)
label_2afbd4:
    if (ctx->pc == 0x2AFBD4u) {
        ctx->pc = 0x2AFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBD0u;
        // 0x2afbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBD8u;
        goto label_2afbd8;
    }
    ctx->pc = 0x2AFBD0u;
    {
        const bool branch_taken_0x2afbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBD0u;
        // 0x2afbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afbd0) {
            ctx->pc = 0x2AFCB8u;
            goto label_2afcb8;
        }
    }
    ctx->pc = 0x2AFBD8u;
label_2afbd8:
    // 0x2afbd8: 0xc0aee84  jal         func_2BBA10
label_2afbdc:
    if (ctx->pc == 0x2AFBDCu) {
        ctx->pc = 0x2AFBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBD8u;
        // 0x2afbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBE0u;
        goto label_2afbe0;
    }
    ctx->pc = 0x2AFBD8u;
    SET_GPR_U32(ctx, 31, 0x2AFBE0u);
    ctx->pc = 0x2AFBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBD8u;
    // 0x2afbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBA10u, 0x2AFBD8u, 0x2AFBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBE0u;
label_2afbe0:
    // 0x2afbe0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2afbe4:
    if (ctx->pc == 0x2AFBE4u) {
        ctx->pc = 0x2AFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBE0u;
        // 0x2afbe4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBE8u;
        goto label_2afbe8;
    }
    ctx->pc = 0x2AFBE0u;
    {
        const bool branch_taken_0x2afbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afbe0) {
            ctx->pc = 0x2AFBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFBE0u;
            // 0x2afbe4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFBF8u;
            goto label_2afbf8;
        }
    }
    ctx->pc = 0x2AFBE8u;
label_2afbe8:
    // 0x2afbe8: 0xc0aed46  jal         func_2BB518
label_2afbec:
    if (ctx->pc == 0x2AFBECu) {
        ctx->pc = 0x2AFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBE8u;
        // 0x2afbec: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFBF0u;
        goto label_2afbf0;
    }
    ctx->pc = 0x2AFBE8u;
    SET_GPR_U32(ctx, 31, 0x2AFBF0u);
    ctx->pc = 0x2AFBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBE8u;
    // 0x2afbec: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB518u, 0x2AFBE8u, 0x2AFBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBF0u;
label_2afbf0:
    // 0x2afbf0: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x2afbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_2afbf4:
    // 0x2afbf4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2afbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2afbf8:
    // 0x2afbf8: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x2afbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_2afbfc:
    // 0x2afbfc: 0x24025000  addiu       $v0, $zero, 0x5000
    ctx->pc = 0x2afbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
label_2afc00:
    // 0x2afc00: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2afc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_2afc04:
    // 0x2afc04: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2afc04u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_2afc08:
    // 0x2afc08: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2afc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_2afc0c:
    // 0x2afc0c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2afc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2afc10:
    // 0x2afc10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2afc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afc14:
    // 0x2afc14: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2afc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2afc18:
    // 0x2afc18: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x2afc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2afc1c:
    // 0x2afc1c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2afc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2afc20:
    // 0x2afc20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2afc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2afc24:
    // 0x2afc24: 0x8e0600dc  lw          $a2, 0xDC($s0)
    ctx->pc = 0x2afc24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2afc28:
    // 0x2afc28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2afc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2afc2c:
    // 0x2afc2c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x2afc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_2afc30:
    // 0x2afc30: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x2afc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_2afc34:
    // 0x2afc34: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x2afc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
label_2afc38:
    // 0x2afc38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2afc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2afc3c:
    // 0x2afc3c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2afc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2afc40:
    // 0x2afc40: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x2afc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_2afc44:
    // 0x2afc44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2afc48:
    if (ctx->pc == 0x2AFC48u) {
        ctx->pc = 0x2AFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC44u;
        // 0x2afc48: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC4Cu;
        goto label_2afc4c;
    }
    ctx->pc = 0x2AFC44u;
    {
        const bool branch_taken_0x2afc44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC44u;
        // 0x2afc48: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc44) {
            ctx->pc = 0x2AFC58u;
            goto label_2afc58;
        }
    }
    ctx->pc = 0x2AFC4Cu;
label_2afc4c:
    // 0x2afc4c: 0xc0a32ca  jal         func_28CB28
label_2afc50:
    if (ctx->pc == 0x2AFC50u) {
        ctx->pc = 0x2AFC54u;
        goto label_2afc54;
    }
    ctx->pc = 0x2AFC4Cu;
    SET_GPR_U32(ctx, 31, 0x2AFC54u);
    ctx->pc = 0x28CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB28u, 0x2AFC4Cu, 0x2AFC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC54u;
label_2afc54:
    // 0x2afc54: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2afc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_2afc58:
    // 0x2afc58: 0xc0ac562  jal         func_2B1588
label_2afc5c:
    if (ctx->pc == 0x2AFC5Cu) {
        ctx->pc = 0x2AFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC58u;
        // 0x2afc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC60u;
        goto label_2afc60;
    }
    ctx->pc = 0x2AFC58u;
    SET_GPR_U32(ctx, 31, 0x2AFC60u);
    ctx->pc = 0x2AFC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC58u;
    // 0x2afc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1588u, 0x2AFC58u, 0x2AFC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC60u;
label_2afc60:
    // 0x2afc60: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
label_2afc64:
    if (ctx->pc == 0x2AFC64u) {
        ctx->pc = 0x2AFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC60u;
        // 0x2afc64: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC68u;
        goto label_2afc68;
    }
    ctx->pc = 0x2AFC60u;
    {
        const bool branch_taken_0x2afc60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC60u;
        // 0x2afc64: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc60) {
            ctx->pc = 0x2AFCA4u;
            goto label_2afca4;
        }
    }
    ctx->pc = 0x2AFC68u;
label_2afc68:
    // 0x2afc68: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2afc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2afc6c:
    // 0x2afc6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2afc70:
    if (ctx->pc == 0x2AFC70u) {
        ctx->pc = 0x2AFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC6Cu;
        // 0x2afc70: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC74u;
        goto label_2afc74;
    }
    ctx->pc = 0x2AFC6Cu;
    {
        const bool branch_taken_0x2afc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC6Cu;
        // 0x2afc70: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc6c) {
            ctx->pc = 0x2AFC84u;
            goto label_2afc84;
        }
    }
    ctx->pc = 0x2AFC74u;
label_2afc74:
    // 0x2afc74: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2afc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2afc78:
    // 0x2afc78: 0x244201b8  addiu       $v0, $v0, 0x1B8
    ctx->pc = 0x2afc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
label_2afc7c:
    // 0x2afc7c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_2afc80:
    if (ctx->pc == 0x2AFC80u) {
        ctx->pc = 0x2AFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC7Cu;
        // 0x2afc80: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC84u;
        goto label_2afc84;
    }
    ctx->pc = 0x2AFC7Cu;
    {
        const bool branch_taken_0x2afc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2afc7c) {
            ctx->pc = 0x2AFC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFC7Cu;
            // 0x2afc80: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFCA8u;
            goto label_2afca8;
        }
    }
    ctx->pc = 0x2AFC84u;
label_2afc84:
    // 0x2afc84: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2afc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2afc88:
    // 0x2afc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2afc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2afc8c:
    // 0x2afc8c: 0xc0ac47a  jal         func_2B11E8
label_2afc90:
    if (ctx->pc == 0x2AFC90u) {
        ctx->pc = 0x2AFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC8Cu;
        // 0x2afc90: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC94u;
        goto label_2afc94;
    }
    ctx->pc = 0x2AFC8Cu;
    SET_GPR_U32(ctx, 31, 0x2AFC94u);
    ctx->pc = 0x2AFC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC8Cu;
    // 0x2afc90: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B11E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B11E8u, 0x2AFC8Cu, 0x2AFC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC94u;
label_2afc94:
    // 0x2afc94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2afc98:
    if (ctx->pc == 0x2AFC98u) {
        ctx->pc = 0x2AFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC94u;
        // 0x2afc98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFC9Cu;
        goto label_2afc9c;
    }
    ctx->pc = 0x2AFC94u;
    {
        const bool branch_taken_0x2afc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC94u;
        // 0x2afc98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc94) {
            ctx->pc = 0x2AFCB8u;
            goto label_2afcb8;
        }
    }
    ctx->pc = 0x2AFC9Cu;
label_2afc9c:
    // 0x2afc9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2afca0:
    if (ctx->pc == 0x2AFCA0u) {
        ctx->pc = 0x2AFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC9Cu;
        // 0x2afca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFCA4u;
        goto label_2afca4;
    }
    ctx->pc = 0x2AFC9Cu;
    {
        const bool branch_taken_0x2afc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC9Cu;
        // 0x2afca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc9c) {
            ctx->pc = 0x2AFCB8u;
            goto label_2afcb8;
        }
    }
    ctx->pc = 0x2AFCA4u;
label_2afca4:
    // 0x2afca4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2afca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2afca8:
    // 0x2afca8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2afca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2afcac:
    // 0x2afcac: 0x40f809  jalr        $v0
label_2afcb0:
    if (ctx->pc == 0x2AFCB0u) {
        ctx->pc = 0x2AFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCACu;
        // 0x2afcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFCB4u;
        goto label_2afcb4;
    }
    ctx->pc = 0x2AFCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AFCB4u);
        ctx->pc = 0x2AFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCACu;
        // 0x2afcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFCACu, 0x2AFCB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AFCB4u;
label_2afcb4:
    // 0x2afcb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2afcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afcb8:
    // 0x2afcb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2afcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2afcbc:
    // 0x2afcbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2afcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2afcc0:
    // 0x2afcc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2afcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2afcc4:
    // 0x2afcc4: 0x3e00008  jr          $ra
label_2afcc8:
    if (ctx->pc == 0x2AFCC8u) {
        ctx->pc = 0x2AFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCC4u;
        // 0x2afcc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFCCCu;
        goto label_2afccc;
    }
    ctx->pc = 0x2AFCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCC4u;
        // 0x2afcc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFCCCu;
label_2afccc:
    // 0x2afccc: 0x0  nop
    ctx->pc = 0x2afcccu;
    // NOP
}
