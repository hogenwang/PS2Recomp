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

// Function: sub_0011CAD0
// Address: 0x11cad0 - 0x11cc68
void sub_0011CAD0_0x11cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CAD0_0x11cad0");
#endif

    switch (ctx->pc) {
        case 0x11cad0u: goto label_11cad0;
        case 0x11cad4u: goto label_11cad4;
        case 0x11cad8u: goto label_11cad8;
        case 0x11cadcu: goto label_11cadc;
        case 0x11cae0u: goto label_11cae0;
        case 0x11cae4u: goto label_11cae4;
        case 0x11cae8u: goto label_11cae8;
        case 0x11caecu: goto label_11caec;
        case 0x11caf0u: goto label_11caf0;
        case 0x11caf4u: goto label_11caf4;
        case 0x11caf8u: goto label_11caf8;
        case 0x11cafcu: goto label_11cafc;
        case 0x11cb00u: goto label_11cb00;
        case 0x11cb04u: goto label_11cb04;
        case 0x11cb08u: goto label_11cb08;
        case 0x11cb0cu: goto label_11cb0c;
        case 0x11cb10u: goto label_11cb10;
        case 0x11cb14u: goto label_11cb14;
        case 0x11cb18u: goto label_11cb18;
        case 0x11cb1cu: goto label_11cb1c;
        case 0x11cb20u: goto label_11cb20;
        case 0x11cb24u: goto label_11cb24;
        case 0x11cb28u: goto label_11cb28;
        case 0x11cb2cu: goto label_11cb2c;
        case 0x11cb30u: goto label_11cb30;
        case 0x11cb34u: goto label_11cb34;
        case 0x11cb38u: goto label_11cb38;
        case 0x11cb3cu: goto label_11cb3c;
        case 0x11cb40u: goto label_11cb40;
        case 0x11cb44u: goto label_11cb44;
        case 0x11cb48u: goto label_11cb48;
        case 0x11cb4cu: goto label_11cb4c;
        case 0x11cb50u: goto label_11cb50;
        case 0x11cb54u: goto label_11cb54;
        case 0x11cb58u: goto label_11cb58;
        case 0x11cb5cu: goto label_11cb5c;
        case 0x11cb60u: goto label_11cb60;
        case 0x11cb64u: goto label_11cb64;
        case 0x11cb68u: goto label_11cb68;
        case 0x11cb6cu: goto label_11cb6c;
        case 0x11cb70u: goto label_11cb70;
        case 0x11cb74u: goto label_11cb74;
        case 0x11cb78u: goto label_11cb78;
        case 0x11cb7cu: goto label_11cb7c;
        case 0x11cb80u: goto label_11cb80;
        case 0x11cb84u: goto label_11cb84;
        case 0x11cb88u: goto label_11cb88;
        case 0x11cb8cu: goto label_11cb8c;
        case 0x11cb90u: goto label_11cb90;
        case 0x11cb94u: goto label_11cb94;
        case 0x11cb98u: goto label_11cb98;
        case 0x11cb9cu: goto label_11cb9c;
        case 0x11cba0u: goto label_11cba0;
        case 0x11cba4u: goto label_11cba4;
        case 0x11cba8u: goto label_11cba8;
        case 0x11cbacu: goto label_11cbac;
        case 0x11cbb0u: goto label_11cbb0;
        case 0x11cbb4u: goto label_11cbb4;
        case 0x11cbb8u: goto label_11cbb8;
        case 0x11cbbcu: goto label_11cbbc;
        case 0x11cbc0u: goto label_11cbc0;
        case 0x11cbc4u: goto label_11cbc4;
        case 0x11cbc8u: goto label_11cbc8;
        case 0x11cbccu: goto label_11cbcc;
        case 0x11cbd0u: goto label_11cbd0;
        case 0x11cbd4u: goto label_11cbd4;
        case 0x11cbd8u: goto label_11cbd8;
        case 0x11cbdcu: goto label_11cbdc;
        case 0x11cbe0u: goto label_11cbe0;
        case 0x11cbe4u: goto label_11cbe4;
        case 0x11cbe8u: goto label_11cbe8;
        case 0x11cbecu: goto label_11cbec;
        case 0x11cbf0u: goto label_11cbf0;
        case 0x11cbf4u: goto label_11cbf4;
        case 0x11cbf8u: goto label_11cbf8;
        case 0x11cbfcu: goto label_11cbfc;
        case 0x11cc00u: goto label_11cc00;
        case 0x11cc04u: goto label_11cc04;
        case 0x11cc08u: goto label_11cc08;
        case 0x11cc0cu: goto label_11cc0c;
        case 0x11cc10u: goto label_11cc10;
        case 0x11cc14u: goto label_11cc14;
        case 0x11cc18u: goto label_11cc18;
        case 0x11cc1cu: goto label_11cc1c;
        case 0x11cc20u: goto label_11cc20;
        case 0x11cc24u: goto label_11cc24;
        case 0x11cc28u: goto label_11cc28;
        case 0x11cc2cu: goto label_11cc2c;
        case 0x11cc30u: goto label_11cc30;
        case 0x11cc34u: goto label_11cc34;
        case 0x11cc38u: goto label_11cc38;
        case 0x11cc3cu: goto label_11cc3c;
        case 0x11cc40u: goto label_11cc40;
        case 0x11cc44u: goto label_11cc44;
        case 0x11cc48u: goto label_11cc48;
        case 0x11cc4cu: goto label_11cc4c;
        case 0x11cc50u: goto label_11cc50;
        case 0x11cc54u: goto label_11cc54;
        case 0x11cc58u: goto label_11cc58;
        case 0x11cc5cu: goto label_11cc5c;
        case 0x11cc60u: goto label_11cc60;
        case 0x11cc64u: goto label_11cc64;
        default: break;
    }

    ctx->pc = 0x11cad0u;

