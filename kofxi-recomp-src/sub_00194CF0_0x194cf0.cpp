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

// Function: sub_00194CF0
// Address: 0x194cf0 - 0x194e10
void sub_00194CF0_0x194cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194CF0_0x194cf0");
#endif

    switch (ctx->pc) {
        case 0x194cf0u: goto label_194cf0;
        case 0x194cf4u: goto label_194cf4;
        case 0x194cf8u: goto label_194cf8;
        case 0x194cfcu: goto label_194cfc;
        case 0x194d00u: goto label_194d00;
        case 0x194d04u: goto label_194d04;
        case 0x194d08u: goto label_194d08;
        case 0x194d0cu: goto label_194d0c;
        case 0x194d10u: goto label_194d10;
        case 0x194d14u: goto label_194d14;
        case 0x194d18u: goto label_194d18;
        case 0x194d1cu: goto label_194d1c;
        case 0x194d20u: goto label_194d20;
        case 0x194d24u: goto label_194d24;
        case 0x194d28u: goto label_194d28;
        case 0x194d2cu: goto label_194d2c;
        case 0x194d30u: goto label_194d30;
        case 0x194d34u: goto label_194d34;
        case 0x194d38u: goto label_194d38;
        case 0x194d3cu: goto label_194d3c;
        case 0x194d40u: goto label_194d40;
        case 0x194d44u: goto label_194d44;
        case 0x194d48u: goto label_194d48;
        case 0x194d4cu: goto label_194d4c;
        case 0x194d50u: goto label_194d50;
        case 0x194d54u: goto label_194d54;
        case 0x194d58u: goto label_194d58;
        case 0x194d5cu: goto label_194d5c;
        case 0x194d60u: goto label_194d60;
        case 0x194d64u: goto label_194d64;
        case 0x194d68u: goto label_194d68;
        case 0x194d6cu: goto label_194d6c;
        case 0x194d70u: goto label_194d70;
        case 0x194d74u: goto label_194d74;
        case 0x194d78u: goto label_194d78;
        case 0x194d7cu: goto label_194d7c;
        case 0x194d80u: goto label_194d80;
        case 0x194d84u: goto label_194d84;
        case 0x194d88u: goto label_194d88;
        case 0x194d8cu: goto label_194d8c;
        case 0x194d90u: goto label_194d90;
        case 0x194d94u: goto label_194d94;
        case 0x194d98u: goto label_194d98;
        case 0x194d9cu: goto label_194d9c;
        case 0x194da0u: goto label_194da0;
        case 0x194da4u: goto label_194da4;
        case 0x194da8u: goto label_194da8;
        case 0x194dacu: goto label_194dac;
        case 0x194db0u: goto label_194db0;
        case 0x194db4u: goto label_194db4;
        case 0x194db8u: goto label_194db8;
        case 0x194dbcu: goto label_194dbc;
        case 0x194dc0u: goto label_194dc0;
        case 0x194dc4u: goto label_194dc4;
        case 0x194dc8u: goto label_194dc8;
        case 0x194dccu: goto label_194dcc;
        case 0x194dd0u: goto label_194dd0;
        case 0x194dd4u: goto label_194dd4;
        case 0x194dd8u: goto label_194dd8;
        case 0x194ddcu: goto label_194ddc;
        case 0x194de0u: goto label_194de0;
        case 0x194de4u: goto label_194de4;
        case 0x194de8u: goto label_194de8;
        case 0x194decu: goto label_194dec;
        case 0x194df0u: goto label_194df0;
        case 0x194df4u: goto label_194df4;
        case 0x194df8u: goto label_194df8;
        case 0x194dfcu: goto label_194dfc;
        case 0x194e00u: goto label_194e00;
        case 0x194e04u: goto label_194e04;
        case 0x194e08u: goto label_194e08;
        case 0x194e0cu: goto label_194e0c;
        default: break;
    }

    ctx->pc = 0x194cf0u;

label_194cf0:
    // 0x194cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_194cf4:
    // 0x194cf4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x194cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_194cf8:
    // 0x194cf8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x194cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_194cfc:
    // 0x194cfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_194d00:
    // 0x194d00: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x194d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_194d04:
    // 0x194d04: 0x24425d00  addiu       $v0, $v0, 0x5D00
    ctx->pc = 0x194d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23808));
label_194d08:
    // 0x194d08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194d0c:
    // 0x194d0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_194d10:
    // 0x194d10: 0x40f809  jalr        $v0
label_194d14:
    if (ctx->pc == 0x194D14u) {
        ctx->pc = 0x194D18u;
        goto label_194d18;
    }
    ctx->pc = 0x194D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194D18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D10u, 0x194D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194D18u;
label_194d18:
    // 0x194d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194d1c:
    // 0x194d1c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x194d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_194d20:
    // 0x194d20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x194d20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_194d24:
    // 0x194d24: 0x3e00008  jr          $ra
label_194d28:
    if (ctx->pc == 0x194D28u) {
        ctx->pc = 0x194D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D24u;
        // 0x194d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D2Cu;
        goto label_194d2c;
    }
    ctx->pc = 0x194D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D24u;
        // 0x194d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D2Cu;
label_194d2c:
    // 0x194d2c: 0x0  nop
    ctx->pc = 0x194d2cu;
    // NOP
label_194d30:
    // 0x194d30: 0x3e00008  jr          $ra
label_194d34:
    if (ctx->pc == 0x194D34u) {
        ctx->pc = 0x194D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D30u;
        // 0x194d34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D38u;
        goto label_194d38;
    }
    ctx->pc = 0x194D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D30u;
        // 0x194d34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D38u;
