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

// Function: sub_001EEAE8
// Address: 0x1eeae8 - 0x1eeb90
void sub_001EEAE8_0x1eeae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEAE8_0x1eeae8");
#endif

    switch (ctx->pc) {
        case 0x1eeae8u: goto label_1eeae8;
        case 0x1eeaecu: goto label_1eeaec;
        case 0x1eeaf0u: goto label_1eeaf0;
        case 0x1eeaf4u: goto label_1eeaf4;
        case 0x1eeaf8u: goto label_1eeaf8;
        case 0x1eeafcu: goto label_1eeafc;
        case 0x1eeb00u: goto label_1eeb00;
        case 0x1eeb04u: goto label_1eeb04;
        case 0x1eeb08u: goto label_1eeb08;
        case 0x1eeb0cu: goto label_1eeb0c;
        case 0x1eeb10u: goto label_1eeb10;
        case 0x1eeb14u: goto label_1eeb14;
        case 0x1eeb18u: goto label_1eeb18;
        case 0x1eeb1cu: goto label_1eeb1c;
        case 0x1eeb20u: goto label_1eeb20;
        case 0x1eeb24u: goto label_1eeb24;
        case 0x1eeb28u: goto label_1eeb28;
        case 0x1eeb2cu: goto label_1eeb2c;
        case 0x1eeb30u: goto label_1eeb30;
        case 0x1eeb34u: goto label_1eeb34;
        case 0x1eeb38u: goto label_1eeb38;
        case 0x1eeb3cu: goto label_1eeb3c;
        case 0x1eeb40u: goto label_1eeb40;
        case 0x1eeb44u: goto label_1eeb44;
        case 0x1eeb48u: goto label_1eeb48;
        case 0x1eeb4cu: goto label_1eeb4c;
        case 0x1eeb50u: goto label_1eeb50;
        case 0x1eeb54u: goto label_1eeb54;
        case 0x1eeb58u: goto label_1eeb58;
        case 0x1eeb5cu: goto label_1eeb5c;
        case 0x1eeb60u: goto label_1eeb60;
        case 0x1eeb64u: goto label_1eeb64;
        case 0x1eeb68u: goto label_1eeb68;
        case 0x1eeb6cu: goto label_1eeb6c;
        case 0x1eeb70u: goto label_1eeb70;
        case 0x1eeb74u: goto label_1eeb74;
        case 0x1eeb78u: goto label_1eeb78;
        case 0x1eeb7cu: goto label_1eeb7c;
        case 0x1eeb80u: goto label_1eeb80;
        case 0x1eeb84u: goto label_1eeb84;
        case 0x1eeb88u: goto label_1eeb88;
        case 0x1eeb8cu: goto label_1eeb8c;
        default: break;
    }

    ctx->pc = 0x1eeae8u;

label_1eeae8:
    // 0x1eeae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eeae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eeaec:
    // 0x1eeaec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eeaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1eeaf0:
    // 0x1eeaf0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1eeaf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eeaf4:
    // 0x1eeaf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eeaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1eeaf8:
    // 0x1eeaf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1eeaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eeafc:
    // 0x1eeafc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eeafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1eeb00:
    // 0x1eeb00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eeb00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb04:
    // 0x1eeb04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1eeb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1eeb08:
    // 0x1eeb08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1eeb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1eeb0c:
    // 0x1eeb0c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1eeb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1eeb10:
    // 0x1eeb10: 0x40f809  jalr        $v0
label_1eeb14:
    if (ctx->pc == 0x1EEB14u) {
        ctx->pc = 0x1EEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB10u;
        // 0x1eeb14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB18u;
        goto label_1eeb18;
    }
    ctx->pc = 0x1EEB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EEB18u);
        ctx->pc = 0x1EEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB10u;
        // 0x1eeb14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEB10u, 0x1EEB18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEB18u;
label_1eeb18:
    // 0x1eeb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eeb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb1c:
    // 0x1eeb1c: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x1eeb1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1eeb20:
    // 0x1eeb20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eeb20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb24:
    // 0x1eeb24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eeb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb28:
    // 0x1eeb28: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1eeb2c:
    if (ctx->pc == 0x1EEB2Cu) {
        ctx->pc = 0x1EEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB28u;
        // 0x1eeb2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB30u;
        goto label_1eeb30;
    }
    ctx->pc = 0x1EEB28u;
    {
        const bool branch_taken_0x1eeb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB28u;
        // 0x1eeb2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb28) {
            ctx->pc = 0x1EEB78u;
            goto label_1eeb78;
        }
    }
    ctx->pc = 0x1EEB30u;