label_11cad0:
    // 0x11cad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11cad4:
    // 0x11cad4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_11cad8:
    // 0x11cad8: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x11cad8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
label_11cadc:
    // 0x11cadc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11cae0:
    // 0x11cae0: 0x8e62b988  lw          $v0, -0x4678($s3)
    ctx->pc = 0x11cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949256)));
label_11cae4:
    // 0x11cae4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11cae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11cae8:
    // 0x11cae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_11caec:
    // 0x11caec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11caecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11caf0:
    // 0x11caf0: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_11caf4:
    if (ctx->pc == 0x11CAF4u) {
        ctx->pc = 0x11CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAF0u;
        // 0x11caf4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CAF8u;
        goto label_11caf8;
    }
    ctx->pc = 0x11CAF0u;
    {
        const bool branch_taken_0x11caf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAF0u;
        // 0x11caf4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11caf0) {
            ctx->pc = 0x11CBF0u;
            goto label_11cbf0;
        }
    }
    ctx->pc = 0x11CAF8u;
label_11caf8:
    // 0x11caf8: 0x1000000a  b           . + 4 + (0xA << 2)
label_11cafc:
    if (ctx->pc == 0x11CAFCu) {
        ctx->pc = 0x11CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAF8u;
        // 0x11cafc: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB00u;
        goto label_11cb00;
    }
    ctx->pc = 0x11CAF8u;
    {
        const bool branch_taken_0x11caf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAF8u;
        // 0x11cafc: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11caf8) {
            ctx->pc = 0x11CB24u;
            goto label_11cb24;
        }
    }
    ctx->pc = 0x11CB00u;
label_11cb00:
    // 0x11cb00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11cb04:
    // 0x11cb04: 0x0  nop
    ctx->pc = 0x11cb04u;
    // NOP
label_11cb08:
    // 0x11cb08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_11cb0c:
    // 0x11cb0c: 0x0  nop
    ctx->pc = 0x11cb0cu;
    // NOP
label_11cb10:
    // 0x11cb10: 0x0  nop
    ctx->pc = 0x11cb10u;
    // NOP
label_11cb14:
    // 0x11cb14: 0x0  nop
    ctx->pc = 0x11cb14u;
    // NOP
label_11cb18:
    // 0x11cb18: 0x0  nop
    ctx->pc = 0x11cb18u;
    // NOP
label_11cb1c:
    // 0x11cb1c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_11cb20:
    if (ctx->pc == 0x11CB20u) {
        ctx->pc = 0x11CB24u;
        goto label_11cb24;
    }
    ctx->pc = 0x11CB1Cu;
    {
        const bool branch_taken_0x11cb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11cb1c) {
            ctx->pc = 0x11CB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cb08;
        }
    }
    ctx->pc = 0x11CB24u;