label_194d38:
    // 0x194d38: 0x0  nop
    ctx->pc = 0x194d38u;
    // NOP
label_194d3c:
    // 0x194d3c: 0x0  nop
    ctx->pc = 0x194d3cu;
    // NOP
label_194d40:
    // 0x194d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_194d44:
    // 0x194d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_194d48:
    // 0x194d48: 0xc065c28  jal         func_1970A0
label_194d4c:
    if (ctx->pc == 0x194D4Cu) {
        ctx->pc = 0x194D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D48u;
        // 0x194d4c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D50u;
        goto label_194d50;
    }
    ctx->pc = 0x194D48u;
    SET_GPR_U32(ctx, 31, 0x194D50u);
    ctx->pc = 0x194D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D48u;
    // 0x194d4c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1970A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1970A0u, 0x194D48u, 0x194D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D50u;
label_194d50:
    // 0x194d50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x194d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_194d54:
    // 0x194d54: 0xa062d078  sb          $v0, -0x2F88($v1)
    ctx->pc = 0x194d54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294955128), (uint8_t)GPR_U32(ctx, 2));
label_194d58:
    // 0x194d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194d5c:
    // 0x194d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194d60:
    // 0x194d60: 0x3e00008  jr          $ra
label_194d64:
    if (ctx->pc == 0x194D64u) {
        ctx->pc = 0x194D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D60u;
        // 0x194d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D68u;
        goto label_194d68;
    }
    ctx->pc = 0x194D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D60u;
        // 0x194d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D68u;
label_194d68:
    // 0x194d68: 0x0  nop
    ctx->pc = 0x194d68u;
    // NOP
label_194d6c:
    // 0x194d6c: 0x0  nop
    ctx->pc = 0x194d6cu;
    // NOP
label_194d70:
    // 0x194d70: 0x3e00008  jr          $ra
label_194d74:
    if (ctx->pc == 0x194D74u) {
        ctx->pc = 0x194D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D70u;
        // 0x194d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D78u;
        goto label_194d78;
    }
    ctx->pc = 0x194D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D70u;
        // 0x194d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D78u;
label_194d78:
    // 0x194d78: 0x0  nop
    ctx->pc = 0x194d78u;
    // NOP
label_194d7c:
    // 0x194d7c: 0x0  nop
    ctx->pc = 0x194d7cu;
    // NOP
label_194d80:
    // 0x194d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_194d84:
    // 0x194d84: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_194d88:
    // 0x194d88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_194d8c:
    // 0x194d8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_194d90:
    // 0x194d90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_194d94:
    // 0x194d94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194d98:
    // 0x194d98: 0x9444d160  lhu         $a0, -0x2EA0($v0)
    ctx->pc = 0x194d98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294955360)));
label_194d9c:
    // 0x194d9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x194d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_194da0:
    // 0x194da0: 0xc063600  jal         func_18D800
label_194da4:
    if (ctx->pc == 0x194DA4u) {
        ctx->pc = 0x194DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DA0u;
        // 0x194da4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DA8u;
        goto label_194da8;
    }
    ctx->pc = 0x194DA0u;
    SET_GPR_U32(ctx, 31, 0x194DA8u);
    ctx->pc = 0x194DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DA0u;
    // 0x194da4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D800u, 0x194DA0u, 0x194DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DA8u;
label_194da8:
    // 0x194da8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x194da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_194dac:
    // 0x194dac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x194dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194db0:
    // 0x194db0: 0x2463ff90  addiu       $v1, $v1, -0x70
    ctx->pc = 0x194db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967184));
label_194db4:
    // 0x194db4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x194db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_194db8:
    // 0x194db8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_194dbc:
    // 0x194dbc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x194dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_194dc0:
    // 0x194dc0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x194dc0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_194dc4:
    // 0x194dc4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x194dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_194dc8:
    // 0x194dc8: 0x24635bc0  addiu       $v1, $v1, 0x5BC0
    ctx->pc = 0x194dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23488));
label_194dcc:
    // 0x194dcc: 0x24425d00  addiu       $v0, $v0, 0x5D00
    ctx->pc = 0x194dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23808));
label_194dd0:
    // 0x194dd0: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x194dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_194dd4:
    // 0x194dd4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x194dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_194dd8:
    // 0x194dd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194ddc:
    // 0x194ddc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x194ddcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194de0:
    // 0x194de0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x194de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_194de4:
    // 0x194de4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194de8:
    // 0x194de8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_194dec:
    // 0x194dec: 0x40f809  jalr        $v0
label_194df0:
    if (ctx->pc == 0x194DF0u) {
        ctx->pc = 0x194DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DECu;
        // 0x194df0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DF4u;
        goto label_194df4;
    }
    ctx->pc = 0x194DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194DF4u);
        ctx->pc = 0x194DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DECu;
        // 0x194df0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194DECu, 0x194DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194DF4u;
label_194df4:
    // 0x194df4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_194df8:
    // 0x194df8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x194df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_194dfc:
    // 0x194dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_194e00:
    // 0x194e00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x194e00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_194e04:
    // 0x194e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_194e08:
    // 0x194e08: 0x3e00008  jr          $ra
label_194e0c:
    if (ctx->pc == 0x194E0Cu) {
        ctx->pc = 0x194E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E08u;
        // 0x194e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E10u;
        goto label_fallthrough_0x194e08;
    }
    ctx->pc = 0x194E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E08u;
        // 0x194e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x194e08:
    ctx->pc = 0x194E10u;
}