label_1eeb30:
    // 0x1eeb30: 0xc07bae4  jal         func_1EEB90
label_1eeb34:
    if (ctx->pc == 0x1EEB34u) {
        ctx->pc = 0x1EEB38u;
        goto label_1eeb38;
    }
    ctx->pc = 0x1EEB30u;
    SET_GPR_U32(ctx, 31, 0x1EEB38u);
    ctx->pc = 0x1EEB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEB90u, 0x1EEB30u, 0x1EEB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB38u;
label_1eeb38:
    // 0x1eeb38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1eeb38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb3c:
    // 0x1eeb3c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1eeb40:
    if (ctx->pc == 0x1EEB40u) {
        ctx->pc = 0x1EEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB3Cu;
        // 0x1eeb40: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB44u;
        goto label_1eeb44;
    }
    ctx->pc = 0x1EEB3Cu;
    {
        const bool branch_taken_0x1eeb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB3Cu;
        // 0x1eeb40: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb3c) {
            ctx->pc = 0x1EEB78u;
            goto label_1eeb78;
        }
    }
    ctx->pc = 0x1EEB44u;
label_1eeb44:
    // 0x1eeb44: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
label_1eeb48:
    if (ctx->pc == 0x1EEB48u) {
        ctx->pc = 0x1EEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB44u;
        // 0x1eeb48: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB4Cu;
        goto label_1eeb4c;
    }
    ctx->pc = 0x1EEB44u;
    {
        const bool branch_taken_0x1eeb44 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1EEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB44u;
        // 0x1eeb48: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb44) {
            ctx->pc = 0x1EEB74u;
            goto label_1eeb74;
        }
    }
    ctx->pc = 0x1EEB4Cu;
label_1eeb4c:
    // 0x1eeb4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eeb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb50:
    // 0x1eeb50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eeb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb54:
    // 0x1eeb54: 0xc07bae4  jal         func_1EEB90
label_1eeb58:
    if (ctx->pc == 0x1EEB58u) {
        ctx->pc = 0x1EEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB54u;
        // 0x1eeb58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB5Cu;
        goto label_1eeb5c;
    }
    ctx->pc = 0x1EEB54u;
    SET_GPR_U32(ctx, 31, 0x1EEB5Cu);
    ctx->pc = 0x1EEB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB54u;
    // 0x1eeb58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEB90u, 0x1EEB54u, 0x1EEB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB5Cu;
label_1eeb5c:
    // 0x1eeb5c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1eeb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1eeb60:
    // 0x1eeb60: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
label_1eeb64:
    if (ctx->pc == 0x1EEB64u) {
        ctx->pc = 0x1EEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB60u;
        // 0x1eeb64: 0x24631770  addiu       $v1, $v1, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB68u;
        goto label_1eeb68;
    }
    ctx->pc = 0x1EEB60u;
    {
        const bool branch_taken_0x1eeb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1EEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB60u;
        // 0x1eeb64: 0x24631770  addiu       $v1, $v1, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb60) {
            ctx->pc = 0x1EEB74u;
            goto label_1eeb74;
        }
    }
    ctx->pc = 0x1EEB68u;
label_1eeb68:
    // 0x1eeb68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1eeb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1eeb6c:
    // 0x1eeb6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eeb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1eeb70:
    // 0x1eeb70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1eeb70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1eeb74:
    // 0x1eeb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eeb78:
    // 0x1eeb78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eeb78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eeb7c:
    // 0x1eeb7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eeb7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1eeb80:
    // 0x1eeb80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eeb80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eeb84:
    // 0x1eeb84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1eeb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1eeb88:
    // 0x1eeb88: 0x3e00008  jr          $ra
label_1eeb8c:
    if (ctx->pc == 0x1EEB8Cu) {
        ctx->pc = 0x1EEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB88u;
        // 0x1eeb8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB90u;
        goto label_fallthrough_0x1eeb88;
    }
    ctx->pc = 0x1EEB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB88u;
        // 0x1eeb8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eeb88:
    ctx->pc = 0x1EEB90u;
}