label_11cb24:
    // 0x11cb24: 0x2630db00  addiu       $s0, $s1, -0x2500
    ctx->pc = 0x11cb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957824));
label_11cb28:
    // 0x11cb28: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_11cb2c:
    // 0x11cb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cb30:
    // 0x11cb30: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x11cb30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
label_11cb34:
    // 0x11cb34: 0xc0442d4  jal         func_110B50
label_11cb38:
    if (ctx->pc == 0x11CB38u) {
        ctx->pc = 0x11CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB34u;
        // 0x11cb38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB3Cu;
        goto label_11cb3c;
    }
    ctx->pc = 0x11CB34u;
    SET_GPR_U32(ctx, 31, 0x11CB3Cu);
    ctx->pc = 0x11CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB34u;
    // 0x11cb38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x11CB34u, 0x11CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB3Cu;
label_11cb3c:
    // 0x11cb3c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x11cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_11cb40:
    // 0x11cb40: 0x1060ffef  beqz        $v1, . + 4 + (-0x11 << 2)
label_11cb44:
    if (ctx->pc == 0x11CB44u) {
        ctx->pc = 0x11CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB40u;
        // 0x11cb44: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB48u;
        goto label_11cb48;
    }
    ctx->pc = 0x11CB40u;
    {
        const bool branch_taken_0x11cb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB40u;
        // 0x11cb44: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb40) {
            ctx->pc = 0x11CB00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cb00;
        }
    }
    ctx->pc = 0x11CB48u;
label_11cb48:
    // 0x11cb48: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x11cb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cb4c:
    // 0x11cb4c: 0x1000000b  b           . + 4 + (0xB << 2)
label_11cb50:
    if (ctx->pc == 0x11CB50u) {
        ctx->pc = 0x11CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB4Cu;
        // 0x11cb50: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB54u;
        goto label_11cb54;
    }
    ctx->pc = 0x11CB4Cu;
    {
        const bool branch_taken_0x11cb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB4Cu;
        // 0x11cb50: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb4c) {
            ctx->pc = 0x11CB7Cu;
            goto label_11cb7c;
        }
    }
    ctx->pc = 0x11CB54u;
label_11cb54:
    // 0x11cb54: 0x0  nop
    ctx->pc = 0x11cb54u;
    // NOP
label_11cb58:
    // 0x11cb58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11cb5c:
    // 0x11cb5c: 0x0  nop
    ctx->pc = 0x11cb5cu;
    // NOP
label_11cb60:
    // 0x11cb60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_11cb64:
    // 0x11cb64: 0x0  nop
    ctx->pc = 0x11cb64u;
    // NOP
label_11cb68:
    // 0x11cb68: 0x0  nop
    ctx->pc = 0x11cb68u;
    // NOP
label_11cb6c:
    // 0x11cb6c: 0x0  nop
    ctx->pc = 0x11cb6cu;
    // NOP
label_11cb70:
    // 0x11cb70: 0x0  nop
    ctx->pc = 0x11cb70u;
    // NOP
label_11cb74:
    // 0x11cb74: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_11cb78:
    if (ctx->pc == 0x11CB78u) {
        ctx->pc = 0x11CB7Cu;
        goto label_11cb7c;
    }
    ctx->pc = 0x11CB74u;
    {
        const bool branch_taken_0x11cb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11cb74) {
            ctx->pc = 0x11CB60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cb60;
        }
    }
    ctx->pc = 0x11CB7Cu;
label_11cb7c:
    // 0x11cb7c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_11cb80:
    // 0x11cb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cb84:
    // 0x11cb84: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x11cb84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
label_11cb88:
    // 0x11cb88: 0xc0442d4  jal         func_110B50
label_11cb8c:
    if (ctx->pc == 0x11CB8Cu) {
        ctx->pc = 0x11CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB88u;
        // 0x11cb8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB90u;
        goto label_11cb90;
    }
    ctx->pc = 0x11CB88u;
    SET_GPR_U32(ctx, 31, 0x11CB90u);
    ctx->pc = 0x11CB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB88u;
    // 0x11cb8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x11CB88u, 0x11CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB90u;
label_11cb90:
    // 0x11cb90: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x11cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_11cb94:
    // 0x11cb94: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
label_11cb98:
    if (ctx->pc == 0x11CB98u) {
        ctx->pc = 0x11CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB94u;
        // 0x11cb98: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB9Cu;
        goto label_11cb9c;
    }
    ctx->pc = 0x11CB94u;
    {
        const bool branch_taken_0x11cb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB94u;
        // 0x11cb98: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb94) {
            ctx->pc = 0x11CB58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cb58;
        }
    }
    ctx->pc = 0x11CB9Cu;
label_11cb9c:
    // 0x11cb9c: 0xc0477f6  jal         func_11DFD8
label_11cba0:
    if (ctx->pc == 0x11CBA0u) {
        ctx->pc = 0x11CBA4u;
        goto label_11cba4;
    }
    ctx->pc = 0x11CB9Cu;
    SET_GPR_U32(ctx, 31, 0x11CBA4u);
    ctx->pc = 0x11DFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFD8u, 0x11CB9Cu, 0x11CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBA4u;
label_11cba4:
    // 0x11cba4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11cba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cba8:
    // 0x11cba8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11cbac:
    // 0x11cbac: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x11cbacu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
label_11cbb0:
    // 0x11cbb0: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_11cbb4:
    if (ctx->pc == 0x11CBB4u) {
        ctx->pc = 0x11CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBB0u;
        // 0x11cbb4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CBB8u;
        goto label_11cbb8;
    }
    ctx->pc = 0x11CBB0u;
    {
        const bool branch_taken_0x11cbb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBB0u;
        // 0x11cbb4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbb0) {
            ctx->pc = 0x11CBF0u;
            goto label_11cbf0;
        }
    }
    ctx->pc = 0x11CBB8u;
label_11cbb8:
    // 0x11cbb8: 0x8c43b98c  lw          $v1, -0x4674($v0)
    ctx->pc = 0x11cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949260)));
label_11cbbc:
    // 0x11cbbc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_11cbc0:
    if (ctx->pc == 0x11CBC0u) {
        ctx->pc = 0x11CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBBCu;
        // 0x11cbc0: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CBC4u;
        goto label_11cbc4;
    }
    ctx->pc = 0x11CBBCu;
    {
        const bool branch_taken_0x11cbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBBCu;
        // 0x11cbc0: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbbc) {
            ctx->pc = 0x11CBE8u;
            goto label_11cbe8;
        }
    }
    ctx->pc = 0x11CBC4u;
label_11cbc4:
    // 0x11cbc4: 0xc043e52  jal         func_10F948
label_11cbc8:
    if (ctx->pc == 0x11CBC8u) {
        ctx->pc = 0x11CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBC4u;
        // 0x11cbc8: 0x2484b418  addiu       $a0, $a0, -0x4BE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CBCCu;
        goto label_11cbcc;
    }
    ctx->pc = 0x11CBC4u;
    SET_GPR_U32(ctx, 31, 0x11CBCCu);
    ctx->pc = 0x11CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBC4u;
    // 0x11cbc8: 0x2484b418  addiu       $a0, $a0, -0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11CBC4u, 0x11CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBCCu;
label_11cbcc:
    // 0x11cbcc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_11cbd0:
    // 0x11cbd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11cbd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cbd4:
    // 0x11cbd4: 0x2484b440  addiu       $a0, $a0, -0x4BC0
    ctx->pc = 0x11cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947904));
label_11cbd8:
    // 0x11cbd8: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x11cbd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_11cbdc:
    // 0x11cbdc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11cbe0:
    // 0x11cbe0: 0xc043e52  jal         func_10F948
label_11cbe4:
    if (ctx->pc == 0x11CBE4u) {
        ctx->pc = 0x11CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBE0u;
        // 0x11cbe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CBE8u;
        goto label_11cbe8;
    }
    ctx->pc = 0x11CBE0u;
    SET_GPR_U32(ctx, 31, 0x11CBE8u);
    ctx->pc = 0x11CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBE0u;
    // 0x11cbe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11CBE0u, 0x11CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBE8u;
label_11cbe8:
    // 0x11cbe8: 0x10000005  b           . + 4 + (0x5 << 2)
label_11cbec:
    if (ctx->pc == 0x11CBECu) {
        ctx->pc = 0x11CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBE8u;
        // 0x11cbec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CBF0u;
        goto label_11cbf0;
    }
    ctx->pc = 0x11CBE8u;
    {
        const bool branch_taken_0x11cbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBE8u;
        // 0x11cbec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbe8) {
            ctx->pc = 0x11CC00u;
            goto label_11cc00;
        }
    }
    ctx->pc = 0x11CBF0u;
label_11cbf0:
    // 0x11cbf0: 0xc04731a  jal         func_11CC68
label_11cbf4:
    if (ctx->pc == 0x11CBF4u) {
        ctx->pc = 0x11CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBF0u;
        // 0x11cbf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CBF8u;
        goto label_11cbf8;
    }
    ctx->pc = 0x11CBF0u;
    SET_GPR_U32(ctx, 31, 0x11CBF8u);
    ctx->pc = 0x11CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBF0u;
    // 0x11cbf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC68u, 0x11CBF0u, 0x11CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBF8u;
label_11cbf8:
    // 0x11cbf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cbfc:
    // 0x11cbfc: 0xae63b988  sw          $v1, -0x4678($s3)
    ctx->pc = 0x11cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294949256), GPR_U32(ctx, 3));
label_11cc00:
    // 0x11cc00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11cc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11cc04:
    // 0x11cc04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11cc04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11cc08:
    // 0x11cc08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11cc08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11cc0c:
    // 0x11cc0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11cc0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11cc10:
    // 0x11cc10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cc10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11cc14:
    // 0x11cc14: 0x3e00008  jr          $ra
label_11cc18:
    if (ctx->pc == 0x11CC18u) {
        ctx->pc = 0x11CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC14u;
        // 0x11cc18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CC1Cu;
        goto label_11cc1c;
    }
    ctx->pc = 0x11CC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC14u;
        // 0x11cc18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CC1Cu;
label_11cc1c:
    // 0x11cc1c: 0x0  nop
    ctx->pc = 0x11cc1cu;
    // NOP
label_11cc20:
    // 0x11cc20: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11cc24:
    // 0x11cc24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11cc24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11cc28:
    // 0x11cc28: 0x8c43b990  lw          $v1, -0x4670($v0)
    ctx->pc = 0x11cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949264)));
label_11cc2c:
    // 0x11cc2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11cc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11cc30:
    // 0x11cc30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_11cc34:
    if (ctx->pc == 0x11CC34u) {
        ctx->pc = 0x11CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC30u;
        // 0x11cc34: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CC38u;
        goto label_11cc38;
    }
    ctx->pc = 0x11CC30u;
    {
        const bool branch_taken_0x11cc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC30u;
        // 0x11cc34: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc30) {
            ctx->pc = 0x11CC50u;
            goto label_11cc50;
        }
    }
    ctx->pc = 0x11CC38u;
label_11cc38:
    // 0x11cc38: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_11cc3c:
    // 0x11cc3c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x11cc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11cc40:
    // 0x11cc40: 0x8c5cddc0  lw          $gp, -0x2240($v0)
    ctx->pc = 0x11cc40u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958528)));
label_11cc44:
    // 0x11cc44: 0x60f809  jalr        $v1
label_11cc48:
    if (ctx->pc == 0x11CC48u) {
        ctx->pc = 0x11CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC44u;
        // 0x11cc48: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CC4Cu;
        goto label_11cc4c;
    }
    ctx->pc = 0x11CC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11CC4Cu);
        ctx->pc = 0x11CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC44u;
        // 0x11cc48: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC44u, 0x11CC4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CC4Cu;
label_11cc4c:
    // 0x11cc4c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x11cc4cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cc50:
    // 0x11cc50: 0xf  sync
    ctx->pc = 0x11cc50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11cc54:
    // 0x11cc54: 0x42000038  ei
    ctx->pc = 0x11cc54u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_11cc58:
    // 0x11cc58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11cc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11cc5c:
    // 0x11cc5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11cc60:
    // 0x11cc60: 0x3e00008  jr          $ra
label_11cc64:
    if (ctx->pc == 0x11CC64u) {
        ctx->pc = 0x11CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC60u;
        // 0x11cc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CC68u;
        goto label_fallthrough_0x11cc60;
    }
    ctx->pc = 0x11CC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC60u;
        // 0x11cc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11cc60:
    ctx->pc = 0x11CC68u;
}
